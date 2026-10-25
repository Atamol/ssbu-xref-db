// addr:      7101ba9a40
// offset:    0x1ba9a40
// name:      FUN_7101ba9a40
// mangled:   
// signature: undefined __cdecl FUN_7101ba9a40(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ba9a40(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *__s;
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long ***local_70;
  ulong local_68;
  undefined4 local_54;
  
  pppplVar9 = &local_70;
  pppplVar5 = &local_70;
  pppplVar6 = &local_70;
  pppplVar7 = &local_70;
  pppplVar8 = &local_70;
  *param_1 = &PTR_FUN_71050ab8d8;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar1 = (long *)FUN_710392e290(0x10,0x208,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&DAT_00000208;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      param_3 = pppplVar9;
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x208,pppplVar9,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar9, plVar1 != (long *)0x0))
      goto LAB_7101ba9aec;
    }
    plVar1 = (long *)0x0;
  }
LAB_7101ba9aec:
  plVar12 = plVar1 + 1;
  *plVar1 = (long)param_1;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar11 = extraout_x1;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&DAT_00000008;
      auVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      uVar11 = auVar13._8_8_;
      param_3 = pppplVar5;
      if (((auVar13._0_8_ & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         uVar11 = extraout_x1_00, param_3 = pppplVar5, puVar3 != (undefined8 *)0x0))
      goto LAB_7101ba9b50;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ba9b50:
  FUN_7103773200(puVar3,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[1] = (long)puVar3;
  FUN_7101414b10(plVar1 + 2,plVar12,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[4] = (long)&PTR_FUN_710523d9a8;
  plVar1[5] = 0;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&SUB_00000020;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      param_3 = pppplVar6;
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar6, puVar3 != (undefined8 *)0x0)) goto LAB_7101ba9bd8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ba9bd8:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[6] = (long)&PTR_FUN_710523d9a8;
  plVar1[5] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&SUB_00000020;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      param_3 = pppplVar7;
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar7, puVar3 != (undefined8 *)0x0)) goto LAB_7101ba9c40;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ba9c40:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar1[8] = (long)&PTR_FUN_710523d9a8;
  plVar1[7] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&SUB_00000020;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar2 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ba9ca8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ba9ca8:
  __s = plVar1 + 10;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  pppplVar9 = (long ****)&DAT_000001b0;
  plVar1[9] = (long)puVar3;
  memset(__s,0,0x1b0);
  FUN_7101b42450(__s,extraout_x1_01,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  *(undefined2 *)(plVar1 + 0x40) = 1;
  *(undefined1 *)((long)plVar1 + 0x202) = 1;
  *(undefined4 *)((long)plVar1 + 0x204) = 0;
  puVar10 = &DAT_7104544d38;
  uVar11 = 0;
  FUN_71032cbf30(plVar12,**(long **)(*plVar1 + 0x78),(ulong *)&DAT_7104544d38,(byte ****)0x0,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_70,*(long *)plVar1[1] + 8,(long ****)"set_txt_rule_00",puVar10,uVar11,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 4)) {
    local_68 = 0;
    uVar4 = plVar1[5];
    plVar1[5] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar12 + 8,(long ****)"set_txt_rule_01",puVar10,uVar11,param_5
                 ,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 6)) {
    local_68 = 0;
    uVar4 = plVar1[7];
    plVar1[7] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_70,*(long *)*plVar12 + 8,(long ****)"set_txt_rule_02",puVar10,uVar11,param_5
                 ,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 8)) {
    local_68 = 0;
    uVar4 = plVar1[9];
    plVar1[9] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)*plVar12 + 8,(long ****)"in_00",puVar10,uVar11,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)__s) {
    local_68 = 0;
    uVar4 = plVar1[0xb];
    plVar1[0xb] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"in_01",puVar10,uVar11,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0xc)) {
    local_68 = 0;
    uVar4 = plVar1[0xd];
    plVar1[0xd] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"in_02",puVar10,uVar11,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0xe)) {
    local_68 = 0;
    uVar4 = plVar1[0xf];
    plVar1[0xf] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"out_00",puVar10,uVar11,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x10)) {
    local_68 = 0;
    uVar4 = plVar1[0x11];
    plVar1[0x11] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"out_01",puVar10,uVar11,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x12)) {
    local_68 = 0;
    uVar4 = plVar1[0x13];
    plVar1[0x13] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"out_02",puVar10,uVar11,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x14)) {
    local_68 = 0;
    uVar4 = plVar1[0x15];
    plVar1[0x15] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"on_00",puVar10,uVar11,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x16)) {
    local_68 = 0;
    uVar4 = plVar1[0x17];
    plVar1[0x17] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"on_01",puVar10,uVar11,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x18)) {
    local_68 = 0;
    uVar4 = plVar1[0x19];
    plVar1[0x19] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"on_02",puVar10,uVar11,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x1a)) {
    local_68 = 0;
    uVar4 = plVar1[0x1b];
    plVar1[0x1b] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"off_00",puVar10,uVar11,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x1c)) {
    local_68 = 0;
    uVar4 = plVar1[0x1d];
    plVar1[0x1d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"off_01",puVar10,uVar11,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x1e)) {
    local_68 = 0;
    uVar4 = plVar1[0x1f];
    plVar1[0x1f] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"off_02",puVar10,uVar11,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x20)) {
    local_68 = 0;
    uVar4 = plVar1[0x21];
    plVar1[0x21] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"time_00",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x22)) {
    local_68 = 0;
    uVar4 = plVar1[0x23];
    plVar1[0x23] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"time_01",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x24)) {
    local_68 = 0;
    uVar4 = plVar1[0x25];
    plVar1[0x25] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"time_02",puVar10,uVar11,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x26)) {
    local_68 = 0;
    uVar4 = plVar1[0x27];
    plVar1[0x27] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_on_stagegimmic_00",puVar10,uVar11
                 ,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x28)) {
    local_68 = 0;
    uVar4 = plVar1[0x29];
    plVar1[0x29] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_on_stagegimmic_01",puVar10,uVar11
                 ,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x2a)) {
    local_68 = 0;
    uVar4 = plVar1[0x2b];
    plVar1[0x2b] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_on_stagegimmic_02",puVar10,uVar11
                 ,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x2c)) {
    local_68 = 0;
    uVar4 = plVar1[0x2d];
    plVar1[0x2d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_on_specialrule_00",puVar10,uVar11
                 ,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x2e)) {
    local_68 = 0;
    uVar4 = plVar1[0x2f];
    plVar1[0x2f] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_on_specialrule_01",puVar10,uVar11
                 ,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x30)) {
    local_68 = 0;
    uVar4 = plVar1[0x31];
    plVar1[0x31] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_on_specialrule_02",puVar10,uVar11
                 ,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x32)) {
    local_68 = 0;
    uVar4 = plVar1[0x33];
    plVar1[0x33] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_blink_stagegimmic_00",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x34)) {
    local_68 = 0;
    uVar4 = plVar1[0x35];
    plVar1[0x35] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_blink_stagegimmic_01",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x36)) {
    local_68 = 0;
    uVar4 = plVar1[0x37];
    plVar1[0x37] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_blink_stagegimmic_02",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x38)) {
    local_68 = 0;
    uVar4 = plVar1[0x39];
    plVar1[0x39] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_blink_specialrule_00",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x3a)) {
    local_68 = 0;
    uVar4 = plVar1[0x3b];
    plVar1[0x3b] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_blink_specialrule_01",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x3c)) {
    local_68 = 0;
    uVar4 = plVar1[0x3d];
    plVar1[0x3d] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_70,*(long *)plVar1[1] + 8,(long ****)"icon_blink_specialrule_02",puVar10,
                 uVar11,param_5,param_6,param_7,param_8);
  uVar2 = local_68;
  if (&local_70 != (long ****)(plVar1 + 0x3e)) {
    local_68 = 0;
    uVar4 = plVar1[0x3f];
    plVar1[0x3f] = uVar2;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  param_1[0x10] = plVar1;
  return;
}

