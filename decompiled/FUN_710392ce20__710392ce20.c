// addr:      710392ce20
// offset:    0x392ce20
// name:      FUN_710392ce20
// mangled:   
// signature: undefined8 __cdecl FUN_710392ce20(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_710392ce20(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte abStack_48 [3];
  undefined1 local_45;
  undefined1 local_44;
  char *local_38;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_710392cea0(abStack_48);
  FUN_710392cf00(&local_78);
  abStack_48[1] = 1;
  local_45 = 1;
  local_44 = 1;
  local_38 = "<jemalloc>: Error in malloc(): out of memory\n";
  local_78 = &local_20;
  local_70 = 1;
  local_68 = local_18;
  FUN_710392cf50(abStack_48,&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  return local_20;
}

