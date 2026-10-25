// addr:      7101b40a80
// offset:    0x1b40a80
// name:      FUN_7101b40a80
// mangled:   
// signature: undefined __cdecl FUN_7101b40a80(long * param_1, byte * * * * param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b40a80(long *param_1,byte ****param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  uVar3 = param_3 & 0xffffffff;
  FUN_7103776640(&local_50,*(long *)param_1[1] + 8,param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar4 = *(long *)(*param_1 + 0x78);
  FUN_7103776390(&local_60,&local_50,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[uVar3 * 0x17 + 0xe] = lVar4;
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"slide_in_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0xf) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x10];
    param_1[uVar3 * 0x17 + 0x10] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"slide_out_00",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x11) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x12];
    param_1[uVar3 * 0x17 + 0x12] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"fade_in_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x13) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x14];
    param_1[uVar3 * 0x17 + 0x14] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"fade_out_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x15) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x16];
    param_1[uVar3 * 0x17 + 0x16] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"crossfade_00",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x17) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x18];
    param_1[uVar3 * 0x17 + 0x18] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"crossfade_01",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x19) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x1a];
    param_1[uVar3 * 0x17 + 0x1a] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"a2_off",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x1b) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x1c];
    param_1[uVar3 * 0x17 + 0x1c] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_71037780e0(&local_40,(long)&local_60,(long ****)"a2_on",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x1d) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x1e];
    param_1[uVar3 * 0x17 + 0x1e] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9e8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_7103776910(&local_40,(long)&local_60,(long ****)"set_rep_a2",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x1f) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x20];
    param_1[uVar3 * 0x17 + 0x20] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_7103776910(&local_40,(long)&local_60,(long ****)"set_rep_a",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x21) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x22];
    param_1[uVar3 * 0x17 + 0x22] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_7103776910(&local_40,(long)&local_60,(long ****)"set_rep_b",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if ((undefined ***)(param_1 + uVar3 * 0x17 + 0x23) != &local_40) {
    local_38 = 0;
    uVar2 = param_1[uVar3 * 0x17 + 0x24];
    param_1[uVar3 * 0x17 + 0x24] = uVar1;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  uVar1 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
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

