// addr:      71001f13a0
// offset:    0x1f13a0
// name:      FUN_71001f13a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001f13a0(long param_1, long param_2)


undefined8 FUN_71001f13a0(long param_1,long param_2)

{
  long *plVar1;
  ulonglong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar2 = FUN_71001f2ba0(param_2,"RVCID",0);
  if ((int)uVar2 != 0) {
    uVar2 = FUN_71001f2ba0(param_2,"RVCID",0);
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != (int)uVar2)) {
      return 0;
    }
    *(int *)(param_1 + 8) = (int)uVar2;
    uVar2 = FUN_71001f2ba0(param_2,"PID",0);
    if (*(long *)(param_1 + 0x10) == 0) {
      *(ulonglong *)(param_1 + 0x10) = uVar2;
    }
  }
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = FUN_71001b1820(0x80);
  *plVar3 = 0;
  plVar3[2] = (long)&PTR_FUN_7104f57900;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = (long)(plVar3 + 6);
  plVar3[9] = 0;
  plVar3[8] = (long)(plVar3 + 9);
  plVar3[10] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = (long)(plVar3 + 0xc);
  *(undefined2 *)(plVar3 + 0xf) = 1;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  *(undefined1 *)((long)plVar3 + 0x7a) = 0;
  puVar4 = FUN_71001af850(0x90);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_71001beb40(puVar4);
  }
  plVar3[3] = (long)puVar4;
  FUN_71001f1f40((long)(plVar3 + 2),param_2);
  plVar3[1] = (long)plVar1;
  lVar5 = *plVar1;
  *plVar3 = lVar5;
  *(long **)(lVar5 + 8) = plVar3;
  *plVar1 = (long)plVar3;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return 1;
}

