// addr:      710380a280
// offset:    0x380a280
// name:      FUN_710380a280
// mangled:   
// signature: long __cdecl FUN_710380a280(long param_1, long param_2)


long FUN_710380a280(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN2nu28ProgrammablePipelineStage_NXINS_17GeometryShader_NXEE4BindEPNS_18GraphicsContext_NXEEUlRKNSt3__15arrayIN3nvn11BufferRangeELm14EEEmE_"
     ) {
    lVar1 = 0;
  }
  return lVar1;
}

