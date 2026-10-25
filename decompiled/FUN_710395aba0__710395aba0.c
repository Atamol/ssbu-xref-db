// addr:      710395aba0
// offset:    0x395aba0
// name:      FUN_710395aba0
// mangled:   
// signature: undefined __cdecl FUN_710395aba0(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710395aba0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int local_2c;
  undefined *local_28;
  int local_1c;
  
  local_1c = param_1[6];
  if (*param_1 == 0) {
    local_28 = &DAT_710445370e;
  }
  else {
    local_1c = local_1c << 1;
    local_28 = &DAT_71042b2d9b;
  }
  for (local_2c = 0; local_2c < local_1c; local_2c = local_2c + 1) {
    FUN_710395aa50((long)param_1,&DAT_71042a20ae,local_28,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

