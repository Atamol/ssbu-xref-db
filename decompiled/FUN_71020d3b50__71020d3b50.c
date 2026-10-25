// addr:      71020d3b50
// offset:    0x20d3b50
// name:      FUN_71020d3b50
// mangled:   
// signature: undefined __cdecl FUN_71020d3b50(long param_1)


void FUN_71020d3b50(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ItemCameraModuleImpl",0xfffffffd,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_camera_subject",(long ****)FUN_71020d25a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"end_camera_subject",(long ****)FUN_71020d2640,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_camera_subject_pos_4_points",(long ****)FUN_71020d2790,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clamp_camera_subject_pos",(long ****)FUN_71020d2b90,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_camera_subject_enable",(long ****)FUN_71020d3080,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_camera_subject_pos",(long ****)FUN_71020d3230,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_camera_subject_pos",(long ****)FUN_71020d35a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_camera_subject_range",(long ****)FUN_71020d3730,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

