// addr:      7102838140
// offset:    0x2838140
// name:      FUN_7102838140
// mangled:   
// signature: undefined __cdecl FUN_7102838140(long param_1, int param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102838140(long param_1,int param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (param_2 == 2) {
    FUN_7102633a10(param_1,(long *********)"chara_Dark",1,param_4,param_5,param_6,param_7,param_8);
    if ((param_3 & 1) == 0) {
      pcVar1 = "stage_Dark";
    }
    else {
      pcVar1 = "stage_Dark_loop";
    }
    uVar2 = 1;
    FUN_7102633b90(param_1,(long *********)pcVar1,1,param_4,param_5,param_6,param_7,param_8);
    FUN_7102633800(param_1,(long *********)"reflection_cubemap_Dark",uVar2,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar1 = "light_dark";
  }
  else if (param_2 == 1) {
    FUN_7102633a10(param_1,(long *********)"chara_Light",1,param_4,param_5,param_6,param_7,param_8);
    if ((param_3 & 1) == 0) {
      pcVar1 = "stage_Light";
    }
    else {
      pcVar1 = "stage_Light_loop";
    }
    uVar2 = 1;
    FUN_7102633b90(param_1,(long *********)pcVar1,1,param_4,param_5,param_6,param_7,param_8);
    FUN_7102633800(param_1,(long *********)"reflection_cubemap_Light",uVar2,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar1 = "light_light";
  }
  else {
    if (param_2 != 0) {
      return;
    }
    FUN_7102633a10(param_1,(long *********)"chara_Median",1,param_4,param_5,param_6,param_7,param_8)
    ;
    uVar2 = 1;
    FUN_7102633b90(param_1,(long *********)"stage_Median",1,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_7102633800(param_1,(long *********)"reflection_cubemap_Median",uVar2,param_4,param_5,param_6
                   ,param_7,param_8);
    pcVar1 = "light_median";
  }
  FUN_71025f74f0(60.0,lVar3,(byte *)pcVar1);
  return;
}

