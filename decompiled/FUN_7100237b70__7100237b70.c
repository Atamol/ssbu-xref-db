// addr:      7100237b70
// offset:    0x237b70
// name:      FUN_7100237b70
// mangled:   
// signature: undefined __cdecl FUN_7100237b70(long param_1, long param_2, long param_3, int * param_4)


void FUN_7100237b70(long param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 auStack_70 [2];
  long local_60;
  
  lVar4 = *(long *)(param_2 + 0x10);
  FUN_71001cf570(param_1,param_3 + 0x10);
  iVar1 = FUN_71001b34a0(0xffffffff);
  *param_4 = iVar1;
  FUN_71001ced90(auStack_70);
  local_a8 = *(undefined ***)(param_2 + 0x38);
  FUN_71001cf550((long)auStack_70,&local_a8,8,1);
  if (lVar4 == 0) {
    pppuVar3 = (undefined ***)&DAT_710449ed84;
  }
  else {
    local_a8 = (undefined **)CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar4 + 0x18));
    pppuVar3 = &local_a8;
  }
  FUN_71001cf550((long)auStack_70,pppuVar3,4,1);
  FUN_71001cf550((long)auStack_70,param_4,4,1);
  local_a0 = 1;
  local_a8 = &PTR_FUN_7104f56018;
  local_9c = 0;
  uVar2 = FUN_71001cf750();
  FUN_71001cf760((long)&local_a8,uVar2,0);
  FUN_710022bb70(*(undefined8 *)(param_2 + 0x28),local_60,(long)&local_a8,(long *)(param_3 + 0x58));
  FUN_71001cf570(param_1,(long)&local_a8);
  FUN_71001cfad0(&local_a8);
  FUN_71001cef10(auStack_70);
  return;
}

