// addr:      71001d6330
// offset:    0x1d6330
// name:      FUN_71001d6330
// mangled:   
// signature: bool __cdecl FUN_71001d6330(long param_1, int param_2)


bool FUN_71001d6330(long param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 auStack_70 [7];
  byte local_34 [4];
  
  local_34[0] = 0;
  uVar2 = FUN_71001d1f60((ulong)(param_2 != 0),param_2,0,thunk_FUN_71001d6330,param_1,local_34);
  if ((uVar2 & 1) == 0) {
    FUN_71001b46a0(auStack_70,10,param_2);
    FUN_71001b2e80((long)auStack_70);
    do {
      if (*(int *)(param_1 + 0x40) == 5) {
        bVar1 = true;
        goto LAB_71001d63e8;
      }
      uVar2 = FUN_71001b2e90((long)auStack_70);
    } while ((uVar2 & 1) != 0);
    bVar1 = *(int *)(param_1 + 0x40) == 5;
LAB_71001d63e8:
    FUN_71001b4730();
  }
  else {
    bVar1 = local_34[0] != 0;
  }
  return bVar1;
}

