// addr:      71001b4220
// offset:    0x1b4220
// name:      FUN_71001b4220
// mangled:   
// signature: undefined __cdecl FUN_71001b4220(undefined4 * param_1, char * param_2)


void FUN_71001b4220(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_2;
  uVar2 = 0x80010001;
  *(char **)(param_1 + 2) =
       "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp";
  if (cVar1 != '\0') {
    uVar2 = 0x10001;
  }
  *param_1 = uVar2;
  param_1[4] = 0x74;
  return;
}

