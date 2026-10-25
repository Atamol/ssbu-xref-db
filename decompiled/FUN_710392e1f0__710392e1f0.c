// addr:      710392e1f0
// offset:    0x392e1f0
// name:      FUN_710392e1f0
// mangled:   
// signature: undefined4 __cdecl FUN_710392e1f0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_710392e1f0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 local_88;
  undefined8 local_80;
  long ****local_78;
  undefined8 local_70;
  byte abStack_58 [8];
  undefined8 local_50;
  char *local_48;
  char *local_40;
  long ****local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_710392cea0(abStack_58);
  FUN_710392cf00(&local_88);
  abStack_58[1] = 1;
  local_50 = 8;
  local_48 = "<jemalloc>: Error allocating aligned memory: out of memory\n";
  local_40 = "<jemalloc>: Error allocating aligned memory: invalid alignment\n";
  local_88 = local_18;
  local_80 = 1;
  local_78 = local_28;
  local_70 = local_20;
  uVar1 = FUN_710392cf50(abStack_58,&local_88,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

