// addr:      710009c130
// offset:    0x9c130
// name:      FUN_710009c130
// mangled:   
// signature: undefined8 __cdecl FUN_710009c130(long * param_1, long param_2)


undefined8 FUN_710009c130(long *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_7100038e90(param_2,5,3,"sysEmitterDynamicUniformBlock");
  *(int *)((long)param_1 + 0xc) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,3,"sysEmitterStaticUniformBlock");
  *(int *)(param_1 + 2) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,3,"sysEmitterFieldUniformBlock");
  *(int *)((long)param_1 + 0x14) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,2,"sysCurlNoiseTextureArray");
  *(int *)(param_1 + 3) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysPosBuff");
  *(int *)((long)param_1 + 0x1c) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysVecBuff");
  *(int *)(param_1 + 4) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysPosDeltaBuff");
  *(int *)((long)param_1 + 0x24) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysScaleBuff");
  *(int *)(param_1 + 5) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysRandomBuff");
  *(int *)((long)param_1 + 0x2c) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat0Buff");
  *(int *)(param_1 + 6) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat1Buff");
  *(int *)((long)param_1 + 0x34) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat2Buff");
  *(int *)(param_1 + 7) = (int)uVar1;
  return 1;
}

