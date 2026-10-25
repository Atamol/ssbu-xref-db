// addr:      710024c3a0
// offset:    0x24c3a0
// name:      FUN_710024c3a0
// mangled:   
// signature: undefined __cdecl FUN_710024c3a0(undefined8 param_1, long param_2, long * param_3)


void FUN_710024c3a0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_110 [14];
  undefined **local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined **local_68;
  char local_60 [16];
  char *local_50;
  undefined8 local_48;
  
  local_50 = local_60;
  local_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_60[0] = '\0';
  FUN_7100228650(param_2,(long)&local_68);
  bVar3 = FUN_71001b4e00(local_50,"Community");
  uVar4 = (ulong)bVar3;
  if (bVar3) {
    uVar4 = FUN_71001b3cb0((long)&local_68,"PersistentGathering");
  }
  lVar5 = FUN_710024c0e0(uVar4,(long)&local_68);
  *param_3 = lVar5;
  local_98 = 1;
  local_a0 = &PTR_FUN_7104f56018;
  local_94 = 0;
  uVar4 = FUN_71001cf750();
  FUN_71001cf760((long)&local_a0,uVar4,0);
  lVar5 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(lVar5 + 0x18);
  if ((ulong)(lVar6 - lVar1) < 4) {
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    uVar2 = *(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
    *(long *)(param_2 + 0x18) = lVar1 + 4;
    uVar4 = (ulong)uVar2;
    if ((ulong)(lVar6 - (lVar1 + 4)) < uVar4) {
      *(undefined1 *)(param_2 + 8) = 1;
    }
    else {
      lVar5 = FUN_71001e69b0(param_2);
      FUN_71001cb870((long)&local_a0,
                     (void *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) +
                             *(long *)(param_2 + 0x18)),uVar4,0xffffffffffffffff);
      uVar4 = *(long *)(param_2 + 0x18) + uVar4;
      if (uVar4 <= *(ulong *)(*(long *)(param_2 + 0x10) + 0x18)) {
        *(ulong *)(param_2 + 0x18) = uVar4;
      }
    }
  }
  FUN_71001e6870(auStack_110,(long)&local_a0);
  (**(code **)(*(long *)*param_3 + 0x38))((long *)*param_3,auStack_110);
  FUN_71001e6910(auStack_110);
  FUN_71001cfad0(&local_a0);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  return;
}

