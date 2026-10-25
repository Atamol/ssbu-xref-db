// addr:      710380c900
// offset:    0x380c900
// name:      FUN_710380c900
// mangled:   
// signature: long __cdecl FUN_710380c900(long param_1, long param_2)


long FUN_710380c900(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN2nu28ProgrammablePipelineStage_NXINS_14PixelShader_NXEE4BindEPNS_18GraphicsContext_NXEEUlRKNSt3__15arrayIjLm32EEES9_RKNS5_6bitsetILm32EEEE_"
     ) {
    lVar1 = 0;
  }
  return lVar1;
}

