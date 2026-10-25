// addr:      710223c0c0
// offset:    0x223c0c0
// name:      FUN_710223c0c0
// mangled:   
// signature: undefined __cdecl FUN_710223c0c0(long param_1)


void FUN_710223c0c0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"linkbomb",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_THROW_SPEED_MUL",
                 (long ****)FUN_710223b250,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_LIMIT_FRAME",(long ****)FUN_710223b340,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_FLASH_FRAME",(long ****)FUN_710223b430,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_BOMB_SPEED",(long ****)FUN_710223b520,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MIN_DAMAGE",(long ****)FUN_710223b610,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MAX_DAMAGE",(long ****)FUN_710223b6e0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MIN_DAMAGE_SPEED",
                 (long ****)FUN_710223b7b0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MAX_DAMAGE_SPEED",
                 (long ****)FUN_710223b880,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_LANDING_SPEED",(long ****)FUN_710223b950,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_BLAST_WAIT_FRAME",
                 (long ****)FUN_710223ba20,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_BOUND_DEGREE",(long ****)FUN_710223baf0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MIN_BOUND_SPEED_X",
                 (long ****)FUN_710223bbc0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MAX_BOUND_SPEED_X",
                 (long ****)FUN_710223bc90,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MIN_BOUND_SPEED_Y",
                 (long ****)FUN_710223bd60,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_MAX_BOUND_SPEED_Y",
                 (long ****)FUN_710223be30,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_BOUND_SPEED_X_MUL",
                 (long ****)FUN_710223bf00,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"LINK_LINKBOMB_LINKBOMB_IS_EXPLODE_WHEN_HIT_FIGHTER",
                 (long ****)FUN_710223bfd0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}

