// addr:      7102137e70
// offset:    0x2137e70
// name:      FUN_7102137e70
// mangled:   
// signature: undefined __cdecl FUN_7102137e70(long param_1)


void FUN_7102137e70(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  code *pcVar4;
  byte ****ppppbVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  if (param_1 == 0) {
    FUN_7101fa11c0(0);
    FUN_7101fa3990(0);
    FUN_7101fc7f30(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectManager",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_active_find_battle_object",(long ****)FUN_7101fca100,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectWorld",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"gravity_speed_coefficient",(long ****)FUN_7101fca300,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"scale_z",(long ****)FUN_7101fca340,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"gravity_pos",(long ****)FUN_7101fca390,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_gravity_normal",(long ****)FUN_7101fca470,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_move",(long ****)FUN_7101fca4c0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"move_speed",(long ****)FUN_7101fca500,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_disable_reverse",(long ****)FUN_7101fca570,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectSlow",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_71043aea1b,(long ****)FUN_7101fca690,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"rate_request",(long ****)FUN_7101fca6d0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_estimate",(long ****)FUN_7101fca7a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_adjust",(long ****)FUN_7101fca800,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"AreaContactLog",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101fcb290,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101fcb600,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101fcb810,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7101fcfd60(0);
    FUN_7101fea810(0);
    FUN_7101ff0700(0);
    FUN_7101ff53b0(0);
    FUN_7101ff8910(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"LinkEventCapture",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101ff8cf0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101ffbf20,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101ffc140,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7101ffcf40(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"LinkEventThrow",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101ffd090,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101ffe3c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101ffe5e0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102000e80(0);
    FUN_710200a5a0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"ComboModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_710438db8b,(long ****)FUN_710200b250,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset",(long ****)FUN_710200b380,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"clear_setting",(long ****)FUN_710200b430,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"count",(long ****)FUN_710200b4e0,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_combo_input",(long ****)FUN_710200b5c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102010f10(0);
    FUN_71020173c0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"DamageTransactorImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_reaction_frame",(long ****)FUN_71020174e0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020271a0(0);
    FUN_71020296f0(0);
    FUN_710203be10(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"GroundUtility",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_dead_area",(long ****)FUN_710203cc10,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_dead_area2",(long ****)FUN_710203cff0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_degree_gravity",(long ****)FUN_710203d5a0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_ignore_geometry_move_power_stage",
                   (long ****)FUN_710203da20,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102040150(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"InkPaintModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_7104425e7a,(long ****)FUN_7102040460,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ink_max",(long ****)FUN_71020405b0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_ink",(long ****)FUN_7102040680,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_ink",(long ****)FUN_7102040860,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset_ink",(long ****)FUN_7102040a60,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_ink_color",(long ****)FUN_7102040b10,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_special_paint",(long ****)FUN_7102040c10,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102043650(0);
    FUN_7102046ac0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"KineticUtility",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"brake_speed",(long ****)FUN_7102046dc0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"limit_speed",(long ****)FUN_71020471a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset_enable_energy",(long ****)FUN_71020473d0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"clear_unable_energy",(long ****)FUN_7102047730,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_jump_speed_y",(long ****)FUN_7102047840,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_jump_initial_speed_y",(long ****)FUN_7102047a80,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_jump_initial_accel_y",(long ****)FUN_7102047d40,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102053700(0);
    FUN_7102056920(0);
    FUN_71020574a0(0);
    FUN_710205c800(0);
    FUN_7102068680(0);
    FUN_710206ac10(0);
    FUN_710206e930(0);
    FUN_71020700d0(0);
    FUN_7102072870(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"ShadowModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_draw",(long ****)FUN_7102072b30,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_draw_status",(long ****)FUN_7102072cd0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_size",(long ****)FUN_7102072e40,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_offset_y",(long ****)FUN_7102073010,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102074f80(0);
    FUN_7102078920(0);
    FUN_710207c4f0(0);
    FUN_71020800c0(0);
    FUN_7102081760(0);
    FUN_7102087180(0);
    FUN_7102088f60(0);
    FUN_710208a6e0(0);
    FUN_710208b580(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"TurnModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_turn",(long ****)FUN_710208b760,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"end_turn",(long ****)FUN_710208bb10,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_turn",(long ****)FUN_710208bbc0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_turn_after90",(long ****)FUN_710208bc90,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_extern",(long ****)FUN_710208bcf0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_omit_intermediate",(long ****)FUN_710208bdc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ry_reverse",(long ****)FUN_710208bf30,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710208d940(0);
    FUN_7102092330(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"CancelModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_cancel",(long ****)FUN_7102092880,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"enable_cancel",(long ****)FUN_7102092950,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset",(long ****)FUN_7102092a00,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102098770(0);
    FUN_710209f330(0);
    FUN_71020a72d0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"SlopeModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_model_top_angle",(long ****)FUN_71020a7960,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"floor_diff_l",(long ****)FUN_71020a7a10,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"floor_diff_r",(long ****)FUN_71020a7ae0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"SlopeModuleSimple",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"gravity_angle_pos",(long ****)FUN_71020a7bb0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"gravity_angle",(long ****)FUN_71020a7e50,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020a8a70(0);
    FUN_71020a9880(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"FighterStatusModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fighter_status_data",(long ****)FUN_71020a9a30,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset_log_action_info",(long ****)FUN_71020a9e50,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"off_disable_intrrupt_warp",(long ****)FUN_71020a9f70,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020ad520(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"FighterStopModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_damage_stop",(long ****)FUN_71020ad890,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_damage_stop_frame",(long ****)FUN_71020ad9f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7103728630(&local_38,0,(undefined **)"FighterLuaModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"FighterWorkModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_param",(long ****)FUN_71020adcf0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_escape_air_slide_param",(long ****)FUN_71020adf20,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"FighterAreaModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"enable_fix_jostle_area",(long ****)FUN_71020ae2a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"enable_fix_jostle_area_xy",(long ****)FUN_71020ae520,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"disable_fix_jostle_area",(long ****)FUN_71020ae900,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"FighterItemModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_throw_param_member",(long ****)FUN_71020ae9a0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020b15d0(0);
    FUN_71020bbbd0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"OnCalcParamEvent",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020bbf00,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020bcab0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020bccd0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020c9380(0);
    FUN_71020cb970(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"FighterEntry",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"fighter_num",(long ****)FUN_71020cbe40,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_id",(long ****)FUN_71020cbf10,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"current_fighter_id",(long ****)FUN_71020cc100,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_71042f9222,(long ****)FUN_71020cc230,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"eat_item",(long ****)FUN_71020cc550,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"changer_object_id",(long ****)FUN_71020cc7c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020d1680(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"ItemInkPaintModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"apply_link_ink_paint",(long ****)FUN_71020d19f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"ItemDamageModuleImpl",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_smash_damage",(long ****)FUN_71020d1c40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"damage_log_value_float",(long ****)FUN_71020d1e90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"damage_log_value_int",(long ****)FUN_71020d2050,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020d3b50(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"ItemMotionAnimcmdModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fix_rate",(long ****)FUN_71020d3c70,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"stWaterAreaInfo",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d4300,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020d4390,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020d4590,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020ef8c0(0);
    FUN_71020f2800(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"Effect",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_exist",(long ****)FUN_71020f2920,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_pos",(long ****)FUN_71020f2a10,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"SoundSystem",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_default_se_decrease_level",(long ****)FUN_71020f2d70,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"Article",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_battle_object_id",(long ****)FUN_71020f2d90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"LinkEventTouchItem",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020f2eb0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020f4010,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020f4230,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020f6260(0);
    FUN_71020f8100(0);
    FUN_71020f9800(0);
    FUN_71020fae20(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"lib::BasicEvent",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020faf90,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020fb070,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020fb290,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"lib::Rect",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020fb820,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020fb8b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    pcVar4 = FUN_71020fbab0;
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020fbab0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    uVar3 = extraout_x1_01;
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
      uVar3 = extraout_x1_02;
    }
    FUN_71020fbb90(0,uVar3,pcVar4,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    local_30 = 2;
    local_38 = param_1;
    puVar2 = FUN_710391dde0(*(long *)(*(long *)(param_1 + 0x18) + 0x40),(float *)&local_38);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    FUN_7101fa11c0(param_1);
    FUN_7101fa3990(param_1);
    FUN_7101fc7f30(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"BattleObjectManager",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_active_find_battle_object",(long ****)FUN_7101fca100,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"BattleObjectWorld",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"gravity_speed_coefficient",(long ****)FUN_7101fca300,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"scale_z",(long ****)FUN_7101fca340,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"gravity_pos",(long ****)FUN_7101fca390,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_gravity_normal",(long ****)FUN_7101fca470,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_move",(long ****)FUN_7101fca4c0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"move_speed",(long ****)FUN_7101fca500,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_disable_reverse",(long ****)FUN_7101fca570,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"BattleObjectSlow",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_71043aea1b,(long ****)FUN_7101fca690,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"rate_request",(long ****)FUN_7101fca6d0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_estimate",(long ****)FUN_7101fca7a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_adjust",(long ****)FUN_7101fca800,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"AreaContactLog",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101fcb290,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101fcb600,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101fcb810,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7101fcfd60(param_1);
    FUN_7101fea810(param_1);
    FUN_7101ff0700(param_1);
    FUN_7101ff53b0(param_1);
    FUN_7101ff8910(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventCapture",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101ff8cf0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101ffbf20,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101ffc140,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7101ffcf40(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventThrow",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101ffd090,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101ffe3c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101ffe5e0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102000e80(param_1);
    FUN_710200a5a0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"ComboModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)&DAT_710438db8b,(long ****)FUN_710200b250,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset",(long ****)FUN_710200b380,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"clear_setting",(long ****)FUN_710200b430,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"count",(long ****)FUN_710200b4e0,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_combo_input",(long ****)FUN_710200b5c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102010f10(param_1);
    FUN_71020173c0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"DamageTransactorImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_reaction_frame",(long ****)FUN_71020174e0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020271a0(param_1);
    FUN_71020296f0(param_1);
    FUN_710203be10(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"GroundUtility",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_dead_area",(long ****)FUN_710203cc10,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_dead_area2",(long ****)FUN_710203cff0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_degree_gravity",(long ****)FUN_710203d5a0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_ignore_geometry_move_power_stage",
                   (long ****)FUN_710203da20,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102040150(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"InkPaintModule",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_7104425e7a,(long ****)FUN_7102040460,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ink_max",(long ****)FUN_71020405b0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_ink",(long ****)FUN_7102040680,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_ink",(long ****)FUN_7102040860,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset_ink",(long ****)FUN_7102040a60,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_ink_color",(long ****)FUN_7102040b10,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_special_paint",(long ****)FUN_7102040c10,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102043650(param_1);
    FUN_7102046ac0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"KineticUtility",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"brake_speed",(long ****)FUN_7102046dc0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"limit_speed",(long ****)FUN_71020471a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset_enable_energy",(long ****)FUN_71020473d0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"clear_unable_energy",(long ****)FUN_7102047730,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_jump_speed_y",(long ****)FUN_7102047840,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_jump_initial_speed_y",(long ****)FUN_7102047a80,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_jump_initial_accel_y",(long ****)FUN_7102047d40,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102053700(param_1);
    FUN_7102056920(param_1);
    FUN_71020574a0(param_1);
    FUN_710205c800(param_1);
    FUN_7102068680(param_1);
    FUN_710206ac10(param_1);
    FUN_710206e930(param_1);
    FUN_71020700d0(param_1);
    FUN_7102072870(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"ShadowModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"set_draw",(long ****)FUN_7102072b30,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_draw_status",(long ****)FUN_7102072cd0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_size",(long ****)FUN_7102072e40,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_offset_y",(long ****)FUN_7102073010,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102074f80(param_1);
    FUN_7102078920(param_1);
    FUN_710207c4f0(param_1);
    FUN_71020800c0(param_1);
    FUN_7102081760(param_1);
    FUN_7102087180(param_1);
    FUN_7102088f60(param_1);
    FUN_710208a6e0(param_1);
    FUN_710208b580(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"TurnModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_turn",(long ****)FUN_710208b760,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"end_turn",(long ****)FUN_710208bb10,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_turn",(long ****)FUN_710208bbc0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_turn_after90",(long ****)FUN_710208bc90,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_extern",(long ****)FUN_710208bcf0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_omit_intermediate",(long ****)FUN_710208bdc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ry_reverse",(long ****)FUN_710208bf30,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710208d940(param_1);
    FUN_7102092330(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"CancelModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"is_enable_cancel",(long ****)FUN_7102092880,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"enable_cancel",(long ****)FUN_7102092950,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset",(long ****)FUN_7102092a00,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102098770(param_1);
    FUN_710209f330(param_1);
    FUN_71020a72d0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"SlopeModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"update_model_top_angle",(long ****)FUN_71020a7960,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"floor_diff_l",(long ****)FUN_71020a7a10,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"floor_diff_r",(long ****)FUN_71020a7ae0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"SlopeModuleSimple",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"gravity_angle_pos",(long ****)FUN_71020a7bb0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"gravity_angle",(long ****)FUN_71020a7e50,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020a8a70(param_1);
    FUN_71020a9880(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"FighterStatusModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fighter_status_data",(long ****)FUN_71020a9a30,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"reset_log_action_info",(long ****)FUN_71020a9e50,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"off_disable_intrrupt_warp",(long ****)FUN_71020a9f70,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020ad520(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"FighterStopModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_damage_stop",(long ****)FUN_71020ad890,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_damage_stop_frame",(long ****)FUN_71020ad9f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7103728630(&local_38,param_1,(undefined **)"FighterLuaModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"FighterWorkModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_param",(long ****)FUN_71020adcf0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_escape_air_slide_param",(long ****)FUN_71020adf20,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"FighterAreaModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"enable_fix_jostle_area",(long ****)FUN_71020ae2a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"enable_fix_jostle_area_xy",(long ****)FUN_71020ae520,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"disable_fix_jostle_area",(long ****)FUN_71020ae900,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"FighterItemModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_throw_param_member",(long ****)FUN_71020ae9a0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020b15d0(param_1);
    FUN_71020bbbd0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"OnCalcParamEvent",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020bbf00,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020bcab0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020bccd0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020c9380(param_1);
    FUN_71020cb970(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"FighterEntry",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"fighter_num",(long ****)FUN_71020cbe40,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_id",(long ****)FUN_71020cbf10,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"current_fighter_id",(long ****)FUN_71020cc100,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_71042f9222,(long ****)FUN_71020cc230,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"eat_item",(long ****)FUN_71020cc550,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"changer_object_id",(long ****)FUN_71020cc7c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020d1680(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"ItemInkPaintModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"apply_link_ink_paint",(long ****)FUN_71020d19f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"ItemDamageModuleImpl",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_smash_damage",(long ****)FUN_71020d1c40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"damage_log_value_float",(long ****)FUN_71020d1e90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"damage_log_value_int",(long ****)FUN_71020d2050,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020d3b50(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"ItemMotionAnimcmdModuleImpl",0xfffffffd,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fix_rate",(long ****)FUN_71020d3c70,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"stWaterAreaInfo",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d4300,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020d4390,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020d4590,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020ef8c0(param_1);
    FUN_71020f2800(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"Effect",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_exist",(long ****)FUN_71020f2920,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_pos",(long ****)FUN_71020f2a10,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"SoundSystem",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"set_default_se_decrease_level",(long ****)FUN_71020f2d70,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"Article",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_battle_object_id",(long ****)FUN_71020f2d90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventTouchItem",0xfffffffd,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020f2eb0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020f4010,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020f4230,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71020f6260(param_1);
    FUN_71020f8100(param_1);
    FUN_71020f9800(param_1);
    FUN_71020fae20(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"lib::BasicEvent",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020faf90,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020fb070,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020fb290,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"lib::Rect",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020fb820,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020fb8b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    pcVar4 = FUN_71020fbab0;
    FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020fbab0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    uVar3 = extraout_x1;
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
      uVar3 = extraout_x1_00;
    }
    FUN_71020fbb90(param_1,uVar3,pcVar4,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  }
  return;
}

