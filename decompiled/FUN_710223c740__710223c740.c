// addr:      710223c740
// offset:    0x223c740
// name:      FUN_710223c740
// mangled:   
// signature: undefined __cdecl FUN_710223c740(long param_1)


void FUN_710223c740(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)&DAT_7104359fb7,0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"LOG_LIFE",(long ****)FUN_710223c2a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_REACTION_MUL",(long ****)FUN_710223c2e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_LIFE_DEC_MUL",(long ****)FUN_710223c320,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_SMASH_ACCEL_Y",(long ****)FUN_710223c360,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_SMASH_MAX_SPEED_X",(long ****)FUN_710223c3a0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_SMASH_MAX_SPEED_Y",(long ****)FUN_710223c3e0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_POWER_MAX",(long ****)FUN_710223c420,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_POWER_MIN",(long ****)FUN_710223c460,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_ROT_SPEED_MAX",(long ****)FUN_710223c4a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_ROT_SPEED_MIN",(long ****)FUN_710223c4e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_SPEED_Y",(long ****)FUN_710223c520,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_ROT_SPEED_Z",(long ****)FUN_710223c560,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_ROT_Z_RATIO",(long ****)FUN_710223c5a0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_HIT_DATA_OFFSET_1",(long ****)FUN_710223c5e0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_HIT_DATA_OFFSET_2",(long ****)FUN_710223c650,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_HIT_DATA_SIZE",(long ****)FUN_710223c6c0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LOG_SHAPE_TYPE",(long ****)FUN_710223c700,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

