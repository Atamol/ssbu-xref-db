// addr:      7100228800
// offset:    0x228800
// name:      FUN_7100228800
// mangled:   
// signature: undefined __cdecl FUN_7100228800(long param_1, ulong * param_2)


void FUN_7100228800(long param_1,ulong *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_50;
  undefined **local_48 [5];
  
  uVar2 = FUN_71001b7b40((long)param_2);
  local_48[0]._0_1_ = (char)uVar2;
  FUN_71001d0460(param_1,local_48,1);
  uVar2 = FUN_71001b7b40((long)param_2);
  switch(uVar2) {
  case 1:
    local_48[0] = (undefined **)FUN_71001b7b70(param_2);
    break;
  case 2:
    auVar3 = FUN_71001b7bd0(param_2);
    local_48[0] = auVar3._0_8_;
    break;
  case 3:
    bVar1 = FUN_71001b7bf0((char *)param_2);
    local_48[0] = (undefined **)CONCAT71(local_48[0]._1_7_,bVar1);
    FUN_71001d0630(param_1,(undefined1 *)local_48);
    return;
  case 4:
    FUN_71001b7c20(local_48,param_2);
    FUN_7100228510(param_1,(long)local_48);
    local_48[0] = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)local_48);
    return;
  case 5:
    FUN_71001b7c80(&uStack_50,param_2);
    local_48[0] = (undefined **)FUN_71001b0590(&uStack_50);
    break;
  case 6:
    local_48[0] = (undefined **)FUN_71001b7b50(param_2);
    break;
  default:
    return;
  }
  FUN_71001d0460(param_1,local_48,8);
  return;
}

