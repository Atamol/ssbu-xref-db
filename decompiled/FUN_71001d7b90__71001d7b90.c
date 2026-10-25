// addr:      71001d7b90
// offset:    0x1d7b90
// name:      FUN_71001d7b90
// mangled:   
// signature: undefined8 __cdecl FUN_71001d7b90(ulong param_1, undefined4 param_2, undefined * param_3, undefined8 param_4, undefined4 * param_5)


undefined8
FUN_71001d7b90(ulong param_1,undefined4 param_2,undefined *param_3,undefined8 param_4,
              undefined4 *param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long *plVar8;
  code *pcVar9;
  undefined4 uStack_bc;
  byte local_b8 [24];
  undefined8 local_a0 [7];
  int local_68 [6];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar8 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar8 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
      local_a0[0]._0_4_ = 0x8001000b;
      FUN_71001b4200(local_68,(undefined4 *)local_a0);
      FUN_71001b46a0(local_a0,10,param_2);
      FUN_71001b2e80((long)local_a0);
      pcVar9 = FUN_710170d030;
      pcVar1 = pcVar9;
      if (local_68[0] < 0) {
        pcVar1 = (code *)0x0;
      }
      while (pcVar1 == (code *)0x0) {
        local_b8[0] = (*(code *)param_3)(param_4,0);
        local_b8[0] = local_b8[0] & 1;
        FUN_71001b42a0(local_68,(char *)local_b8);
        uVar6 = FUN_71001b2e90((long)local_a0);
        if ((uVar6 & 1) == 0) break;
        iVar3 = FUN_71001b4760((long)local_a0);
        FUN_71001d2110(iVar3);
        pcVar1 = pcVar9;
        if (local_68[0] < 0) {
          pcVar1 = (code *)0x0;
        }
      }
      if (local_68[0] < 0) {
        pcVar9 = (code *)0x0;
      }
      if (pcVar9 == (code *)0x0) {
        FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0xa7,
                       0xe000000c,0);
        uStack_bc = 0x8001000b;
        FUN_71001b4200((undefined4 *)local_b8,&uStack_bc);
        pbVar7 = local_b8;
      }
      else {
        pbVar7 = (byte *)local_68;
      }
      FUN_71001b4300(param_5,(undefined4 *)pbVar7);
      FUN_71001b4730();
    }
    else {
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x91,
                     0xe000001a,0);
      local_68[0] = -0x7ffefff5;
      FUN_71001b4200((undefined4 *)local_a0,local_68);
      FUN_71001b4300(param_5,(undefined4 *)local_a0);
    }
    uVar4 = 1;
  }
  return uVar4;
}

