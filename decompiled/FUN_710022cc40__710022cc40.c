// addr:      710022cc40
// offset:    0x22cc40
// name:      FUN_710022cc40
// mangled:   
// signature: undefined __cdecl FUN_710022cc40(undefined8 * param_1, undefined8 param_2)


void FUN_710022cc40(undefined8 *param_1,undefined8 param_2)

{
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"<unknown>",-1);
  FUN_71001d22e0(param_1,(long)&local_68);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = &DAT_7104f5a558;
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0xc) = 9;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"NintendoNotificationEventManager",-1);
  FUN_71001db340((long)param_1,(long)&local_68);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  return;
}

