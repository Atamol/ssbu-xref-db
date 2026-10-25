// addr:      71002824b0
// offset:    0x2824b0
// name:      FUN_71002824b0
// mangled:   
// signature: undefined __cdecl FUN_71002824b0(undefined4 * param_1, long * param_2, undefined4 param_3, long param_4, undefined4 param_5, byte param_6, long param_7, long param_8, long param_9, undefined4 param_10, undefined4 param_11, long param_12, long param_13, void * param_14, byte param_15)


void FUN_71002824b0(undefined4 *param_1,long *param_2,undefined4 param_3,long param_4,
                   undefined4 param_5,byte param_6,long param_7,long param_8,long param_9,
                   undefined4 param_10,undefined4 param_11,long param_12,long param_13,
                   void *param_14,byte param_15)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  *(undefined4 *)(param_2 + 0x14) = param_3;
  param_2[0x15] = param_4;
  puVar2 = FUN_71001af850(8);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710023c460(puVar2);
  }
  param_2[0x18] = param_7;
  param_2[0x19] = param_8;
  param_2[0x16] = (long)puVar2;
  *(byte *)(param_2 + 0x17) = param_6 & 1;
  *(undefined4 *)(param_2 + 0x1c) = param_11;
  param_2[0x1d] = param_12;
  param_2[0x1e] = param_13;
  param_2[0x1a] = param_9;
  *(undefined4 *)(param_2 + 0x1b) = param_5;
  *(undefined4 *)((long)param_2 + 0xdc) = param_10;
  if (param_14 != (void *)0x0) {
    if ((param_15 & 1) == 0) {
      param_2[0x49] = (long)param_14;
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x68))(param_2);
      puVar2 = FUN_71001b1820(uVar3 & 0xffffffff);
      param_2[0x48] = (long)puVar2;
      uVar3 = (**(code **)(*param_2 + 0x68))(param_2);
      memcpy(puVar2,param_14,uVar3 & 0xffffffff);
    }
  }
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_2 + 0x14));
  FUN_710022e7e0((long)(param_2 + 0x1f),*(long *)(lVar5 + 0xb8));
  local_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_71002829d0;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60((long)param_2,(long)&local_80);
  local_80 = (undefined **)CONCAT71(local_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&local_80);
  return;
}

