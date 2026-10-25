// addr:      71020a9880
// offset:    0x20a9880
// name:      FUN_71020a9880
// mangled:   
// signature: undefined __cdecl FUN_71020a9880(long param_1)


void FUN_71020a9880(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterCutInManager",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"request_start",(long ****)FUN_71020a8d30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"request_end",(long ****)FUN_71020a8f10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_play_motion_camera",(long ****)FUN_71020a8f40,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_owner",(long ****)FUN_71020a8f90,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_play",(long ****)FUN_71020a90e0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_play_status",(long ****)FUN_71020a9140,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_task",(long ****)FUN_71020a9190,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_one_on_one",(long ****)FUN_71020a9250,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_one_on_one_including_thrown",(long ****)FUN_71020a92a0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_vr_mode",(long ****)FUN_71020a9390,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_throw_finish_zoom_rate",(long ****)FUN_71020a9440,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_throw_finish_offset",(long ****)FUN_71020a95a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

