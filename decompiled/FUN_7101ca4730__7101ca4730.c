// addr:      7101ca4730
// offset:    0x1ca4730
// name:      FUN_7101ca4730
// mangled:   
// signature: undefined __cdecl FUN_7101ca4730(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ca4730(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  byte ***pppbVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  byte ****ppppbVar8;
  long *plVar9;
  byte **ppbVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  byte ***local_420;
  byte ***local_418;
  undefined8 local_410;
  undefined1 *local_408;
  byte ****local_400;
  long alStack_3f0 [4];
  long *local_3d0;
  long alStack_3c0 [4];
  long *local_3a0;
  long alStack_390 [4];
  long *local_370;
  long alStack_360 [4];
  long *local_340;
  long alStack_330 [4];
  long *local_310;
  undefined4 local_300;
  undefined **local_2f0;
  ulong local_2e8;
  byte ***local_2e0;
  code *local_2d8;
  undefined8 local_2d0;
  undefined1 *local_2c8;
  byte ****local_2c0;
  long alStack_2b0 [4];
  long *local_290;
  long alStack_280 [4];
  long *local_260;
  long alStack_250 [4];
  long *local_230;
  long alStack_220 [4];
  long *local_200;
  long alStack_1f0 [4];
  long *local_1d0;
  undefined4 local_1c0;
  byte ***local_1b0;
  ulong local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 *local_198;
  undefined4 local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  
  lVar14 = **(long **)*param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x494) = uVar1;
  lVar12 = *(long *)(lVar14 + 0x608);
  lVar14 = *(long *)(lVar14 + 0x610);
  if (lVar12 != lVar14) {
    uVar15 = (lVar14 + -0x10) - lVar12;
    uVar17 = ((uint)(uVar15 >> 4) & 0xfffffff) + 1;
    if ((uVar17 & 3) != 0) {
      lVar16 = -((ulong)uVar17 & 3);
      do {
        plVar13 = (long *)(lVar12 + 8);
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 1;
        *(undefined4 *)(*plVar13 + 0x494) = uVar1;
      } while (lVar16 != 0);
    }
    if (0x2f < uVar15) {
      do {
        *(undefined4 *)(*(long *)(lVar12 + 8) + 0x494) = uVar1;
        *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x494) = uVar1;
        *(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x494) = uVar1;
        plVar13 = (long *)(lVar12 + 0x38);
        lVar12 = lVar12 + 0x40;
        *(undefined4 *)(*plVar13 + 0x494) = uVar1;
      } while (lVar14 != lVar12);
    }
  }
  plVar13 = (long *)*param_2;
  plVar9 = (long *)*plVar13;
  lVar12 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(*(long *)(*plVar9 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(*(long *)*plVar13 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(*(long *)*plVar13 + 0x600) + 0x18) = 0x800008;
  *(undefined4 *)(*(long *)(*(long *)*plVar13 + 0x600) + 0x1c) = 0x200002;
  *(undefined4 *)(*(long *)(*(long *)*plVar13 + 0x600) + 0x20) = 0x100001;
  *(undefined4 *)(*(long *)(*(long *)*plVar13 + 0x600) + 0x24) = 0x400004;
  *(undefined4 *)(*(long *)(*(long *)*plVar13 + 0x600) + 0x28) = 0x10;
  *(undefined4 *)(*(long *)(*(long *)*plVar13 + 0x600) + 0x2c) = 0x40000;
  plVar13 = (long *)(lVar12 + 0x118);
  if (plVar13 != plVar9 + 1) {
    **(undefined8 **)(lVar12 + 0x120) = *(undefined8 *)plVar9[2];
    *(undefined8 *)(*(long *)(lVar12 + 0x120) + 8) = *(undefined8 *)(plVar9[2] + 8);
    lVar16 = plVar9[2];
    lVar14 = *(long *)(lVar12 + 0x120);
    if (lVar14 != lVar16) {
      **(undefined8 **)(lVar14 + 0x18) = **(undefined8 **)(lVar16 + 0x18);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x18);
    }
  }
  piVar18 = *(int **)(lVar12 + 0x228);
  piVar20 = *(int **)(lVar12 + 0x230);
  if (piVar18 != piVar20) {
    uVar19 = 0;
    uVar17 = 0;
    do {
      FUN_7103776640(&local_1b0,(long)plVar13,(byte ****)"set_itemstat_%02d",(ulong)uVar19,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_2e0,(long)plVar13,(byte ****)"set_parts_items_%02d",(ulong)uVar17,
                     param_4,param_5,param_6,param_7,param_8);
      uVar15 = local_1a8;
      if (*piVar18 == 0x200) {
        pcVar5 = "type_others";
      }
      else {
        pcVar5 = "type_item";
      }
      FUN_7103778300(0x3f800000,local_1a8,(long)pcVar5);
      pcVar11 = local_2d8;
      local_2e0 = (byte ***)&PTR_FUN_710523d988;
      local_2d8 = (code *)0x0;
      if (*piVar18 != 0x21e) {
        uVar19 = uVar19 + 1;
      }
      if (pcVar11 != (code *)0x0) {
        uVar4 = *(ulong *)((long)pcVar11 + 0x18);
        *(undefined ***)((long)pcVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)pcVar11 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40((ulong)pcVar11);
      }
      uVar17 = uVar17 + 1;
      local_1b0 = (byte ***)&PTR_FUN_710523d988;
      local_1a8 = 0;
      if (uVar15 != 0) {
        uVar4 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar15);
      }
      piVar18 = piVar18 + 1;
    } while (piVar20 != piVar18);
  }
  local_1b0 = (byte ***)0x0;
  local_1a0 = 1;
  local_19c = 1;
  local_19a = 1;
  local_1a8 = 0x101;
  local_198 = &DAT_41f0000000000000;
  local_190 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_2e0 = (byte ***)&DAT_71051860d0;
  local_2c0 = &local_2e0;
  FUN_7101989a30((long *)&local_2e0,alStack_f0);
  if (&local_2e0 == local_2c0) {
    (*(code *)(*local_2c0)[4])();
  }
  else if (local_2c0 != (byte ****)0x0) {
    (*(code *)(*local_2c0)[5])();
  }
  local_2e0 = (byte ***)&PTR_FUN_71050ae000;
  local_2d8 = FUN_7101ca2be0;
  local_2d0 = 0;
  local_2c8 = (undefined1 *)lVar12;
  local_2c0 = &local_2e0;
  FUN_7101a7ed70((long *)&local_2e0,alStack_180);
  if (&local_2e0 == local_2c0) {
    ppbVar10 = (*local_2c0)[4];
LAB_7101ca4b14:
    (*(code *)ppbVar10)();
  }
  else if (local_2c0 != (byte ****)0x0) {
    ppbVar10 = (*local_2c0)[5];
    goto LAB_7101ca4b14;
  }
  plVar9 = (long *)(lVar12 + 0x128);
  ppppbVar8 = &local_1b0;
  FUN_7103770b30(plVar9,plVar13,(long ****)"selector_select",ppppbVar8,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar9,0,"set_parts_mode_00",ppppbVar8,param_5,param_6,param_7,param_8);
  pcVar5 = "set_parts_mode_01";
  FUN_71037717d0(plVar9,1,"set_parts_mode_01",ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_710376b960(*(long *)(lVar12 + 0x128));
  (**(code **)(**(long **)(lVar12 + 0x128) + 0x70))(*(long **)(lVar12 + 0x128),0);
  FUN_7103776640(&local_2e0,(long)plVar13,(byte ****)"set_parts_mode_00",pcVar5,ppppbVar8,param_5,
                 param_6,param_7,param_8);
  pcVar11 = local_2d8;
  FUN_7103778300(0x3f800000,(long)local_2d8,0x710438cf0f);
  local_2e0 = (byte ***)&PTR_FUN_710523d988;
  local_2d8 = (code *)0x0;
  if (pcVar11 != (code *)0x0) {
    uVar15 = *(ulong *)(pcVar11 + 0x18);
    *(undefined ***)(pcVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(pcVar11 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40((ulong)pcVar11);
  }
  FUN_7103776640(&local_2e0,(long)plVar13,(byte ****)"set_parts_mode_01",pcVar5,ppppbVar8,param_5,
                 param_6,param_7,param_8);
  pcVar11 = local_2d8;
  FUN_7103778300(0x3f800000,(long)local_2d8,0x71043f0d7c);
  local_2e0 = (byte ***)&PTR_FUN_710523d988;
  local_2d8 = (code *)0x0;
  if (pcVar11 != (code *)0x0) {
    uVar15 = *(ulong *)((long)pcVar11 + 0x18);
    *(undefined ***)((long)pcVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pcVar11 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40((ulong)pcVar11);
  }
  local_2e0 = (byte ***)0x0;
  local_2d8 = (code *)0x101;
  local_2d0 = CONCAT17(local_2d0._7_1_,0x1000100000001);
  local_2c8 = &DAT_41f0000000000000;
  local_2c0 = (byte ****)((ulong)local_2c0 & 0xffffffff00000000);
  local_290 = (long *)0x0;
  local_260 = (long *)0x0;
  local_230 = (long *)0x0;
  local_200 = (long *)0x0;
  local_1d0 = (long *)0x0;
  local_1c0 = 0;
  local_420 = (byte ***)&DAT_71051860d0;
  local_400 = &local_420;
  FUN_7101989a30((long *)&local_420,alStack_220);
  if (&local_420 == local_400) {
    ppbVar10 = (*local_400)[4];
LAB_7101ca4cb0:
    (*(code *)ppbVar10)();
  }
  else if (local_400 != (byte ****)0x0) {
    ppbVar10 = (*local_400)[5];
    goto LAB_7101ca4cb0;
  }
  local_420 = (byte ***)&PTR_FUN_71050ae000;
  local_418 = (byte ***)FUN_7101ca2c60;
  local_410 = 0;
  local_408 = (undefined1 *)lVar12;
  local_400 = &local_420;
  FUN_7101a7ed70((long *)&local_420,alStack_2b0);
  if (&local_420 == local_400) {
    ppbVar10 = (*local_400)[4];
LAB_7101ca4d00:
    (*(code *)ppbVar10)();
  }
  else if (local_400 != (byte ****)0x0) {
    ppbVar10 = (*local_400)[5];
    goto LAB_7101ca4d00;
  }
  plVar9 = (long *)(lVar12 + 0x130);
  ppppbVar8 = &local_2e0;
  FUN_7103770b30(plVar9,plVar13,(long ****)"selector_edit",ppppbVar8,param_5,param_6,param_7,param_8
                );
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,0,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x7104454b4e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,1,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x7104454b4e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,2,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x7104454b4e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,3,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x7104454b4e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,4,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x7104454b4e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,5,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x7104454b4e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,6,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x710434a47e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  local_418 = (byte ***)((ulong)local_418 & 0xffffffffffffff00);
  local_420 = (byte ***)0x0;
  FUN_710062dc20((uint *)&local_420,"set_parts_category_%02d");
  ppppbVar6 = &local_418;
  FUN_71037717d0(plVar9,7,(char *)&local_418,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_2f0,(long)plVar13,&local_418,ppppbVar6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar15 = local_2e8;
  FUN_7103778300(0x3f800000,local_2e8,0x7104454b4e);
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar15 != 0) {
    uVar4 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar15);
  }
  FUN_71037717d0(plVar9,100,"set_btn_decide",ppppbVar8,param_5,param_6,param_7,param_8);
  ppppbVar8 = (byte ****)0x0;
  FUN_7103771930(*(long *)(lVar12 + 0x130),100,(long ****)0xb,(byte ****)0x0,param_5,param_6,param_7
                 ,param_8);
  FUN_710376b960(*(long *)(lVar12 + 0x130));
  (**(code **)(**(long **)(lVar12 + 0x130) + 0x70))(*(long **)(lVar12 + 0x130),0);
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x138),(long ****)0x0,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x140),(long ****)0x1,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x148),(long ****)0x2,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x150),(long ****)0x3,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x158),(long ****)&DAT_00000004,ppppbVar8,param_5,param_6,
                 param_7,param_8);
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x160),(long ****)0x5,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x168),(long ****)0x6,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  uVar7 = 7;
  FUN_7101c9f4e0(lVar12,(long *)(lVar12 + 0x170),(long ****)&DAT_00000007,ppppbVar8,param_5,param_6,
                 param_7,param_8);
  FUN_7101ca10c0(lVar12,0,uVar7,ppppbVar8,param_5,param_6,param_7,param_8);
  uVar17 = (uint)((ulong)(*(long *)(lVar12 + 0x230) - *(long *)(lVar12 + 0x228)) >> 2);
  if (0 < (int)uVar17) {
    uVar19 = 0;
    do {
      FUN_7103771d60(&local_420,*(long *)(lVar12 + 0x168),(long ****)(ulong)uVar19,ppppbVar8,param_5
                     ,param_6,param_7,param_8);
      pppbVar2 = local_418;
      ppbVar10 = *local_418;
      if (ppbVar10 != (byte **)0x0) {
        (**(code **)(*ppbVar10 + 0x1f8))(ppbVar10,0);
        uVar15 = (**(code **)(*ppbVar10 + 0x200))(ppbVar10);
        if ((uVar15 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)(*ppbVar10 + 0x210))(ppbVar10);
          uVar3 = uVar3 ^ 1;
        }
        (**(code **)(*ppbVar10 + 0x388))(ppbVar10,uVar3 & 1,0);
      }
      local_420 = (byte ***)&PTR_FUN_710523d9c8;
      local_418 = (byte ***)0x0;
      if (pppbVar2 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar2);
      }
      uVar19 = uVar19 + 1;
    } while (uVar17 != uVar19);
  }
  ppppbVar8 = &local_420;
  local_310 = (long *)0x0;
  local_300 = 0;
  local_420 = (byte ***)0x0;
  local_410 = CONCAT17(local_410._7_1_,0x1000100000001);
  local_408 = &DAT_41f0000000000000;
  local_400 = (byte ****)((ulong)local_400 & 0xffffffff00000000);
  local_3d0 = (long *)0x0;
  local_3a0 = (long *)0x0;
  local_370 = (long *)0x0;
  local_340 = (long *)0x0;
  local_418 = (byte ***)&DAT_00010001;
  FUN_7103770b30((long *)(lVar12 + 0x178),plVar13,(long ****)"selector_guide",ppppbVar8,param_5,
                 param_6,param_7,param_8);
  FUN_71037717d0((long *)(lVar12 + 0x178),200,"btn_init",ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_7103771930(*(long *)(lVar12 + 0x178),200,(long ****)0xa,(byte ****)0x0,param_5,param_6,param_7
                 ,param_8);
  FUN_710376b960(*(long *)(lVar12 + 0x178));
  (**(code **)(**(long **)(lVar12 + 0x178) + 0x70))(*(long **)(lVar12 + 0x178),1);
  if (alStack_330 == local_310) {
    pcVar11 = *(code **)(*local_310 + 0x20);
LAB_7101ca5378:
    (*pcVar11)();
  }
  else if (local_310 != (long *)0x0) {
    pcVar11 = *(code **)(*local_310 + 0x28);
    goto LAB_7101ca5378;
  }
  if (alStack_360 == local_340) {
    pcVar11 = *(code **)(*local_340 + 0x20);
LAB_7101ca53a8:
    (*pcVar11)();
  }
  else if (local_340 != (long *)0x0) {
    pcVar11 = *(code **)(*local_340 + 0x28);
    goto LAB_7101ca53a8;
  }
  if (alStack_390 == local_370) {
    pcVar11 = *(code **)(*local_370 + 0x20);
LAB_7101ca53d8:
    (*pcVar11)();
  }
  else if (local_370 != (long *)0x0) {
    pcVar11 = *(code **)(*local_370 + 0x28);
    goto LAB_7101ca53d8;
  }
  if (alStack_3c0 == local_3a0) {
    pcVar11 = *(code **)(*local_3a0 + 0x20);
LAB_7101ca5408:
    (*pcVar11)();
  }
  else if (local_3a0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_3a0 + 0x28);
    goto LAB_7101ca5408;
  }
  if (alStack_3f0 == local_3d0) {
    pcVar11 = *(code **)(*local_3d0 + 0x20);
LAB_7101ca5438:
    (*pcVar11)();
  }
  else if (local_3d0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_3d0 + 0x28);
    goto LAB_7101ca5438;
  }
  if (alStack_1f0 == local_1d0) {
    pcVar11 = *(code **)(*local_1d0 + 0x20);
LAB_7101ca5468:
    (*pcVar11)();
  }
  else if (local_1d0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_1d0 + 0x28);
    goto LAB_7101ca5468;
  }
  if (alStack_220 == local_200) {
    pcVar11 = *(code **)(*local_200 + 0x20);
LAB_7101ca5498:
    (*pcVar11)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar11 = *(code **)(*local_200 + 0x28);
    goto LAB_7101ca5498;
  }
  if (alStack_250 == local_230) {
    pcVar11 = *(code **)(*local_230 + 0x20);
LAB_7101ca54c8:
    (*pcVar11)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar11 = *(code **)(*local_230 + 0x28);
    goto LAB_7101ca54c8;
  }
  if (alStack_280 == local_260) {
    pcVar11 = *(code **)(*local_260 + 0x20);
LAB_7101ca54f8:
    (*pcVar11)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar11 = *(code **)(*local_260 + 0x28);
    goto LAB_7101ca54f8;
  }
  if (alStack_2b0 == local_290) {
    pcVar11 = *(code **)(*local_290 + 0x20);
LAB_7101ca5528:
    (*pcVar11)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar11 = *(code **)(*local_290 + 0x28);
    goto LAB_7101ca5528;
  }
  if (alStack_c0 == local_a0) {
    pcVar11 = *(code **)(*local_a0 + 0x20);
LAB_7101ca5558:
    (*pcVar11)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101ca5558;
  }
  if (alStack_f0 == local_d0) {
    pcVar11 = *(code **)(*local_d0 + 0x20);
LAB_7101ca5588:
    (*pcVar11)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101ca5588;
  }
  if (alStack_120 == local_100) {
    pcVar11 = *(code **)(*local_100 + 0x20);
LAB_7101ca55b8:
    (*pcVar11)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar11 = *(code **)(*local_100 + 0x28);
    goto LAB_7101ca55b8;
  }
  if (alStack_150 == local_130) {
    pcVar11 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) goto LAB_7101ca55ec;
    pcVar11 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar11)();
LAB_7101ca55ec:
  if (alStack_180 == local_160) {
    pcVar11 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) {
      return;
    }
    pcVar11 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar11)();
  return;
}

