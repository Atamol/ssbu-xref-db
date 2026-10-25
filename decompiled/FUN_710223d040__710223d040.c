// addr:      710223d040
// offset:    0x223d040
// name:      FUN_710223d040
// mangled:   
// signature: undefined __cdecl FUN_710223d040(long param_1)


void FUN_710223d040(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"mechakoopa",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_BURST_FRAME",(long ****)FUN_710223c920,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_COUNT_DOWN_FRAME",(long ****)FUN_710223c960,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_BURST_FRAME",(long ****)FUN_710223c9a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_LOST_FRAME",(long ****)FUN_710223c9e0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_SPEED_X",(long ****)FUN_710223ca20,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_SPEED_Y",(long ****)FUN_710223ca60,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_GRAVITY",(long ****)FUN_710223caa0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_BOUND_SPEED_THRESHOLD",(long ****)FUN_710223cae0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HP",(long ****)FUN_710223cb20,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_SPEED_X",(long ****)FUN_710223cb60,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_LIMIT_SPEED_Y",(long ****)FUN_710223cba0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_DAMAGE_SPEED_MUL",(long ****)FUN_710223cbe0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_SHOOT_SPEED_X",(long ****)FUN_710223cc20,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_SHOOT_BRAKE",(long ****)FUN_710223cc60,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_BOUND_SPEED_X",(long ****)FUN_710223cca0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_BOUND_SPEED_Y",(long ****)FUN_710223cce0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_BOUND_BRAKE",(long ****)FUN_710223cd20,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_TURN_NUM",(long ****)FUN_710223cd60,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_DEAD_BURST_FRAME",(long ****)FUN_710223cda0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HIT_DATA_OFFSET_1",(long ****)FUN_710223cde0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HIT_DATA_OFFSET_2",(long ****)FUN_710223ce50,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HIT_DATA_SIZE",(long ****)FUN_710223cec0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HIT_DATA_JOINT",(long ****)FUN_710223cf00,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HIT_DATA_PART",(long ****)FUN_710223cf40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HIT_DATA_HEIGHT",(long ****)FUN_710223cf80,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_STOP_SPEED_MUL",(long ****)FUN_710223cfc0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_STOP_BRAKE",(long ****)FUN_710223d000,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

