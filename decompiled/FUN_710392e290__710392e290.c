// addr:      710392e290
// offset:    0x392e290
// name:      FUN_710392e290
// mangled:   
// signature: undefined8 __cdecl FUN_710392e290(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_710392e290(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte abStack_50 [3];
  undefined1 local_4d;
  undefined1 local_4c;
  undefined8 local_48;
  char *local_40;
  char *local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_710392cea0(abStack_50);
  FUN_710392cf00(&local_80);
  abStack_50[1] = 1;
  local_4d = 1;
  local_4c = 1;
  local_48 = 1;
  local_40 = "<jemalloc>: Error allocating aligned memory: out of memory\n";
  local_38 = "<jemalloc>: Error allocating aligned memory: invalid alignment\n";
  local_80 = &local_28;
  local_78 = 1;
  local_70 = local_20;
  local_68 = local_18;
  FUN_710392cf50(abStack_50,&local_80,param_3,param_4,param_5,param_6,param_7,param_8);
  return local_28;
}

