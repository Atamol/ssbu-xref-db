// addr:      7101ed3aa0
// offset:    0x1ed3aa0
// name:      FUN_7101ed3aa0
// mangled:   
// signature: undefined __cdecl FUN_7101ed3aa0(long param_1, int param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ed3aa0(long param_1,int param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  long *plVar2;
  long *********ppppppppplVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  ppppppppplVar3 = (long *********)0x2d;
  plVar2 = FUN_71032410c0(*(long **)(param_1 + 0x38),
                          (long ****)(&PTR_s_edit_stage_submenu_material_00_71050b2a68)[param_2],
                          0x2d,param_4,param_5,param_6,param_7,param_8);
  FUN_7103778b80(*(long *)(param_1 + 0x58),(long)plVar2,ppppppppplVar3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120(param_1 + 0x60,param_3,ppppppppplVar3,param_4,param_5,param_6,param_7,param_8);
  lVar4 = **(long **)(param_1 + 0x58);
  if (lVar4 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = ABS(*(float *)(lVar4 + 0x50) * *(float *)(lVar4 + 0x48));
  }
  plVar2 = *(long **)(param_1 + 0x68);
  pfVar1 = (float *)&nn::util::Vector4f::ConstantZero;
  if (plVar2[2] != 0) {
    pfVar1 = (float *)(plVar2[2] + 0x240);
  }
  fVar5 = (fVar5 + *pfVar1) * 0.5;
  if (lVar4 != 0) {
    *(float *)(lVar4 + 0x30) = -fVar5;
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
    plVar2 = *(long **)(param_1 + 0x68);
  }
  lVar4 = *plVar2;
  if (lVar4 != 0) {
    fVar6 = *(float *)(param_1 + 0x70);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
    *(float *)(lVar4 + 0x30) = fVar6 - fVar5;
  }
  return;
}

