// addr:      7101d22a90
// offset:    0x1d22a90
// name:      FUN_7101d22a90
// mangled:   
// signature: undefined __cdecl FUN_7101d22a90(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d22a90(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long ****pppplVar10;
  int *piVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined4 local_120 [2];
  undefined **local_118;
  long local_110;
  int local_108;
  undefined4 uStack_104;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    pppplVar10 = param_3;
    if (*(uint *)(param_1 + 0xe8) < 3) {
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        pppplVar10 = (long ****)&DAT_00000004;
        uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x159f1d8465,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        if ((uVar4 & 1) == 0) goto LAB_7101d22b5c;
        FUN_71024076d0(local_a0,0x159f1d8465);
        if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac)) {
          piVar11 = (int *)(local_90 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = *piVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101d22b5c:
        local_88 = 0x87650000000000;
        local_78 = 0xffffffffffffffff;
        uStack_70 = 0;
        local_a0[0] = 0;
        local_68 = 0;
      }
      local_98 = &PTR_FUN_7104f73d50;
      local_90 = 0;
      local_80 = 0;
    }
    bVar2 = FUN_7101d240d0();
    *(bool *)(param_1 + 0x108) = bVar2;
    uVar3 = FUN_7101d23c80();
    if (bVar2) {
      uVar3 = uVar3 - 5000;
    }
    param_3 = (long ****)(ulong)uVar3;
    FUN_7103776910(&local_60,*(long *)(param_1 + 200),(long ****)"set_txt_result_point",pppplVar10,
                   param_4,param_5,param_6,param_7,param_8);
    pppplVar10 = param_3;
    FUN_710377a310((long)&local_60,1);
    uVar4 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_7103776910(&local_60,*(long *)(param_1 + 200),(long ****)"set_txt_result_point_hl",
                   pppplVar10,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a310((long)&local_60,1);
    uVar4 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  plVar6 = (long *)(param_1 + 200);
  FUN_71037780e0(&local_60,*plVar6,(long ****)"panel_result_win",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_58;
  if (*(long **)(local_58 + 8) == (long *)0x0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)(**(code **)(**(long **)(local_58 + 8) + 0x198))();
  }
  local_60 = &PTR_FUN_710523d9e8;
  local_58 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  if (fVar15 == 20.0) {
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x17a3061361,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar4 & 1) == 0) goto LAB_7101d22d1c;
      FUN_71024076d0(local_e0,0x17a3061361);
      if (((local_d0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_c8 == DAT_7106dd53ac)) {
        piVar11 = (int *)(local_d0 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
LAB_7101d22d1c:
      local_b8 = 0xffffffffffffffff;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c4 = 0x876500;
      local_e0[0] = 0;
      local_a8 = 0;
    }
    uVar3 = DAT_71052391c0;
    local_d8 = &PTR_FUN_7104f73d50;
    local_d0 = 0;
    local_c0 = 0;
    if (*(int *)(param_1 + 0xe8) != 1) {
      DAT_71052391c0 = DAT_71052391c4;
      uVar3 = uVar3 ^ uVar3 << 0xb;
      DAT_71052391c4 = DAT_71052391c8;
      DAT_71052391c8 = DAT_71052391cc;
      DAT_71052391cc = uVar3 ^ uVar3 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        uVar13 = (&DAT_71044714e0)[DAT_71052391cc & 3 ^ 2];
        param_3 = (long ****)&DAT_00000004;
        uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar13,(long ****)&DAT_00000004,param_4
                               ,param_5,param_6,param_7,param_8);
        if ((uVar4 & 1) == 0) goto LAB_7101d22e14;
        FUN_71024076d0(local_120,uVar13);
        if (((local_110 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_108 == DAT_7106dd53ac)) {
          piVar11 = (int *)(local_110 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = *piVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101d22e14:
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_104 = 0x876500;
        local_120[0] = 0;
        local_e8 = 0;
      }
      local_118 = &PTR_FUN_7104f73d50;
      local_110 = 0;
      local_100 = 0;
    }
  }
  FUN_7101d20830(*(long **)(param_1 + 0xd8));
  iVar9 = *(int *)(param_1 + 0xec);
  if (*(char *)(param_1 + 0x108) == '\0') {
    lVar14 = *(long *)(*(long *)(*plVar6 + 8) + 8);
    if (lVar14 != 0) {
      plVar5 = (long *)FUN_71037964b0(lVar14,0x710425f69d);
      if (plVar5 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar4 & 1) == 0) goto LAB_7101d22f90;
        lVar14 = *(long *)(*(long *)(*plVar6 + 8) + 8);
        if (lVar14 == 0) goto LAB_7101d22f5c;
      }
      plVar6 = (long *)FUN_71037964b0(lVar14,0x710432a291);
      if ((plVar6 != (long *)0x0) && (uVar4 = (**(code **)(*plVar6 + 0x138))(), (uVar4 & 1) == 0))
      goto LAB_7101d22f90;
    }
LAB_7101d22f5c:
    lVar7 = **(long **)(param_1 + 0xd0);
    lVar14 = 0x94;
    if (*(char *)(lVar7 + 0x90) != '\0') {
      lVar14 = 0x9c;
    }
    if (*(int *)(lVar7 + lVar14) != iVar9 && *(char *)(lVar7 + 0x90) == '\0') goto LAB_7101d22f8c;
  }
  else {
    lVar14 = *(long *)(*(long *)(*plVar6 + 8) + 8);
    if (lVar14 != 0) {
      plVar5 = (long *)FUN_71037964b0(lVar14,0x710425f69d);
      if (plVar5 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar4 & 1) == 0) goto LAB_7101d22f90;
        lVar14 = *(long *)(*(long *)(*plVar6 + 8) + 8);
        if (lVar14 == 0) goto LAB_7101d22ebc;
      }
      plVar6 = (long *)FUN_71037964b0(lVar14,0x710432a291);
      if ((plVar6 != (long *)0x0) && (uVar4 = (**(code **)(*plVar6 + 0x138))(), (uVar4 & 1) == 0))
      goto LAB_7101d22f90;
    }
LAB_7101d22ebc:
    lVar7 = **(long **)(param_1 + 0xd0);
    lVar14 = 0x94;
    if (*(char *)(lVar7 + 0x90) != '\0') {
      lVar14 = 0x9c;
    }
    iVar9 = iVar9 + -5000;
    if (*(int *)(lVar7 + lVar14) != iVar9 && *(char *)(lVar7 + 0x90) == '\0') {
LAB_7101d22f8c:
      FUN_7103399f50(lVar7,iVar9,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
LAB_7101d22f90:
  uVar4 = *(ulong *)(param_1 + 0xf8);
  if (*(char *)(param_1 + 0x108) == '\0') {
    if (*(char *)(param_1 + 0x100) == '\0') {
      lVar14 = nn::os::GetSystemTick();
      uVar8 = nn::os::ConvertToTimeSpan(lVar14 - DAT_71074470e8);
      uVar13 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
      uVar4 = (uVar4 + (((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar13 >> 0x20) +
                               ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar13 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar8 >> 0x3f)) * 1000) - *(long *)(param_1 + 0xf0);
    }
    if (uVar4 < 5000000000) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0xb4);
    if (0x12 < uVar3) goto LAB_7101d230e0;
    uVar12 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x100) == '\0') {
      lVar14 = nn::os::GetSystemTick();
      uVar8 = nn::os::ConvertToTimeSpan(lVar14 - DAT_71074470e8);
      uVar13 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
      uVar4 = (uVar4 + (((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar13 >> 0x20) +
                               ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar13 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar8 >> 0x3f)) * 1000) - *(long *)(param_1 + 0xf0);
    }
    if (uVar4 < 3000000000) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0xb4);
    if (0x12 < uVar3) {
LAB_7101d230e0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar12 = 2;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0x68) = uVar12;
  return;
}

