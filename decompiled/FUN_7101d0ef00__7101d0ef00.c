// addr:      7101d0ef00
// offset:    0x1d0ef00
// name:      FUN_7101d0ef00
// mangled:   
// signature: undefined __cdecl FUN_7101d0ef00(undefined8 * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0ef00(undefined8 *param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  uint uVar14;
  undefined8 *puVar15;
  long ***local_80;
  ulong local_78;
  undefined4 local_64;
  
  pppplVar9 = &local_80;
  pppplVar10 = &local_80;
  pppplVar11 = &local_80;
  pppplVar12 = &local_80;
  puVar15 = param_1 + 1;
  *param_1 = &PTR_FUN_71050aea78;
  iVar1 = (int)param_5;
  pppplVar8 = param_3;
  ppppbVar13 = param_4;
  FUN_7103776390(puVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[10] = &PTR_FUN_710523d9a8;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar8,ppppbVar13,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&SUB_00000020;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pppplVar8 = pppplVar9;
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar9,ppppbVar13,param_5,param_6,param_7,param_8),
         pppplVar8 = pppplVar9, puVar2 != (undefined8 *)0x0)) goto LAB_7101d0efc0;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101d0efc0:
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0xc] = &PTR_FUN_710523d9a8;
  param_1[0xb] = puVar2;
  puVar2 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar8,ppppbVar13,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&SUB_00000020;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pppplVar8 = pppplVar10;
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,ppppbVar13,param_5,param_6,param_7,param_8),
         pppplVar8 = pppplVar10, puVar2 != (undefined8 *)0x0)) goto LAB_7101d0f028;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101d0f028:
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0xe] = &PTR_FUN_710523d9a8;
  param_1[0xd] = puVar2;
  puVar2 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar8,ppppbVar13,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&SUB_00000020;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pppplVar8 = pppplVar11;
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar13,param_5,param_6,param_7,param_8),
         pppplVar8 = pppplVar11, puVar2 != (undefined8 *)0x0)) goto LAB_7101d0f090;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101d0f090:
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0x10] = &PTR_FUN_710523d9a8;
  param_1[0xf] = puVar2;
  puVar2 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar8,ppppbVar13,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&SUB_00000020;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,ppppbVar13,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_7101d0f0f8;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101d0f0f8:
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0x11] = puVar2;
  if (((**(long **)(param_1[2] + 0x18) == 0) ||
      (puVar4 = FUN_71000598d0(**(long **)(param_1[2] + 0x18),"wid"), puVar4 == (uint *)0x0)) ||
     (*(char *)((long)puVar4 + 10) != '\x01')) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)(ushort)puVar4[2];
    if ((ushort)puVar4[2] != 0) {
      uVar14 = *(uint *)((long)puVar4 + (ulong)puVar4[1]);
    }
  }
  *(uint *)(param_1 + 3) = uVar14;
  if (((**(long **)(param_1[2] + 0x18) == 0) ||
      (puVar4 = FUN_71000598d0(**(long **)(param_1[2] + 0x18),"hid"), puVar4 == (uint *)0x0)) ||
     (*(char *)((long)puVar4 + 10) != '\x01')) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)(ushort)puVar4[2];
    if ((ushort)puVar4[2] != 0) {
      uVar14 = *(uint *)((long)puVar4 + (ulong)puVar4[1]);
    }
  }
  *(uint *)((long)param_1 + 0x1c) = uVar14;
  if (((**(long **)(param_1[2] + 0x18) == 0) ||
      (puVar4 = FUN_71000598d0(**(long **)(param_1[2] + 0x18),"cid"), puVar4 == (uint *)0x0)) ||
     ((*(char *)((long)puVar4 + 10) != '\x01' || ((short)puVar4[2] == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)*(uint *)((long)puVar4 + (ulong)puVar4[1]);
  }
  *(int *)(param_1 + 4) = (int)uVar3;
  FUN_7103776910(&local_80,(long)puVar15,(long ****)"set_getpos_camera_top_%d",uVar3,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if ((long ****)(param_1 + 10) != &local_80) {
    local_78 = 0;
    uVar5 = param_1[0xb];
    param_1[0xb] = uVar3;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 4);
  FUN_7103776910(&local_80,(long)puVar15,(long ****)"set_getpos_camera_btm_%d",uVar5,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if ((long ****)(param_1 + 0xc) != &local_80) {
    local_78 = 0;
    uVar6 = param_1[0xd];
    param_1[0xd] = uVar3;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,(long)puVar15,(long ****)"set_getpos_replay",uVar5,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_78;
  if ((long ****)(param_1 + 0xe) != &local_80) {
    local_78 = 0;
    uVar6 = param_1[0xf];
    param_1[0xf] = uVar3;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_80,(long)puVar15,(long ****)"set_size_replay_cursor",uVar5,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  if ((long ****)(param_1 + 0x10) != &local_80) {
    local_78 = 0;
    uVar5 = param_1[0x11];
    param_1[0x11] = uVar3;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  uVar3 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  *(int *)((long)param_1 + 0x24) = iVar1 - (int)param_4;
  FUN_7103778430((long)puVar15,"icon_scale_%d",(ulong)param_4 & 0xffffffff,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  FUN_7103778430((long)puVar15,"eff_size_h%d",(ulong)*(uint *)((long)param_1 + 0x1c),ppppbVar13,
                 param_5,param_6,param_7,param_8);
  if (((ulong)param_3 & 1) == 0) {
    pcVar7 = "mode_line";
  }
  else {
    pcVar7 = "mode_icon";
  }
  FUN_7103778300(0x3f800000,param_1[2],(long)pcVar7);
  FUN_7103778300(0x3f800000,param_1[2],0x71042d64bc);
  FUN_7103778300(0x3f800000,param_1[2],0x71042e744d);
  return;
}

