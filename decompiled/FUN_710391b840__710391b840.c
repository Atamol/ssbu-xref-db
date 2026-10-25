// addr:      710391b840
// offset:    0x391b840
// name:      FUN_710391b840
// mangled:   
// signature: int __cdecl FUN_710391b840(long * param_1, uint param_2, long * param_3, uint * param_4, uint * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_710391b840(long *param_1,uint param_2,long *param_3,uint *param_4,uint *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_44;
  
  puVar3 = param_4;
  puVar4 = param_5;
  iVar1 = FUN_710391ba90(param_1,param_3,param_4,param_4,param_5,param_6,param_7,param_8);
  local_44 = *param_4;
  uVar6 = local_44;
  if (iVar1 == 7) {
    if (*(char *)*param_3 != '\0') {
      iVar2 = FUN_710391ba90(param_1,param_3,&local_44,puVar3,puVar4,param_6,param_7,param_8);
      if ((iVar2 != 3) && (uVar6 = local_44, local_44 != 0)) goto LAB_710391b8cc;
    }
    uVar6 = local_44;
    FUN_71038f6d60(*param_1,1,"invalid next option for option \'X\'",puVar3,puVar4,param_6,param_7,
                   param_8);
  }
LAB_710391b8cc:
  uVar5 = 0;
  if ((iVar1 != 3) && (1 < (int)uVar6)) {
    uVar5 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
      local_44 = uVar5;
    }
    uVar5 = uVar6 - 1;
    if ((uVar5 & uVar6) != 0) {
      FUN_71038f6d60(*param_1,1,"format asks for alignment not power of 2",puVar3,puVar4,param_6,
                     param_7,param_8);
    }
    uVar5 = uVar6 - (uVar5 & param_2) & uVar5;
  }
  *param_5 = uVar5;
  return iVar1;
}

