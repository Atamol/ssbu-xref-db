// addr:      7101d230f0
// offset:    0x1d230f0
// name:      FUN_7101d230f0
// mangled:   
// signature: undefined __cdecl FUN_7101d230f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d230f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    plVar7 = (long *)(param_1 + 200);
    FUN_7103776910(&local_50,*plVar7,(long ****)"set_txt_result_title",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_50,"mnu_spectate_result_right_04",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_7103778300(0x3f800000,*(long *)(*plVar7 + 8),0x71043e0365);
    FUN_7103776910(&local_50,*plVar7,(long ****)"set_txt_result_point",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar10 = 5000;
    FUN_710377a310((long)&local_50,1);
    uVar5 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_7103776910(&local_50,*plVar7,(long ****)"set_txt_result_point_hl",uVar10,param_4,param_5,
                   param_6,param_7,param_8);
    param_3 = (long ****)0x1388;
    FUN_710377a310((long)&local_50,1);
    uVar5 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  plVar7 = (long *)(param_1 + 200);
  FUN_71037780e0(&local_50,*plVar7,(long ****)"panel_result_bonus",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_48;
  if (*(long **)(local_48 + 8) == (long *)0x0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = (float)(**(code **)(**(long **)(local_48 + 8) + 0x198))();
  }
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  if (fVar13 == 18.0) {
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1b5dc36bd2,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar5 & 1) == 0) goto LAB_7101d232cc;
      FUN_71024076d0(local_90,0x1b5dc36bd2);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar11 = (int *)(local_80 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
LAB_7101d232cc:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90[0] = 0;
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    local_70 = 0;
  }
  FUN_71037780e0(&local_50,*plVar7,(long ****)"panel_result_bonus",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_48;
  if (*(long **)(local_48 + 8) == (long *)0x0) {
    bVar4 = false;
  }
  else {
    fVar13 = (float)(**(code **)(**(long **)(local_48 + 8) + 0x198))();
    bVar4 = fVar13 == 30.0;
  }
  local_48 = 0;
  local_50 = &PTR_FUN_710523d9e8;
  if (uVar5 != 0) {
    local_48 = 0;
    local_50 = &PTR_FUN_710523d9e8;
    FUN_710392eb40(uVar5);
  }
  if (bVar4) {
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x130f21e8ef,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar5 & 1) == 0) goto LAB_7101d233dc;
      FUN_71024076d0(local_d0,0x130f21e8ef);
      if (((local_c0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_b8 == DAT_7106dd53ac)) {
        piVar11 = (int *)(local_c0 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
LAB_7101d233dc:
      local_b8 = 0x87650000000000;
      local_a8 = 0xffffffffffffffff;
      uStack_a0 = 0;
      local_d0[0] = 0;
      local_98 = 0;
    }
    local_c8 = &PTR_FUN_7104f73d50;
    local_c0 = 0;
    local_b0 = 0;
  }
  iVar2 = *(int *)(param_1 + 0xec);
  lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 200) + 8) + 8);
  if (lVar12 != 0) {
    plVar6 = (long *)FUN_71037964b0(lVar12,0x710425f69d);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x138))();
      if ((uVar5 & 1) == 0) goto LAB_7101d234b0;
      lVar12 = *(long *)(*(long *)(*plVar7 + 8) + 8);
      if (lVar12 == 0) goto LAB_7101d2347c;
    }
    plVar7 = (long *)FUN_71037964b0(lVar12,0x710432a291);
    if ((plVar7 != (long *)0x0) && (uVar5 = (**(code **)(*plVar7 + 0x138))(), (uVar5 & 1) == 0))
    goto LAB_7101d234b0;
  }
LAB_7101d2347c:
  lVar8 = **(long **)(param_1 + 0xd0);
  lVar12 = 0x94;
  if (*(char *)(lVar8 + 0x90) != '\0') {
    lVar12 = 0x9c;
  }
  if (*(int *)(lVar8 + lVar12) != iVar2 && *(char *)(lVar8 + 0x90) == '\0') {
    FUN_7103399f50(lVar8,iVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101d234b0:
  FUN_7101d20830(*(long **)(param_1 + 0xd8));
  uVar5 = *(ulong *)(param_1 + 0xf8);
  if (*(char *)(param_1 + 0x100) == '\0') {
    lVar12 = nn::os::GetSystemTick();
    uVar9 = nn::os::ConvertToTimeSpan(lVar12 - DAT_71074470e8);
    uVar1 = ((long)uVar9 >> 0x20) * 0xe353f7cf + ((uVar9 & 0xffffffff) * 0xe353f7cf >> 0x20);
    uVar5 = (uVar5 + (((long)(((long)uVar9 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                             ((uVar9 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >>
                      7) - ((long)uVar9 >> 0x3f)) * 1000) - *(long *)(param_1 + 0xf0);
  }
  if (5999999999 < uVar5) {
    if (0x12 < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 3;
  }
  return;
}

