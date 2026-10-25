// addr:      71001d1f60
// offset:    0x1d1f60
// name:      FUN_71001d1f60
// mangled:   
// signature: undefined8 __cdecl FUN_71001d1f60(ulong param_1, undefined4 param_2, byte param_3, undefined * param_4, undefined8 param_5, byte * param_6)


undefined8
FUN_71001d1f60(ulong param_1,undefined4 param_2,byte param_3,undefined *param_4,undefined8 param_5,
              byte *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 auStack_88 [7];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar7 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
      FUN_71001b46a0(auStack_88,10,param_2);
      FUN_71001b2e80((long)auStack_88);
      do {
        bVar1 = (*(code *)param_4)(param_5,0);
        if (((bVar1 ^ param_3) & 1) != 0) goto LAB_71001d20c8;
        iVar3 = FUN_71001b4760((long)auStack_88);
        FUN_71001d2110(iVar3);
        uVar6 = FUN_71001b2e90((long)auStack_88);
      } while ((uVar6 & 1) != 0);
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x7c,
                     0xe000000c,0);
LAB_71001d20c8:
      *param_6 = bVar1 & 1;
      FUN_71001b4730();
    }
    else {
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x6d,
                     0xe000001a,0);
      *param_6 = param_3 & 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

