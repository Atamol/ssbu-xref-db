// addr:      710223ff20
// offset:    0x223ff20
// name:      FUN_710223ff20
// mangled:   
// signature: undefined __cdecl FUN_710223ff20(long param_1)


void FUN_710223ff20(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"sandbag",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_audience_sound_label",(long ****)FUN_710223f7d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_info_sandbag_damage",(long ****)FUN_710223f8e0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_float_battle_object_param_fly_top_angle_lw",
                 (long ****)FUN_710223f9e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_float_battle_object_param_fly_top_angle_hi",
                 (long ****)FUN_710223fa60,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_motion_kind",(long ****)FUN_710223fae0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_debug_blow_draw",(long ****)FUN_710223fba0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_finish_camera",(long ****)FUN_710223fbd0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_fly_camera",(long ****)FUN_710223fc70,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_landing_camera",(long ****)FUN_710223fc90
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_timeup_fly_camera",
                 (long ****)FUN_710223fcb0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_normal_camera",(long ****)FUN_710223fcd0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_send_message_to_get_prize",
                 (long ****)FUN_710223fcf0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_effect_no_pause",(long ****)FUN_710223fe00,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

