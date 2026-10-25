// addr:      7102056920
// offset:    0x2056920
// name:      FUN_7102056920
// mangled:   
// signature: undefined __cdecl FUN_7102056920(long param_1)


void FUN_7102056920(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  int local_28;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEvent",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020542d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7102054380,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020545a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventPos",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020547b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7102055630,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7102055850,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventMask",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7102055a60,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7102056510,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7102056730,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  return;
}

