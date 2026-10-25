// addr:      7100000ea0
// offset:    0xea0
// name:      FUN_7100000ea0
// mangled:   
// signature: int __cdecl FUN_7100000ea0(long param_1, undefined8 param_2, undefined8 param_3, long * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_7100000ea0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_40;
  long local_38;
  
  local_40 = 0;
  if (param_1 == 0) {
    iVar1 = 0x2b;
  }
  else {
    if (*(char *)(param_1 + 0x6e1) == '\0') {
      pcVar2 = "CONNECT_ONLY is required!";
    }
    else {
      uVar3 = param_3;
      plVar4 = param_4;
      iVar1 = FUN_7100004150(param_1,&local_40);
      if (iVar1 != -1) {
        *param_4 = 0;
        iVar1 = FUN_7100016180(local_40,iVar1,param_2,param_3,&local_38);
        if (local_38 == -1) {
          return 0x37;
        }
        if ((iVar1 == 0) && (local_38 == 0)) {
          return 0x51;
        }
        *param_4 = local_38;
        return iVar1;
      }
      pcVar2 = "Failed to get recent socket";
      param_3 = uVar3;
      param_4 = plVar4;
    }
    FUN_7100016040(param_1,(byte *)pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    iVar1 = 1;
  }
  return iVar1;
}

