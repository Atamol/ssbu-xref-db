// addr:      71001b0040
// offset:    0x1b0040
// name:      FUN_71001b0040
// mangled:   
// signature: undefined __cdecl FUN_71001b0040(long param_1, long param_2)


void FUN_71001b0040(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined **local_78;
  char acStack_70 [16];
  char *local_60;
  
  FUN_71001b0270(&local_78,param_2,"/Incoming");
  puVar4 = (undefined8 *)(param_1 + 8);
  *puVar4 = &PTR_FUN_7104f54b08;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 **)(param_1 + 0x38) = (undefined1 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = 0x10;
  FUN_71001b47e0(param_1 + 0x20,local_60,-1);
  *(undefined8 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  (**(code **)(DAT_71052ae008 + 0x10))(&DAT_71052ae008);
  puVar2 = puVar4;
  if (DAT_71052adfe8 != DAT_71052adff8) {
    *(undefined8 **)((long)DAT_71052adff0 + 8) = puVar4;
    *(undefined8 **)(param_1 + 0x18) = DAT_71052adff0;
    puVar2 = DAT_71052adfe8;
  }
  DAT_71052adfe8 = puVar2;
  DAT_71052ae000 = DAT_71052ae000 + 1;
  DAT_71052adff0 = puVar4;
  (**(code **)(DAT_71052ae008 + 0x20))(&DAT_71052ae008);
  local_78 = &PTR_FUN_710509cc08;
  ppuVar1 = &PTR_FUN_710509cc08;
  if ((local_60 != (char *)0x0) && (ppuVar1 = local_78, local_60 != acStack_70)) {
    pcVar3 = *(code **)(local_60 + -0x14);
    local_78 = &PTR_FUN_710509cc08;
    if (pcVar3 == (code *)0x0) {
      free(local_60 + -0x14);
      ppuVar1 = local_78;
    }
    else {
      (*pcVar3)();
      ppuVar1 = local_78;
    }
  }
  local_78 = ppuVar1;
  FUN_71001b0270(&local_78,param_2,"/Outgoing");
  puVar4 = (undefined8 *)(param_1 + 0x68);
  *puVar4 = &PTR_FUN_7104f54b08;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 **)(param_1 + 0x98) = (undefined1 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa0) = 0x10;
  FUN_71001b47e0(param_1 + 0x80,local_60,-1);
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  (**(code **)(DAT_71052ae008 + 0x10))(&DAT_71052ae008);
  puVar2 = puVar4;
  if (DAT_71052adfe8 != DAT_71052adff8) {
    DAT_71052adff0[1] = puVar4;
    *(undefined8 **)(param_1 + 0x78) = DAT_71052adff0;
    puVar2 = DAT_71052adfe8;
  }
  DAT_71052adfe8 = puVar2;
  DAT_71052ae000 = DAT_71052ae000 + 1;
  DAT_71052adff0 = puVar4;
  (**(code **)(DAT_71052ae008 + 0x20))(&DAT_71052ae008);
  local_78 = &PTR_FUN_710509cc08;
  if ((local_60 != (char *)0x0) && (local_60 != acStack_70)) {
    pcVar3 = *(code **)(local_60 + -0x14);
    if (pcVar3 == (code *)0x0) {
      free(local_60 + -0x14);
    }
    else {
      (*pcVar3)();
    }
  }
  return;
}

