// addr:      71001f2a80
// offset:    0x1f2a80
// name:      FUN_71001f2a80
// mangled:   
// signature: undefined __cdecl FUN_71001f2a80(undefined4 * param_1, long param_2, char * param_3, undefined8 param_4)


void FUN_71001f2a80(undefined4 *param_1,long param_2,char *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined **local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined1 *local_58;
  
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_71001f2180(param_2);
  }
  local_88[0] = 0;
  uStack_70 = 0x10;
  local_90 = &PTR_FUN_710509cc08;
  local_78 = local_88;
  FUN_71001b47e0((long)&local_90,param_3,-1);
  FUN_710021bff0((undefined8 *)(param_2 + 0x30),(long)&local_90);
  local_90 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_90);
  uStack_70 = 0x10;
  local_88[0] = 0;
  local_90 = &PTR_FUN_710509cc08;
  local_78 = local_88;
  FUN_71001b47e0((long)&local_90,param_3,-1);
  local_58 = (undefined1 *)&local_90;
  auVar1 = FUN_710021c260((long *)(param_2 + 0x18),(long)&local_90,"",&local_58);
  *(undefined8 *)(auVar1._0_8_ + 0x48) = param_4;
  local_90 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_90);
  *(undefined1 *)(param_2 + 0x69) = 0;
  local_90 = (undefined **)CONCAT44(local_90._4_4_,0x10001);
  FUN_71001b4200(param_1,(undefined4 *)&local_90);
  return;
}

