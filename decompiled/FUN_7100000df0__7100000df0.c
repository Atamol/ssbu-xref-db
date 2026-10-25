// addr:      7100000df0
// offset:    0xdf0
// name:      FUN_7100000df0
// mangled:   
// signature: int __cdecl FUN_7100000df0(long param_1, void * param_2, ulong param_3, size_t * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_7100000df0(long param_1,void *param_2,ulong param_3,size_t *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  size_t *psVar4;
  long *local_40;
  size_t local_38;
  
  if (param_1 == 0) {
    iVar1 = 0x2b;
  }
  else {
    if (*(char *)(param_1 + 0x6e1) == '\0') {
      pcVar2 = "CONNECT_ONLY is required!";
    }
    else {
      uVar3 = param_3;
      psVar4 = param_4;
      iVar1 = FUN_7100004150(param_1,(long *)&local_40);
      if (iVar1 != -1) {
        *param_4 = 0;
        iVar1 = FUN_71000169e0(local_40,iVar1,param_2,param_3,&local_38);
        if (iVar1 != 0) {
          return iVar1;
        }
        *param_4 = local_38;
        return 0;
      }
      pcVar2 = "Failed to get recent socket";
      param_3 = uVar3;
      param_4 = psVar4;
    }
    FUN_7100016040(param_1,(byte *)pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    iVar1 = 1;
  }
  return iVar1;
}

