// addr:      7100266150
// offset:    0x266150
// name:      FUN_7100266150
// mangled:   
// signature: undefined __cdecl FUN_7100266150(undefined4 * param_1, long * param_2, undefined4 param_3, long param_4, long param_5, long param_6, undefined4 param_7, byte param_8, long param_9, long param_10, long param_11, undefined4 param_12, undefined4 param_13, long param_14, long param_15, long param_16, long param_17, void * param_18, byte param_19, byte param_20)


void FUN_7100266150(undefined4 *param_1,long *param_2,undefined4 param_3,long param_4,long param_5,
                   long param_6,undefined4 param_7,byte param_8,long param_9,long param_10,
                   long param_11,undefined4 param_12,undefined4 param_13,long param_14,long param_15
                   ,long param_16,long param_17,void *param_18,byte param_19,byte param_20)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026623c:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_7100266280;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710026623c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710026623c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_7100266280:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_710028b8a0((long)(param_2 + 0x4e),param_5);
  FUN_7100283cd0((long)(param_2 + 0x74),param_6);
  param_2[0x8d] = param_14;
  param_2[0x8e] = param_15;
  *(byte *)(param_2 + 0x94) = param_20 & 1;
  FUN_71002824b0(param_1,param_2,param_3,param_4,param_7,param_8 & 1,param_9,param_10,param_11,
                 param_12,param_13,param_16,param_17,param_18,param_19 & 1);
                    /* WARNING: Could not recover jumptable at 0x00710026633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

