// addr:      7100216e70
// offset:    0x216e70
// name:      FUN_7100216e70
// mangled:   
// signature: undefined __cdecl FUN_7100216e70(undefined8 * param_1, uint param_2, long param_3, undefined4 param_4)


void FUN_7100216e70(undefined8 *param_1,uint param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  ulong local_48;
  
  FUN_71001bf490(param_1,param_2,param_4);
  *param_1 = &PTR_FUN_7104f58318;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  lVar5 = param_3 + 0xa0;
  FUN_71001b12a0(&local_48);
  param_1[0x21] = lVar5;
  lVar1 = param_3 + 200;
  param_1[0x1f] = param_1 + 0x1e;
  param_1[0x20] = 0;
  param_1[0x1d] = &PTR_FUN_7104f59878;
  param_1[0x1e] = param_1 + 0x1e;
  param_1[0x24] = param_1 + 0x24;
  param_1[0x25] = param_1 + 0x24;
  param_1[0x26] = 0;
  param_1[0x27] = lVar5;
  param_1[0x28] = lVar5;
  param_1[0x22] = local_48;
  param_1[0x23] = &PTR_FUN_7104f598d8;
  FUN_71001b12a0(&local_48);
  param_1[0x2d] = 0;
  param_1[0x2e] = lVar1;
  param_1[0x2a] = &PTR_FUN_7104f59878;
  param_1[0x2b] = param_1 + 0x2b;
  param_1[0x2c] = param_1 + 0x2b;
  param_1[0x31] = param_1 + 0x31;
  param_1[0x32] = param_1 + 0x31;
  param_1[0x2f] = local_48;
  param_1[0x30] = &PTR_FUN_7104f598d8;
  param_1[0x33] = 0;
  param_1[0x34] = lVar1;
  param_1[0x35] = lVar1;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = &PTR_FUN_7104f582d0;
  param_1[0x38] = &PTR_FUN_7104f599b8;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar5 = 0;
        goto LAB_7100216fdc;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  lVar5 = 0;
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x10);
  }
LAB_7100216fdc:
  puVar2 = (undefined8 *)(lVar5 + 0x1b0);
  if (1 < param_2 - 1) {
    puVar2 = (undefined8 *)(lVar5 + 0x1a8);
  }
  param_1[0x36] = *puVar2;
  return;
}

