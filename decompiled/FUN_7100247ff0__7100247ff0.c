// addr:      7100247ff0
// offset:    0x247ff0
// name:      FUN_7100247ff0
// mangled:   
// signature: undefined __cdecl FUN_7100247ff0(long param_1, char * param_2, undefined4 param_3)


void FUN_7100247ff0(long param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  local_50[0] = 0;
  local_40 = local_50;
  local_38 = 0x10;
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_58,param_2,-1);
  thunk_FUN_71002315d0((long)&local_58);
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_58);
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  uVar1 = FUN_71001e0c60();
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if ((*puVar2 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar2)) {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    }
  }
  FUN_71001e0bf0((short)uVar1);
  return;
}

