// addr:      7103371290
// offset:    0x3371290
// name:      FUN_7103371290
// mangled:   
// signature: undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103371290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_370;
  undefined *puStack_368;
  undefined *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  
  FUN_71038f4b20(param_1,"key_context");
  FUN_71038f4fc0(param_1,-0xf4628);
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    puVar8 = (undefined8 *)*plVar5;
  }
  else if (uVar2 == 7) {
    puVar8 = (undefined8 *)(*plVar5 + 0x28);
  }
  else {
    puVar8 = (undefined8 *)0x0;
  }
  *(long **)(param_1 + 0x10) = plVar5;
  memcpy(&local_370,&PTR_s_activate_layout_7105183e80,0xb0);
  FUN_71038f7260(param_1,"MetatableLayoutRoot");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  memcpy(&local_370,&PTR_s_is_valid_7105183f30,0x330);
  FUN_71038f7260(param_1,"MetatableLayoutView");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  memcpy(&local_370,&PTR_s_is_valid_7105184260,0x290);
  FUN_71038f7260(param_1,"MetatableLayoutPane");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  memcpy(&local_370,&DAT_71051844f0,0x1d0);
  FUN_71038f7260(param_1,"MetatableLayoutButton");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  memcpy(&local_370,&PTR_s_is_valid_71051846c0,0x140);
  FUN_71038f7260(param_1,"MetatableLayoutView_Animation");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  memcpy(&local_370,&PTR_s_setup_7105184840,0x260);
  FUN_71038f7260(param_1,"MetatableLayoutButtonSelector");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  puStack_358 = (undefined *)DAT_7105184838;
  local_360 = (undefined *)DAT_7105184830;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  local_370 = PTR_DAT_7105184820;
  puStack_368 = PTR_FUN_7105184828;
  FUN_71038f7260(param_1,"MetatableLayoutButtonSelectorGlobal");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),
                 "MetatableLayoutButtonSelectorGlobal");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"LayoutButtonSelector");
  memcpy(&local_370,&PTR_s_setup_7105184aa0,0x180);
  FUN_71038f7260(param_1,"MetatableLayoutListScroller");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  memcpy(&local_370,&PTR_s_setup_7105184d50,0xe0);
  FUN_71038f7260(param_1,"MetatableLayoutRangeSlider");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  puStack_358 = (undefined *)DAT_7105184d48;
  local_360 = (undefined *)DAT_7105184d40;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  local_370 = PTR_DAT_7105184d30;
  puStack_368 = PTR_FUN_7105184d38;
  FUN_71038f7260(param_1,"MetatableLayoutRangeSliderGlobal");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),
                 "MetatableLayoutRangeSliderGlobal");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"LayoutRangeSlider");
  local_360 = PTR_s_deactivate_7105184c30;
  puStack_358 = PTR_FUN_7105184c38;
  local_370 = PTR_s_activate_7105184c20;
  puStack_368 = PTR_FUN_7105184c28;
  local_340 = PTR_s_close_7105184c50;
  puStack_338 = PTR_FUN_7105184c58;
  local_350 = PTR_DAT_7105184c40;
  puStack_348 = PTR_FUN_7105184c48;
  local_320 = PTR_s_is_busy_7105184c70;
  puStack_318 = PTR_FUN_7105184c78;
  local_330 = PTR_s_update_7105184c60;
  puStack_328 = PTR_FUN_7105184c68;
  local_300 = DAT_7105184c90;
  uStack_2f8 = DAT_7105184c98;
  local_310 = PTR_s_get_result_7105184c80;
  puStack_308 = PTR_FUN_7105184c88;
  FUN_71038f7260(param_1,"MetatableLayoutListWindow");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  local_370 = PTR_DAT_7105184ca0;
  puStack_368 = PTR_FUN_7105184ca8;
  local_350 = PTR_s_update_7105184cc0;
  puStack_348 = PTR_FUN_7105184cc8;
  local_360 = PTR_s_close_7105184cb0;
  puStack_358 = PTR_FUN_7105184cb8;
  local_330 = PTR_s_get_result_7105184ce0;
  puStack_328 = PTR_FUN_7105184ce8;
  local_340 = PTR_s_is_busy_7105184cd0;
  puStack_338 = PTR_FUN_7105184cd8;
  local_310 = (undefined *)DAT_7105184d00;
  puStack_308 = (undefined *)DAT_7105184d08;
  local_320 = PTR_s_clear_result_7105184cf0;
  puStack_318 = PTR_FUN_7105184cf8;
  FUN_71038f7260(param_1,"MetatableLayoutSubMenu");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  puStack_358 = (undefined *)DAT_7105184818;
  local_360 = (undefined *)DAT_7105184810;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  local_370 = PTR_DAT_7105184800;
  puStack_368 = PTR_FUN_7105184808;
  FUN_71038f7260(param_1,"MetatableLayoutButtonSelectorConfig");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),
                 "MetatableLayoutButtonSelectorConfig");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"LayoutButtonSelectorConfig");
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"LAYOUTBUTTONSELECTOR_SELECTION_TYPE_DIRECTIONAL",&DAT_71042b2a84
                  );
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 1;
      FUN_7103375650((long *)*puVar8,"LAYOUTBUTTONSELECTOR_SELECTION_TYPE_SEQUENTIAL",
                     &DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 2;
        FUN_7103375650((long *)*puVar8,"LAYOUTBUTTONSELECTOR_SELECTION_TYPE_GRID",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 3;
          FUN_7103375650((long *)*puVar8,"LAYOUTBUTTONSELECTOR_SELECTION_TYPE_POINTER",
                         &DAT_71042b2a84);
          if ((long *)*puVar8 != (long *)0x0) {
            param_4 = 4;
            FUN_7103375650((long *)*puVar8,"LAYOUTBUTTONSELECTOR_SELECTION_TYPE_AABB",
                           &DAT_71042b2a84);
          }
        }
      }
    }
  }
  local_360 = (undefined *)DAT_7105184d20;
  puStack_358 = (undefined *)DAT_7105184d28;
  local_370 = PTR_DAT_7105184d10;
  puStack_368 = PTR_FUN_7105184d18;
  FUN_71038f7260(param_1,"MetatableLayoutRangeSliderConfig");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),
                 "MetatableLayoutRangeSliderConfig");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"LayoutRangeSliderConfig");
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"LAYOUTRANGESLIDER_SLIDER_MODE_HORIZONTAL",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 1;
      FUN_7103375650((long *)*puVar8,"LAYOUTRANGESLIDER_SLIDER_MODE_VERTICAL",&DAT_71042b2a84);
    }
  }
  memcpy(&local_370,&PTR_s_fade_in_7105184e90,0x90);
  FUN_71038f7260(param_1,"MetatableFadeManager");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableFadeManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"FadeManager");
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"FADE_LENGTH_SHORT",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 1;
      FUN_7103375650((long *)*puVar8,"FADE_LENGTH_MIDDLE",&DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 2;
        FUN_7103375650((long *)*puVar8,"FADE_LENGTH_LONG",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 1;
          FUN_7103375650((long *)*puVar8,"FADE_LENGTH_DEFAULT",&DAT_71042b2a84);
        }
      }
    }
  }
  memcpy(&local_370,&PTR_s_open_database_7105184f20,0x90);
  FUN_71038f7260(param_1,"MetatableAppPopupManager");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableAppPopupManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"AppPopupManager");
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"POPUP_RESULT_NONE",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 1;
      FUN_7103375650((long *)*puVar8,"POPUP_RESULT_BUTTON1",&DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 2;
        FUN_7103375650((long *)*puVar8,"POPUP_RESULT_BUTTON2",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 1;
          FUN_7103375650((long *)*puVar8,"POPUP_RESULT_OK",&DAT_71042b2a84);
          if ((long *)*puVar8 != (long *)0x0) {
            param_4 = 2;
            FUN_7103375650((long *)*puVar8,"POPUP_RESULT_YES",&DAT_71042b2a84);
            if ((long *)*puVar8 != (long *)0x0) {
              param_4 = 1;
              FUN_7103375650((long *)*puVar8,"POPUP_RESULT_NO",&DAT_71042b2a84);
            }
          }
        }
      }
    }
  }
  local_360 = PTR_s_end_screen_blur_7105184fc0;
  puStack_358 = PTR_FUN_7105184fc8;
  local_370 = PTR_s_begin_screen_blur_7105184fb0;
  puStack_368 = PTR_FUN_7105184fb8;
  local_340 = (undefined *)DAT_7105184fe0;
  puStack_338 = (undefined *)DAT_7105184fe8;
  local_350 = PTR_s_reset_screen_blur_7105184fd0;
  puStack_348 = PTR_FUN_7105184fd8;
  FUN_71038f7260(param_1,"MetatableUiGraphicsManager");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableUiGraphicsManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"UiGraphicsManager");
  memcpy(&local_370,&PTR_s_set_default_settings_7105184ff0,0x200);
  FUN_71038f7260(param_1,"MetatableComFrameActor");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableComFrameActor");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"ComFrameActor");
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMETYPE_NORMAL",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 0;
      FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_MELEE",&DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 1;
        FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_OTHER",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 2;
          FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_SPIRITS",&DAT_71042b2a84);
          if ((long *)*puVar8 != (long *)0x0) {
            param_4 = 3;
            FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_COLLECTION",&DAT_71042b2a84);
            if ((long *)*puVar8 != (long *)0x0) {
              param_4 = 4;
              FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_OPTION",&DAT_71042b2a84);
              if ((long *)*puVar8 != (long *)0x0) {
                param_4 = 5;
                FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_ONLINE",&DAT_71042b2a84);
                if ((long *)*puVar8 != (long *)0x0) {
                  param_4 = 6;
                  FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_HELP",&DAT_71042b2a84);
                  if ((long *)*puVar8 != (long *)0x0) {
                    param_4 = 7;
                    FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_STANDARD",&DAT_71042b2a84);
                    if ((long *)*puVar8 != (long *)0x0) {
                      param_4 = 5;
                      FUN_7103375650((long *)*puVar8,"COMFRAME_FRAMECOLOR_LOCAL",&DAT_71042b2a84);
                      if ((long *)*puVar8 != (long *)0x0) {
                        param_4 = 0;
                        FUN_7103375650((long *)*puVar8,"COMFRAME_HEADERTITLEAREA_NORMAL",
                                       &DAT_71042b2a84);
                        if ((long *)*puVar8 != (long *)0x0) {
                          param_4 = 0;
                          FUN_7103375650((long *)*puVar8,"COMFRAME_HEADERBGSIZE_SMALL",
                                         &DAT_71042b2a84);
                          if ((long *)*puVar8 != (long *)0x0) {
                            param_4 = 1;
                            FUN_7103375650((long *)*puVar8,"COMFRAME_HEADERBGSIZE_MEDIUM",
                                           &DAT_71042b2a84);
                            if ((long *)*puVar8 != (long *)0x0) {
                              param_4 = 0;
                              FUN_7103375650((long *)*puVar8,"COMFRAME_FOOTERBUTTON_NONE",
                                             &DAT_71042b2a84);
                              if ((long *)*puVar8 != (long *)0x0) {
                                param_4 = 1;
                                FUN_7103375650((long *)*puVar8,"COMFRAME_FOOTERBUTTON_MEDIUM_80",
                                               &DAT_71042b2a84);
                                if ((long *)*puVar8 != (long *)0x0) {
                                  param_4 = 2;
                                  FUN_7103375650((long *)*puVar8,"COMFRAME_FOOTERBUTTON_MEDIUM_85",
                                                 &DAT_71042b2a84);
                                  if ((long *)*puVar8 != (long *)0x0) {
                                    param_4 = 3;
                                    FUN_7103375650((long *)*puVar8,"COMFRAME_FOOTERBUTTON_MEDIUM_90"
                                                   ,&DAT_71042b2a84);
                                    if ((long *)*puVar8 != (long *)0x0) {
                                      param_4 = 4;
                                      FUN_7103375650((long *)*puVar8,
                                                     "COMFRAME_FOOTERBUTTON_MEDIUM_95",
                                                     &DAT_71042b2a84);
                                      if ((long *)*puVar8 != (long *)0x0) {
                                        param_4 = 5;
                                        FUN_7103375650((long *)*puVar8,
                                                       "COMFRAME_FOOTERBUTTON_MEDIUM_100",
                                                       &DAT_71042b2a84);
                                        if ((long *)*puVar8 != (long *)0x0) {
                                          param_4 = 6;
                                          FUN_7103375650((long *)*puVar8,
                                                         "COMFRAME_FOOTERBUTTON_LARGE_80",
                                                         &DAT_71042b2a84);
                                          if ((long *)*puVar8 != (long *)0x0) {
                                            param_4 = 7;
                                            FUN_7103375650((long *)*puVar8,
                                                           "COMFRAME_FOOTERBUTTON_LARGE_85",
                                                           &DAT_71042b2a84);
                                            if ((long *)*puVar8 != (long *)0x0) {
                                              param_4 = 8;
                                              FUN_7103375650((long *)*puVar8,
                                                             "COMFRAME_FOOTERBUTTON_LARGE_90",
                                                             &DAT_71042b2a84);
                                              if ((long *)*puVar8 != (long *)0x0) {
                                                param_4 = 9;
                                                FUN_7103375650((long *)*puVar8,
                                                               "COMFRAME_FOOTERBUTTON_LARGE_95",
                                                               &DAT_71042b2a84);
                                                if ((long *)*puVar8 != (long *)0x0) {
                                                  param_4 = 10;
                                                  FUN_7103375650((long *)*puVar8,
                                                                 "COMFRAME_FOOTERBUTTON_LARGE_100",
                                                                 &DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "COMFRAME_FOOTERMESSAGEAREA_NONE"
                                                                   ,&DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 1;
                                                      FUN_7103375650((long *)*puVar8,
                                                                                                                                          
                                                  "COMFRAME_FOOTERMESSAGEAREA_NORMAL",
                                                  &DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0;
                                                    FUN_7103375650((long *)*puVar8,
                                                                                                                                      
                                                  "COMFRAME_SHOWANIMTYPE_RESET_AND_START",
                                                  &DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 1;
                                                    FUN_7103375650((long *)*puVar8,
                                                                                                                                      
                                                  "COMFRAME_SHOWANIMTYPE_CHANGE_OUT_IN",
                                                  &DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 2;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "COMFRAME_SHOWANIMTYPE_CHANGE_IN"
                                                                   ,&DAT_71042b2a84);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_360 = (undefined *)DAT_7105184e40;
  puStack_358 = (undefined *)DAT_7105184e48;
  local_370 = PTR_s_get_over_loop_times_7105184e30;
  puStack_368 = PTR_FUN_7105184e38;
  FUN_71038f7260(param_1,"MetatableFrameSkipManager");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableFrameSkipManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"FrameSkipManager");
  local_360 = PTR_s_no_sync_get_7105184e60;
  puStack_358 = PTR_FUN_7105184e68;
  local_370 = PTR_s_setup_no_sync_seed_from_date_7105184e50;
  puStack_368 = PTR_FUN_7105184e58;
  local_340 = (undefined *)DAT_7105184e80;
  puStack_338 = (undefined *)DAT_7105184e88;
  local_350 = PTR_s_no_sync_getf_7105184e70;
  puStack_348 = PTR_FUN_7105184e78;
  FUN_71038f7260(param_1,"MetatableRandomizer");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableRandomizer");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"Randomizer");
  local_370 = PTR_s_show_bg_71051851f0;
  puStack_368 = PTR_FUN_71051851f8;
  local_350 = (undefined *)DAT_7105185210;
  puStack_348 = (undefined *)DAT_7105185218;
  local_360 = PTR_s_hide_bg_7105185200;
  puStack_358 = PTR_FUN_7105185208;
  FUN_71038f7260(param_1,"MetatableComBgActor");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableComBgActor");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"ComBgActor");
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"COMBG_KIND_MELEE",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 1;
      FUN_7103375650((long *)*puVar8,"COMBG_KIND_SPIRITS",&DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 2;
        FUN_7103375650((long *)*puVar8,"COMBG_KIND_OTHER",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 4;
          FUN_7103375650((long *)*puVar8,"COMBG_KIND_ONLINE",&DAT_71042b2a84);
          if ((long *)*puVar8 != (long *)0x0) {
            param_4 = 3;
            FUN_7103375650((long *)*puVar8,"COMBG_KIND_COLLECTION",&DAT_71042b2a84);
            if ((long *)*puVar8 != (long *)0x0) {
              param_4 = 5;
              FUN_7103375650((long *)*puVar8,"COMBG_KIND_LOCAL",&DAT_71042b2a84);
            }
          }
        }
      }
    }
  }
  memcpy(&local_370,&PTR_s_is_busy_7105185220,0x180);
  FUN_71038f7260(param_1,"MetatableUiFighterManager");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableUiFighterManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"UiFighterManager");
  memcpy(&local_370,&DAT_71051853a0,0x100);
  FUN_71038f7260(param_1,"MetatableEasing");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableEasing");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"Easing");
  memcpy(&local_370,&DAT_71051854a0,0xa0);
  FUN_71038f7260(param_1,"MetatableUiSoundManager");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableUiSoundManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"UiSoundManager");
  memcpy(&local_370,&DAT_7105185540,0xe0);
  FUN_71038f7260(param_1,"MetatableSoundToneHandle");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"UI_SE_ID_SILENT",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 1;
      FUN_7103375650((long *)*puVar8,"UI_SE_ID_CURSOR",&DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 2;
        FUN_7103375650((long *)*puVar8,"UI_SE_ID_DECIDE",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 3;
          FUN_7103375650((long *)*puVar8,"UI_SE_ID_CANCEL",&DAT_71042b2a84);
          if ((long *)*puVar8 != (long *)0x0) {
            param_4 = 4;
            FUN_7103375650((long *)*puVar8,"UI_SE_ID_ERROR",&DAT_71042b2a84);
            if ((long *)*puVar8 != (long *)0x0) {
              param_4 = 5;
              FUN_7103375650((long *)*puVar8,"UI_SE_ID_INFOWINDOW_OPEN",&DAT_71042b2a84);
              if ((long *)*puVar8 != (long *)0x0) {
                param_4 = 6;
                FUN_7103375650((long *)*puVar8,"UI_SE_ID_FAVORITE_ON",&DAT_71042b2a84);
                if ((long *)*puVar8 != (long *)0x0) {
                  param_4 = 7;
                  FUN_7103375650((long *)*puVar8,"UI_SE_ID_FAVORITE_OFF",&DAT_71042b2a84);
                  if ((long *)*puVar8 != (long *)0x0) {
                    param_4 = 8;
                    FUN_7103375650((long *)*puVar8,"UI_SE_ID_PAGE_CHANGE",&DAT_71042b2a84);
                    if ((long *)*puVar8 != (long *)0x0) {
                      param_4 = 10;
                      FUN_7103375650((long *)*puVar8,"UI_SE_ID_NONE",&DAT_71042b2a84);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memcpy(&local_370,&PTR_s_set_repeat_frame_7105183c60,0x220);
  FUN_71038f7260(param_1,"MetatableVirtualInput");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"VI_BUTTON_UP",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 1;
      FUN_7103375650((long *)*puVar8,"VI_BUTTON_DOWN",&DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 2;
        FUN_7103375650((long *)*puVar8,"VI_BUTTON_LEFT",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 3;
          FUN_7103375650((long *)*puVar8,"VI_BUTTON_RIGHT",&DAT_71042b2a84);
          if ((long *)*puVar8 != (long *)0x0) {
            param_4 = 4;
            FUN_7103375650((long *)*puVar8,"VI_BUTTON_DECIDE",&DAT_71042b2a84);
            if ((long *)*puVar8 != (long *)0x0) {
              param_4 = 5;
              FUN_7103375650((long *)*puVar8,"VI_BUTTON_CANCEL",&DAT_71042b2a84);
              if ((long *)*puVar8 != (long *)0x0) {
                param_4 = 6;
                FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA0",&DAT_71042b2a84);
                if ((long *)*puVar8 != (long *)0x0) {
                  param_4 = 7;
                  FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA1",&DAT_71042b2a84);
                  if ((long *)*puVar8 != (long *)0x0) {
                    param_4 = 8;
                    FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA2",&DAT_71042b2a84);
                    if ((long *)*puVar8 != (long *)0x0) {
                      param_4 = 9;
                      FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA3",&DAT_71042b2a84);
                      if ((long *)*puVar8 != (long *)0x0) {
                        param_4 = 10;
                        FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA4",&DAT_71042b2a84);
                        if ((long *)*puVar8 != (long *)0x0) {
                          param_4 = 0xb;
                          FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA5",&DAT_71042b2a84);
                          if ((long *)*puVar8 != (long *)0x0) {
                            param_4 = 0xc;
                            FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA6",&DAT_71042b2a84);
                            if ((long *)*puVar8 != (long *)0x0) {
                              param_4 = 0xd;
                              FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA7",&DAT_71042b2a84);
                              if ((long *)*puVar8 != (long *)0x0) {
                                param_4 = 0xe;
                                FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA8",&DAT_71042b2a84);
                                if ((long *)*puVar8 != (long *)0x0) {
                                  param_4 = 0xf;
                                  FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA9",&DAT_71042b2a84)
                                  ;
                                  if ((long *)*puVar8 != (long *)0x0) {
                                    param_4 = 0x10;
                                    FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA10",
                                                   &DAT_71042b2a84);
                                    if ((long *)*puVar8 != (long *)0x0) {
                                      param_4 = 0x11;
                                      FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA11",
                                                     &DAT_71042b2a84);
                                      if ((long *)*puVar8 != (long *)0x0) {
                                        param_4 = 0x12;
                                        FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA12",
                                                       &DAT_71042b2a84);
                                        if ((long *)*puVar8 != (long *)0x0) {
                                          param_4 = 0x13;
                                          FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA13",
                                                         &DAT_71042b2a84);
                                          if ((long *)*puVar8 != (long *)0x0) {
                                            param_4 = 0x14;
                                            FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA14",
                                                           &DAT_71042b2a84);
                                            if ((long *)*puVar8 != (long *)0x0) {
                                              param_4 = 0x15;
                                              FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA15",
                                                             &DAT_71042b2a84);
                                              if ((long *)*puVar8 != (long *)0x0) {
                                                param_4 = 0x16;
                                                FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA16",
                                                               &DAT_71042b2a84);
                                                if ((long *)*puVar8 != (long *)0x0) {
                                                  param_4 = 0x17;
                                                  FUN_7103375650((long *)*puVar8,"VI_BUTTON_EXTRA17"
                                                                 ,&DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0x18;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "VI_BUTTON_EXTRA18",
                                                                   &DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 0x19;
                                                      FUN_7103375650((long *)*puVar8,
                                                                     "VI_BUTTON_EXTRA19",
                                                                     &DAT_71042b2a84);
                                                      if ((long *)*puVar8 != (long *)0x0) {
                                                        param_4 = 0x1a;
                                                        FUN_7103375650((long *)*puVar8,
                                                                       "VI_BUTTON_EXTRA20",
                                                                       &DAT_71042b2a84);
                                                        if ((long *)*puVar8 != (long *)0x0) {
                                                          param_4 = 0x1b;
                                                          FUN_7103375650((long *)*puVar8,
                                                                         "VI_BUTTON_EXTRA21",
                                                                         &DAT_71042b2a84);
                                                          if ((long *)*puVar8 != (long *)0x0) {
                                                            param_4 = 0x1c;
                                                            FUN_7103375650((long *)*puVar8,
                                                                           "VI_BUTTON_EXTRA22",
                                                                           &DAT_71042b2a84);
                                                            if ((long *)*puVar8 != (long *)0x0) {
                                                              param_4 = 0x1d;
                                                              FUN_7103375650((long *)*puVar8,
                                                                             "VI_BUTTON_EXTRA23",
                                                                             &DAT_71042b2a84);
                                                              if ((long *)*puVar8 != (long *)0x0) {
                                                                param_4 = 0x1e;
                                                                FUN_7103375650((long *)*puVar8,
                                                                               "VI_BUTTON_EXTRA24",
                                                                               &DAT_71042b2a84);
                                                                if ((long *)*puVar8 != (long *)0x0)
                                                                {
                                                                  param_4 = 0x1f;
                                                                  FUN_7103375650((long *)*puVar8,
                                                                                 "VI_BUTTON_EXTRA25"
                                                                                 ,&DAT_71042b2a84);
                                                                  if ((long *)*puVar8 != (long *)0x0
                                                                     ) {
                                                                    param_4 = 0x20;
                                                                    FUN_7103375650((long *)*puVar8,
                                                                                                                                                                      
                                                  "VI_BUTTON_EXTRA26",&DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0x21;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "VI_BUTTON_EXTRA27",
                                                                   &DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 0x22;
                                                      FUN_7103375650((long *)*puVar8,
                                                                     "VI_BUTTON_EXTRA28",
                                                                     &DAT_71042b2a84);
                                                      if ((long *)*puVar8 != (long *)0x0) {
                                                        param_4 = 0x23;
                                                        FUN_7103375650((long *)*puVar8,
                                                                       "VI_BUTTON_EXTRA29",
                                                                       &DAT_71042b2a84);
                                                        if ((long *)*puVar8 != (long *)0x0) {
                                                          param_4 = 0x24;
                                                          FUN_7103375650((long *)*puVar8,
                                                                         "VI_RSTICK_UP",
                                                                         &DAT_71042b2a84);
                                                          if ((long *)*puVar8 != (long *)0x0) {
                                                            param_4 = 0x25;
                                                            FUN_7103375650((long *)*puVar8,
                                                                           "VI_RSTICK_DOWN",
                                                                           &DAT_71042b2a84);
                                                            if ((long *)*puVar8 != (long *)0x0) {
                                                              param_4 = 0x26;
                                                              FUN_7103375650((long *)*puVar8,
                                                                             "VI_RSTICK_LEFT",
                                                                             &DAT_71042b2a84);
                                                              if ((long *)*puVar8 != (long *)0x0) {
                                                                param_4 = 0x27;
                                                                FUN_7103375650((long *)*puVar8,
                                                                               "VI_RSTICK_RIGHT",
                                                                               &DAT_71042b2a84);
                                                                if ((long *)*puVar8 != (long *)0x0)
                                                                {
                                                                  param_4 = 0x2b;
                                                                  FUN_7103375650((long *)*puVar8,
                                                                                                                                                                  
                                                  "VI_BUTTON_PAGE_NEXT",&DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0x2c;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "VI_BUTTON_PAGE_PREV",
                                                                   &DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 0x2d;
                                                      FUN_7103375650((long *)*puVar8,
                                                                     "VI_BUTTON_SELECTOR_NEXT",
                                                                     &DAT_71042b2a84);
                                                      if ((long *)*puVar8 != (long *)0x0) {
                                                        param_4 = 0x2e;
                                                        FUN_7103375650((long *)*puVar8,
                                                                       "VI_BUTTON_SELECTOR_PREV",
                                                                       &DAT_71042b2a84);
                                                        if ((long *)*puVar8 != (long *)0x0) {
                                                          param_4 = 1;
                                                          FUN_7103375650((long *)*puVar8,
                                                                         "LIB_BUTTON_UP",
                                                                         &DAT_71042b2a84);
                                                          if ((long *)*puVar8 != (long *)0x0) {
                                                            param_4 = 2;
                                                            FUN_7103375650((long *)*puVar8,
                                                                           "LIB_BUTTON_RIGHT",
                                                                           &DAT_71042b2a84);
                                                            if ((long *)*puVar8 != (long *)0x0) {
                                                              param_4 = 4;
                                                              FUN_7103375650((long *)*puVar8,
                                                                             "LIB_BUTTON_DOWN",
                                                                             &DAT_71042b2a84);
                                                              if ((long *)*puVar8 != (long *)0x0) {
                                                                param_4 = 8;
                                                                FUN_7103375650((long *)*puVar8,
                                                                               "LIB_BUTTON_LEFT",
                                                                               &DAT_71042b2a84);
                                                                if ((long *)*puVar8 != (long *)0x0)
                                                                {
                                                                  param_4 = 0x10;
                                                                  FUN_7103375650((long *)*puVar8,
                                                                                 "LIB_BUTTON_X",
                                                                                 &DAT_71042b2a84);
                                                                  if ((long *)*puVar8 != (long *)0x0
                                                                     ) {
                                                                    param_4 = 0x20;
                                                                    FUN_7103375650((long *)*puVar8,
                                                                                   "LIB_BUTTON_A",
                                                                                   &DAT_71042b2a84);
                                                                    if ((long *)*puVar8 !=
                                                                        (long *)0x0) {
                                                                      param_4 = 0x40;
                                                                      FUN_7103375650((long *)*puVar8
                                                                                     ,"LIB_BUTTON_B"
                                                                                     ,&
                                                  DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0x80;
                                                    FUN_7103375650((long *)*puVar8,"LIB_BUTTON_Y",
                                                                   &DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 0x100;
                                                      FUN_7103375650((long *)*puVar8,"LIB_BUTTON_L",
                                                                     &DAT_71042b2a84);
                                                      if ((long *)*puVar8 != (long *)0x0) {
                                                        param_4 = 0x200;
                                                        FUN_7103375650((long *)*puVar8,
                                                                       "LIB_BUTTON_R",
                                                                       &DAT_71042b2a84);
                                                        if ((long *)*puVar8 != (long *)0x0) {
                                                          param_4 = 0x400;
                                                          FUN_7103375650((long *)*puVar8,
                                                                         "LIB_BUTTON_ZL",
                                                                         &DAT_71042b2a84);
                                                          if ((long *)*puVar8 != (long *)0x0) {
                                                            param_4 = 0x800;
                                                            FUN_7103375650((long *)*puVar8,
                                                                           "LIB_BUTTON_ZR",
                                                                           &DAT_71042b2a84);
                                                            if ((long *)*puVar8 != (long *)0x0) {
                                                              param_4 = 0x1000;
                                                              FUN_7103375650((long *)*puVar8,
                                                                             "LIB_BUTTON_LSL",
                                                                             &DAT_71042b2a84);
                                                              if ((long *)*puVar8 != (long *)0x0) {
                                                                param_4 = 0x2000;
                                                                FUN_7103375650((long *)*puVar8,
                                                                               "LIB_BUTTON_LSR",
                                                                               &DAT_71042b2a84);
                                                                if ((long *)*puVar8 != (long *)0x0)
                                                                {
                                                                  param_4 = 0x4000;
                                                                  FUN_7103375650((long *)*puVar8,
                                                                                 "LIB_BUTTON_RSL",
                                                                                 &DAT_71042b2a84);
                                                                  if ((long *)*puVar8 != (long *)0x0
                                                                     ) {
                                                                    param_4 = 0x8000;
                                                                    FUN_7103375650((long *)*puVar8,
                                                                                   "LIB_BUTTON_RSR",
                                                                                   &DAT_71042b2a84);
                                                                    if ((long *)*puVar8 !=
                                                                        (long *)0x0) {
                                                                      param_4 = 0x10000;
                                                                      FUN_7103375650((long *)*puVar8
                                                                                     ,
                                                  "LIB_BUTTON_SLIDE_L",&DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0x20000;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "LIB_BUTTON_SLIDE_R",
                                                                   &DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 0x40000;
                                                      FUN_7103375650((long *)*puVar8,
                                                                     "LIB_BUTTON_START",
                                                                     &DAT_71042b2a84);
                                                      if ((long *)*puVar8 != (long *)0x0) {
                                                        param_4 = 0x80000;
                                                        FUN_7103375650((long *)*puVar8,
                                                                       "LIB_BUTTON_SELECT",
                                                                       &DAT_71042b2a84);
                                                        if ((long *)*puVar8 != (long *)0x0) {
                                                          param_4 = 0x40000;
                                                          FUN_7103375650((long *)*puVar8,
                                                                         "LIB_BUTTON_PLUS",
                                                                         &DAT_71042b2a84);
                                                          if ((long *)*puVar8 != (long *)0x0) {
                                                            param_4 = 0x80000;
                                                            FUN_7103375650((long *)*puVar8,
                                                                           "LIB_BUTTON_MINUS",
                                                                           &DAT_71042b2a84);
                                                            if ((long *)*puVar8 != (long *)0x0) {
                                                              param_4 = 0x800;
                                                              FUN_7103375650((long *)*puVar8,
                                                                             "LIB_BUTTON_Z",
                                                                             &DAT_71042b2a84);
                                                              if ((long *)*puVar8 != (long *)0x0) {
                                                                param_4 = 0x100000;
                                                                FUN_7103375650((long *)*puVar8,
                                                                                                                                                              
                                                  "LIB_BUTTON_SLIDE_L_UP",&DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0x200000;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "LIB_BUTTON_SLIDE_L_RIGHT",
                                                                   &DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 0x400000;
                                                      FUN_7103375650((long *)*puVar8,
                                                                     "LIB_BUTTON_SLIDE_L_DOWN",
                                                                     &DAT_71042b2a84);
                                                      if ((long *)*puVar8 != (long *)0x0) {
                                                        param_4 = 0x800000;
                                                        FUN_7103375650((long *)*puVar8,
                                                                       "LIB_BUTTON_SLIDE_L_LEFT",
                                                                       &DAT_71042b2a84);
                                                        if ((long *)*puVar8 != (long *)0x0) {
                                                          param_4 = 0x1000000;
                                                          FUN_7103375650((long *)*puVar8,
                                                                         "LIB_BUTTON_SLIDE_R_UP",
                                                                         &DAT_71042b2a84);
                                                          if ((long *)*puVar8 != (long *)0x0) {
                                                            param_4 = 0x2000000;
                                                            FUN_7103375650((long *)*puVar8,
                                                                                                                                                      
                                                  "LIB_BUTTON_SLIDE_R_RIGHT",&DAT_71042b2a84);
                                                  if ((long *)*puVar8 != (long *)0x0) {
                                                    param_4 = 0x4000000;
                                                    FUN_7103375650((long *)*puVar8,
                                                                   "LIB_BUTTON_SLIDE_R_DOWN",
                                                                   &DAT_71042b2a84);
                                                    if ((long *)*puVar8 != (long *)0x0) {
                                                      param_4 = 0x8000000;
                                                      FUN_7103375650((long *)*puVar8,
                                                                     "LIB_BUTTON_SLIDE_R_LEFT",
                                                                     &DAT_71042b2a84);
                                                      if ((long *)*puVar8 != (long *)0x0) {
                                                        param_4 = 0x40000000;
                                                        FUN_7103375650((long *)*puVar8,
                                                                       "LIB_BUTTON_HOME",
                                                                       &DAT_71042b2a84);
                                                        if ((long *)*puVar8 != (long *)0x0) {
                                                          param_4 = 0xf00000;
                                                          FUN_7103375650((long *)*puVar8,
                                                                         "LIB_BUTTON_ANY_SLIDE_L",
                                                                         &DAT_71042b2a84);
                                                          if ((long *)*puVar8 != (long *)0x0) {
                                                            param_4 = 0xf000000;
                                                            FUN_7103375650((long *)*puVar8,
                                                                           "LIB_BUTTON_ANY_SLIDE_R",
                                                                           &DAT_71042b2a84);
                                                            if ((long *)*puVar8 != (long *)0x0) {
                                                              param_4 = 0xf;
                                                              FUN_7103375650((long *)*puVar8,
                                                                                                                                                          
                                                  "LIB_BUTTON_ANY_DIRECTION",&DAT_71042b2a84);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  memcpy(&local_370,&DAT_7105185620,0xc0);
  FUN_71038f7260(param_1,"MetatableNetwork");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableNetwork");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"Network");
  local_360 = PTR_s_stop_loading_71051856f0;
  puStack_358 = PTR_FUN_71051856f8;
  local_370 = PTR_s_start_loading_71051856e0;
  puStack_368 = PTR_FUN_71051856e8;
  local_340 = (undefined *)DAT_7105185710;
  puStack_338 = (undefined *)DAT_7105185718;
  local_350 = PTR_s_is_loading_7105185700;
  puStack_348 = PTR_FUN_7105185708;
  FUN_71038f7260(param_1,"MetatableLoadingManager");
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = puVar6[-2];
  puVar6[1] = puVar6[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = uVar3;
  *(undefined4 *)(puVar6 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableLoadingManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"LoadingManager");
  if ((long *)*puVar8 != (long *)0x0) {
    param_4 = 0;
    FUN_7103375650((long *)*puVar8,"LOADING_CAUSE_LOAD",&DAT_71042b2a84);
    if ((long *)*puVar8 != (long *)0x0) {
      param_4 = 2;
      FUN_7103375650((long *)*puVar8,"LOADING_CAUSE_NETWORK",&DAT_71042b2a84);
      if ((long *)*puVar8 != (long *)0x0) {
        param_4 = 6;
        FUN_7103375650((long *)*puVar8,"LOADING_CAUSE_ALL",&DAT_71042b2a84);
        if ((long *)*puVar8 != (long *)0x0) {
          param_4 = 0;
          FUN_7103375650((long *)*puVar8,"LOADING_OPTION_NONE",&DAT_71042b2a84);
          if ((long *)*puVar8 != (long *)0x0) {
            param_4 = 1;
            FUN_7103375650((long *)*puVar8,"LOADING_OPTION_TIPS",&DAT_71042b2a84);
            if ((long *)*puVar8 != (long *)0x0) {
              param_4 = 2;
              FUN_7103375650((long *)*puVar8,"LOADING_OPTION_MATCHUP",&DAT_71042b2a84);
            }
          }
        }
      }
    }
  }
  local_360 = PTR_s_is_already_read_7105185730;
  puStack_358 = PTR_FUN_7105185738;
  local_370 = PTR_DAT_7105185720;
  puStack_368 = PTR_FUN_7105185728;
  local_340 = (undefined *)DAT_7105185750;
  puStack_338 = (undefined *)DAT_7105185758;
  local_350 = PTR_s_is_showing_7105185740;
  puStack_348 = PTR_FUN_7105185748;
  FUN_71038f7260(param_1,"MetatableHowToPlayUtility");
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = puVar8[-2];
  puVar8[1] = puVar8[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = uVar3;
  *(undefined4 *)(puVar8 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableHowToPlayUtility");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"HowToPlayUtility");
  local_360 = PTR_DAT_7105185770;
  puStack_358 = PTR_FUN_7105185778;
  local_370 = PTR_DAT_7105185760;
  puStack_368 = PTR_FUN_7105185768;
  local_340 = (undefined *)DAT_7105185790;
  puStack_338 = (undefined *)DAT_7105185798;
  local_350 = PTR_s_is_playing_7105185780;
  puStack_348 = PTR_FUN_7105185788;
  FUN_71038f7260(param_1,"MetatableRumbleManager");
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = puVar8[-2];
  puVar8[1] = puVar8[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = uVar3;
  *(undefined4 *)(puVar8 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableRumbleManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"RumbleManager");
  local_360 = PTR_s_show_id_71051857b0;
  puStack_358 = PTR_FUN_71051857b8;
  local_370 = PTR_DAT_71051857a0;
  puStack_368 = PTR_FUN_71051857a8;
  local_340 = (undefined *)DAT_71051857d0;
  puStack_338 = (undefined *)DAT_71051857d8;
  local_350 = PTR_s_is_busy_71051857c0;
  puStack_348 = PTR_FUN_71051857c8;
  FUN_71038f7260(param_1,"MetatableEShopManager");
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = puVar8[-2];
  puVar8[1] = puVar8[-1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar7 + -0x10),"__index");
  FUN_71038f9510(param_1,(long *)&local_370,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar3 = FUN_710391e050(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = uVar3;
  *(undefined4 *)(puVar8 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableEShopManager");
  FUN_71038f5c00(param_1,-2);
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar7 + 0xc) < 2) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar7 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar4 = plVar5, plVar5[2] == 2)) break;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,"EShopManager");
  return;
}

