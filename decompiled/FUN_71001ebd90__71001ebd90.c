// addr:      71001ebd90
// offset:    0x1ebd90
// name:      FUN_71001ebd90
// mangled:   
// signature: undefined __cdecl FUN_71001ebd90(long param_1, long param_2)


void FUN_71001ebd90(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined **local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined ***local_58;
  
  local_80[0] = 0;
  uStack_68 = 0x10;
  local_88 = &PTR_FUN_710509cc08;
  local_70 = local_80;
  FUN_71001b47e0((long)&local_88,"Ra",-1);
  FUN_710021bff0((long *)(param_1 + 0x30),(long)&local_88);
  local_88 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_88);
  uStack_68 = 0x10;
  local_80[0] = 0;
  local_88 = &PTR_FUN_710509cc08;
  local_70 = local_80;
  FUN_71001b47e0((long)&local_88,"Ra",-1);
  local_58 = &local_88;
  auVar1 = FUN_710021c110((long *)(param_1 + 0x30),(long)&local_88,"",&local_58);
  FUN_71001b2f70(auVar1._0_8_ + 0x48,param_2);
  local_88 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_88);
  return;
}

