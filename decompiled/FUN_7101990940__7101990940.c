// addr:      7101990940
// offset:    0x1990940
// name:      FUN_7101990940
// mangled:   
// signature: undefined __cdecl FUN_7101990940(long param_1, ulong param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101990940(long param_1,ulong param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *********ppppppppplVar4;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  ulong local_a0;
  uint local_98 [2];
  undefined1 local_90 [64];
  undefined **local_50;
  ulong local_48;
  
  ppppppppplVar4 = (long *********)(param_3 & 0xffffffff);
  FUN_7103776640(&local_50,param_1 + 8,(byte ****)"set_bg_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar2 = FUN_710323f600(*(long **)(param_1 + 0x140),param_2,(long ****)&DAT_00000011,param_4,
                          param_5,param_6,param_7,param_8);
  local_90[0] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_710062dc20(local_98,"set_parts_series_%02d");
  FUN_7103776640(&local_b8,(long)&local_50,(byte ****)local_90,ppppppppplVar4,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_series",ppppppppplVar4,param_4,
                 param_5,param_6,param_7,param_8);
  uVar1 = local_a0;
  FUN_7103778b80(local_a0,(long)plVar2,ppppppppplVar4,param_4,param_5,param_6,param_7,param_8);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  uVar1 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar1 != 0) {
    uVar3 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103776640(&local_b8,(long)&local_50,(byte ****)local_90,ppppppppplVar4,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_series_sdw",ppppppppplVar4,param_4,
                 param_5,param_6,param_7,param_8);
  uVar1 = local_a0;
  FUN_7103778b80(local_a0,(long)plVar2,ppppppppplVar4,param_4,param_5,param_6,param_7,param_8);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  uVar1 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar1 != 0) {
    uVar3 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar1);
  }
  uVar1 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar1 != 0) {
    uVar3 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

