// addr:      7101d4aaf0
// offset:    0x1d4aaf0
// name:      FUN_7101d4aaf0
// mangled:   
// signature: undefined __cdecl FUN_7101d4aaf0(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d4aaf0(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long ****pppplVar6;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  long *local_48;
  
  FUN_7103771d60(&local_50,*(long *)(param_1 + 0x208),(long ****)0x0,param_4,param_5,param_6,param_7
                 ,param_8);
  plVar2 = local_48;
  local_48 = (long *)*local_48;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x2f0))(local_48,param_2 & 1,0);
  }
  local_50 = &PTR_FUN_710523d9c8;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  pppplVar6 = (long ****)0x1;
  FUN_7103771d60(&local_50,*(long *)(param_1 + 0x208),(long ****)0x1,param_4,param_5,param_6,param_7
                 ,param_8);
  plVar2 = local_48;
  plVar3 = (long *)*local_48;
  if (plVar3 != (long *)0x0) {
    pppplVar6 = (long ****)0x0;
    (**(code **)(*plVar3 + 0x2f0))(plVar3,(param_2 ^ 1) & 1);
  }
  local_50 = &PTR_FUN_710523d9c8;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  *(char *)(param_1 + 0x2d9) = (char)(param_2 & 1);
  pcVar1 = "text_on";
  if ((param_2 & 1) == 0) {
    pcVar1 = "text_off";
  }
  *(uint *)(param_1 + 0x2ec) = (param_2 ^ 1) & 1;
  FUN_7103776390(&local_50,(undefined8 *)(**(long **)(param_1 + 0xa0) + 8),pppplVar6,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_00_lt",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_01_ll",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_02_lr",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_03_lb",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_04_rt",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_05_rl",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_06_rr",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_btn_07_rb",pppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_58;
  FUN_7103778300(0x3f800000,local_58,(long)pcVar1);
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar5 != 0) {
    uVar4 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar5);
  }
  plVar2 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    uVar5 = *(ulong *)((long)plVar2 + 0x18);
    *(undefined ***)((long)plVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar2 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40((ulong)plVar2);
  }
  return;
}

