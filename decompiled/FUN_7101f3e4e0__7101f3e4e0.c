// addr:      7101f3e4e0
// offset:    0x1f3e4e0
// name:      FUN_7101f3e4e0
// mangled:   
// signature: undefined __cdecl FUN_7101f3e4e0(undefined * * * param_1, undefined8 * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f3e4e0(undefined ***param_1,undefined8 *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  undefined **ppuVar8;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  
  ppppbVar7 = param_3;
  ppppbVar6 = param_4;
  FUN_7103776390(&local_80,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(byte *)(param_1 + 6) = (byte)param_4 & 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_7103776640(&local_50,(long)&local_80,param_3,ppppbVar7,ppppbVar6,param_5,param_6,param_7,
                 param_8);
  ppuVar2 = local_48;
  if (param_1 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar8 = param_1[1];
    param_1[1] = ppuVar2;
    if (ppuVar8 != (undefined **)0x0) {
      puVar1 = ppuVar8[3];
      ppuVar8[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar8[3] = (undefined *)0x0;
      if (puVar1 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar1);
      }
      FUN_710392eb40((ulong)ppuVar8);
    }
  }
  ppuVar2 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    puVar1 = ppuVar2[3];
    ppuVar2[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar2[3] = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    FUN_710392eb40((ulong)ppuVar2);
  }
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_7103776640(&local_60,(long)param_1,(byte ****)"set_parts_movie",ppppbVar7,ppppbVar6,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_50,(long)&local_60,(long ****)"set_rep_movie",ppppbVar7,ppppbVar6,param_5,
                   param_6,param_7,param_8);
    ppuVar2 = local_48;
    if (param_1 + 2 != &local_50) {
      local_48 = (undefined **)0x0;
      ppuVar8 = param_1[3];
      param_1[3] = ppuVar2;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
    }
    ppuVar2 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar2);
    }
    ppuVar2 = local_58;
    local_60 = &PTR_FUN_710523d988;
    local_58 = (undefined **)0x0;
    if (ppuVar2 == (undefined **)0x0) goto LAB_7101f3e68c;
    puVar1 = ppuVar2[3];
    ppuVar2[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar2[3] = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
  }
  else {
    FUN_7103776910(&local_50,(long)param_1,(long ****)"set_rep_movie",ppppbVar7,ppppbVar6,param_5,
                   param_6,param_7,param_8);
    ppuVar2 = local_48;
    if (param_1 + 2 != &local_50) {
      local_48 = (undefined **)0x0;
      ppuVar8 = param_1[3];
      param_1[3] = ppuVar2;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
    }
    ppuVar2 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (undefined **)0x0;
    if (ppuVar2 == (undefined **)0x0) goto LAB_7101f3e68c;
  }
  FUN_710392eb40((ulong)ppuVar2);
LAB_7101f3e68c:
  FUN_7103776910(&local_50,(long)param_1,(long ****)"set_rep_image",ppppbVar7,ppppbVar6,param_5,
                 param_6,param_7,param_8);
  ppuVar2 = local_48;
  if (param_1 + 4 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar8 = param_1[5];
    param_1[5] = ppuVar2;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
    }
  }
  ppuVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar2);
  }
  FUN_7103776390(&local_50,param_1,(long ****)ppppbVar7,ppppbVar6,param_5,param_6,param_7,param_8);
  ppppbVar7 = (byte ****)(ulong)((uint)param_4 & 1);
  pcVar5 = "set_parts_transition_00";
  FUN_7101f42290((undefined ***)param_1[8],&local_50,(byte ****)"set_parts_transition_00",ppppbVar7,
                 param_5,param_6,param_7,param_8);
  ppuVar2 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    uVar3 = *(ulong *)((long)ppuVar2 + 0x18);
    *(undefined ***)((long)ppuVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppuVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40((ulong)ppuVar2);
  }
  FUN_7103778300(0x3f800000,(long)param_1[1],0x7104401e43);
  FUN_7103776390(&local_60,param_1,(long ****)pcVar5,ppppbVar7,param_5,param_6,param_7,param_8);
  pcVar5 = "set_parts_tellop_txt_00";
  FUN_7101f3fe20((undefined ***)param_1[10],&local_60,(byte ****)"set_parts_tellop_txt_00",ppppbVar7
                 ,param_5,param_6,param_7,param_8);
  ppuVar2 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    puVar1 = ppuVar2[3];
    ppuVar2[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar2[3] = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    FUN_710392eb40((ulong)ppuVar2);
  }
  FUN_7103776390(&local_70,param_1,(long ****)pcVar5,ppppbVar7,param_5,param_6,param_7,param_8);
  FUN_7101f41070((undefined ***)param_1[0xc],&local_70,(byte ****)"set_parts_tellop_scr_00",
                 ppppbVar7,param_5,param_6,param_7,param_8);
  uVar3 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  FUN_7103778300(0x3f800000,(long)param_1[1],0x710425fe02);
  FUN_7103778300(0x3f800000,(long)param_1[1],0x71042f8d1b);
  uVar3 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
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

