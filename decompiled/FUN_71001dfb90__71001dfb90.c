// addr:      71001dfb90
// offset:    0x1dfb90
// name:      FUN_71001dfb90
// mangled:   
// signature: undefined4 __cdecl FUN_71001dfb90(undefined8 param_1, long * param_2, long * param_3)


undefined4 FUN_71001dfb90(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined4 local_50 [2];
  int local_48 [6];
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001dfc00:
    if ((*plVar7 == 0) || (lVar4 = *(long *)(*plVar7 + 0x10), lVar4 == 0)) goto LAB_71001dfc30;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001dfc00;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001dfc00;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001dfc30:
    lVar4 = 0;
  }
  plVar7 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  bVar2 = FUN_71001ccd00(param_2);
  if (bVar2) {
    local_50[0] = (undefined4)param_2[3];
    (**(code **)(*param_3 + 0xe8))(local_48,param_3,FUN_71001dfcf0,local_50,DAT_7104f577ac);
    pcVar5 = FUN_710170d030;
    if (local_48[0] < 0) {
      pcVar5 = (code *)0x0;
    }
    if (pcVar5 != (code *)0x0) {
      uVar6 = 1;
      goto LAB_71001dfcbc;
    }
    (**(code **)(*(long *)param_3[1] + 0x80))((long *)param_3[1],param_3);
  }
  uVar6 = 0;
LAB_71001dfcbc:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}

