// addr:      7102074f80
// offset:    0x2074f80
// name:      FUN_7102074f80
// mangled:   
// signature: undefined __cdecl FUN_7102074f80(long param_1)


void FUN_7102074f80(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ShakeModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71042d72e7,(long ****)FUN_71020732e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_time_scale",(long ****)FUN_7102073850,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"extend",(long ****)FUN_7102073ea0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104290589,(long ****)FUN_7102073ff0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"stop_kind",(long ****)FUN_71020740a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_shake",(long ****)FUN_71020741d0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"offset",(long ****)FUN_71020742a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"enable_offset",(long ****)FUN_7102074640,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"disable_offset",(long ****)FUN_71020749c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_scale_kind",(long ****)FUN_7102074a70,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_axis_xy_kind",(long ****)FUN_7102074c70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ignore_slow",(long ****)FUN_7102074e10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

