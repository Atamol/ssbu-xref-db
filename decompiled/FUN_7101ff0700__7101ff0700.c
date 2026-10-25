// addr:      7101ff0700
// offset:    0x1ff0700
// name:      FUN_7101ff0700
// mangled:   
// signature: undefined __cdecl FUN_7101ff0700(long param_1)


void FUN_7101ff0700(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"AttackAbsoluteData",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101fec930,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101fecd50,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101fecf50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"AttackData",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101ff0290,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101ff0410,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101ff0620,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  return;
}

