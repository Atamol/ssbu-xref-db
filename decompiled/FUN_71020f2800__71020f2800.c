// addr:      71020f2800
// offset:    0x20f2800
// name:      FUN_71020f2800
// mangled:   
// signature: undefined __cdecl FUN_71020f2800(long param_1)


void FUN_71020f2800(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"Rhombus2",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020f0ec0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020f0f50,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020f1160,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"Circle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020f1f30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020f20d0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020f24c0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  return;
}

