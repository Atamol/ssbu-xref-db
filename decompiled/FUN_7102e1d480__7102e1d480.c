// addr:      7102e1d480
// offset:    0x2e1d480
// name:      FUN_7102e1d480
// mangled:   
// signature: undefined __cdecl FUN_7102e1d480(float param_1, float param_2, long * param_3)


void FUN_7102e1d480(float param_1,float param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  long local_90 [3];
  long lStack_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if (param_3[1] == 0) {
    if ((DAT_710532a9e0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_710532a9e0);
      puVar5 = &DAT_710532a9f0;
      if (iVar4 != 0) {
        DAT_710532a9f8 = 0;
        DAT_710532a9f0 = 0x3f800000;
        DAT_710532aa08 = 0;
        DAT_710532aa00 = 0x3f80000000000000;
        DAT_710532aa18 = 0x3f800000;
        DAT_710532aa10 = 0;
        DAT_710532aa28 = 0x3f80000000000000;
        DAT_710532aa20 = 0;
        __cxa_guard_release(&DAT_710532a9e0);
        puVar5 = &DAT_710532a9f0;
      }
    }
    else {
      puVar5 = &DAT_710532a9f0;
    }
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(**(long **)(param_3[1] + 0x90) + 0x158))();
  }
  lStack_78 = puVar5[1];
  local_68 = puVar5[3];
  local_58 = puVar5[5];
  local_48 = puVar5[7];
  local_90[2] = *puVar5;
  local_70 = puVar5[2];
  local_60 = puVar5[4];
  local_50 = puVar5[6];
  FUN_7102e1d050(param_2,(long)param_3);
  plVar7 = param_3 + 10;
  if (*(long *)(param_3[3] + 0x38) != 0) {
    plVar6 = *(long **)(*(long *)(param_3[3] + 0x38) + 0x130);
    (**(code **)(*plVar6 + 0x178))(plVar6,plVar7,local_90 + 2,1);
  }
  if (*(long *)(param_3[4] + 0x38) != 0) {
    plVar6 = *(long **)(*(long *)(param_3[4] + 0x38) + 0x130);
    (**(code **)(*plVar6 + 0x178))(plVar6,plVar7,local_90 + 2,1);
  }
  if (*(long *)(param_3[6] + 0x38) != 0) {
    plVar6 = *(long **)(*(long *)(param_3[6] + 0x38) + 0x130);
    (**(code **)(*plVar6 + 0x168))(plVar6,plVar7,local_90 + 2,1);
  }
  local_90[0] = param_3[0x10];
  local_90[1] = 0;
  FUN_71025f51e0(0.0,(long *)**(undefined8 **)(*param_3 + 0x1370),
                 (long *)(*(undefined8 **)(*param_3 + 0x1370))[1],
                 (&PTR_s_IPP0004_710513fc40)[*(int *)((long)param_3 + 0x44)],local_90);
  pauVar1 = (undefined1 (*) [12])(param_3 + 0x10);
  uVar9 = (undefined4)((ulong)param_3[0x11] >> 0x20);
  uVar3 = *(undefined8 *)*pauVar1;
  auVar10._12_4_ = uVar9;
  auVar10._0_12_ = *pauVar1;
  auVar2._12_4_ = uVar9;
  auVar2._0_12_ = *pauVar1;
  auVar10 = NEON_ext(auVar10,auVar2,8,1);
  lVar8 = param_3[1];
  param_3[0x11] = CONCAT44(uVar9,auVar10._0_4_);
  param_3[0x10] = CONCAT44((int)((ulong)uVar3 >> 0x20),(float)uVar3 + param_1);
  if (lVar8 != 0) {
    (**(code **)(**(long **)(lVar8 + 0x90) + 0x148))(*(long **)(lVar8 + 0x90),plVar7);
    lVar8 = *(long *)(lVar8 + 0xd8);
    if (lVar8 != 0) {
      local_70 = param_3[0xc];
      local_68 = param_3[0xd];
      local_90[2] = *plVar7;
      lStack_78 = param_3[0xb];
      local_50 = param_3[0x10];
      local_48 = param_3[0x11];
      local_60 = param_3[0xe];
      local_58 = param_3[0xf];
      if (*(char *)(*(long *)(lVar8 + 8) + 0xa8) != '\0') {
        plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x48);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_90 + 2);
      }
      *(undefined1 *)(lVar8 + 0x20) = 1;
    }
  }
  local_90[2] = param_3[0x10];
  lStack_78 = 0;
  FUN_71025f51e0(0.0,(long *)**(undefined8 **)(*param_3 + 0x1370),
                 (long *)(*(undefined8 **)(*param_3 + 0x1370))[1],
                 (&PTR_s_IPP0004_710513fc40)[*(int *)((long)param_3 + 0x44)],local_90 + 2);
  return;
}

