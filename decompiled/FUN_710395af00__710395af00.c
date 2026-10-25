// addr:      710395af00
// offset:    0x395af00
// name:      FUN_710395af00
// mangled:   
// signature: undefined __cdecl FUN_710395af00(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710395af00(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (*param_1 == 0) {
    FUN_710395b030(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710395aa50((long)param_1,&DAT_710425e0a2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710395b080((long)param_1);
  }
  return;
}

