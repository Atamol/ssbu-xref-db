// addr:      71001f2eb0
// offset:    0x1f2eb0
// name:      FUN_71001f2eb0
// mangled:   
// signature: undefined __cdecl FUN_71001f2eb0(long param_1, long param_2)


void FUN_71001f2eb0(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  undefined ***local_38;
  
  local_50 = local_60;
  local_60[0] = 0;
  local_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_68,"Uri",-1);
  local_38 = &local_68;
  auVar1 = FUN_710021c110((long *)(param_1 + 0x30),(long)&local_68,"",&local_38);
  FUN_71001b2f70(auVar1._0_8_ + 0x48,param_2);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  return;
}

