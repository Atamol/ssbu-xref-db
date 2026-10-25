// addr:      7101f42290
// offset:    0x1f42290
// name:      FUN_7101f42290
// mangled:   
// signature: undefined __cdecl FUN_7101f42290(undefined * * * param_1, undefined8 * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f42290(undefined ***param_1,undefined8 *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  undefined8 uVar8;
  byte ****ppppbVar9;
  undefined **ppuVar10;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  undefined **local_48;
  
  ppppbVar7 = param_3;
  ppppbVar9 = param_4;
  FUN_7103776390(&local_60,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(byte *)(param_1 + 0x28) = (byte)param_4 & 1;
  FUN_7103776640(&local_50,(long)&local_60,param_3,ppppbVar7,ppppbVar9,param_5,param_6,param_7,
                 param_8);
  ppuVar3 = local_48;
  if (param_1 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[1];
    param_1[1] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      puVar4 = ppuVar10[3];
      ppuVar10[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar10[3] = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar4);
      }
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = ppuVar3[3];
    ppuVar3[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar3[3] = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_7103776910(&local_50,(long)param_1,(long ****)"set_rep_cap_00",ppppbVar7,ppppbVar9,param_5,
                 param_6,param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 2 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[3];
    param_1[3] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",0,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 4 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[5];
    param_1[5] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",1,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 6 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[7];
    param_1[7] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",2,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 8 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[9];
    param_1[9] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",3,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 10 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0xb];
    param_1[0xb] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",4,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0xc != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0xd];
    param_1[0xd] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",5,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0xe != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0xf];
    param_1[0xf] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",6,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x10 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x11];
    param_1[0x11] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",7,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x12 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x13];
    param_1[0x13] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",8,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x14 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x15];
    param_1[0x15] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",9,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x16 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x17];
    param_1[0x17] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",10,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x18 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x19];
    param_1[0x19] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",0xb,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x1a != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x1b];
    param_1[0x1b] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",0xc,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x1c != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x1d];
    param_1[0x1d] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",0xd,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x1e != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x1f];
    param_1[0x1f] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  uVar8 = 0xe;
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"transition_%02d",0xe,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x20 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x21];
    param_1[0x21] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"screen_reset_in",uVar8,ppppbVar9,param_5,
                 param_6,param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x22 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x23];
    param_1[0x23] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  FUN_71037780e0(&local_50,(long)param_1,(long ****)"screen_reset_out",uVar8,ppppbVar9,param_5,
                 param_6,param_7,param_8);
  ppuVar3 = local_48;
  if (param_1 + 0x24 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[0x25];
    param_1[0x25] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar10);
    }
  }
  ppuVar3 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  if (*(int *)(param_1 + 0x26) != 0) {
    uVar1 = *(int *)(param_1 + 0x26) - 1;
    if (0x10 < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((long *)param_1[(long)(int)uVar1 * 2 + 5][1] == (long *)0x0) {
      puVar5 = &DAT_7104867c2e;
    }
    else {
      puVar5 = (undefined1 *)(**(code **)(*(long *)param_1[(long)(int)uVar1 * 2 + 5][1] + 0x110))();
    }
    FUN_7103778760((long)param_1[1],(long)puVar5);
  }
  FUN_7103779650((long)param_1[3]);
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = (undefined **)0x0;
  if ((long *)param_1[5][1] == (long *)0x0) {
    puVar5 = &DAT_7104867c2e;
  }
  else {
    puVar5 = (undefined1 *)(**(code **)(*(long *)param_1[5][1] + 0x110))();
  }
  FUN_7103778760((long)param_1[1],(long)puVar5);
  uVar2 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar6 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

