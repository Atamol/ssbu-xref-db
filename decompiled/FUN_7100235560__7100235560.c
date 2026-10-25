// addr:      7100235560
// offset:    0x235560
// name:      FUN_7100235560
// mangled:   
// signature: undefined4 __cdecl FUN_7100235560(undefined8 param_1, long * param_2, undefined8 param_3, long param_4, char * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined4 param_10, undefined4 param_11, byte param_12)


undefined4
FUN_7100235560(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,char *param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
              undefined4 param_10,undefined4 param_11,byte param_12)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002355f4:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_7100235624;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71002355f4;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71002355f4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100235624:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  bVar2 = FUN_71001ccd00(param_2);
  if (!bVar2) {
    uVar6 = 0;
    goto LAB_7100235740;
  }
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100235688:
    if ((*plVar8 == 0) || (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 == 0)) goto LAB_71002356d0;
    lVar5 = *(long *)(lVar5 + 0x10);
    puVar4 = FUN_71001af850(0x400);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100235688;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100235688;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002356d0:
    lVar5 = 0;
    puVar4 = FUN_71001af850(0x400);
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_7100236d70(puVar4,(int)param_2[3],param_1,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,param_10,param_11,param_12 & 1);
  }
  FUN_71001ccdf0(lVar5,(long)puVar4,0);
  uVar6 = 1;
LAB_7100235740:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}

