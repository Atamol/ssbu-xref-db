// addr:      7101ece8b0
// offset:    0x1ece8b0
// name:      FUN_7101ece8b0
// mangled:   
// signature: undefined __cdecl FUN_7101ece8b0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ece8b0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  undefined8 extraout_x1_01;
  long ****pppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined4 local_74;
  long ***local_70;
  ulong local_68;
  
  plVar2 = (long *)FUN_710392e290(0x10,0x1b8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar5 = extraout_x1;
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_000001b8;
      param_3 = &local_70;
      auVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      uVar5 = auVar9._8_8_;
      if (((auVar9._0_8_ & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x1b8,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), uVar5 = extraout_x1_00, plVar2 != (long *)0x0))
      goto LAB_7101ece934;
    }
    plVar2 = (long *)0x0;
  }
LAB_7101ece934:
  pppplVar1 = (long ****)(plVar2 + 1);
  pppplVar7 = (long ****)(plVar2 + 3);
  *plVar2 = param_2;
  FUN_7103776290(pppplVar1,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(pppplVar7,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2[5] = (long)&PTR_FUN_710523d9e8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ece9b8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ece9b8:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar2[7] = (long)&PTR_FUN_710523d9e8;
  plVar2[6] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ecea28;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ecea28:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar2[9] = (long)&PTR_FUN_710523d9e8;
  plVar2[8] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ecea94;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ecea94:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar2[0xb] = (long)&PTR_FUN_710523d9e8;
  plVar2[10] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101eceb04;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101eceb04:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  pppplVar6 = (long ****)(plVar2 + 0xd);
  *pppplVar6 = (long ***)&PTR_FUN_710523d9e8;
  plVar2[0xc] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101eceb70;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101eceb70:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar2[0xf] = (long)&PTR_FUN_710523d9e8;
  plVar2[0xe] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ecebdc;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ecebdc:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar2[0x11] = (long)&PTR_FUN_710523d9e8;
  plVar2[0x10] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ecec44;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ecec44:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  plVar2[0x13] = (long)&PTR_FUN_710523d9e8;
  plVar2[0x12] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ececb0;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ececb0:
  *(undefined1 *)(puVar3 + 2) = 1;
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar2[0x15] = (long)&PTR_FUN_710523d9e8;
  plVar2[0x14] = (long)puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101eced18;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101eced18:
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  *(undefined2 *)((long)plVar2 + 0x1b4) = 1;
  plVar2[0x35] = 0x42c800000000008e;
  plVar2[0x1e] = 0;
  plVar2[0x1f] = (long)FUN_7101ecde80;
  *(undefined4 *)(plVar2 + 0x36) = 0x42c60000;
  *(undefined4 *)(plVar2 + 0x19) = 0;
  plVar2[0x16] = (long)puVar3;
  plVar2[0x28] = 0;
  *(undefined4 *)((long)plVar2 + 0x194) = 0;
  plVar2[0x20] = 0;
  plVar2[0x21] = (long)FUN_7101ecdec0;
  plVar2[0x22] = 0;
  plVar2[0x23] = (long)FUN_7101ecdf50;
  plVar2[0x24] = 0;
  plVar2[0x25] = (long)FUN_7101ecdfe0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x26] = 0;
  plVar2[0x27] = (long)FUN_7101ece020;
  plVar2[0x1a] = (long)plVar2;
  plVar2[0x1b] = 0;
  *(undefined8 *)((long)plVar2 + 0x18c) = 0;
  *(undefined8 *)((long)plVar2 + 0x184) = 0;
  *(undefined8 *)((long)plVar2 + 0x17c) = 0;
  *(undefined8 *)((long)plVar2 + 0x174) = 0;
  *(undefined8 *)((long)plVar2 + 0x16c) = 0;
  *(undefined8 *)((long)plVar2 + 0x164) = 0;
  *(undefined8 *)((long)plVar2 + 0x15c) = 0;
  *(undefined8 *)((long)plVar2 + 0x14c) = 0;
  *(undefined8 *)((long)plVar2 + 0x154) = 0;
  *(undefined4 *)(plVar2 + 0x33) = 0xffffffff;
  *(undefined4 *)((long)plVar2 + 0x19c) = 0;
  *(undefined4 *)(plVar2 + 0x34) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0x1a4) = 0;
  *(undefined4 *)(plVar2 + 0x29) = 0;
  FUN_7101ece090(plVar2 + 0x1a);
  *param_1 = plVar2;
  FUN_7103776640(&local_70,*plVar2,(byte ****)"set_costgage",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar4 = local_68;
  if (&local_70 != pppplVar1) {
    local_68 = 0;
    uVar8 = plVar2[2];
    plVar2[2] = uVar4;
    if (uVar8 != 0) {
      uVar4 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar4 != 0) {
    uVar8 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar1,(long ****)"gage_size_blue_red",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 5)) {
    local_68 = 0;
    uVar8 = plVar2[6];
    plVar2[6] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar1,(long ****)"gage_size_orange",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 7)) {
    local_68 = 0;
    uVar8 = plVar2[8];
    plVar2[8] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar1,(long ****)"cursor_position",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 9)) {
    local_68 = 0;
    uVar8 = plVar2[10];
    plVar2[10] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776640(&local_70,*plVar2,(byte ****)"set_cost_popup",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != pppplVar7) {
    local_68 = 0;
    uVar8 = plVar2[4];
    plVar2[4] = uVar4;
    if (uVar8 != 0) {
      uVar4 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar4 != 0) {
    uVar8 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar7,(long ****)"cost_message_in",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 0xb)) {
    local_68 = 0;
    uVar8 = plVar2[0xc];
    plVar2[0xc] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar7,(long ****)"cost_message_out",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != pppplVar6) {
    local_68 = 0;
    uVar8 = plVar2[0xe];
    plVar2[0xe] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar7,(long ****)"cost_mess_4person",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 0xf)) {
    local_68 = 0;
    uVar8 = plVar2[0x10];
    plVar2[0x10] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar7,(long ****)"cost_mess_8person",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 0x11)) {
    local_68 = 0;
    uVar8 = plVar2[0x12];
    plVar2[0x12] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar7,(long ****)"cost_mess_max01",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 0x13)) {
    local_68 = 0;
    uVar8 = plVar2[0x14];
    plVar2[0x14] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,(long)pppplVar7,(long ****)"cost_mess_max02",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar2 + 0x15)) {
    local_68 = 0;
    uVar8 = plVar2[0x16];
    plVar2[0x16] = uVar4;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_710377b140((long)pppplVar6);
  return;
}

