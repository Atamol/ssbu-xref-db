// addr:      7100266340
// offset:    0x266340
// name:      FUN_7100266340
// mangled:   
// signature: undefined __cdecl FUN_7100266340(undefined4 * param_1, long * param_2, undefined4 param_3, long param_4, long * param_5, undefined4 param_6, byte param_7, long param_8, long param_9, long param_10, undefined4 param_11, undefined4 param_12, long param_13, long param_14, void * param_15, byte param_16)


void FUN_7100266340(undefined4 *param_1,long *param_2,undefined4 param_3,long param_4,long *param_5,
                   undefined4 param_6,byte param_7,long param_8,long param_9,long param_10,
                   undefined4 param_11,undefined4 param_12,long param_13,long param_14,
                   void *param_15,byte param_16)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100266410:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_7100266464;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100266410;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100266410;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_7100266464:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  *(char *)(param_2 + 0x4f) = (char)param_5[1];
  param_2[0x50] = param_5[2];
  *(int *)(param_2 + 0x51) = (int)param_5[3];
  *(undefined1 *)((long)param_2 + 0x28c) = *(undefined1 *)((long)param_5 + 0x1c);
  if (param_2 + 0x4e != param_5) {
    FUN_710170fde0(param_2 + 0x52,param_5[4],param_5[5]);
  }
  FUN_71002824b0(param_1,param_2,param_3,param_4,param_6,param_7 & 1,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16 & 1);
                    /* WARNING: Could not recover jumptable at 0x007100266528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

