// addr:      71020ad520
// offset:    0x20ad520
// name:      FUN_71020ad520
// mangled:   
// signature: undefined __cdecl FUN_71020ad520(long param_1)


void FUN_71020ad520(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterMotionModuleImpl",0xfffffffd,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_body_type_hash",(long ****)FUN_71020aa4b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_cancel_frame",(long ****)FUN_71020aa5b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_valid_cancel_frame",(long ****)FUN_71020aa7b0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hit_normal_frame",(long ****)FUN_71020aa9b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hit_xlu_frame",(long ****)FUN_71020aabb0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"motion_kind_kirby_copy_original",(long ****)FUN_71020aadb0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_kirby_copy",(long ****)FUN_71020aaf50,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame_kirby_copy",
                 (long ****)FUN_71020ab490,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame_keep_rate_kirby_copy",
                 (long ****)FUN_71020ab9a0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_force_inherit_frame_kirby_copy",
                 (long ****)FUN_71020abd60,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"end_frame_from_hash_kirby_copy",(long ****)FUN_71020ac140,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_frame_sync_anim_cmd_kirby_copy",(long ****)FUN_71020ac2f0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_cancel_frame_kirby_copy",(long ****)FUN_71020ac520,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_motion_partial_kirby_copy",(long ****)FUN_71020ac780,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_blend_waist",(long ****)FUN_71020acf60,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_damage_stop_interpolation",(long ****)FUN_71020ad0b0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_pause_motion_interpolation_stop",(long ****)FUN_71020ad2b0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_update_finger_and_face_joint",(long ****)FUN_71020ad3b0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

