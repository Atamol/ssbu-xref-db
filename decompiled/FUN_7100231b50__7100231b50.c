// addr:      7100231b50
// offset:    0x231b50
// name:      FUN_7100231b50
// mangled:   
// signature: undefined __cdecl FUN_7100231b50(long * param_1, short param_2)


void FUN_7100231b50(long *param_1,short param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  local_40 = local_50;
  local_50[0] = 0;
  local_38 = 0x10;
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_58,"<unknown>",-1);
  FUN_71001d22e0(param_1,(long)&local_58);
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_58);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  *param_1 = (long)&PTR_FUN_7104f5a9f0;
  if (param_2 != 0) {
    *(short *)(param_1 + 9) = param_2;
    plVar4 = &DAT_71052af180;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar3;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
      }
    }
    lVar5 = *(long *)(*(long *)(*plVar4 + 0x10) + 0x10);
    lVar2 = param_1[9];
    plVar4 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
    FUN_7100242360(lVar5,(short)lVar2,plVar4);
  }
  return;
}

