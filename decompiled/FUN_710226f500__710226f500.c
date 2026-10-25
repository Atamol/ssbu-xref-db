// addr:      710226f500
// offset:    0x226f500
// name:      FUN_710226f500
// mangled:   
// signature: undefined __cdecl FUN_710226f500(long param_1)


void FUN_710226f500(long param_1)

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
    FUN_7102219310(0);
    FUN_7102235da0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"backshield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_backshield",(long ****)FUN_7102237fc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_visible_backshield",(long ****)FUN_71022380c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_force_visible_backshield",(long ****)FUN_71022381c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022382c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"beetle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture_beetle",(long ****)FUN_7102238380,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_71022384b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"boomerang",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_event_catch",(long ****)FUN_7102238570,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_catch_area_hit_check",(long ****)FUN_71022386c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"bossgalaga",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture_bossgalaga",(long ****)FUN_7102238ca0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_7102238d20,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"chicken",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_behind_fighter",(long ****)FUN_71022390f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_front_fighter",(long ****)FUN_71022391e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"clubshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_roll_up_area",(long ****)FUN_71022392d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"curryshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"init_log_attack_info",(long ****)FUN_7102239390,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_preview_mode",(long ****)FUN_7102239490,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"diddypeanuts",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"DIDDYPEANUTS_DIDDYPEANUTS_SCALE_MUL",(long ****)FUN_7102239540
                   ,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102239aa0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"dragoonset",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_dragoonsight2",(long ****)FUN_7102239cb0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_dragoon_camera_rectangle",(long ****)FUN_7102239eb0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"dragoonsight",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_dragoonsight_effect",(long ****)FUN_7102239f50,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rotation_with_calc_camera_direction",
                   (long ****)FUN_710223a0a0,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_dragoonsight",(long ****)FUN_710223a170,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223aa90(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"healball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"fighter_heal",(long ****)FUN_710223ac70,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223b0b0(0);
    FUN_710223c0c0(0);
    FUN_710223c740(0);
    FUN_710223d040(0);
    FUN_710223d940(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmanfruittarget_common",0xfffffffd,in_x4,in_x5,in_x6
                   ,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LANDING_LIFE",(long ****)FUN_710223dba0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HOP_Y",(long ****)FUN_710223dbe0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_LIFE",(long ****)FUN_710223dc20,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmanapple",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223dc60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223dca0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223dce0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223dd20,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223dd60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223dda0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmanbell",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223dde0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223de20,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223de60,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223dea0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223dee0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223df20,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmanboss",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223df60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223dfa0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223dfe0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e020,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e060,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e0a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmancherry",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e0e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e120,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e160,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e1a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e1e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e220,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmankey",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e260,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e2a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e2e0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e320,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e360,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e3a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmanmelon",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e3e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e420,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e460,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e4a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e4e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e520,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmanorange",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e560,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e5a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e5e0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e620,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e660,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e6a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"pacmanstrawberry",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e6e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e720,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e760,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e7a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e7e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e820,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223ef10(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"powblock",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have2_fighter",(long ****)FUN_710223f1b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have3_fighter",(long ****)FUN_710223f260,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have4_fighter",(long ****)FUN_710223f310,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have5_fighter",(long ****)FUN_710223f3c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"poweresa",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_HIT_SPEED_Y",(long ****)FUN_710223f470,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_ACCEL_Y",(long ****)FUN_710223f4b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_LIFE",(long ****)FUN_710223f4f0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_HIT_DATA_SIZE",(long ****)FUN_710223f530,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_SHAPE_TYPE",(long ****)FUN_710223f570,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_HEAL_BASE",(long ****)FUN_710223f5b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"robotgyro",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ROBOTGYRO_MOVE_SPEED",(long ****)FUN_710223f5f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ROBOTGYRO_MOVE_BASE_FRAME",(long ****)FUN_710223f630,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ROBOTGYRO_MOVE_RANDOM_FRAME",(long ****)FUN_710223f670,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"rocketbelt",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_energy_max_frame",(long ****)FUN_710223f6b0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_rocketbelt_eject",(long ****)FUN_710223f6f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223ff20(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"sensorbomb",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_flashing_color",(long ****)FUN_71022400a0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)&DAT_71043bc2f4,0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"request_bg_effect",(long ****)FUN_71022403d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"smartbomb",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_kumite_mode",(long ****)FUN_7102240470,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"smashball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_training_mode",(long ****)FUN_7102240520,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_post_effect",(long ****)FUN_71022405e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"force_clear_post_effect",(long ****)FUN_7102240760,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_auto_handi",(long ****)FUN_7102240890,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"escape_from_fighter",(long ****)FUN_7102240940,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"chase_fighter",(long ****)FUN_7102240a00,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_equip_draw_ability_num",(long ****)FUN_7102240ac0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"snakegrenade",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_710425cf6a,(long ****)FUN_7102240c30,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_bomb_link_event",(long ****)FUN_7102240c70,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"staff",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_have_constraint_offset",(long ****)FUN_7102240db0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_default_constraint_offset",(long ****)FUN_7102241300,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"st_shell",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"entry_to_stage",(long ****)FUN_7102241400,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"superleaf",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_superleaf_eject",(long ****)FUN_71022414e0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_position_l",(long ****)FUN_71022415e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_position_r",(long ****)FUN_71022416e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_rotation_l",(long ****)FUN_71022417e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_rotation_r",(long ****)FUN_71022418e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_scale_l",(long ****)FUN_71022419e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_scale_r",(long ****)FUN_7102241ab0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"wariobike",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"WARIO_WARIOBIKE_BIKE_HP_DAMAGE_EFFECT",
                   (long ****)FUN_7102241b80,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_created_fighter_id",(long ****)FUN_7102241bc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"warpstar",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"clear_collision_info",(long ****)FUN_7102241cb0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102242610(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)&DAT_71042f65de,0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"WOOD_LIFE",(long ****)FUN_7102242990,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"free_log_group",(long ****)FUN_71022429d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"andross",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_andross_position",(long ****)FUN_7102242a90,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"androssshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"hit_check",(long ****)FUN_7102242b10,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_valid_pos_z",(long ****)FUN_7102242bd0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102243740(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"ghirahim",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_shield",(long ****)FUN_7102243850,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"jeffpencilrocket",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_hit_fighter",(long ****)FUN_7102243910,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"metroid",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_attack_ice",(long ****)FUN_7102243ac0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"midna",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_7102243c50,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"throw_attack",(long ****)FUN_7102243dc0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"monsters",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_initialize_position",(long ****)FUN_7102243e80,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"make_list_fighter",(long ****)FUN_7102243fc0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter",(long ****)FUN_7102244110,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7103728630(&local_38,0,(undefined **)"motherbrain",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"motherbrainshot2",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_attack_offset_and_size_to_work",(long ****)FUN_7102244490,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"nightmare",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_nightmare_position",(long ****)FUN_71022445f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_nightmare_scale",(long ****)FUN_7102244670,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_visibility_of_fighter_and_item",(long ****)FUN_71022446d0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"nintendogshi",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_nintendogs_effect",(long ****)FUN_7102244810,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_training_camera_zoom",(long ****)FUN_7102244960,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"change_camera_type_melee",(long ****)FUN_71022449b0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)&DAT_71042c36f5,0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"yorokobemo",(long ****)FUN_7102244a30,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"healdamo",(long ****)FUN_7102244af0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"stealdamo",(long ****)FUN_7102244bb0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"skullkid",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"can_flip",(long ****)FUN_7102244c70,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_spycloak_sub",(long ****)FUN_7102244cc0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_flip_sub",(long ****)FUN_7102244e00,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"fill_screen",(long ****)FUN_7102244f40,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"tvgame",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_devil_mode",(long ****)FUN_7102245100,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_devil_interpolate_rate",(long ****)FUN_7102245210,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_7102245350,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_info_tv15_init",(long ****)FUN_7102245410,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_info_tv15_visible",(long ****)FUN_7102245610,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_past_log",(long ****)FUN_7102245720,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"tvgameshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"show_score",(long ****)FUN_7102245830,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"info_tv15_set_visible",(long ****)FUN_71022458f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"info_tv15_gameset",(long ****)FUN_7102245a00,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"wanwan",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_neck_position",(long ****)FUN_7102245a90,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rhombus_down_y",(long ****)FUN_7102245ba0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_same_floor",(long ****)FUN_7102245ca0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_pile_edge_pos",(long ****)FUN_7102245e40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_pile_ground_movement_speed",(long ****)FUN_7102246150,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_movement",(long ****)FUN_7102246270,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_ground_height_from_x",(long ****)FUN_71022464d0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"wright",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"turn_start",(long ****)FUN_7102246680,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"meloettashot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"OnReflect",(long ****)FUN_7102246790,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ReflectOnViewFrame",(long ****)FUN_7102246ae0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"palkia",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_info_palkia_sw",(long ****)FUN_7102246ba0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_roll_offset",(long ****)FUN_7102246d20,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"cancel_camera_roll_offset",(long ****)FUN_7102246ef0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"sirnight",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_7102246fa0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"togepy",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_darkness_effect_hud",(long ****)FUN_7102247060,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"xerneas",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"powerup",(long ****)FUN_71022471e0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"zoroark",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_start",(long ****)FUN_71022472a0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_update",(long ****)FUN_7102247440,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_finish_pre",(long ****)FUN_7102247530,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_finish",(long ****)FUN_71022475f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"starring",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_7104317776,(long ****)FUN_7102247790,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"shoot",(long ****)FUN_71022478a0,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"blackball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_suction_energy",(long ****)FUN_7102247960,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_item_capture",(long ****)FUN_7102247a50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_weapon_capture",(long ****)FUN_7102247b10,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_attack_offset_back_line_z",(long ****)FUN_7102247c00,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"teamhealfield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"heal_fighters",(long ****)FUN_7102247cc0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"magicball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"choose_target",(long ****)FUN_7102247d80,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_magic_ball_param",(long ****)FUN_7102247e70,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_target",(long ****)FUN_7102248430,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_rotate_landing",(long ****)FUN_71022484f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_camera_range",(long ****)FUN_7102248680,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71022490e0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"smashballheavy",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_entry_count",(long ****)FUN_7102249380,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_training_mode",(long ****)FUN_71022493c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_post_effect",(long ****)FUN_7102249480,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"force_clear_post_effect",(long ****)FUN_7102249600,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_auto_handi",(long ****)FUN_7102249730,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"robinlift",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture",(long ****)FUN_71022497e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_clatter",(long ****)FUN_7102249910,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"cyborg",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022499d0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"guile",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_shield",(long ****)FUN_7102249a90,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710224bda0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"metamon",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_metamon_fighter",(long ****)FUN_710224bfd0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_loaded_metamon_fighter",(long ****)FUN_710224c0c0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_metamon_fighter",(long ****)FUN_710224c1b0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"end_metamon_fighter",(long ****)FUN_710224c290,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"akira",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_all_shield",(long ****)FUN_710224c330,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_bullet_shield",(long ****)FUN_710224c3f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"kawasaki",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_toss",(long ****)FUN_710224c4b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_cook_end",(long ****)FUN_710224c900,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_toss_object",(long ****)FUN_710224c9f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item_have",(long ****)FUN_710224cab0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"item_throw",(long ****)FUN_710224cbc0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"lioleus",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_landing",(long ****)FUN_710224ce40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item",(long ****)FUN_710224d240,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_area_down",(long ****)FUN_710224d5c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"shovelknight",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_710224d6c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item",(long ****)FUN_710224d780,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"nassya",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"setup_collision_right",(long ****)FUN_710224d9c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"setup_collision_left",(long ****)FUN_710224db90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_collision_right",(long ****)FUN_710224dd60,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_collision_left",(long ****)FUN_710224de50,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_camera_range",(long ****)FUN_710224df40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"mimikkyu",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_captured_fighter_visibility_and_hit",
                   (long ****)FUN_710224e190,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_captured_fighter_scale",(long ****)FUN_710224e250,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_captured_fighter_scale",(long ****)FUN_710224e3e0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_release_mimikkyu",(long ****)FUN_710224e4d0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"solgaleo",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_effect_pause",(long ****)FUN_710224e670,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"lunala",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_ray_target_pos",(long ****)FUN_710224e7f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_look_at_rotation",(long ****)FUN_710224e8f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"kasey",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_warp_start",(long ****)FUN_710224f030,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_warp_finish",(long ****)FUN_710224f140,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_subject_range",(long ****)FUN_710224f510,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_limit_range",(long ****)FUN_710224f650,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"marshadow",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"move_x_edge_stop",(long ****)FUN_710224f6d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71022505d0(0);
    FUN_71022513a0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"rodin",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_position",(long ****)FUN_71022514b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rotation",(long ****)FUN_7102251610,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_item_provide",(long ****)FUN_7102251770,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item_have",(long ****)FUN_7102251860,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"item_throw",(long ****)FUN_7102251970,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"knuckles",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rebound_speed",(long ****)FUN_7102251c50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102252c20(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"sukapon",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_all_shield",(long ****)FUN_7102252d60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_bullet_shield",(long ****)FUN_7102252e20,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"driver",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_catch",(long ****)FUN_7102252ee0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_auto_handi",(long ****)FUN_7102252ff0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rhombus_front_pos",(long ****)FUN_7102253150,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_attack",(long ****)FUN_7102253290,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_center_pos",(long ****)FUN_71022533b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"bomberman",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_search",(long ****)FUN_7102253490,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item_have",(long ****)FUN_7102253580,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"put_item",(long ****)FUN_7102253710,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"bombermanbomb",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_event_bomberman_hit",(long ****)FUN_7102253a30,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"springman",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_joint_rotate_target",(long ****)FUN_7102253d90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_all_shield",(long ****)FUN_7102254180,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_bullet_shield",(long ****)FUN_7102254240,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102255970(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"galleom",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_7102255c00,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_clatter",(long ****)FUN_7102255d90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_throw",(long ****)FUN_7102256180,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_disable_clatter",(long ****)FUN_71022562c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"linkarrow",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"LINKARROW_ITEM_LIFE",(long ****)FUN_71022563d0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"LINKARROW_ITEM_THROW_DEGREE",(long ****)FUN_7102256410,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"crazyhandbomb",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_event_parents_invincible_frame",(long ****)FUN_7102256450
                   ,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"baitocrane",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture_baitocrane",(long ****)FUN_71022565f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_71022566f0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_camera_range",(long ****)FUN_71022567b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"attack_active_part_num",(long ****)FUN_7102256a00,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"dracula2",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"notify_melee_start_to_hud_manager",(long ****)FUN_7102256b00,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102257e00(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"masterhandpaintball",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"init_color_work",(long ****)FUN_7102257f40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"crazyhandsearchlight",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_flower_damage",(long ****)FUN_71022580c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"crazyhandgravityball",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_catch_start_event",(long ****)FUN_71022582e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_catch_end_event",(long ****)FUN_71022583d0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_catch_cut_event",(long ****)FUN_71022584c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"wilycapsule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"search_target",(long ****)FUN_71022585e0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_damage_attacker_id",(long ****)FUN_71022589a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"flyandhand",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_zoom_out",(long ****)FUN_7102258aa0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"revert_camera",(long ****)FUN_7102258b60,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_range_center_pos",(long ****)FUN_7102258b80,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_range",(long ****)FUN_7102258bf0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_range",(long ****)FUN_7102258f50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"vince",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fighter_vince_status",(long ****)FUN_7102258fd0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_battle_object_id",(long ****)FUN_7102259190,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"snakecbox",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_area_lr",(long ****)FUN_7102259250,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"marxchaseeye",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"adjust_model_constraint_posture",(long ****)FUN_71022593a0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"kiila",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"can_exist",(long ****)FUN_7102259470,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)&DAT_710438a8c0,0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"can_exist",(long ****)FUN_71022594b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_look_at_rotation",(long ****)FUN_71022594f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"kiilalaser",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"copy_attack_data",(long ****)FUN_7102259c30,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"kiilashockwave",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_center_pos",(long ****)FUN_7102259d50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710225b390(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"kiilatorrent",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_attack_data",(long ****)FUN_710225b5f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"darztearup",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fighter_slow",(long ****)FUN_710225b710,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    pcVar4 = FUN_710225b870;
    FUN_7103728bf0(&local_38,(uint *)"cancel_fighter_slow",(long ****)FUN_710225b870,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    uVar3 = extraout_x1_01;
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
      uVar3 = extraout_x1_02;
    }
    FUN_710225b990(0,uVar3,pcVar4,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
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
    FUN_7102219310(param_1);
    FUN_7102235da0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"backshield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_backshield",(long ****)FUN_7102237fc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_visible_backshield",(long ****)FUN_71022380c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_force_visible_backshield",(long ****)FUN_71022381c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022382c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"beetle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture_beetle",(long ****)FUN_7102238380,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_71022384b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"boomerang",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_event_catch",(long ****)FUN_7102238570,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_catch_area_hit_check",(long ****)FUN_71022386c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"bossgalaga",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture_bossgalaga",(long ****)FUN_7102238ca0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_7102238d20,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"chicken",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_behind_fighter",(long ****)FUN_71022390f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_front_fighter",(long ****)FUN_71022391e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"clubshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_roll_up_area",(long ****)FUN_71022392d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"curryshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"init_log_attack_info",(long ****)FUN_7102239390,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_preview_mode",(long ****)FUN_7102239490,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"diddypeanuts",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"DIDDYPEANUTS_DIDDYPEANUTS_SCALE_MUL",(long ****)FUN_7102239540
                   ,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102239aa0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"dragoonset",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_dragoonsight2",(long ****)FUN_7102239cb0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_dragoon_camera_rectangle",(long ****)FUN_7102239eb0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"dragoonsight",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"set_dragoonsight_effect",(long ****)FUN_7102239f50,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rotation_with_calc_camera_direction",
                   (long ****)FUN_710223a0a0,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"calc_dragoonsight",(long ****)FUN_710223a170,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223aa90(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"healball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"fighter_heal",(long ****)FUN_710223ac70,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223b0b0(param_1);
    FUN_710223c0c0(param_1);
    FUN_710223c740(param_1);
    FUN_710223d040(param_1);
    FUN_710223d940(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmanfruittarget_common",0xfffffffd,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LANDING_LIFE",(long ****)FUN_710223dba0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HOP_Y",(long ****)FUN_710223dbe0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_LIFE",(long ****)FUN_710223dc20,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmanapple",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223dc60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223dca0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223dce0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223dd20,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223dd60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223dda0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmanbell",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223dde0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223de20,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223de60,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223dea0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223dee0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223df20,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmanboss",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223df60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223dfa0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223dfe0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e020,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e060,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e0a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmancherry",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e0e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e120,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e160,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e1a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e1e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e220,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmankey",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e260,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e2a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e2e0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e320,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e360,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e3a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmanmelon",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e3e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e420,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e460,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e4a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e4e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e520,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmanorange",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e560,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e5a0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e5e0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e620,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e660,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e6a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"pacmanstrawberry",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_ACCEL_Y",(long ****)FUN_710223e6e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_LIFE",(long ****)FUN_710223e720,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_REFLECTION_MAX_NUM",(long ****)FUN_710223e760,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_HIT_DATA_SIZE",(long ****)FUN_710223e7a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_SHAPE_TYPE",(long ****)FUN_710223e7e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"PACMAN_THROW_AWAY_LIFE",(long ****)FUN_710223e820,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223ef10(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"powblock",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have2_fighter",(long ****)FUN_710223f1b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have3_fighter",(long ****)FUN_710223f260,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have4_fighter",(long ****)FUN_710223f310,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_have5_fighter",(long ****)FUN_710223f3c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"poweresa",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_HIT_SPEED_Y",(long ****)FUN_710223f470,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_ACCEL_Y",(long ****)FUN_710223f4b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_LIFE",(long ****)FUN_710223f4f0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_HIT_DATA_SIZE",(long ****)FUN_710223f530,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_SHAPE_TYPE",(long ****)FUN_710223f570,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"POWERESA_HEAL_BASE",(long ****)FUN_710223f5b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"robotgyro",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ROBOTGYRO_MOVE_SPEED",(long ****)FUN_710223f5f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ROBOTGYRO_MOVE_BASE_FRAME",(long ****)FUN_710223f630,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ROBOTGYRO_MOVE_RANDOM_FRAME",(long ****)FUN_710223f670,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"rocketbelt",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_energy_max_frame",(long ****)FUN_710223f6b0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_rocketbelt_eject",(long ****)FUN_710223f6f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710223ff20(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"sensorbomb",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_flashing_color",(long ****)FUN_71022400a0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)&DAT_71043bc2f4,0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"request_bg_effect",(long ****)FUN_71022403d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"smartbomb",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_kumite_mode",(long ****)FUN_7102240470,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"smashball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_training_mode",(long ****)FUN_7102240520,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_post_effect",(long ****)FUN_71022405e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"force_clear_post_effect",(long ****)FUN_7102240760,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_auto_handi",(long ****)FUN_7102240890,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"escape_from_fighter",(long ****)FUN_7102240940,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"chase_fighter",(long ****)FUN_7102240a00,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_equip_draw_ability_num",(long ****)FUN_7102240ac0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"snakegrenade",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)&DAT_710425cf6a,(long ****)FUN_7102240c30,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_bomb_link_event",(long ****)FUN_7102240c70,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"staff",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_have_constraint_offset",(long ****)FUN_7102240db0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_default_constraint_offset",(long ****)FUN_7102241300,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"st_shell",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"entry_to_stage",(long ****)FUN_7102241400,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"superleaf",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_superleaf_eject",(long ****)FUN_71022414e0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_position_l",(long ****)FUN_71022415e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_position_r",(long ****)FUN_71022416e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_rotation_l",(long ****)FUN_71022417e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_rotation_r",(long ****)FUN_71022418e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_scale_l",(long ****)FUN_71022419e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_joint_scale_r",(long ****)FUN_7102241ab0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"wariobike",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"WARIO_WARIOBIKE_BIKE_HP_DAMAGE_EFFECT",
                   (long ****)FUN_7102241b80,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_created_fighter_id",(long ****)FUN_7102241bc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"warpstar",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"clear_collision_info",(long ****)FUN_7102241cb0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102242610(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)&DAT_71042f65de,0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"WOOD_LIFE",(long ****)FUN_7102242990,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"free_log_group",(long ****)FUN_71022429d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"andross",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_andross_position",(long ****)FUN_7102242a90,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"androssshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"hit_check",(long ****)FUN_7102242b10,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_valid_pos_z",(long ****)FUN_7102242bd0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102243740(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"ghirahim",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_shield",(long ****)FUN_7102243850,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"jeffpencilrocket",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_hit_fighter",(long ****)FUN_7102243910,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"metroid",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_attack_ice",(long ****)FUN_7102243ac0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"midna",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_7102243c50,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"throw_attack",(long ****)FUN_7102243dc0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"monsters",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_initialize_position",(long ****)FUN_7102243e80,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"make_list_fighter",(long ****)FUN_7102243fc0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter",(long ****)FUN_7102244110,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7103728630(&local_38,param_1,(undefined **)"motherbrain",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"motherbrainshot2",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_attack_offset_and_size_to_work",(long ****)FUN_7102244490,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"nightmare",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_nightmare_position",(long ****)FUN_71022445f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_stage_nightmare_scale",(long ****)FUN_7102244670,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_visibility_of_fighter_and_item",(long ****)FUN_71022446d0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"nintendogshi",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"set_nintendogs_effect",(long ****)FUN_7102244810,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_training_camera_zoom",(long ****)FUN_7102244960,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"change_camera_type_melee",(long ****)FUN_71022449b0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)&DAT_71042c36f5,0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"yorokobemo",(long ****)FUN_7102244a30,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"healdamo",(long ****)FUN_7102244af0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"stealdamo",(long ****)FUN_7102244bb0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"skullkid",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"can_flip",(long ****)FUN_7102244c70,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_spycloak_sub",(long ****)FUN_7102244cc0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_flip_sub",(long ****)FUN_7102244e00,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"fill_screen",(long ****)FUN_7102244f40,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"tvgame",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_devil_mode",(long ****)FUN_7102245100,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_devil_interpolate_rate",(long ****)FUN_7102245210,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_7102245350,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_info_tv15_init",(long ****)FUN_7102245410,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_info_tv15_visible",(long ****)FUN_7102245610,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_past_log",(long ****)FUN_7102245720,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"tvgameshot",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"show_score",(long ****)FUN_7102245830,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"info_tv15_set_visible",(long ****)FUN_71022458f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"info_tv15_gameset",(long ****)FUN_7102245a00,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"wanwan",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_neck_position",(long ****)FUN_7102245a90,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rhombus_down_y",(long ****)FUN_7102245ba0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_same_floor",(long ****)FUN_7102245ca0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_pile_edge_pos",(long ****)FUN_7102245e40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_pile_ground_movement_speed",(long ****)FUN_7102246150,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_movement",(long ****)FUN_7102246270,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_ground_height_from_x",(long ****)FUN_71022464d0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"wright",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"turn_start",(long ****)FUN_7102246680,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"meloettashot",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"OnReflect",(long ****)FUN_7102246790,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"ReflectOnViewFrame",(long ****)FUN_7102246ae0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"palkia",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_info_palkia_sw",(long ****)FUN_7102246ba0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_roll_offset",(long ****)FUN_7102246d20,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"cancel_camera_roll_offset",(long ****)FUN_7102246ef0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"sirnight",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_7102246fa0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"togepy",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_darkness_effect_hud",(long ****)FUN_7102247060,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"xerneas",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"powerup",(long ****)FUN_71022471e0,ppppbVar5,in_x4,in_x5,in_x6
                   ,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"zoroark",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_start",(long ****)FUN_71022472a0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_update",(long ****)FUN_7102247440,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_finish_pre",(long ****)FUN_7102247530,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_final_finish",(long ****)FUN_71022475f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"starring",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)&DAT_7104317776,(long ****)FUN_7102247790,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"shoot",(long ****)FUN_71022478a0,ppppbVar5,in_x4,in_x5,in_x6,
                   in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"blackball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_suction_energy",(long ****)FUN_7102247960,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_item_capture",(long ****)FUN_7102247a50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_weapon_capture",(long ****)FUN_7102247b10,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_attack_offset_back_line_z",(long ****)FUN_7102247c00,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"teamhealfield",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"heal_fighters",(long ****)FUN_7102247cc0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"magicball",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"choose_target",(long ****)FUN_7102247d80,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_magic_ball_param",(long ****)FUN_7102247e70,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_target",(long ****)FUN_7102248430,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_rotate_landing",(long ****)FUN_71022484f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_camera_range",(long ****)FUN_7102248680,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71022490e0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"smashballheavy",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_entry_count",(long ****)FUN_7102249380,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_training_mode",(long ****)FUN_71022493c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_post_effect",(long ****)FUN_7102249480,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"force_clear_post_effect",(long ****)FUN_7102249600,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_auto_handi",(long ****)FUN_7102249730,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"robinlift",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture",(long ****)FUN_71022497e0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_clatter",(long ****)FUN_7102249910,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"cyborg",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022499d0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"guile",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_shield",(long ****)FUN_7102249a90,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710224bda0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"metamon",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"load_metamon_fighter",(long ****)FUN_710224bfd0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_loaded_metamon_fighter",(long ****)FUN_710224c0c0,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_metamon_fighter",(long ****)FUN_710224c1b0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"end_metamon_fighter",(long ****)FUN_710224c290,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"akira",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_all_shield",(long ****)FUN_710224c330,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_bullet_shield",(long ****)FUN_710224c3f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"kawasaki",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_toss",(long ****)FUN_710224c4b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_cook_end",(long ****)FUN_710224c900,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_toss_object",(long ****)FUN_710224c9f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item_have",(long ****)FUN_710224cab0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"item_throw",(long ****)FUN_710224cbc0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"lioleus",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_landing",(long ****)FUN_710224ce40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item",(long ****)FUN_710224d240,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_area_down",(long ****)FUN_710224d5c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"shovelknight",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_710224d6c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item",(long ****)FUN_710224d780,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"nassya",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"setup_collision_right",(long ****)FUN_710224d9c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"setup_collision_left",(long ****)FUN_710224db90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_collision_right",(long ****)FUN_710224dd60,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_collision_left",(long ****)FUN_710224de50,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_camera_range",(long ****)FUN_710224df40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"mimikkyu",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_captured_fighter_visibility_and_hit",
                   (long ****)FUN_710224e190,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_captured_fighter_scale",(long ****)FUN_710224e250,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_captured_fighter_scale",(long ****)FUN_710224e3e0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_release_mimikkyu",(long ****)FUN_710224e4d0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"solgaleo",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_effect_pause",(long ****)FUN_710224e670,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"lunala",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_ray_target_pos",(long ****)FUN_710224e7f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_look_at_rotation",(long ****)FUN_710224e8f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"kasey",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_warp_start",(long ****)FUN_710224f030,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_warp_finish",(long ****)FUN_710224f140,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_subject_range",(long ****)FUN_710224f510,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_limit_range",(long ****)FUN_710224f650,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"marshadow",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"move_x_edge_stop",(long ****)FUN_710224f6d0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_71022505d0(param_1);
    FUN_71022513a0(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"rodin",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_position",(long ****)FUN_71022514b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rotation",(long ****)FUN_7102251610,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"check_item_provide",(long ****)FUN_7102251770,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item_have",(long ****)FUN_7102251860,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"item_throw",(long ****)FUN_7102251970,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"knuckles",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rebound_speed",(long ****)FUN_7102251c50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102252c20(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"sukapon",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_all_shield",(long ****)FUN_7102252d60,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_bullet_shield",(long ****)FUN_7102252e20,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"driver",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"link_catch",(long ****)FUN_7102252ee0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_auto_handi",(long ****)FUN_7102252ff0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_rhombus_front_pos",(long ****)FUN_7102253150,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_attack",(long ****)FUN_7102253290,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_center_pos",(long ****)FUN_71022533b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"bomberman",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_search",(long ****)FUN_7102253490,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"create_item_have",(long ****)FUN_7102253580,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"put_item",(long ****)FUN_7102253710,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"bombermanbomb",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_event_bomberman_hit",(long ****)FUN_7102253a30,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"springman",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_joint_rotate_target",(long ****)FUN_7102253d90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_all_shield",(long ****)FUN_7102254180,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_bullet_shield",(long ****)FUN_7102254240,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102255970(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"galleom",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_7102255c00,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_clatter",(long ****)FUN_7102255d90,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_throw",(long ****)FUN_7102256180,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_link_event_disable_clatter",(long ****)FUN_71022562c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"linkarrow",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"LINKARROW_ITEM_LIFE",(long ****)FUN_71022563d0,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"LINKARROW_ITEM_THROW_DEGREE",(long ****)FUN_7102256410,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"crazyhandbomb",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_event_parents_invincible_frame",(long ****)FUN_7102256450
                   ,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"baitocrane",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_capture_baitocrane",(long ****)FUN_71022565f0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_grab",(long ****)FUN_71022566f0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_camera_range",(long ****)FUN_71022567b0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"attack_active_part_num",(long ****)FUN_7102256a00,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"dracula2",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"notify_melee_start_to_hud_manager",(long ****)FUN_7102256b00,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_7102257e00(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"masterhandpaintball",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"init_color_work",(long ****)FUN_7102257f40,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"crazyhandsearchlight",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"add_flower_damage",(long ****)FUN_71022580c0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"crazyhandgravityball",0xfffffffd,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_catch_start_event",(long ****)FUN_71022582e0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_catch_end_event",(long ****)FUN_71022583d0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"send_catch_cut_event",(long ****)FUN_71022584c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"wilycapsule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"search_target",(long ****)FUN_71022585e0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_damage_attacker_id",(long ****)FUN_71022589a0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"flyandhand",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"start_zoom_out",(long ****)FUN_7102258aa0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"revert_camera",(long ****)FUN_7102258b60,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_range_center_pos",(long ****)FUN_7102258b80,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_camera_range",(long ****)FUN_7102258bf0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_camera_range",(long ****)FUN_7102258f50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"vince",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fighter_vince_status",(long ****)FUN_7102258fd0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_fighter_battle_object_id",(long ****)FUN_7102259190,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"snakecbox",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"update_area_lr",(long ****)FUN_7102259250,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"marxchaseeye",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"adjust_model_constraint_posture",(long ****)FUN_71022593a0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"kiila",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"can_exist",(long ****)FUN_7102259470,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)&DAT_710438a8c0,0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"can_exist",(long ****)FUN_71022594b0,ppppbVar5,in_x4,in_x5,
                   in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_look_at_rotation",(long ****)FUN_71022594f0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"kiilalaser",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"copy_attack_data",(long ****)FUN_7102259c30,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"kiilashockwave",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"get_center_pos",(long ****)FUN_7102259d50,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    FUN_710225b390(param_1);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"kiilatorrent",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                  );
    FUN_7103728bf0(&local_38,(uint *)"set_attack_data",(long ****)FUN_710225b5f0,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,param_1,(undefined **)"darztearup",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_fighter_slow",(long ****)FUN_710225b710,ppppbVar5,in_x4,
                   in_x5,in_x6,in_x7);
    pcVar4 = FUN_710225b870;
    FUN_7103728bf0(&local_38,(uint *)"cancel_fighter_slow",(long ****)FUN_710225b870,ppppbVar5,in_x4
                   ,in_x5,in_x6,in_x7);
    uVar3 = extraout_x1;
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
      uVar3 = extraout_x1_00;
    }
    FUN_710225b990(param_1,uVar3,pcVar4,ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  }
  return;
}

