// addr:      710017ad40
// offset:    0x17ad40
// name:      FUN_710017ad40
// mangled:   
// signature: undefined FUN_710017ad40(void)


undefined8 FUN_710017ad40(long param_1,int *param_2)

{
  FUN_71000bcf30((int *)(param_1 + 0xb0),param_2);
  *(char **)(param_1 + 0x40) = "LocalMatchCreateSessionJob::StopLocalSession";
  *(code **)(param_1 + 0x30) = FUN_710017ab60;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

