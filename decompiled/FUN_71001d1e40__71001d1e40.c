// addr:      71001d1e40
// offset:    0x1d1e40
// name:      FUN_71001d1e40
// mangled:   
// signature: bool __cdecl FUN_71001d1e40(long param_1, int param_2)


bool FUN_71001d1e40(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 auStack_70 [7];
  byte local_34 [4];
  
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 == 1) {
    local_34[0] = 0;
    uVar3 = FUN_71001d1f60((ulong)(param_2 != 0),param_2,0,thunk_FUN_71001d1e40,param_1,local_34);
    if ((uVar3 & 1) == 0) {
      FUN_71001b46a0(auStack_70,10,param_2);
      FUN_71001b2e80((long)auStack_70);
      do {
        uVar4 = *(uint *)(param_1 + 0x14);
        if (uVar4 != 1) goto LAB_71001d1f1c;
        iVar2 = FUN_71001b4760((long)auStack_70);
        FUN_71001d2110(iVar2);
        uVar3 = FUN_71001b2e90((long)auStack_70);
      } while ((uVar3 & 1) != 0);
      uVar4 = *(uint *)(param_1 + 0x14);
LAB_71001d1f1c:
      bVar1 = uVar4 == 4 || (uVar4 | 1) == 3;
      FUN_71001b4730();
    }
    else {
      bVar1 = local_34[0] != 0;
    }
  }
  else {
    bVar1 = uVar4 == 4 || (uVar4 | 1) == 3;
  }
  return bVar1;
}

