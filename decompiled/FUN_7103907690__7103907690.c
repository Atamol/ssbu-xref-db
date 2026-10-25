// addr:      7103907690
// offset:    0x3907690
// name:      FUN_7103907690
// mangled:   
// signature: undefined __cdecl FUN_7103907690(long param_1, char * param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103907690(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)FUN_71038f9f30(param_1,param_3,".","_",param_5,param_6,param_7,param_8);
  pcVar2 = strchr(pcVar1,0x2d);
  if (pcVar2 != (char *)0x0) {
    FUN_71038f4a00(param_1,pcVar1,(long)pcVar2 - (long)pcVar1);
    pcVar1 = (char *)FUN_71038f4ca0(param_1,"luaopen_%s");
    uVar3 = FUN_7103907760(param_1,param_2,pcVar1);
    if ((int)uVar3 != 2) {
      return;
    }
  }
  pcVar1 = (char *)FUN_71038f4ca0(param_1,"luaopen_%s");
  FUN_7103907760(param_1,param_2,pcVar1);
  return;
}

