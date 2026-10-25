// addr:      71001d5270
// offset:    0x1d5270
// name:      FUN_71001d5270
// mangled:   
// signature: undefined __cdecl FUN_71001d5270(undefined8 * param_1, long * param_2, int param_3)


void FUN_71001d5270(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 auStack_90 [7];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  
  FUN_71001d5110(param_2);
  FUN_71001b41d0((undefined4 *)&local_58);
  uVar2 = FUN_71001d7b90((ulong)(param_3 != 0),param_3,FUN_71001db690,param_2,
                         (undefined4 *)&local_58);
  if ((uVar2 & 1) == 0) {
    FUN_71001b46a0(auStack_90,10,param_3);
    FUN_71001b2e80((long)auStack_90);
    do {
      iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
      if (iVar1 == 0x40) break;
      uVar2 = FUN_71001b2e90((long)auStack_90);
    } while ((uVar2 & 1) != 0);
    iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
    if (iVar1 == 0x40) {
      local_34 = 0x10001;
    }
    else {
      local_34 = 0x8001000b;
    }
    FUN_71001b4200((undefined4 *)param_1,&local_34);
    FUN_71001b4730();
  }
  else {
    param_1[2] = local_48;
    *param_1 = local_58;
    param_1[1] = uStack_50;
  }
  return;
}

