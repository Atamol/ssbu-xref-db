// addr:      71019c9340
// offset:    0x19c9340
// name:      FUN_71019c9340
// mangled:   
// signature: undefined __cdecl FUN_71019c9340(undefined8 * param_1, long * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019c9340(undefined8 *param_1,long *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined **local_1a0;
  ulong local_198;
  byte ***local_190;
  undefined2 local_188;
  undefined4 local_186;
  undefined2 local_182;
  undefined4 local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 *local_178;
  undefined4 local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  undefined4 local_70;
  undefined **local_60;
  ulong local_58;
  
  *param_1 = &PTR_FUN_71050a79d8;
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
  plVar1 = (long *)FUN_710392e290(0x10,0xf0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_60 = (undefined **)((ulong)local_60 & 0xffffffff00000000);
      local_190 = (byte ***)&DAT_000000f0;
      param_3 = &local_190;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0xf0,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar1 != (long *)0x0))
      goto LAB_71019c93ec;
    }
    plVar1 = (long *)0x0;
  }
LAB_71019c93ec:
  *plVar1 = (long)plVar1;
  plVar1[4] = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  plVar1[0x16] = 0;
  plVar1[0x17] = 0xffffffff;
  *(undefined4 *)(plVar1 + 0x18) = 0xffffffff;
  *(undefined1 *)((long)plVar1 + 0xc4) = 0;
  plVar1[5] = 0;
  plVar1[0x14] = 0;
  plVar1[0x15] = 0;
  plVar1[0x12] = 0;
  plVar1[0x13] = 0;
  plVar1[0x10] = 0;
  plVar1[0x11] = 0;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  plVar1[0xc] = 0;
  plVar1[0xd] = 0;
  plVar1[10] = 0;
  plVar1[0xb] = 0;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
  puVar3 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = extraout_x1;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_60 = (undefined **)((ulong)local_60 & 0xffffffff00000000);
      local_190 = (byte ***)&DAT_00000008;
      param_3 = &local_190;
      auVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      uVar6 = auVar9._8_8_;
      if (((auVar9._0_8_ & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
         , uVar6 = extraout_x1_00, puVar3 != (undefined8 *)0x0)) goto LAB_71019c9494;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_71019c9494:
  FUN_7103773200(puVar3,uVar6,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1[0x19] = (long)puVar3;
  plVar8 = plVar1 + 0x1a;
  *plVar8 = 0;
  plVar1[5] = (long)FUN_71019c8e90;
  plVar1[6] = 0;
  plVar1[9] = (long)FUN_71019c9020;
  plVar1[10] = 0;
  plVar1[0xb] = (long)FUN_71019c91b0;
  plVar1[0xc] = 0;
  *(undefined1 *)(plVar1 + 0x1d) = 0;
  plVar1[0x1b] = 0;
  plVar1[0x1c] = 0;
  plVar1[7] = (long)FUN_71019c8ea0;
  plVar1[8] = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  *(undefined8 *)((long)plVar1 + 0xac) = 0;
  *(undefined8 *)((long)plVar1 + 0xa4) = 0;
  *(undefined8 *)((long)plVar1 + 0x9c) = 0;
  *(undefined8 *)((long)plVar1 + 0x94) = 0;
  *(undefined8 *)((long)plVar1 + 0x8c) = 0;
  *(undefined8 *)((long)plVar1 + 0x84) = 0;
  *(undefined8 *)((long)plVar1 + 0x7c) = 0;
  *(undefined8 *)((long)plVar1 + 0x74) = 0;
  *(undefined8 *)((long)plVar1 + 0x6c) = 0;
  *(undefined8 *)((long)plVar1 + 0xb4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar1 + 0xbc) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar1 + 0xc4) = 0;
  *(undefined4 *)(plVar1 + 0xd) = 0;
  FUN_71019c9cc0(plVar1);
  param_1[0x10] = plVar1;
  pcVar5 = "0qA_7";
  uVar6 = 1;
  FUN_71032cbf30(plVar1 + 0x19,*param_2,(ulong *)"0qA_7",(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  *(undefined4 *)(*(long *)(**(long **)plVar1[0x19] + 0x600) + 0x18) = 0xf0000f;
  puVar3 = (undefined8 *)(*(long *)plVar1[0x19] + 8);
  FUN_7103778760(*(long *)(*(long *)plVar1[0x19] + 0x10),0x710428ff7d);
  FUN_7103776640(&local_60,(long)puVar3,(byte ****)"set_parts_stick",pcVar5,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_71019e0b00((long)&local_60);
  local_188 = 0x101;
  local_190 = (byte ***)0x0;
  local_182 = 0;
  local_186 = 0;
  local_180 = 1;
  local_17c = 1;
  local_17a = 1;
  local_178 = &DAT_41f0000000000000;
  local_170 = 0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_70 = 0;
  FUN_710337df20((long)&local_190);
  FUN_7103770b30(plVar8,puVar3,(long ****)"selector_0",&local_190,param_5,param_6,param_7,param_8);
  uVar6 = 0;
  FUN_71037717d0(plVar8,0,"set_color_item_%02d",0,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",0,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",0,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 1;
  FUN_71037717d0(plVar8,1,"set_color_item_%02d",1,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",1,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",1,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 2;
  FUN_71037717d0(plVar8,2,"set_color_item_%02d",2,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",2,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",2,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 3;
  FUN_71037717d0(plVar8,3,"set_color_item_%02d",3,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",3,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",3,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 4;
  FUN_71037717d0(plVar8,4,"set_color_item_%02d",4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",4,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",4,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 5;
  FUN_71037717d0(plVar8,5,"set_color_item_%02d",5,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",5,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",5,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 6;
  FUN_71037717d0(plVar8,6,"set_color_item_%02d",6,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",6,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",6,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 7;
  FUN_71037717d0(plVar8,7,"set_color_item_%02d",7,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",7,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",7,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 8;
  FUN_71037717d0(plVar8,8,"set_color_item_%02d",8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",8,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",8,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 9;
  FUN_71037717d0(plVar8,9,"set_color_item_%02d",9,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",9,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",9,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 10;
  FUN_71037717d0(plVar8,10,"set_color_item_%02d",10,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",10,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",10,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar6 = 0xb;
  FUN_71037717d0(plVar8,0xb,"set_color_item_%02d",0xb,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1a0,(long)puVar3,(byte ****)"set_color_item_%02d",0xb,uVar6,param_5,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1a0,"color_%02d",0xb,uVar6,param_5,param_6,param_7,param_8);
  uVar2 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  (**(code **)(*(long *)*plVar8 + 0x60))((long *)*plVar8,0);
  (**(code **)(*(long *)*plVar8 + 0x70))((long *)*plVar8,0);
  if (alStack_a0 == local_80) {
    pcVar7 = *(code **)(*local_80 + 0x20);
LAB_71019c9ba8:
    (*pcVar7)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar7 = *(code **)(*local_80 + 0x28);
    goto LAB_71019c9ba8;
  }
  if (alStack_d0 == local_b0) {
    pcVar7 = *(code **)(*local_b0 + 0x20);
LAB_71019c9bd8:
    (*pcVar7)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar7 = *(code **)(*local_b0 + 0x28);
    goto LAB_71019c9bd8;
  }
  if (alStack_100 == local_e0) {
    pcVar7 = *(code **)(*local_e0 + 0x20);
LAB_71019c9c08:
    (*pcVar7)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar7 = *(code **)(*local_e0 + 0x28);
    goto LAB_71019c9c08;
  }
  if (alStack_130 == local_110) {
    pcVar7 = *(code **)(*local_110 + 0x20);
LAB_71019c9c38:
    (*pcVar7)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar7 = *(code **)(*local_110 + 0x28);
    goto LAB_71019c9c38;
  }
  if (alStack_160 == local_140) {
    pcVar7 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) goto LAB_71019c9c6c;
    pcVar7 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar7)();
LAB_71019c9c6c:
  uVar2 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

