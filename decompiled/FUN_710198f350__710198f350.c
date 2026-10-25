// addr:      710198f350
// offset:    0x198f350
// name:      FUN_710198f350
// mangled:   
// signature: undefined __cdecl FUN_710198f350(undefined8 * param_1, undefined8 param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710198f350(undefined8 *param_1,undefined8 param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  byte ****ppppbVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined **local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
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
  
  *param_1 = &PTR_FUN_71050a7100;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  bVar1 = (byte)param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  puVar2 = (undefined8 *)
           FUN_710392e290(0x10,0x180,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
      local_190 = (byte ***)&DAT_00000180;
      param_3 = &local_190;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1a0);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x180,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar2 != (undefined8 *)0x0)) goto LAB_710198f404;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_710198f404:
  *(undefined2 *)(puVar2 + 1) = 0x100;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x4001;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined4 *)((long)puVar2 + 0x14) = 1;
  *(undefined1 *)(puVar2 + 3) = 0;
  *puVar2 = &PTR_FUN_71050a70c0;
  puVar2[4] = param_2;
  puVar4 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar9 = extraout_x1;
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
      local_190 = (byte ***)&DAT_00000008;
      param_3 = &local_190;
      auVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1a0);
      uVar9 = auVar14._8_8_;
      if (((auVar14._0_8_ & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
         , uVar9 = extraout_x1_00, puVar4 != (undefined8 *)0x0)) goto LAB_710198f48c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_710198f48c:
  FUN_7103773200(puVar4,uVar9,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2[5] = puVar4;
  puVar4 = puVar2 + 6;
  FUN_7103776290(puVar4,extraout_x1_01,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar13 = puVar2 + 8;
  *plVar13 = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0x25) = 0xffffffff;
  puVar2[9] = puVar2;
  puVar2[10] = 0;
  *(undefined1 *)((long)puVar2 + 300) = 0;
  *(undefined4 *)(puVar2 + 0x26) = 0xffffffff;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0xffffffff;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0xb8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
      local_190 = (byte ***)&DAT_000000b8;
      ppppbVar7 = &local_190;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1a0);
      if (((uVar3 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0xb8,(long ****)ppppbVar7,param_4,param_5,param_6,param_7,
                                  param_8), puVar5 != (undefined8 *)0x0)) goto LAB_710198f548;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_710198f548:
  *(undefined4 *)(puVar5 + 0x15) = 0xffffffff;
  *puVar5 = &PTR_FUN_71050a7138;
  puVar5[1] = puVar5;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)((long)puVar5 + 0xac) = 0;
  *(undefined4 *)(puVar5 + 0x16) = 0xffffffff;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[6] = FUN_71019904d0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  puVar5[8] = FUN_71019904e0;
  puVar5[9] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0xffffffff;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined4 *)(puVar2 + 0x2e) = 0x3f800000;
  *(byte *)(puVar2 + 0x2f) = ~bVar1 & 1;
  *(undefined1 *)(puVar2 + 0x29) = 0;
  puVar2[0xe] = FUN_710198e920;
  puVar2[0xf] = 0;
  puVar2[0x12] = FUN_710198ea70;
  puVar2[0x13] = 0;
  puVar2[0x14] = FUN_710198eb70;
  puVar2[0x15] = 0;
  puVar2[0x10] = FUN_710198e930;
  puVar2[0x11] = 0;
  puVar2[0x16] = FUN_710198ec80;
  puVar2[0x17] = 0;
  puVar2[0x27] = puVar5;
  puVar2[0x28] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x18] = FUN_710198ed60;
  puVar2[0x19] = 0;
  if (0x12 < *(uint *)((long)puVar2 + 0x11c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar2 + (long)(int)*(uint *)((long)puVar2 + 0x11c) * 4 + 0xd0) = 0;
  param_1[0x10] = puVar2;
  FUN_71032cbf30(puVar2 + 5,*(long *)puVar2[4],(ulong *)&DAT_7104543938,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar10 = *(long *)puVar2[5];
  if ((undefined8 *)(lVar10 + 8) != puVar4) {
    *(undefined8 *)puVar2[7] = **(undefined8 **)(lVar10 + 0x10);
    *(undefined8 *)(puVar2[7] + 8) = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 8);
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar10 = puVar2[7];
    if (lVar10 != lVar12) {
      **(undefined8 **)(lVar10 + 0x18) = **(undefined8 **)(lVar12 + 0x18);
      *(undefined8 *)(*(long *)(lVar10 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar12 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x18);
    }
  }
  local_190 = (byte ***)0x0;
  local_188 = 0x101;
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
  ppppbVar7 = &local_190;
  FUN_7103770b30(plVar13,puVar4,(long ****)"selector_0",ppppbVar7,param_5,param_6,param_7,param_8);
  pcVar8 = "set_parts_btn_00";
  FUN_71037717d0(plVar13,0,"set_parts_btn_00",ppppbVar7,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1b0,(long)puVar4,(byte ****)"set_parts_btn_00",pcVar8,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_1b0,(long ****)"set_txt_00",pcVar8,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_1a0,"mnu_amiibo_init_setting_btn_change",pcVar8,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar3 != 0) {
    uVar6 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar3);
  }
  pcVar8 = "set_parts_btn_01";
  FUN_71037717d0(plVar13,1,"set_parts_btn_01",ppppbVar7,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1b0,(long)puVar4,(byte ****)"set_parts_btn_01",pcVar8,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_1b0,(long ****)"set_txt_00",pcVar8,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_1a0,"mnu_amiibo_init_setting_btn_ok",pcVar8,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar3 != 0) {
    uVar6 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar3);
  }
  uVar9 = 0;
  FUN_7103771a80(plVar13,1,0);
  (**(code **)(*(long *)*plVar13 + 0x70))((long *)*plVar13,1);
  FUN_7103776910(&local_1a0,(long)puVar4,(long ****)"set_txt_help_00",uVar9,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_1a0,"mnu_amiibo_init_setting_pop",uVar9,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103778300(0x3f800000,puVar2[7],0x71043be92b);
  FUN_7103778300(0x3f800000,puVar2[7],0x710439cc6f);
  (**(code **)(*(long *)puVar2[8] + 0x60))((long *)puVar2[8],0);
  *(undefined2 *)(puVar2 + 1) = 0x101;
  *(undefined2 *)((long)puVar2 + 10) = local_1b0._0_2_;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x11000;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined1 *)((long)puVar2 + 0x13) = local_1a0._2_1_;
  *(undefined2 *)((long)puVar2 + 0x11) = (undefined2)local_1a0;
  *(undefined4 *)((long)puVar2 + 0x14) = 1;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x11000;
  if (alStack_a0 == local_80) {
    pcVar11 = *(code **)(*local_80 + 0x20);
LAB_710198f940:
    (*pcVar11)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar11 = *(code **)(*local_80 + 0x28);
    goto LAB_710198f940;
  }
  if (alStack_d0 == local_b0) {
    pcVar11 = *(code **)(*local_b0 + 0x20);
LAB_710198f970:
    (*pcVar11)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_b0 + 0x28);
    goto LAB_710198f970;
  }
  if (alStack_100 == local_e0) {
    pcVar11 = *(code **)(*local_e0 + 0x20);
LAB_710198f9a0:
    (*pcVar11)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_e0 + 0x28);
    goto LAB_710198f9a0;
  }
  if (alStack_130 == local_110) {
    pcVar11 = *(code **)(*local_110 + 0x20);
  }
  else {
    if (local_110 == (long *)0x0) goto LAB_710198f9d4;
    pcVar11 = *(code **)(*local_110 + 0x28);
  }
  (*pcVar11)();
LAB_710198f9d4:
  if (alStack_160 == local_140) {
    pcVar11 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) {
      return;
    }
    pcVar11 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar11)();
  return;
}

