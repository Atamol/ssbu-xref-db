// addr:      710024c2c0
// offset:    0x24c2c0
// name:      FUN_710024c2c0
// mangled:   
// signature: undefined __cdecl FUN_710024c2c0(undefined8 param_1, long param_2, long * param_3)


void FUN_710024c2c0(undefined8 param_1,long param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 auStack_c0 [14];
  undefined **local_50 [3];
  char *local_38;
  undefined4 local_24;
  
  (**(code **)(*param_3 + 0x18))(local_50,param_3);
  bVar1 = FUN_71001b4e00(local_38,"PersistentGathering");
  if (bVar1) {
    FUN_71001b3cb0((long)local_50,"Community");
  }
  FUN_7100228510(param_2,(long)local_50);
  FUN_71001e6720(auStack_c0);
  (**(code **)(*param_3 + 0x30))(param_3,auStack_c0);
  lVar2 = FUN_71001e69b0((long)auStack_c0);
  local_24 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
  FUN_71001d0460(param_2,&local_24,4);
  FUN_71001d0460(param_2,(void *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28)),
                 *(size_t *)(lVar2 + 0x18));
  FUN_71001e6910(auStack_c0);
  local_50[0] = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)local_50);
  return;
}

