// addr:      71001b4200
// offset:    0x1b4200
// name:      FUN_71001b4200
// mangled:   
// signature: undefined __cdecl FUN_71001b4200(undefined4 * param_1, undefined4 * param_2)


void FUN_71001b4200(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(char **)(param_1 + 2) =
       "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp";
  *param_1 = uVar1;
  param_1[4] = 0x66;
  return;
}

