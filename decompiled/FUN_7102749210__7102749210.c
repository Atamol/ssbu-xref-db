// addr:      7102749210
// offset:    0x2749210
// name:      FUN_7102749210
// mangled:   
// signature: undefined __cdecl FUN_7102749210(long * param_1, undefined4 param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102749210(long *param_1,undefined4 param_2,ulong param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((param_3 & 1) == 0) {
    fVar4 = 30.0;
  }
  switch(param_2) {
  case 0:
    FUN_71025f74f0(fVar4,*(long *)(*(long *)(*param_1 + 0x318) + 0x10),(byte *)"light_default");
    FUN_7102633a10(*(long *)(*param_1 + 0x318),(long *********)"chara_default",1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = 1;
    FUN_7102633b90(*(long *)(*param_1 + 0x318),(long *********)"stage_default",1,param_4,param_5,
                   param_6,param_7,param_8);
    lVar3 = *param_1;
    pcVar1 = "reflection_cubemap_default";
    break;
  case 1:
    FUN_71025f74f0(fVar4,*(long *)(*(long *)(*param_1 + 0x318) + 0x10),(byte *)"light_kiila");
    FUN_7102633a10(*(long *)(*param_1 + 0x318),(long *********)"chara_kiila",1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = 1;
    FUN_7102633b90(*(long *)(*param_1 + 0x318),(long *********)"stage_kiila",1,param_4,param_5,
                   param_6,param_7,param_8);
    lVar3 = *param_1;
    pcVar1 = "reflection_cubemap_kiila";
    break;
  case 2:
    FUN_71025f74f0(fVar4,*(long *)(*(long *)(*param_1 + 0x318) + 0x10),(byte *)"light_darz");
    FUN_7102633a10(*(long *)(*param_1 + 0x318),(long *********)"chara_darz",1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = 1;
    FUN_7102633b90(*(long *)(*param_1 + 0x318),(long *********)"stage_darz",1,param_4,param_5,
                   param_6,param_7,param_8);
    lVar3 = *param_1;
    pcVar1 = "reflection_cubemap_darz";
    break;
  case 3:
    FUN_71025f74f0(fVar4,*(long *)(*(long *)(*param_1 + 0x318) + 0x10),(byte *)"light_both");
    FUN_7102633a10(*(long *)(*param_1 + 0x318),(long *********)"chara_both",1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = 1;
    FUN_7102633b90(*(long *)(*param_1 + 0x318),(long *********)"stage_both",1,param_4,param_5,
                   param_6,param_7,param_8);
    lVar3 = *param_1;
    pcVar1 = "reflection_cubemap_both";
    break;
  default:
    return;
  }
  FUN_7102633800(*(long *)(lVar3 + 0x318),(long *********)pcVar1,uVar2,param_4,param_5,param_6,
                 param_7,param_8);
  return;
}

