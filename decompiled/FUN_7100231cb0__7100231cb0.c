// addr:      7100231cb0
// offset:    0x231cb0
// name:      FUN_7100231cb0
// mangled:   
// signature: undefined4 __cdecl FUN_7100231cb0(long * param_1, long param_2, undefined8 param_3, void * param_4, void * param_5, undefined8 param_6, undefined8 param_7)


undefined4
FUN_7100231cb0(long *param_1,long param_2,undefined8 param_3,void *param_4,void *param_5,
              undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 local_58;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100231d3c:
    if ((*plVar7 == 0) || (lVar4 = *(long *)(*plVar7 + 0x10), lVar4 == 0)) goto LAB_7100231d6c;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100231d3c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100231d3c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100231d6c:
    lVar4 = 0;
  }
  plVar7 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  bVar2 = FUN_71001ccd00(param_1);
  if (bVar2) {
    local_58._0_4_ = (int)param_1[3];
    FUN_71001d0460(param_2,&local_58,4);
    local_58 = CONCAT44(local_58._4_4_,3);
    FUN_71001d0460(param_2,&local_58,4);
    FUN_71001d0460(param_2,param_4,8);
    if ((*(char *)(param_2 + 8) == '\0') &&
       (FUN_71001d0460(param_2,param_5,8), *(char *)(param_2 + 8) == '\0')) {
      if ((undefined8 *)param_1[0x13] == (undefined8 *)param_1[0x14]) {
        local_58 = param_3;
        FUN_7100225f90(param_1 + 0x12,&local_58);
        puVar5 = (undefined8 *)param_1[0x13];
        if (puVar5 == (undefined8 *)param_1[0x14]) goto LAB_7100231ea4;
LAB_7100231e50:
        *puVar5 = param_6;
        puVar5 = (undefined8 *)(param_1[0x13] + 8);
        param_1[0x13] = (long)puVar5;
        if (puVar5 != (undefined8 *)param_1[0x14]) goto LAB_7100231e70;
LAB_7100231ec4:
        local_58 = param_7;
        FUN_7100225f90(param_1 + 0x12,&local_58);
      }
      else {
        *(undefined8 *)param_1[0x13] = param_3;
        puVar5 = (undefined8 *)(param_1[0x13] + 8);
        param_1[0x13] = (long)puVar5;
        if (puVar5 != (undefined8 *)param_1[0x14]) goto LAB_7100231e50;
LAB_7100231ea4:
        local_58 = param_6;
        FUN_7100225f90(param_1 + 0x12,&local_58);
        puVar5 = (undefined8 *)param_1[0x13];
        if (puVar5 == (undefined8 *)param_1[0x14]) goto LAB_7100231ec4;
LAB_7100231e70:
        *puVar5 = param_7;
        param_1[0x13] = param_1[0x13] + 8;
        local_58 = param_7;
      }
      uVar6 = 1;
      DAT_71052b5848 = FUN_7100231ef0;
      goto LAB_7100231df0;
    }
  }
  uVar6 = 0;
LAB_7100231df0:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}

