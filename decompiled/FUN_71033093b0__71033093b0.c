// addr:      71033093b0
// offset:    0x33093b0
// name:      FUN_71033093b0
// mangled:   
// signature: undefined __cdecl FUN_71033093b0(long param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71033093b0(long param_1,long *param_2,undefined **param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  char *pcVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  byte ****ppppbVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined1 auVar22 [16];
  byte ***local_1a0;
  ushort local_198 [7];
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [3];
  uint local_158 [2];
  long *local_150 [2];
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  undefined **local_70;
  ulong local_68;
  
  ppppbVar15 = &local_1a0;
  ppppbVar12 = &local_1a0;
  ppppbVar13 = &local_1a0;
  ppppbVar16 = &local_1a0;
  puVar20 = *(undefined8 **)(param_1 + 0x340);
  if (puVar20 == (undefined8 *)0x0) {
    puVar20 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar20 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
        local_1a0 = (byte ***)&DAT_00000088;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
        param_3 = (undefined **)ppppbVar15;
        if (((uVar7 & 1) != 0) &&
           (puVar20 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)ppppbVar15,param_4,param_5,param_6,param_7
                                     ,param_8), param_3 = (undefined **)ppppbVar15,
           puVar20 != (undefined8 *)0x0)) goto LAB_710330943c;
      }
      puVar20 = (undefined8 *)0x0;
    }
LAB_710330943c:
    *puVar20 = &PTR_FUN_71050aba10;
    puVar20[1] = 0;
    puVar20[0xc] = 0;
    puVar20[0xd] = 0x1ffffffff;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *(undefined1 *)(puVar20 + 0xb) = 0;
    puVar20[0xf] = param_2;
    *(undefined1 *)(puVar20 + 0xe) = 1;
    puVar20[9] = 0;
    puVar20[10] = 0;
    lVar8 = FUN_710392e290(0x10,0x150,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar8 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
        local_1a0 = (byte ***)&DAT_00000150;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
        param_3 = (undefined **)ppppbVar12;
        if (((uVar7 & 1) != 0) &&
           (lVar8 = FUN_710392e290(0x10,0x150,(long ****)ppppbVar12,param_4,param_5,param_6,param_7,
                                   param_8), param_3 = (undefined **)ppppbVar12, lVar8 != 0))
        goto LAB_71033094c4;
      }
      lVar8 = 0;
    }
LAB_71033094c4:
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0xd0) = 0xffffffff;
    *(long *)lVar8 = lVar8;
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined1 *)(lVar8 + 0xd4) = 0;
    *(undefined8 *)(lVar8 + 0xc0) = 0;
    *(undefined8 *)(lVar8 + 200) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0xb0) = 0;
    *(undefined8 *)(lVar8 + 0xb8) = 0;
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined8 *)(lVar8 + 0x98) = 0;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar17 = extraout_x1;
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
        local_1a0 = (byte ***)&DAT_00000008;
        auVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
        uVar17 = auVar22._8_8_;
        param_3 = (undefined **)ppppbVar13;
        if (((auVar22._0_8_ & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,8,(long ****)ppppbVar13,param_4,param_5,param_6,param_7,
                                    param_8), uVar17 = extraout_x1_00,
           param_3 = (undefined **)ppppbVar13, puVar9 != (undefined8 *)0x0)) goto LAB_7103309560;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_7103309560:
    FUN_7103773200(puVar9,uVar17,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined2 *)(lVar8 + 0xe8) = 0;
    *(undefined8 *)(lVar8 + 0xfc) = 0x1000c0b0a040303;
    *(undefined2 *)(lVar8 + 0x104) = 0x205;
    *(undefined1 *)(lVar8 + 0x106) = 2;
    *(undefined1 *)(lVar8 + 0xea) = 0;
    *(undefined8 **)(lVar8 + 0xd8) = puVar9;
    *(undefined8 **)(lVar8 + 0xe0) = puVar20;
    *(undefined8 *)(lVar8 + 0xf0) = 0;
    *(undefined4 *)(lVar8 + 0xf8) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0x107) = 0x1010101;
    *(undefined8 *)(lVar8 + 0x10b) = 0xc0b0a03030404;
    *(undefined8 *)(lVar8 + 0x113) = 0x101010102020501;
    *(undefined2 *)(lVar8 + 0x11b) = 0xd0d;
    *(undefined4 *)(lVar8 + 0x11d) = 0x20304;
    *(undefined2 *)(lVar8 + 0x121) = 0x102;
    *(undefined4 *)(lVar8 + 0x123) = 0x1010101;
    *(undefined4 *)(lVar8 + 0x128) = 0;
    *(undefined1 *)(lVar8 + 300) = 0;
    *(undefined8 *)(lVar8 + 0x140) = 0;
    *(undefined8 *)(lVar8 + 0x148) = 0x100000000;
    *(code **)(lVar8 + 0x38) = FUN_7101baf3d0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(code **)(lVar8 + 0x48) = FUN_7101baf4f0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(code **)(lVar8 + 0x28) = FUN_7101baf370;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(code **)(lVar8 + 0x58) = FUN_7101bafa10;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x130) = 0;
    *(undefined8 *)(lVar8 + 0x138) = 0;
    *(code **)(lVar8 + 0x68) = FUN_7101bafad0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    if (0x12 < *(uint *)(lVar8 + 0xc4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0xc4) * 4 + 0x78) = 0;
    puVar20[0x10] = lVar8;
    ppppppppplVar14 = (long *********)&DAT_7104544df8;
    ppppbVar15 = (byte ****)0x1;
    FUN_71032cbf30((undefined8 *)(lVar8 + 0xd8),*param_2,(ulong *)&DAT_7104544df8,(byte ****)0x1,
                   param_5,param_6,param_7,param_8);
    FUN_710323eba0((undefined8 *)(*param_2 + 8),(ulong *)&DAT_7104544df8,ppppppppplVar14,ppppbVar15,
                   param_5,param_6,param_7,param_8);
    lVar21 = puVar20[0x10];
    lVar8 = **(long **)(lVar21 + 0xd8);
    FUN_7103778630(0,*(long *)(lVar8 + 0x10),0x7104421055);
    puVar9 = *(undefined8 **)(lVar21 + 0xd8);
    *(undefined4 *)(*(long *)(*(long *)*puVar9 + 0x600) + 0x18) = 0x40000;
    lVar19 = *(long *)(*(long *)*puVar9 + 0x600);
    *(undefined4 *)(lVar19 + 0x1c) = 0x40000320;
    *(undefined4 *)(lVar19 + 0xe8) = 0xf00ffcdf;
    FUN_71037760f0(*(long *)*puVar9,0);
    local_198[0] = 0x101;
    plVar1 = (long *)(lVar21 + 0xf0);
    local_188 = &DAT_41f0000000000000;
    local_1a0 = (byte ***)0x0;
    local_198[3] = 0;
    local_198[4] = 1;
    local_198[5] = 0;
    local_198[6] = 1;
    local_18a = 1;
    local_180 = 0;
    local_150[0] = (long *)0x0;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_90 = (long *)0x0;
    local_80 = 0;
    local_198[1] = 1;
    local_198[2] = 0;
    FUN_7103770b30(plVar1,(undefined8 *)(lVar8 + 8),(long ****)"selector_00",&local_1a0,param_5,
                   param_6,param_7,param_8);
    FUN_71037717d0(plVar1,2,"set_btn_back",ppppbVar16,param_5,param_6,param_7,param_8);
    uVar17 = 0;
    FUN_7103771930(*(long *)(lVar21 + 0xf0),2,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,
                   param_8);
    FUN_71037717d0(plVar1,4,"set_btn_fighter_select",uVar17,param_5,param_6,param_7,param_8);
    param_3 = (undefined **)&DAT_00000007;
    param_4 = (byte ****)0x0;
    FUN_7103771930(*(long *)(lVar21 + 0xf0),4,(long ****)&DAT_00000007,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
    FUN_710376b960(*(long *)(lVar21 + 0xf0));
    (**(code **)(**(long **)(lVar21 + 0xf0) + 0x60))(*(long **)(lVar21 + 0xf0),0);
    if (alStack_b0 == local_90) {
      pcVar18 = *(code **)(*local_90 + 0x20);
LAB_710330980c:
      (*pcVar18)();
      uVar17 = extraout_x1_02;
    }
    else {
      uVar17 = extraout_x1_01;
      if (local_90 != (long *)0x0) {
        pcVar18 = *(code **)(*local_90 + 0x28);
        goto LAB_710330980c;
      }
    }
    if (alStack_e0 == local_c0) {
      pcVar18 = *(code **)(*local_c0 + 0x20);
LAB_710330983c:
      (*pcVar18)();
      uVar17 = extraout_x1_03;
    }
    else if (local_c0 != (long *)0x0) {
      pcVar18 = *(code **)(*local_c0 + 0x28);
      goto LAB_710330983c;
    }
    if (alStack_110 == local_f0) {
      pcVar18 = *(code **)(*local_f0 + 0x20);
LAB_710330986c:
      (*pcVar18)();
      uVar17 = extraout_x1_04;
    }
    else if (local_f0 != (long *)0x0) {
      pcVar18 = *(code **)(*local_f0 + 0x28);
      goto LAB_710330986c;
    }
    if (alStack_140 == local_120) {
      pcVar18 = *(code **)(*local_120 + 0x20);
LAB_710330989c:
      (*pcVar18)();
      uVar17 = extraout_x1_05;
    }
    else if (local_120 != (long *)0x0) {
      pcVar18 = *(code **)(*local_120 + 0x28);
      goto LAB_710330989c;
    }
    if (alStack_170 == local_150[0]) {
      pcVar18 = *(code **)(*local_150[0] + 0x20);
LAB_71033098cc:
      (*pcVar18)();
      uVar17 = extraout_x1_06;
    }
    else if (local_150[0] != (long *)0x0) {
      pcVar18 = *(code **)(*local_150[0] + 0x28);
      goto LAB_71033098cc;
    }
    *(undefined1 *)(puVar20 + 0xe) = 1;
    puVar20[2] = &DAT_7105333600;
    uVar5 = DAT_7105333664;
    *(undefined4 *)(puVar20 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar20 + 0x6c) = uVar5;
    do {
      uVar4 = DAT_7105333650;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar3) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar4 & 1) != 0);
    puVar20[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar20;
    FUN_71032caea0((long)puVar20,uVar17,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar8 = *(long *)(param_1 + 0x340);
    *(undefined8 **)(param_1 + 0x340) = puVar20;
    if (lVar8 != 0) {
      FUN_71032cad20(lVar8);
      puVar20 = *(undefined8 **)(param_1 + 0x340);
    }
  }
  *(undefined1 *)(puVar20[0x10] + 0xe8) = 0;
  *(undefined1 *)(puVar20[0x10] + 0xe9) = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  local_198[0] = local_198[0] & 0xff00;
  local_1a0 = (byte ***)0x0;
  local_150[0] = (long *)((ulong)local_150[0] & 0xffffffffffffff00);
  local_158[0] = 0;
  local_158[1] = 0;
  if (DAT_71053050f0 < 0x6000000) {
    if (DAT_71053050f0 == 0x3020000) {
      *(undefined1 *)(puVar20[0x10] + 0xe8) = 1;
      pcVar11 = "mode_option_button_controller";
      *(undefined1 *)(puVar20[0x10] + 0xe9) = 1;
    }
    else {
      if (DAT_71053050f0 != 0x3030000) {
        if (DAT_71053050f0 != 0x4050000) goto LAB_7103309a98;
        FUN_710062dc20((uint *)&local_1a0,"mode_make_mii_edit");
        pcVar11 = "color_other";
        goto LAB_7103309a90;
      }
      pcVar11 = "mode_spirits_board_set";
    }
    FUN_710062dc20((uint *)&local_1a0,pcVar11);
    pcVar11 = "color_spirits";
  }
  else if (DAT_71053050f0 < 0x7070000) {
    if ((DAT_71053050f0 != 0x6000000) && (DAT_71053050f0 != 0x6020000)) goto LAB_7103309a98;
    *(undefined1 *)(puVar20[0x10] + 0xe8) = 1;
    *(undefined1 *)(puVar20[0x10] + 0xe9) = 1;
    FUN_710062dc20((uint *)&local_1a0,"mode_option_button_controller");
    pcVar11 = "color_option";
  }
  else {
    if ((DAT_71053050f0 != 0x7070000) && (DAT_71053050f0 != 0x7070300)) goto LAB_7103309a98;
    FUN_710062dc20((uint *)&local_1a0,"mode_make_mii_edit");
    pcVar11 = "color_online";
  }
LAB_7103309a90:
  FUN_710062dc20(local_158,pcVar11);
LAB_7103309a98:
  lVar8 = **(long **)(puVar20[0x10] + 0xd8);
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),(long)local_198);
  FUN_7103776640(&local_70,lVar8 + 8,(byte ****)"set_btn_back",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar7 = local_68;
  FUN_7103778300(0x3f800000,local_68,(long)local_150);
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar7 != 0) {
    uVar10 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar7);
  }
  return;
}

