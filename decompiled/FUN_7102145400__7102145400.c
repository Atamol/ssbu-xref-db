// addr:      7102145400
// offset:    0x2145400
// name:      FUN_7102145400
// mangled:   
// signature: undefined4 __cdecl FUN_7102145400(long param_1)


undefined4 FUN_7102145400(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  
  if (lib::Singleton<app::GimmickEventPresenter>::instance_ == 0) {
    uVar8 = 0;
  }
  else {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
    uVar9 = (long)*(long **)(param_1 + 0x10) - (long)plVar4;
    if (*(long **)(param_1 + 0x10) <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
    uVar2 = FUN_71038f4d40(param_1,plVar4,"new_instance_lua");
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
    if (uVar1 == 2) {
      pcVar6 = (code *)*plVar4;
    }
    else if (uVar1 == 7) {
      pcVar6 = (code *)(*plVar4 + 0x28);
    }
    else {
      pcVar6 = (code *)0x0;
    }
    *(long **)(param_1 + 0x10) = plVar4;
    plVar4 = (long *)(*pcVar6)(uVar2);
    (**(code **)(*plVar4 + 0x20))(plVar4,param_1,1);
    if ((int)(uVar9 >> 4) < 0) {
      uVar9 = **(long **)(param_1 + 0x20) +
              ((long)(uVar9 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar7 = *(ulong *)(param_1 + 0x10);
      while (uVar7 < uVar9) {
        *(ulong *)(param_1 + 0x10) = uVar7 + 0x10;
        *(undefined4 *)(uVar7 + 8) = 0;
        uVar7 = *(ulong *)(param_1 + 0x10);
      }
    }
    else {
      uVar9 = *(long *)(param_1 + 0x10) + ((long)(uVar9 * -0x10000000) >> 0x1c);
    }
    *(ulong *)(param_1 + 0x10) = uVar9;
    FUN_710315f7e0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1e0),plVar4);
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
    }
    uVar3 = FUN_710391e050(param_1);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar5 + 1) = 0x45;
    *puVar5 = uVar3;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    uVar8 = 1;
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1,1);
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return uVar8;
}

