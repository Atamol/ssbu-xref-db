// addr:      7101f35b00
// offset:    0x1f35b00
// name:      FUN_7101f35b00
// mangled:   
// signature: undefined __cdecl FUN_7101f35b00(long param_1, long param_2, ulong * param_3, long * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f35b00(long param_1,long param_2,ulong *param_3,long *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long ****pppplVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined **local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  long *local_1b8;
  undefined **local_1b0;
  long *local_1a8;
  byte ***local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  
  puVar1 = (undefined8 *)(param_1 + 0x178);
  uVar9 = 1;
  FUN_71032cbf30(puVar1,param_2,param_3,(byte ****)0x1,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600) + 0x18) = 0x40000;
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600) + 0x1c) = 0x10;
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600) + 0x20) = 0x800008;
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600) + 0x24) = 0x200002;
  lVar11 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600);
  *(undefined8 *)(lVar11 + 0x3fc) = 0xc00000011;
  *(undefined8 *)(lVar11 + 0x404) = 0x640000000a;
  *(undefined8 *)(lVar11 + 0x40c) = 0;
  *(undefined8 *)(lVar11 + 0x414) = 0xc00000011;
  *(undefined8 *)(lVar11 + 0x41c) = 0x640000000a;
  *(undefined8 *)(lVar11 + 0x424) = 0;
  FUN_7103776640(&local_1a0,**(long **)(param_1 + 0x178) + 8,(byte ****)"set_parts_btn_edit_00",
                 param_3,uVar9,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  if ((byte ****)(param_1 + 0x108) != &local_1a0) {
    local_198 = (undefined1 *)0x0;
    uVar17 = *(ulong *)(param_1 + 0x110);
    *(undefined1 **)(param_1 + 0x110) = puVar2;
    if (uVar17 != 0) {
      uVar4 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar17);
    }
  }
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    uVar17 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776640(&local_1a0,**(long **)(param_1 + 0x178) + 8,(byte ****)"set_parts_btn_edit_01",
                 param_3,uVar9,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  if ((byte ****)(param_1 + 0x118) != &local_1a0) {
    local_198 = (undefined1 *)0x0;
    uVar17 = *(ulong *)(param_1 + 0x120);
    *(undefined1 **)(param_1 + 0x120) = puVar2;
    if (uVar17 != 0) {
      uVar4 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar17);
    }
  }
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    uVar17 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776910(&local_1a0,**(long **)(param_1 + 0x178) + 8,(long ****)"cursor_lr_00",param_3,uVar9
                 ,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  if ((byte ****)(param_1 + 0x128) != &local_1a0) {
    local_198 = (undefined1 *)0x0;
    uVar17 = *(ulong *)(param_1 + 0x130);
    *(undefined1 **)(param_1 + 0x130) = puVar2;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776640(&local_1a0,**(long **)(param_1 + 0x178) + 8,(byte ****)"set_parts_csr_l",param_3,
                 uVar9,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  if ((byte ****)(param_1 + 0x138) != &local_1a0) {
    local_198 = (undefined1 *)0x0;
    uVar17 = *(ulong *)(param_1 + 0x140);
    *(undefined1 **)(param_1 + 0x140) = puVar2;
    if (uVar17 != 0) {
      uVar4 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar17);
    }
  }
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    uVar17 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776640(&local_1a0,**(long **)(param_1 + 0x178) + 8,(byte ****)"set_parts_csr_r",param_3,
                 uVar9,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  if ((byte ****)(param_1 + 0x148) != &local_1a0) {
    local_198 = (undefined1 *)0x0;
    uVar17 = *(ulong *)(param_1 + 0x150);
    *(undefined1 **)(param_1 + 0x150) = puVar2;
    if (uVar17 != 0) {
      uVar4 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar17);
    }
  }
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    uVar17 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776910(&local_1a0,**(long **)(param_1 + 0x178) + 8,(long ****)"set_scr_txt_footer_00",
                 param_3,uVar9,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  if ((byte ****)(param_1 + 0x158) != &local_1a0) {
    local_198 = (undefined1 *)0x0;
    uVar17 = *(ulong *)(param_1 + 0x160);
    *(undefined1 **)(param_1 + 0x160) = puVar2;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_710377a120(param_1 + 0x158,"mnu_replay_movie_edit_cap_help",param_3,uVar9,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_1a0,**(long **)(param_1 + 0x178) + 8,(long ****)"set_scr_txt_footer_01",
                 param_3,uVar9,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  if ((byte ****)(param_1 + 0x168) != &local_1a0) {
    local_198 = (undefined1 *)0x0;
    uVar17 = *(ulong *)(param_1 + 0x170);
    *(undefined1 **)(param_1 + 0x170) = puVar2;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_1a0 = (byte ***)0x0;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_198 = (undefined1 *)0x100;
  FUN_710337df20((long)&local_1a0);
  plVar16 = (long *)(param_1 + 0x180);
  FUN_7103770b30(plVar16,(undefined8 *)(**(long **)(param_1 + 0x178) + 8),(long ****)"selector_0",
                 &local_1a0,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x180) + 0x60))(*(long **)(param_1 + 0x180),0);
  pcVar6 = s_set_parts_btn_edit__02d_71042a385e;
  FUN_71037717d0(plVar16,0,s_set_parts_btn_edit__02d_71042a385e,0,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,1,s_set_parts_btn_edit__02d_71042a385e,1,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,2,s_set_parts_btn_edit__02d_71042a385e,2,param_5,param_6,param_7,param_8);
  uVar9 = 3;
  FUN_71037717d0(plVar16,3,s_set_parts_btn_edit__02d_71042a385e,3,param_5,param_6,param_7,param_8);
  if (alStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_7101f36058:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f36058;
  }
  if (alStack_e0 == local_c0) {
    pcVar12 = *(code **)(*local_c0 + 0x20);
LAB_7101f36088:
    (*pcVar12)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f36088;
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101f360b8:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f360b8;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101f360e8:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f360e8;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
LAB_7101f36118:
    (*pcVar12)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar12 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f36118;
  }
  local_1a0 = (byte ***)&DAT_200000000;
  local_198 = (undefined1 *)0x101;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  FUN_7103776640(&local_1b0,**(long **)(param_1 + 0x178) + 8,(byte ****)"set_parts_btn_edit_02",
                 pcVar6,uVar9,param_5,param_6,param_7,param_8);
  plVar16 = (long *)(param_1 + 0x188);
  pcVar6 = "selector_0";
  ppppbVar10 = &local_1a0;
  FUN_7103770b30(plVar16,&local_1b0,(long ****)"selector_0",ppppbVar10,param_5,param_6,param_7,
                 param_8);
  (**(code **)(**(long **)(param_1 + 0x188) + 0x60))(*(long **)(param_1 + 0x188),0);
  plVar18 = *(long **)(param_1 + 0x188);
  uVar17 = plVar18[0x31] - plVar18[0x30];
  if (0 < (int)(uVar17 >> 3)) {
    pcVar6 = *(char **)plVar18[0x30];
    uVar17 = uVar17 >> 3 & 0xffffffff;
    FUN_710376e070(plVar18,0,(long ****)pcVar6,ppppbVar10,param_5,param_6,param_7,param_8);
    if (uVar17 != 1) {
      uVar4 = 1;
      do {
        pcVar6 = *(char **)(plVar18[0x30] + uVar4 * 8);
        FUN_710376e070(plVar18,(int)uVar4,(long ****)pcVar6,ppppbVar10,param_5,param_6,param_7,
                       param_8);
        uVar4 = uVar4 + 1;
      } while (uVar17 != uVar4);
    }
  }
  lVar11 = *plVar16;
  if (0 < (int)((ulong)(*(long *)(lVar11 + 0x188) - *(long *)(lVar11 + 0x180)) >> 3)) {
    uVar3 = 0;
    do {
      pcVar6 = (char *)(ulong)uVar3;
      FUN_7103771d60(&local_1c0,lVar11,(long ****)pcVar6,ppppbVar10,param_5,param_6,param_7,param_8)
      ;
      plVar18 = local_1b8;
      plVar5 = (long *)*local_1b8;
      if (plVar5 != (long *)0x0) {
        pcVar6 = (char *)0x1;
        (**(code **)(*plVar5 + 0x268))(plVar5,1);
      }
      local_1c0 = &PTR_FUN_710523d9c8;
      local_1b8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      lVar11 = *plVar16;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)((ulong)(*(long *)(lVar11 + 0x188) - *(long *)(lVar11 + 0x180)) >> 3)
            );
  }
  plVar16 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar17 = *(ulong *)((long)plVar16 + 0x18);
    *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar16 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  if (alStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_7101f362e4:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f362e4;
  }
  if (alStack_e0 == local_c0) {
    pcVar12 = *(code **)(*local_c0 + 0x20);
LAB_7101f36314:
    (*pcVar12)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f36314;
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101f36344:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f36344;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101f36374:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f36374;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
LAB_7101f363a4:
    (*pcVar12)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar12 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f363a4;
  }
  local_1a0 = (byte ***)0x0;
  local_198 = (undefined1 *)0x101;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  FUN_7103776640(&local_1b0,**(long **)(param_1 + 0x178) + 8,(byte ****)"set_parts_btn_edit_03",
                 pcVar6,ppppbVar10,param_5,param_6,param_7,param_8);
  plVar16 = (long *)(param_1 + 400);
  ppppbVar10 = &local_1a0;
  FUN_7103770b30(plVar16,&local_1b0,(long ****)"selector_0",ppppbVar10,param_5,param_6,param_7,
                 param_8);
  (**(code **)(**(long **)(param_1 + 400) + 0x60))(*(long **)(param_1 + 400),0);
  plVar18 = *(long **)(param_1 + 400);
  uVar17 = plVar18[0x31] - plVar18[0x30];
  if (0 < (int)(uVar17 >> 3)) {
    uVar17 = uVar17 >> 3 & 0xffffffff;
    FUN_710376e070(plVar18,0,*(long *****)plVar18[0x30],ppppbVar10,param_5,param_6,param_7,param_8);
    if (uVar17 != 1) {
      uVar4 = 1;
      do {
        FUN_710376e070(plVar18,(int)uVar4,*(long *****)(plVar18[0x30] + uVar4 * 8),ppppbVar10,
                       param_5,param_6,param_7,param_8);
        uVar4 = uVar4 + 1;
      } while (uVar17 != uVar4);
    }
  }
  lVar11 = *plVar16;
  if (0 < (int)((ulong)(*(long *)(lVar11 + 0x188) - *(long *)(lVar11 + 0x180)) >> 3)) {
    uVar3 = 0;
    do {
      FUN_7103771d60(&local_1c0,lVar11,(long ****)(ulong)uVar3,ppppbVar10,param_5,param_6,param_7,
                     param_8);
      plVar18 = local_1b8;
      plVar5 = (long *)*local_1b8;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x268))(plVar5,1,1);
      }
      local_1c0 = &PTR_FUN_710523d9c8;
      local_1b8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      lVar11 = *plVar16;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)((ulong)(*(long *)(lVar11 + 0x188) - *(long *)(lVar11 + 0x180)) >> 3)
            );
  }
  plVar16 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar17 = *(ulong *)((long)plVar16 + 0x18);
    *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar16 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  if (alStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_7101f36568:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f36568;
  }
  if (alStack_e0 == local_c0) {
    pcVar12 = *(code **)(*local_c0 + 0x20);
LAB_7101f36598:
    (*pcVar12)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f36598;
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101f365c8:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f365c8;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101f365f8:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f365f8;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
LAB_7101f36628:
    (*pcVar12)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar12 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f36628;
  }
  local_1a0 = (byte ***)&DAT_200000000;
  local_198 = (undefined1 *)0x101;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  plVar16 = (long *)(param_1 + 0x198);
  ppppbVar10 = &local_1a0;
  FUN_7103770b30(plVar16,(undefined8 *)(**(long **)(param_1 + 0x178) + 8),(long ****)"selector_2",
                 ppppbVar10,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x198) + 0x60))(*(long **)(param_1 + 0x198),0);
  plVar18 = *(long **)(param_1 + 0x198);
  uVar17 = plVar18[0x31] - plVar18[0x30];
  if (0 < (int)(uVar17 >> 3)) {
    uVar17 = uVar17 >> 3 & 0xffffffff;
    FUN_710376e070(plVar18,0,*(long *****)plVar18[0x30],ppppbVar10,param_5,param_6,param_7,param_8);
    if (uVar17 != 1) {
      uVar4 = 1;
      do {
        FUN_710376e070(plVar18,(int)uVar4,*(long *****)(plVar18[0x30] + uVar4 * 8),ppppbVar10,
                       param_5,param_6,param_7,param_8);
        uVar4 = uVar4 + 1;
      } while (uVar17 != uVar4);
    }
  }
  lVar11 = *plVar16;
  if (0 < (int)((ulong)(*(long *)(lVar11 + 0x188) - *(long *)(lVar11 + 0x180)) >> 3)) {
    uVar17 = 0;
    lVar15 = 4;
    do {
      pppplVar7 = (long ****)(uVar17 & 0xffffffff);
      FUN_7103771d60(&local_1b0,lVar11,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
      plVar18 = local_1a8;
      if (uVar17 < (ulong)(param_4[1] - *param_4 >> 3)) {
        uVar4 = uVar17 & 0xffffffff;
        FUN_7103776640(&local_1c0,*(long *)*puVar1 + 8,(byte ****)"set_parts_btn_color_%02d",uVar4,
                       ppppbVar10,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_1d0,(long)&local_1c0,(long ****)"set_color_list_01",uVar4,ppppbVar10,
                       param_5,param_6,param_7,param_8);
        if ((ulong)(param_4[1] - *param_4 >> 3) <= uVar17) {
LAB_7101f3724c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        pbVar8 = (byte *)(*param_4 + lVar15 + -4);
        FUN_7103779d90((long)&local_1d0,1,pbVar8);
        uVar4 = local_1c8;
        local_1d0 = &PTR_FUN_710523d9a8;
        local_1c8 = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_7103776910(&local_1d0,(long)&local_1c0,(long ****)"set_color_list_00",pbVar8,ppppbVar10,
                       param_5,param_6,param_7,param_8);
        if ((ulong)(param_4[1] - *param_4 >> 3) <= uVar17) goto LAB_7101f3724c;
        FUN_7103779d90((long)&local_1d0,1,(byte *)(*param_4 + lVar15));
        uVar4 = local_1c8;
        local_1d0 = &PTR_FUN_710523d9a8;
        local_1c8 = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        plVar5 = local_1b8;
        local_1c0 = &PTR_FUN_710523d988;
        local_1b8 = (long *)0x0;
        plVar18 = local_1a8;
        if (plVar5 != (long *)0x0) {
          uVar4 = plVar5[3];
          plVar5[2] = (long)&PTR_FUN_710523d9a8;
          plVar5[3] = 0;
          if (uVar4 != 0) {
            FUN_710392eb40(uVar4);
          }
          FUN_710392eb40((ulong)plVar5);
          plVar18 = local_1a8;
        }
      }
      else {
        plVar5 = (long *)*local_1a8;
        if (plVar5 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          (**(code **)(*plVar5 + 0x1f8))(plVar5,0);
          uVar4 = (**(code **)(*plVar5 + 0x200))(plVar5);
          if ((uVar4 & 1) == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = (**(code **)(*plVar5 + 0x210))(plVar5);
            uVar3 = uVar3 ^ 1;
          }
          pppplVar7 = (long ****)0x0;
          (**(code **)(*plVar5 + 0x388))(plVar5,uVar3 & 1);
          lVar11 = *plVar18;
        }
        FUN_710377ad90(&local_1c0,lVar11,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
        plVar5 = local_1b8;
        lVar11 = *local_1b8;
        if (lVar11 != 0) {
          *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
        }
        local_1c0 = &PTR_FUN_710523d9a8;
        local_1b8 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar5);
        }
      }
      local_1a8 = (long *)0x0;
      local_1b0 = &PTR_FUN_710523d9c8;
      if (plVar18 != (long *)0x0) {
        local_1a8 = (long *)0x0;
        local_1b0 = &PTR_FUN_710523d9c8;
        FUN_710392eb40((ulong)plVar18);
      }
      lVar11 = *plVar16;
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 8;
    } while ((long)uVar17 <
             (long)(int)((ulong)(*(long *)(lVar11 + 0x188) - *(long *)(lVar11 + 0x180)) >> 3));
  }
  if (alStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_7101f3694c:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f3694c;
  }
  if (alStack_e0 == local_c0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  else if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x28))();
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101f369c0:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f369c0;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101f369f0:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f369f0;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
LAB_7101f36a20:
    (*pcVar12)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar12 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f36a20;
  }
  local_1a0 = (byte ***)&DAT_200000000;
  local_198 = (undefined1 *)0x101;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  ppppbVar10 = &local_1a0;
  FUN_7103770b30((long *)(param_1 + 0x1a0),(undefined8 *)(**(long **)(param_1 + 0x178) + 8),
                 (long ****)"selector_3",ppppbVar10,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x1a0) + 0x60))(*(long **)(param_1 + 0x1a0),0);
  plVar16 = *(long **)(param_1 + 0x1a0);
  uVar17 = plVar16[0x31] - plVar16[0x30];
  if (0 < (int)(uVar17 >> 3)) {
    uVar17 = uVar17 >> 3 & 0xffffffff;
    FUN_710376e070(plVar16,0,*(long *****)plVar16[0x30],ppppbVar10,param_5,param_6,param_7,param_8);
    if (uVar17 != 1) {
      uVar4 = 1;
      do {
        FUN_710376e070(plVar16,(int)uVar4,*(long *****)(plVar16[0x30] + uVar4 * 8),ppppbVar10,
                       param_5,param_6,param_7,param_8);
        uVar4 = uVar4 + 1;
      } while (uVar17 != uVar4);
    }
  }
  if (alStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_7101f36b28:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f36b28;
  }
  if (alStack_e0 == local_c0) {
    pcVar12 = *(code **)(*local_c0 + 0x20);
LAB_7101f36b58:
    (*pcVar12)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f36b58;
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101f36b88:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f36b88;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101f36bb8:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f36bb8;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
LAB_7101f36be8:
    (*pcVar12)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar12 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f36be8;
  }
  local_1a0 = (byte ***)&DAT_100000000;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_198 = &DAT_00010101;
  FUN_710337df20((long)&local_1a0);
  plVar16 = (long *)(param_1 + 0x1a8);
  ppppbVar10 = &local_1a0;
  FUN_7103770b30(plVar16,(undefined8 *)(**(long **)(param_1 + 0x178) + 8),(long ****)"arrow_csr",
                 ppppbVar10,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,0,"set_parts_csr_l",ppppbVar10,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,1,"set_parts_csr_r",ppppbVar10,param_5,param_6,param_7,param_8);
  FUN_7103771930(*(long *)(param_1 + 0x1a8),0,(long ****)&DAT_00000008,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  ppppbVar10 = (byte ****)0x1;
  FUN_7103771930(*(long *)(param_1 + 0x1a8),1,(long ****)&DAT_00000009,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  FUN_7103771d60(&local_1b0,*(long *)(param_1 + 0x1a8),(long ****)0x0,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  plVar18 = local_1a8;
  plVar5 = (long *)*local_1a8;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x268))(plVar5,1,1);
  }
  local_1b0 = &PTR_FUN_710523d9c8;
  local_1a8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  FUN_7103771d60(&local_1b0,*plVar16,(long ****)0x1,ppppbVar10,param_5,param_6,param_7,param_8);
  plVar16 = local_1a8;
  plVar18 = (long *)*local_1a8;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x268))(plVar18,1,1);
  }
  local_1b0 = &PTR_FUN_710523d9c8;
  local_1a8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  if (alStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_7101f36d64:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f36d64;
  }
  if (alStack_e0 == local_c0) {
    pcVar12 = *(code **)(*local_c0 + 0x20);
LAB_7101f36d94:
    (*pcVar12)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f36d94;
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101f36dc4:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f36dc4;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101f36df4:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f36df4;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
LAB_7101f36e24:
    (*pcVar12)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar12 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f36e24;
  }
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_1a0 = (byte ***)0x0;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_198 = (undefined1 *)0x100;
  FUN_710337df20((long)&local_1a0);
  ppppbVar10 = &local_1a0;
  FUN_7103770b30((long *)(param_1 + 0x1b0),(undefined8 *)(**(long **)(param_1 + 0x178) + 8),
                 (long ****)"selector_4",ppppbVar10,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x60))(*(long **)(param_1 + 0x1b0),0);
  FUN_71037717d0((long *)(param_1 + 0x1b0),0,"set_parts_btn_decide",ppppbVar10,param_5,param_6,
                 param_7,param_8);
  pppplVar7 = (long ****)0x6;
  ppppbVar10 = (byte ****)0x0;
  FUN_7103771930(*(long *)(param_1 + 0x1b0),0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  if (alStack_b0 == local_90) {
    pcVar12 = *(code **)(*local_90 + 0x20);
LAB_7101f36f00:
    (*pcVar12)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar12 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f36f00;
  }
  if (alStack_e0 == local_c0) {
    pcVar12 = *(code **)(*local_c0 + 0x20);
LAB_7101f36f30:
    (*pcVar12)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f36f30;
  }
  if (alStack_110 == local_f0) {
    pcVar12 = *(code **)(*local_f0 + 0x20);
LAB_7101f36f60:
    (*pcVar12)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f36f60;
  }
  if (alStack_140 == local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_7101f36f90:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f36f90;
  }
  if (alStack_170 == local_150) {
    pcVar12 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101f36fc4;
    pcVar12 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar12)();
LAB_7101f36fc4:
  FUN_7103776390(&local_1a0,(undefined8 *)(**(long **)(param_1 + 0x178) + 8),pppplVar7,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  pcVar6 = "set_parts_preview";
  ppppbVar10 = (byte ****)0x1;
  FUN_7101f3e4e0(*(undefined ****)(param_1 + 0x1c0),&local_1a0,(byte ****)"set_parts_preview",
                 (byte ****)0x1,param_5,param_6,param_7,param_8);
  puVar2 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    uVar17 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x1c0) + 0x68) = 0;
  FUN_7103776390(&local_1b0,(undefined8 *)(**(long **)(param_1 + 0x178) + 8),(long ****)pcVar6,
                 ppppbVar10,param_5,param_6,param_7,param_8);
  pcVar6 = "set_parts_tellop_text";
  FUN_7101f3fe20(*(undefined ****)(param_1 + 0x1d0),&local_1b0,(byte ****)"set_parts_tellop_text",
                 ppppbVar10,param_5,param_6,param_7,param_8);
  plVar16 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar17 = *(ulong *)((long)plVar16 + 0x18);
    *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar16 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103776390(&local_1c0,(undefined8 *)(**(long **)(param_1 + 0x178) + 8),(long ****)pcVar6,
                 ppppbVar10,param_5,param_6,param_7,param_8);
  FUN_7101f41070(*(undefined ****)(param_1 + 0x1e0),&local_1c0,(byte ****)"set_parts_tellop_screen",
                 ppppbVar10,param_5,param_6,param_7,param_8);
  plVar16 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar17 = plVar16[3];
    plVar16[2] = (long)&PTR_FUN_710523d9a8;
    plVar16[3] = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  lVar15 = **(long **)*puVar1;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x494) = 0;
  lVar11 = *(long *)(lVar15 + 0x608);
  lVar15 = *(long *)(lVar15 + 0x610);
  if (lVar11 != lVar15) {
    uVar17 = (lVar15 + -0x10) - lVar11;
    uVar3 = ((uint)(uVar17 >> 4) & 0xfffffff) + 1;
    if ((uVar3 & 3) != 0) {
      lVar13 = -((ulong)uVar3 & 3);
      do {
        plVar16 = (long *)(lVar11 + 8);
        lVar11 = lVar11 + 0x10;
        lVar13 = lVar13 + 1;
        *(undefined4 *)(*plVar16 + 0x494) = 0;
      } while (lVar13 != 0);
    }
    if (0x2f < uVar17) {
      do {
        *(undefined4 *)(*(long *)(lVar11 + 8) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar11 + 0x28) + 0x494) = 0;
        plVar16 = (long *)(lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
        *(undefined4 *)(*plVar16 + 0x494) = 0;
      } while (lVar15 != lVar11);
    }
  }
  FUN_71037760f0(**(long **)*puVar1,1);
  lVar15 = **(long **)*puVar1;
  *(undefined1 *)(lVar15 + 0x656) = 0;
  *(undefined1 *)(*(long *)(lVar15 + 0x600) + 0x4ab) = 0;
  lVar11 = *(long *)(lVar15 + 0x608);
  lVar13 = *(long *)(lVar15 + 0x610);
  if (lVar11 != lVar13) {
    uVar17 = (lVar13 + -0x10) - lVar11;
    uVar3 = ((uint)(uVar17 >> 4) & 0xfffffff) + 1;
    if ((uVar3 & 3) != 0) {
      lVar14 = -((ulong)uVar3 & 3);
      do {
        plVar16 = (long *)(lVar11 + 8);
        lVar11 = lVar11 + 0x10;
        lVar14 = lVar14 + 1;
        *(undefined1 *)(*plVar16 + 0x4ab) = *(undefined1 *)(lVar15 + 0x656);
      } while (lVar14 != 0);
    }
    if (0x2f < uVar17) {
      do {
        *(undefined1 *)(*(long *)(lVar11 + 8) + 0x4ab) = *(undefined1 *)(lVar15 + 0x656);
        *(undefined1 *)(*(long *)(lVar11 + 0x18) + 0x4ab) = *(undefined1 *)(lVar15 + 0x656);
        *(undefined1 *)(*(long *)(lVar11 + 0x28) + 0x4ab) = *(undefined1 *)(lVar15 + 0x656);
        plVar16 = (long *)(lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
        *(undefined1 *)(*plVar16 + 0x4ab) = *(undefined1 *)(lVar15 + 0x656);
      } while (lVar13 != lVar11);
    }
  }
  FUN_7103778760(*(long *)(*(long *)*puVar1 + 0x10),0x710428ff7d);
  return;
}

