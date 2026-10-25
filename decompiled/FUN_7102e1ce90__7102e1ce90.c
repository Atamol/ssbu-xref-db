// addr:      7102e1ce90
// offset:    0x2e1ce90
// name:      FUN_7102e1ce90
// mangled:   
// signature: undefined __cdecl FUN_7102e1ce90(float param_1, long * param_2)


void FUN_7102e1ce90(float param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  
  if (param_2[1] == 0) {
    if ((DAT_710532a9e0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_710532a9e0);
      puVar3 = &DAT_710532a9f0;
      if (iVar2 != 0) {
        DAT_710532a9f8 = 0;
        DAT_710532a9f0 = 0x3f800000;
        DAT_710532aa08 = 0;
        DAT_710532aa00 = 0x3f80000000000000;
        DAT_710532aa18 = 0x3f800000;
        DAT_710532aa10 = 0;
        DAT_710532aa28 = 0x3f80000000000000;
        DAT_710532aa20 = 0;
        __cxa_guard_release(&DAT_710532a9e0);
        puVar3 = &DAT_710532a9f0;
      }
    }
    else {
      puVar3 = &DAT_710532a9f0;
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(**(long **)(param_2[1] + 0x90) + 0x158))();
  }
  local_78 = puVar3[1];
  local_68 = puVar3[3];
  local_58 = puVar3[5];
  local_48 = puVar3[7];
  local_80 = *puVar3;
  local_70 = puVar3[2];
  local_60 = puVar3[4];
  local_50 = puVar3[6];
  FUN_7102e1d050(param_1,(long)param_2);
  plVar1 = param_2 + 10;
  if (*(long *)(param_2[3] + 0x38) != 0) {
    plVar4 = *(long **)(*(long *)(param_2[3] + 0x38) + 0x130);
    (**(code **)(*plVar4 + 0x178))(plVar4,plVar1,&local_80,1);
  }
  if (*(long *)(param_2[4] + 0x38) != 0) {
    plVar4 = *(long **)(*(long *)(param_2[4] + 0x38) + 0x130);
    (**(code **)(*plVar4 + 0x178))(plVar4,plVar1,&local_80,1);
  }
  if (*(long *)(param_2[6] + 0x38) != 0) {
    plVar4 = *(long **)(*(long *)(param_2[6] + 0x38) + 0x130);
    (**(code **)(*plVar4 + 0x168))(plVar4,plVar1,&local_80,1);
  }
  local_40[0] = param_2[0x10];
  local_40[1] = 0;
  FUN_71025f51e0(0.0,(long *)**(undefined8 **)(*param_2 + 0x1370),
                 (long *)(*(undefined8 **)(*param_2 + 0x1370))[1],
                 (&PTR_s_IPP0004_710513fc40)[*(int *)((long)param_2 + 0x44)],local_40);
  return;
}

