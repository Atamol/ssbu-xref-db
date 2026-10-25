// addr:      710024c0e0
// offset:    0x24c0e0
// name:      FUN_710024c0e0
// mangled:   
// signature: long __cdecl FUN_710024c0e0(undefined8 param_1, long param_2)


long FUN_710024c0e0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined **local_90;
  char local_88 [16];
  char *local_78;
  undefined8 local_70;
  undefined **local_68 [3];
  char *local_50;
  
  (**(code **)(DAT_71052b59b8 + 0x10))(&DAT_71052b59b8);
  lVar3 = *(long *)(DAT_71052b5a48 + 8);
  if (DAT_71052b5a48 != lVar3) {
    do {
      (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))(local_68);
      bVar1 = FUN_71001b4e00(local_50,*(char **)(param_2 + 0x18));
      local_68[0] = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)local_68);
      if (bVar1) {
        plVar2 = *(long **)(lVar3 + 0x10);
        goto LAB_710024c184;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (DAT_71052b5a48 != lVar3);
  }
  plVar2 = (long *)0x0;
LAB_710024c184:
  (**(code **)(DAT_71052b59b8 + 0x20))(&DAT_71052b59b8);
  if (plVar2 == (long *)0x0) {
    local_88[0] = '\0';
    local_78 = local_88;
    local_70 = 0x10;
    local_90 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_90,"DynamicGathering",-1);
    (**(code **)(DAT_71052b59b8 + 0x10))(&DAT_71052b59b8);
    lVar3 = *(long *)(DAT_71052b5a48 + 8);
    if (DAT_71052b5a48 != lVar3) {
      do {
        (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))(local_68);
        bVar1 = FUN_71001b4e00(local_50,local_78);
        local_68[0] = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)local_68);
        if (bVar1) {
          plVar2 = *(long **)(lVar3 + 0x10);
          goto LAB_710024c25c;
        }
        lVar3 = *(long *)(lVar3 + 8);
      } while (DAT_71052b5a48 != lVar3);
    }
    plVar2 = (long *)0x0;
LAB_710024c25c:
    (**(code **)(DAT_71052b59b8 + 0x20))(&DAT_71052b59b8);
    local_90 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_90);
    if (plVar2 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_71001b2f70(lVar3 + 0xa0,param_2);
    }
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return lVar3;
}

