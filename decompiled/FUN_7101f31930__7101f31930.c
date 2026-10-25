// addr:      7101f31930
// offset:    0x1f31930
// name:      FUN_7101f31930
// mangled:   
// signature: undefined __cdecl FUN_7101f31930(undefined8 * param_1, long param_2, ulong * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f31930(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  byte ***pppbVar4;
  long *plVar5;
  byte **ppbVar6;
  byte ***pppbVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long ***ppplVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  byte ****ppppbVar28;
  undefined **ppuVar29;
  long *plVar30;
  byte ****ppppbVar31;
  byte ***pppbVar32;
  byte ****ppppbVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined **local_3b0;
  ulong local_3a8;
  undefined **local_3a0;
  ulong local_398;
  undefined **local_390;
  ulong local_388;
  undefined **local_380;
  ulong local_378;
  undefined **local_370;
  ulong local_368;
  long ***local_360;
  ulong local_358;
  long ***local_350;
  ulong local_348;
  long ***local_340;
  ulong local_338;
  undefined **local_330;
  ulong local_328;
  byte ***local_320;
  undefined2 local_318;
  undefined4 local_316;
  undefined2 local_312;
  undefined4 local_310;
  undefined2 local_30c;
  undefined1 local_30a;
  undefined1 *local_308;
  undefined4 local_300;
  long alStack_2f0 [4];
  long *local_2d0;
  long alStack_2c0 [4];
  long *local_2a0;
  long alStack_290 [4];
  long *local_270;
  long alStack_260 [4];
  long *local_240;
  long alStack_230 [4];
  long *local_210;
  undefined4 local_200;
  byte ***local_1f0;
  byte ***local_1e8;
  undefined **local_1e0;
  byte ***local_1d8;
  undefined **local_1d0;
  byte ***local_1c8;
  undefined4 local_1c0 [8];
  long *local_1a0;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  undefined4 local_d0;
  undefined **local_b8;
  undefined **local_b0;
  long ***local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  long *local_80;
  undefined4 local_64;
  
  uVar13 = 3;
  FUN_71032cbf30(param_1,param_2,param_3,(byte ****)0x3,param_5,param_6,param_7,param_8);
  lVar20 = *(long *)(**(long **)*param_1 + 0x608);
  if (*(long *)(**(long **)*param_1 + 0x610) == lVar20) {
LAB_7101f3365c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(*(long *)(lVar20 + 8) + 0x10) = 0;
  lVar20 = *(long *)(**(long **)*param_1 + 0x608);
  if ((ulong)(*(long *)(**(long **)*param_1 + 0x610) - lVar20 >> 4) < 2) goto LAB_7101f3365c;
  *(undefined1 *)(*(long *)(lVar20 + 0x18) + 0x4aa) = 0;
  lVar21 = **(long **)*param_1;
  *(undefined4 *)(*(long *)(lVar21 + 0x600) + 0x494) = 0;
  lVar20 = *(long *)(lVar21 + 0x608);
  lVar21 = *(long *)(lVar21 + 0x610);
  if (lVar20 != lVar21) {
    uVar23 = (lVar21 + -0x10) - lVar20;
    uVar1 = ((uint)(uVar23 >> 4) & 0xfffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar24 = -((ulong)uVar1 & 3);
      do {
        plVar30 = (long *)(lVar20 + 8);
        lVar20 = lVar20 + 0x10;
        lVar24 = lVar24 + 1;
        *(undefined4 *)(*plVar30 + 0x494) = 0;
      } while (lVar24 != 0);
    }
    if (0x2f < uVar23) {
      do {
        *(undefined4 *)(*(long *)(lVar20 + 8) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar20 + 0x28) + 0x494) = 0;
        plVar30 = (long *)(lVar20 + 0x38);
        lVar20 = lVar20 + 0x40;
        *(undefined4 *)(*plVar30 + 0x494) = 0;
      } while (lVar21 != lVar20);
    }
  }
  FUN_71037760f0(**(long **)*param_1,1);
  lVar21 = **(long **)*param_1;
  *(undefined1 *)(lVar21 + 0x656) = 0;
  *(undefined1 *)(*(long *)(lVar21 + 0x600) + 0x4ab) = 0;
  lVar20 = *(long *)(lVar21 + 0x608);
  lVar24 = *(long *)(lVar21 + 0x610);
  if (lVar20 != lVar24) {
    uVar23 = (lVar24 + -0x10) - lVar20;
    uVar1 = ((uint)(uVar23 >> 4) & 0xfffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar25 = -((ulong)uVar1 & 3);
      do {
        plVar30 = (long *)(lVar20 + 8);
        lVar20 = lVar20 + 0x10;
        lVar25 = lVar25 + 1;
        *(undefined1 *)(*plVar30 + 0x4ab) = *(undefined1 *)(lVar21 + 0x656);
      } while (lVar25 != 0);
    }
    if (0x2f < uVar23) {
      do {
        *(undefined1 *)(*(long *)(lVar20 + 8) + 0x4ab) = *(undefined1 *)(lVar21 + 0x656);
        *(undefined1 *)(*(long *)(lVar20 + 0x18) + 0x4ab) = *(undefined1 *)(lVar21 + 0x656);
        *(undefined1 *)(*(long *)(lVar20 + 0x28) + 0x4ab) = *(undefined1 *)(lVar21 + 0x656);
        plVar30 = (long *)(lVar20 + 0x38);
        lVar20 = lVar20 + 0x40;
        *(undefined1 *)(*plVar30 + 0x4ab) = *(undefined1 *)(lVar21 + 0x656);
      } while (lVar24 != lVar20);
    }
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_bnd_edge_left",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  uVar11 = _ConstantZero;
  if (*local_1e8 != (byte **)0x0) {
    uVar11 = *(undefined8 *)((long)*local_1e8 + 0x30);
  }
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_bnd_edge_right",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  uVar35 = _ConstantZero;
  if (*local_1e8 != (byte **)0x0) {
    uVar35 = *(undefined8 *)((long)*local_1e8 + 0x30);
  }
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  fVar36 = ABS((float)uVar35 - (float)uVar11);
  *(float *)(param_1 + 0x2d) = fVar36;
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_bnd_edge_right",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (*local_1e8 == (byte **)0x0) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = ABS(*(float *)((long)*local_1e8 + 0x50));
  }
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  *(float *)((long)param_1 + 0x16c) = (fVar36 + fVar34) / *(float *)(param_1 + 0x2d);
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_mask_size_map",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (*local_1e8 == (byte **)0x0) {
    fVar36 = 0.0;
  }
  else {
    fVar36 = ABS(*(float *)((long)*local_1e8 + 0x50));
  }
  *(float *)(param_1 + 0x2e) = fVar36;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_timeline",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 1) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[2];
    param_1[2] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_timeline_front",param_3,uVar13
                 ,param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 3) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[4];
    param_1[4] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_timeline_seek",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 5) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[6];
    param_1[6] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_detail_measure",param_3,uVar13
                 ,param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 7) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[8];
    param_1[8] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_size_movie_length",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 9) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[10];
    param_1[10] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_size_map_view",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0xb) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0xc];
    param_1[0xc] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_map_seek",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0xd) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0xe];
    param_1[0xe] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_num_clip_movie",param_3,uVar13
                 ,param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0xf) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x10];
    param_1[0x10] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_num_clip_sound",param_3,uVar13
                 ,param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x11) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x12];
    param_1[0x12] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_num_clip_tellop",param_3,
                 uVar13,param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x13) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x14];
    param_1[0x14] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_stretch_left",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x15) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x16];
    param_1[0x16] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_stretch_right",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x17) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x18];
    param_1[0x18] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_offset_stretch",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x19) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x1a];
    param_1[0x1a] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_offset_pickup_center",param_3,
                 uVar13,param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x1b) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x1c];
    param_1[0x1c] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_limit_front",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x1d) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x1e];
    param_1[0x1e] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_limit_band",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x1f) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x20];
    param_1[0x20] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_size_limitband_00",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x21) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x22];
    param_1[0x22] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_size_limitband_01",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x23) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x24];
    param_1[0x24] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_map_limit_00",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x25) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x26];
    param_1[0x26] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_pos_map_limit_01",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x27) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x28];
    param_1[0x28] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_map_end",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x29) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x2a];
    param_1[0x2a] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_key_change",param_3,uVar13,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if ((byte ****)(param_1 + 0x2b) != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    uVar23 = param_1[0x2c];
    param_1[0x2c] = pppbVar7;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_limit",param_3,uVar13,param_5,
                 param_6,param_7,param_8);
  uVar11 = 15000;
  FUN_710377a310((long)&local_1f0,1);
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_map_limit",uVar11,uVar13,
                 param_5,param_6,param_7,param_8);
  uVar11 = 15000;
  FUN_710377a310((long)&local_1f0,1);
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,*(long *)*param_1 + 8,(long ****)"set_txt_map_start",uVar11,uVar13,
                 param_5,param_6,param_7,param_8);
  FUN_710377a310((long)&local_1f0,2);
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  local_318 = 0x101;
  local_310 = 1;
  local_30c = 1;
  local_30a = 1;
  plVar30 = param_1 + 0x51;
  local_320 = (byte ***)0x0;
  ppppbVar14 = &local_320;
  local_312 = 0;
  local_316 = 0;
  local_308 = &DAT_41f0000000000000;
  local_300 = 0;
  local_2d0 = (long *)0x0;
  local_2a0 = (long *)0x0;
  local_270 = (long *)0x0;
  local_240 = (long *)0x0;
  local_210 = (long *)0x0;
  local_200 = 0;
  FUN_7103770b30(plVar30,(undefined8 *)(*(long *)*param_1 + 8),(long ****)"selector",ppppbVar14,
                 param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)param_1[0x51] + 0x48))((long *)param_1[0x51],1);
  plVar5 = *(long **)(param_1[0x51] + 0x208);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x48))(plVar5,1);
  }
  FUN_71037717d0(plVar30,0,"set_parts_btn_next",ppppbVar14,param_5,param_6,param_7,param_8);
  ppppbVar14 = (byte ****)0x0;
  FUN_7103771930(param_1[0x51],0,(long ****)&DAT_0000001e,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  pppplVar12 = (long ****)0x1;
  FUN_7103771a80(plVar30,0,1);
  (**(code **)(*(long *)param_1[0x51] + 0x60))((long *)param_1[0x51],1);
  (**(code **)(*(long *)param_1[0x51] + 0x70))((long *)param_1[0x51],1);
  FUN_7103776390(&local_330,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  plVar30 = (long *)param_1[0x53];
  FUN_7103776390(&local_98,&local_330,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_7103777420(&local_b8,(long)&local_98,(long ****)"measure_grp",pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  ppuVar29 = local_b0;
  ppuVar27 = local_b8;
  if (local_b8 != local_b0) {
    ppuVar26 = local_b8;
    do {
      uVar23 = 0x492492492492492;
      FUN_7103776390(&local_88,ppuVar26,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
      FUN_7103776390(&local_1f0,&local_88,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
      FUN_7103778ab0(&local_1e0,(undefined8 *)((long)local_80 + 0x10),pppplVar12,ppppbVar14,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_1d0,(long)&local_88,(long ****)"set_txt_time",pppplVar12,ppppbVar14,
                     param_5,param_6,param_7,param_8);
      pppbVar7 = local_1e8;
      local_1c0[0] = 0xffffffff;
      ppppbVar28 = (byte ****)plVar30[1];
      if (ppppbVar28 < (byte ****)plVar30[2]) {
        *ppppbVar28 = (byte ***)&PTR_FUN_710523d988;
        ppppbVar28[1] = (byte ***)0x0;
        if (ppppbVar28 == &local_1f0) {
          ppppbVar28[2] = (byte ***)&PTR_FUN_710523d9a8;
          ppppbVar28[3] = (byte ***)0x0;
          ppppbVar28[4] = (byte ***)&PTR_FUN_710523d9a8;
          ppppbVar28[5] = (byte ***)0x0;
        }
        else {
          local_1e8 = (byte ***)0x0;
          pppbVar32 = ppppbVar28[1];
          ppppbVar28[1] = pppbVar7;
          if (pppbVar32 != (byte ***)0x0) {
            ppbVar6 = pppbVar32[3];
            pppbVar32[2] = &PTR_FUN_710523d9a8;
            pppbVar32[3] = (byte **)0x0;
            if (ppbVar6 != (byte **)0x0) {
              FUN_710392eb40((ulong)ppbVar6);
            }
            FUN_710392eb40((ulong)pppbVar32);
          }
          pppbVar7 = local_1d8;
          ppppbVar28[2] = (byte ***)&PTR_FUN_710523d9a8;
          ppppbVar28[3] = (byte ***)0x0;
          local_1d8 = (byte ***)0x0;
          pppbVar32 = ppppbVar28[3];
          ppppbVar28[3] = pppbVar7;
          if (pppbVar32 != (byte ***)0x0) {
            FUN_710392eb40((ulong)pppbVar32);
          }
          pppbVar7 = local_1c8;
          ppppbVar28[4] = (byte ***)&PTR_FUN_710523d9a8;
          ppppbVar28[5] = (byte ***)0x0;
          local_1c8 = (byte ***)0x0;
          pppbVar32 = ppppbVar28[5];
          ppppbVar28[5] = pppbVar7;
          if (pppbVar32 != (byte ***)0x0) {
            FUN_710392eb40((ulong)pppbVar32);
          }
        }
        *(undefined4 *)(ppppbVar28 + 6) = local_1c0[0];
        plVar30[1] = plVar30[1] + 0x38;
      }
      else {
        lVar20 = (long)ppppbVar28 - *plVar30 >> 3;
        uVar8 = lVar20 * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar21 = plVar30[2] - *plVar30 >> 3;
        if ((ulong)(lVar21 * 0x6db6db6db6db6db7) < 0x249249249249249) {
          uVar22 = lVar21 * -0x2492492492492492;
          uVar23 = uVar8;
          if (uVar8 <= uVar22) {
            uVar23 = uVar22;
          }
          if (uVar23 != 0) goto LAB_7101f3275c;
LAB_7101f327b8:
          lVar21 = 0;
        }
        else {
LAB_7101f3275c:
          ppplVar16 = (long ***)(uVar23 * 0x38);
          if (ppplVar16 == (long ***)0x0) {
            ppplVar16 = (long ***)0x1;
          }
          lVar21 = FUN_710392e290(0x10,ppplVar16,pppplVar12,ppppbVar14,param_5,param_6,param_7,
                                  param_8);
          if (lVar21 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              pppplVar12 = &local_a0;
              local_a0 = ppplVar16;
              uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar8 & 1) != 0) &&
                 (lVar21 = FUN_710392e290(0x10,ppplVar16,pppplVar12,ppppbVar14,param_5,param_6,
                                          param_7,param_8), lVar21 != 0)) goto LAB_7101f327bc;
            }
            goto LAB_7101f327b8;
          }
        }
LAB_7101f327bc:
        pppbVar4 = local_1c8;
        pppbVar32 = local_1d8;
        pppbVar7 = local_1e8;
        ppppbVar28 = (byte ****)(lVar21 + lVar20 * 8);
        *ppppbVar28 = (byte ***)&PTR_FUN_710523d988;
        ppppbVar28[1] = (byte ***)0x0;
        if (ppppbVar28 != &local_1f0) {
          local_1e8 = (byte ***)0x0;
          ppppbVar28[1] = pppbVar7;
        }
        lVar24 = lVar21 + lVar20 * 8;
        pppuVar17 = (undefined ***)(lVar24 + 0x10);
        *pppuVar17 = &PTR_FUN_710523d9a8;
        puVar18 = (undefined8 *)(lVar24 + 0x18);
        *puVar18 = 0;
        if (pppuVar17 != &local_1e0) {
          local_1d8 = (byte ***)0x0;
          *puVar18 = pppbVar32;
        }
        lVar24 = lVar21 + lVar20 * 8;
        pppuVar17 = (undefined ***)(lVar24 + 0x20);
        *pppuVar17 = &PTR_FUN_710523d9a8;
        puVar18 = (undefined8 *)(lVar24 + 0x28);
        *puVar18 = 0;
        if (pppuVar17 != &local_1d0) {
          local_1c8 = (byte ***)0x0;
          *puVar18 = pppbVar4;
        }
        *(undefined4 *)(lVar21 + lVar20 * 8 + 0x30) = local_1c0[0];
        ppppbVar2 = ppppbVar28 + 7;
        ppppbVar31 = (byte ****)*plVar30;
        ppppbVar3 = (byte ****)plVar30[1];
        ppppbVar33 = ppppbVar31;
        if (ppppbVar3 != ppppbVar31) {
          lVar20 = 0;
          do {
            lVar24 = (long)ppppbVar28 + lVar20;
            lVar25 = (long)ppppbVar3 + lVar20;
            *(undefined ***)(lVar24 + -0x38) = &PTR_FUN_710523d988;
            *(undefined8 *)(lVar24 + -0x30) = 0;
            if (ppppbVar3 != ppppbVar28) {
              uVar13 = *(undefined8 *)(lVar25 + -0x30);
              *(undefined8 *)(lVar25 + -0x30) = 0;
              uVar8 = *(ulong *)(lVar24 + -0x30);
              *(undefined8 *)(lVar24 + -0x30) = uVar13;
              if (uVar8 != 0) {
                uVar22 = *(ulong *)(uVar8 + 0x18);
                *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar8 + 0x18) = 0;
                if (uVar22 != 0) {
                  FUN_710392eb40(uVar22);
                }
                FUN_710392eb40(uVar8);
              }
            }
            *(undefined ***)(lVar24 + -0x28) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(lVar24 + -0x20) = 0;
            if (lVar25 == lVar24) {
              *(undefined ***)(lVar24 + -0x18) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(lVar24 + -0x10) = 0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar25 + -0x20);
              *(undefined8 *)(lVar25 + -0x20) = 0;
              uVar8 = *(ulong *)(lVar24 + -0x20);
              *(undefined8 *)(lVar24 + -0x20) = uVar13;
              if (uVar8 != 0) {
                FUN_710392eb40(uVar8);
              }
              *(undefined ***)(lVar24 + -0x18) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(lVar24 + -0x10) = 0;
              uVar13 = *(undefined8 *)(lVar25 + -0x10);
              *(undefined8 *)(lVar25 + -0x10) = 0;
              uVar8 = *(ulong *)(lVar24 + -0x10);
              *(undefined8 *)(lVar24 + -0x10) = uVar13;
              if (uVar8 != 0) {
                FUN_710392eb40(uVar8);
              }
            }
            lVar20 = lVar20 + -0x38;
            *(undefined4 *)(lVar24 + -8) = *(undefined4 *)(lVar25 + -8);
          } while ((long)ppppbVar31 - (long)ppppbVar3 != lVar20);
          ppppbVar31 = (byte ****)plVar30[1];
          ppppbVar28 = (byte ****)((long)ppppbVar28 + lVar20);
          ppppbVar33 = (byte ****)*plVar30;
        }
        plVar30[2] = lVar21 + uVar23 * 0x38;
        *plVar30 = (long)ppppbVar28;
        plVar30[1] = (long)ppppbVar2;
        while (ppppbVar31 != ppppbVar33) {
          pppbVar7 = ppppbVar31[-2];
          ppppbVar31[-3] = (byte ***)&PTR_FUN_710523d9a8;
          ppppbVar31[-2] = (byte ***)0x0;
          if (pppbVar7 != (byte ***)0x0) {
            FUN_710392eb40((ulong)pppbVar7);
          }
          pppbVar7 = ppppbVar31[-4];
          ppppbVar31[-5] = (byte ***)&PTR_FUN_710523d9a8;
          ppppbVar31[-4] = (byte ***)0x0;
          if (pppbVar7 != (byte ***)0x0) {
            FUN_710392eb40((ulong)pppbVar7);
          }
          pppbVar7 = ppppbVar31[-6];
          ppppbVar28 = ppppbVar31 + -7;
          ppppbVar31[-7] = (byte ***)&PTR_FUN_710523d988;
          ppppbVar31[-6] = (byte ***)0x0;
          ppppbVar31 = ppppbVar28;
          if (pppbVar7 != (byte ***)0x0) {
            ppbVar6 = pppbVar7[3];
            pppbVar7[2] = &PTR_FUN_710523d9a8;
            pppbVar7[3] = (byte **)0x0;
            if (ppbVar6 != (byte **)0x0) {
              FUN_710392eb40((ulong)ppbVar6);
            }
            FUN_710392eb40((ulong)pppbVar7);
          }
        }
        if (ppppbVar33 != (byte ****)0x0) {
          FUN_710392eb40((ulong)ppppbVar33);
        }
      }
      pppbVar7 = local_1c8;
      local_1d0 = &PTR_FUN_710523d9a8;
      local_1c8 = (byte ***)0x0;
      if (pppbVar7 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar7);
      }
      pppbVar7 = local_1d8;
      local_1e0 = &PTR_FUN_710523d9a8;
      local_1d8 = (byte ***)0x0;
      if (pppbVar7 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar7);
      }
      pppbVar7 = local_1e8;
      local_1f0 = (byte ***)&PTR_FUN_710523d988;
      local_1e8 = (byte ***)0x0;
      if (pppbVar7 != (byte ***)0x0) {
        ppbVar6 = pppbVar7[3];
        pppbVar7[2] = &PTR_FUN_710523d9a8;
        pppbVar7[3] = (byte **)0x0;
        if (ppbVar6 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar6);
        }
        FUN_710392eb40((ulong)pppbVar7);
      }
      plVar5 = local_80;
      local_88 = &PTR_FUN_710523d988;
      local_80 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        uVar23 = *(ulong *)((long)plVar5 + 0x18);
        *(undefined ***)((long)plVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)plVar5 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)plVar5);
      }
      ppuVar26 = ppuVar26 + 2;
      ppuVar27 = local_b8;
    } while (ppuVar26 != ppuVar29);
  }
  if (ppuVar27 != (undefined **)0x0) {
    while (local_b0 != ppuVar27) {
      ppuVar29 = local_b0 + -2;
      (**(code **)*ppuVar29)(ppuVar29);
      local_b0 = ppuVar29;
    }
    local_b0 = ppuVar27;
    FUN_710392eb40((ulong)ppuVar27);
  }
  uVar23 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  uVar23 = local_328;
  local_330 = &PTR_FUN_710523d988;
  local_328 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_340,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  pcVar15 = "clip_movie_grp";
  pppplVar12 = &local_340;
  FUN_7101f41680((uint *)param_1[0x55],0,pppplVar12,(byte ****)"clip_movie_grp",param_5,param_6,
                 param_7,param_8);
  uVar23 = local_338;
  local_340 = (long ***)&PTR_FUN_710523d988;
  local_338 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_350,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,(byte ****)pcVar15,
                 param_5,param_6,param_7,param_8);
  pcVar15 = "clip_sound_grp";
  pppplVar12 = &local_350;
  FUN_7101f41680((uint *)param_1[0x57],1,pppplVar12,(byte ****)"clip_sound_grp",param_5,param_6,
                 param_7,param_8);
  uVar23 = local_348;
  local_350 = (long ***)&PTR_FUN_710523d988;
  local_348 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_360,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,(byte ****)pcVar15,
                 param_5,param_6,param_7,param_8);
  pcVar15 = "clip_tellop_grp";
  pppplVar12 = &local_360;
  FUN_7101f41680((uint *)param_1[0x59],2,pppplVar12,(byte ****)"clip_tellop_grp",param_5,param_6,
                 param_7,param_8);
  uVar23 = local_358;
  local_360 = (long ***)&PTR_FUN_710523d988;
  local_358 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_370,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,(byte ****)pcVar15,
                 param_5,param_6,param_7,param_8);
  ppppbVar14 = (byte ****)param_1[0x5b];
  FUN_7103776390(&local_b8,&local_370,pppplVar12,(byte ****)pcVar15,param_5,param_6,param_7,param_8)
  ;
  FUN_7103776640(&local_1f0,(long)&local_b8,(byte ****)"set_parts_seek",pppplVar12,pcVar15,param_5,
                 param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (ppppbVar14 != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    pppbVar32 = ppppbVar14[1];
    ppppbVar14[1] = pppbVar7;
    if (pppbVar32 != (byte ***)0x0) {
      ppbVar6 = pppbVar32[3];
      pppbVar32[2] = &PTR_FUN_710523d9a8;
      pppbVar32[3] = (byte **)0x0;
      if (ppbVar6 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar6);
      }
      FUN_710392eb40((ulong)pppbVar32);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d988;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    ppbVar6 = pppbVar7[3];
    pppbVar7[2] = &PTR_FUN_710523d9a8;
    pppbVar7[3] = (byte **)0x0;
    if (ppbVar6 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar6);
    }
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,(long)&local_b8,(long ****)"set_pos_seek",pppplVar12,pcVar15,param_5,
                 param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (ppppbVar14 + 2 != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    pppbVar32 = ppppbVar14[3];
    ppppbVar14[3] = pppbVar7;
    if (pppbVar32 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar32);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,(long)&local_b8,(long ****)"set_pos_seek_01",pppplVar12,pcVar15,param_5,
                 param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (ppppbVar14 + 4 != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    pppbVar32 = ppppbVar14[5];
    ppppbVar14[5] = pppbVar7;
    if (pppbVar32 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar32);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,(long)ppppbVar14,(long ****)"set_txt_time",pppplVar12,pcVar15,param_5,
                 param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (ppppbVar14 + 6 != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    pppbVar32 = ppppbVar14[7];
    ppppbVar14[7] = pppbVar7;
    if (pppbVar32 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar32);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  ppuVar29 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (undefined **)0x0;
  if (ppuVar29 != (undefined **)0x0) {
    puVar9 = ppuVar29[3];
    ppuVar29[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar29[3] = (undefined *)0x0;
    if (puVar9 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar9);
    }
    FUN_710392eb40((ulong)ppuVar29);
  }
  uVar23 = local_368;
  local_370 = &PTR_FUN_710523d988;
  local_368 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_380,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,(byte ****)pcVar15,
                 param_5,param_6,param_7,param_8);
  lVar20 = param_1[0x5d];
  FUN_7103776390(&local_98,&local_380,pppplVar12,(byte ****)pcVar15,param_5,param_6,param_7,param_8)
  ;
  FUN_7103776640(&local_1f0,(long)&local_98,(byte ****)"set_parts_pickup",pppplVar12,pcVar15,param_5
                 ,param_6,param_7,param_8);
  FUN_7101f3c990(*(undefined8 **)(lVar20 + 8),&local_1f0,pppplVar12,(byte ****)pcVar15,param_5,
                 param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d988;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    uVar23 = *(ulong *)((long)pppbVar7 + 0x18);
    *(undefined ***)((long)pppbVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pppbVar7 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776640(&local_b8,(long)&local_98,(byte ****)"set_parts_pickup_01",pppplVar12,pcVar15,
                 param_5,param_6,param_7,param_8);
  FUN_7101f3c990(*(undefined8 **)(lVar20 + 0x20),&local_b8,pppplVar12,(byte ****)pcVar15,param_5,
                 param_6,param_7,param_8);
  ppuVar29 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (undefined **)0x0;
  if (ppuVar29 != (undefined **)0x0) {
    uVar23 = *(ulong *)((long)ppuVar29 + 0x18);
    *(undefined ***)((long)ppuVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppuVar29 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40((ulong)ppuVar29);
  }
  FUN_7103776640(&local_88,(long)&local_98,(byte ****)"set_parts_pickup_02",pppplVar12,pcVar15,
                 param_5,param_6,param_7,param_8);
  FUN_7101f3c990(*(undefined8 **)(lVar20 + 0x38),&local_88,pppplVar12,(byte ****)pcVar15,param_5,
                 param_6,param_7,param_8);
  plVar30 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    uVar23 = *(ulong *)((long)plVar30 + 0x18);
    *(undefined ***)((long)plVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar30 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40((ulong)plVar30);
  }
  lVar21 = *(long *)(lVar20 + 8);
  if (*(char *)(lVar21 + 0x21c) != '\x01') {
    *(undefined1 *)(lVar21 + 0x21c) = 1;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x710429257e);
    lVar21 = *(long *)(lVar20 + 8);
  }
  if (*(int *)(lVar21 + 0x204) != 9) {
    *(undefined4 *)(lVar21 + 0x204) = 9;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x71043cfd11);
  }
  lVar21 = *(long *)(lVar20 + 0x20);
  if (*(char *)(lVar21 + 0x21c) != '\x01') {
    *(undefined1 *)(lVar21 + 0x21c) = 1;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x710429257e);
    lVar21 = *(long *)(lVar20 + 0x20);
  }
  if (*(int *)(lVar21 + 0x204) != 9) {
    *(undefined4 *)(lVar21 + 0x204) = 9;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x71043cfd11);
  }
  lVar21 = *(long *)(lVar20 + 0x38);
  if (*(char *)(lVar21 + 0x21c) != '\x01') {
    *(undefined1 *)(lVar21 + 0x21c) = 1;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x710429257e);
    lVar21 = *(long *)(lVar20 + 0x38);
  }
  if (*(int *)(lVar21 + 0x204) != 9) {
    *(undefined4 *)(lVar21 + 0x204) = 9;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x71043cfd11);
  }
  uVar23 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  uVar23 = local_378;
  local_380 = &PTR_FUN_710523d988;
  local_378 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_390,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,(byte ****)pcVar15,
                 param_5,param_6,param_7,param_8);
  lVar20 = param_1[0x5f];
  FUN_7103776390(&local_98,&local_390,pppplVar12,(byte ****)pcVar15,param_5,param_6,param_7,param_8)
  ;
  FUN_7103776640(&local_b8,(long)&local_98,(byte ****)"set_parts_stretch",pppplVar12,pcVar15,param_5
                 ,param_6,param_7,param_8);
  FUN_7101f3c990(*(undefined8 **)(lVar20 + 8),&local_b8,pppplVar12,(byte ****)pcVar15,param_5,
                 param_6,param_7,param_8);
  ppuVar29 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (undefined **)0x0;
  if (ppuVar29 != (undefined **)0x0) {
    uVar23 = *(ulong *)((long)ppuVar29 + 0x18);
    *(undefined ***)((long)ppuVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppuVar29 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40((ulong)ppuVar29);
  }
  lVar21 = *(long *)(lVar20 + 8);
  if (*(char *)(lVar21 + 0x21c) != '\x01') {
    *(undefined1 *)(lVar21 + 0x21c) = 1;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x710429257e);
    lVar21 = *(long *)(lVar20 + 8);
  }
  if (*(int *)(lVar21 + 0x204) != 10) {
    *(undefined4 *)(lVar21 + 0x204) = 10;
    FUN_7103778300(0x3f800000,*(long *)(lVar21 + 8),0x71044553a7);
  }
  local_1f0 = (byte ***)&DAT_100000000;
  plVar30 = (long *)(lVar20 + 0x18);
  local_1e0 = (undefined **)CONCAT17(local_1e0._7_1_,0x1000100000001);
  ppppbVar14 = &local_1f0;
  local_1e8 = (byte ***)0x101;
  local_1d8 = (byte ***)&DAT_41f0000000000000;
  local_1d0 = (undefined **)((ulong)local_1d0 & 0xffffffff00000000);
  local_1a0 = (long *)0x0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d0 = 0;
  FUN_7103770b30(plVar30,&local_98,(long ****)"selector_stretch",ppppbVar14,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar30,0,"set_parts_arrow_left",ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar30,1,"set_parts_arrow_right",ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_7103771930(*(long *)(lVar20 + 0x18),0,(long ****)0x2,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  ppppbVar14 = (byte ****)0x1;
  FUN_7103771930(*(long *)(lVar20 + 0x18),1,(long ****)0x3,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  FUN_7103771d60(&local_88,*(long *)(lVar20 + 0x18),(long ****)0x0,ppppbVar14,param_5,param_6,
                 param_7,param_8);
  plVar5 = local_80;
  plVar10 = (long *)*local_80;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x268))(plVar10,1,1);
  }
  local_88 = &PTR_FUN_710523d9c8;
  local_80 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  pppplVar12 = (long ****)0x1;
  FUN_7103771d60(&local_88,*plVar30,(long ****)0x1,ppppbVar14,param_5,param_6,param_7,param_8);
  plVar30 = local_80;
  plVar5 = (long *)*local_80;
  if (plVar5 != (long *)0x0) {
    pppplVar12 = (long ****)0x1;
    (**(code **)(*plVar5 + 0x268))(plVar5,1);
  }
  local_88 = &PTR_FUN_710523d9c8;
  local_80 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar30);
  }
  if (alStack_100 == local_e0) {
    pcVar19 = *(code **)(*local_e0 + 0x20);
LAB_7101f33224:
    (*pcVar19)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101f33224;
  }
  if (alStack_130 == local_110) {
    pcVar19 = *(code **)(*local_110 + 0x20);
LAB_7101f33254:
    (*pcVar19)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar19 = *(code **)(*local_110 + 0x28);
    goto LAB_7101f33254;
  }
  if (alStack_160 == local_140) {
    pcVar19 = *(code **)(*local_140 + 0x20);
LAB_7101f33284:
    (*pcVar19)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar19 = *(code **)(*local_140 + 0x28);
    goto LAB_7101f33284;
  }
  if (alStack_190 == local_170) {
    pcVar19 = *(code **)(*local_170 + 0x20);
LAB_7101f332b4:
    (*pcVar19)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar19 = *(code **)(*local_170 + 0x28);
    goto LAB_7101f332b4;
  }
  if ((long *)local_1c0 == local_1a0) {
    pcVar19 = *(code **)(*local_1a0 + 0x20);
LAB_7101f332e4:
    (*pcVar19)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101f332e4;
  }
  uVar23 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  uVar23 = local_388;
  local_390 = &PTR_FUN_710523d988;
  local_388 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_3a0,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  ppppbVar28 = (byte ****)param_1[0x61];
  FUN_7103776390(&local_b8,&local_3a0,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1f0,(long)&local_b8,(byte ****)"set_parts_tlmenu",pppplVar12,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (ppppbVar28 != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    pppbVar32 = ppppbVar28[1];
    ppppbVar28[1] = pppbVar7;
    if (pppbVar32 != (byte ***)0x0) {
      ppbVar6 = pppbVar32[3];
      pppbVar32[2] = &PTR_FUN_710523d9a8;
      pppbVar32[3] = (byte **)0x0;
      if (ppbVar6 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar6);
      }
      FUN_710392eb40((ulong)pppbVar32);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d988;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    ppbVar6 = pppbVar7[3];
    pppbVar7[2] = &PTR_FUN_710523d9a8;
    pppbVar7[3] = (byte **)0x0;
    if (ppbVar6 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar6);
    }
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,(long)ppppbVar28,(long ****)"set_offset_menu",pppplVar12,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (ppppbVar28 + 2 != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    pppbVar32 = ppppbVar28[3];
    ppppbVar28[3] = pppbVar7;
    if (pppbVar32 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar32);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  FUN_7103776910(&local_1f0,(long)ppppbVar28,(long ****)"set_getsize_tlmenu",pppplVar12,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  pppbVar7 = local_1e8;
  if (ppppbVar28 + 4 != &local_1f0) {
    local_1e8 = (byte ***)0x0;
    pppbVar32 = ppppbVar28[5];
    ppppbVar28[5] = pppbVar7;
    if (pppbVar32 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar32);
    }
  }
  pppbVar7 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1e8 = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar7);
  }
  ppuVar29 = local_b0;
  *(undefined4 *)(ppppbVar28 + 6) = 2;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (undefined **)0x0;
  if (ppuVar29 != (undefined **)0x0) {
    uVar23 = *(ulong *)((long)ppuVar29 + 0x18);
    *(undefined ***)((long)ppuVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppuVar29 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40((ulong)ppuVar29);
  }
  uVar23 = local_398;
  local_3a0 = &PTR_FUN_710523d988;
  local_398 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103776390(&local_3b0,(undefined8 *)(*(long *)*param_1 + 8),pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  FUN_7101f3e4e0((undefined ***)param_1[99],&local_3b0,(byte ****)"set_parts_preview",(byte ****)0x1
                 ,param_5,param_6,param_7,param_8);
  uVar23 = local_3a8;
  local_3b0 = &PTR_FUN_710523d988;
  local_3a8 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)*param_1 + 0x10),0x710435c0ad);
  FUN_7103778760(*(long *)(*(long *)*param_1 + 0x10),0x7104421055);
  if (alStack_230 == local_210) {
    pcVar19 = *(code **)(*local_210 + 0x20);
LAB_7101f3356c:
    (*pcVar19)();
  }
  else if (local_210 != (long *)0x0) {
    pcVar19 = *(code **)(*local_210 + 0x28);
    goto LAB_7101f3356c;
  }
  if (alStack_260 == local_240) {
    pcVar19 = *(code **)(*local_240 + 0x20);
LAB_7101f3359c:
    (*pcVar19)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar19 = *(code **)(*local_240 + 0x28);
    goto LAB_7101f3359c;
  }
  if (alStack_290 == local_270) {
    pcVar19 = *(code **)(*local_270 + 0x20);
LAB_7101f335cc:
    (*pcVar19)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar19 = *(code **)(*local_270 + 0x28);
    goto LAB_7101f335cc;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar19 = *(code **)(*local_2a0 + 0x20);
  }
  else {
    if (local_2a0 == (long *)0x0) goto LAB_7101f33600;
    pcVar19 = *(code **)(*local_2a0 + 0x28);
  }
  (*pcVar19)();
LAB_7101f33600:
  if (alStack_2f0 == local_2d0) {
    pcVar19 = *(code **)(*local_2d0 + 0x20);
  }
  else {
    if (local_2d0 == (long *)0x0) {
      return;
    }
    pcVar19 = *(code **)(*local_2d0 + 0x28);
  }
  (*pcVar19)();
  return;
}

