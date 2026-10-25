// addr:      7102255970
// offset:    0x2255970
// name:      FUN_7102255970
// mangled:   
// signature: undefined __cdecl FUN_7102255970(long param_1)


void FUN_7102255970(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"holywater",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_ROT_SPEED",(long ****)FUN_7102254300,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_REFLECT_SHIELD_ANGLE",(long ****)FUN_71022543d0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_REFLECT_SHIELD_RANDOM_ANGLE",(long ****)FUN_71022544a0
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_REFLECT_SHIELD_SPEED",(long ****)FUN_7102254570,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_REFLECT_SHIELD_GRAVITY_ACCEL",
                 (long ****)FUN_7102254640,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_REFLECT_SHIELD_GRAVITY_ACCEL_MAX",
                 (long ****)FUN_7102254710,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_REFLECT_SHIELD_ROT_SPEED",(long ****)FUN_71022547e0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_HP",(long ****)FUN_71022548b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_HIT_DEC_HP",(long ****)FUN_7102254980,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_LIFE_FRAME",(long ****)FUN_7102254a50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_FIRE_PILLAR_LIFE_FRAME",(long ****)FUN_7102254b20,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_FIRE_PILLAR_SPEED_Y",(long ****)FUN_7102254bf0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_FIRE_PILLAR_GRAVITY_ACCEL",(long ****)FUN_7102254cc0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_FIRE_PILLAR_GRAVITY_ACCEL_MAX",
                 (long ****)FUN_7102254d90,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_FIRE_PILLAR_SCALE_MIN",(long ****)FUN_7102254e60,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_THROW_ANGLE_SIDE",(long ****)FUN_7102254f30,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_TRANSLATE_OFFSET_X",(long ****)FUN_7102255000,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_TRANSLATE_OFFSET_Y",(long ****)FUN_71022550d0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_HIT_HOP_SPEED_Y",(long ****)FUN_71022551a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_HIT_SPEED_X_MUL",(long ****)FUN_7102255270,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_HIT_HOP_AFTER_FALL_ACCEL",(long ****)FUN_7102255340,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"HOLYWATER_HIT_HOP_AFTER_SPEED_Y_MAX",(long ****)FUN_7102255410,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_reflect_speed",(long ****)FUN_71022554e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_center_joint",(long ****)FUN_7102255770,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

