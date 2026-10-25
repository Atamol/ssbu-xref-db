// addr:      7101eecce0
// offset:    0x1eecce0
// name:      FUN_7101eecce0
// mangled:   
// signature: undefined __cdecl FUN_7101eecce0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eecce0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar12;
  undefined8 extraout_x1_02;
  long ****pppplVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  undefined **local_f8;
  undefined **local_f0;
  long local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined **local_b0;
  long local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  lVar16 = **(long **)(param_1 + 0xf68);
  lVar15 = *(long *)(lVar16 + 0x10);
  if ((*(long *)(lVar15 + 8) != 0) &&
     (plVar9 = (long *)FUN_71037964b0(*(long *)(lVar15 + 8),0x7104455299), plVar9 != (long *)0x0)) {
    uVar10 = (**(code **)(*plVar9 + 0x138))();
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar15 = *(long *)(lVar16 + 0x10);
  }
  FUN_7103778300(0x3f800000,lVar15,0x71043bee07);
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  local_68 = 0xffffffffffffffff;
  local_78 = 0xffffffffffffffff;
  puVar3 = *(uint **)(param_1 + 0xf8);
  lVar15 = DAT_710532f8d0;
  for (puVar2 = *(uint **)(param_1 + 0xf0); DAT_710532f8d0 = lVar15, puVar2 != puVar3;
      puVar2 = puVar2 + 0x36) {
    puVar1 = puVar2 + 0x28;
    FUN_7103778300(0x3f800000,*(long *)(puVar2 + 0x2a),0x71042c55d6);
    uVar12 = extraout_x1;
    if (((*(char *)(param_1 + 0xfbb) != '\0') &&
        ((*(ulong *)(puVar2 + 8) & 0xff00000000000000) == 0x7f00000000000000)) &&
       ((*(ulong *)(puVar2 + 8) & 0xffffffffff) != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(puVar2 + 0x2a),0x71042d6b5d);
      FUN_7103778300(0x3f800000,*(long *)(puVar2 + 0x2a),0x7104270745);
      FUN_7103776640(&local_f8,(long)puVar1,(byte ****)"set_parts_spirits_2d",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      ppuVar6 = local_f0;
      FUN_7103778300(0x3f800000,(long)local_f0,0x7104337fc4);
      local_f8 = &PTR_FUN_710523d988;
      local_f0 = (undefined **)0x0;
      uVar12 = extraout_x1_00;
      if (ppuVar6 != (undefined **)0x0) {
        puVar11 = ppuVar6[3];
        ppuVar6[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar6[3] = (undefined *)0x0;
        if (puVar11 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar11);
        }
        FUN_710392eb40((ulong)ppuVar6);
        uVar12 = extraout_x1_01;
      }
    }
    uVar7 = FUN_7101eed970((uint *)&local_68,uVar12,(long ****)param_3,param_4,param_5,param_6,
                           param_7,param_8);
    pppplVar13 = (long ****)(ulong)uVar7;
    FUN_7103778430((long)puVar1,"fighter_seq_03_01_r%02d",pppplVar13,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar7 = FUN_7101eed970((uint *)&local_78,extraout_x1_02,pppplVar13,param_4,param_5,param_6,
                           param_7,param_8);
    param_3 = (undefined **)(ulong)uVar7;
    FUN_7103778430((long)puVar1,"fighter_seq_03_02_r%02d",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if (DAT_710593b990 != 0) {
      if (7 < *puVar2) goto LAB_7101eed288;
      uVar7 = *(uint *)(*(long *)(DAT_710593b990 + 8) + (long)(int)*puVar2 * 4);
      if ((uVar7 != 0xffffffff) && (DAT_71052c5120 != 0)) {
        param_6 = 10;
        param_3 = (undefined **)0x1359b30f21;
        param_4 = (byte ****)0x0;
        param_5 = (long ****)&DAT_ffffffff;
        param_7 = 10;
        param_8 = 0;
        FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar7,0x1359b30f21,0,0xffffffff,10,10,0
                      );
        *(undefined1 *)(param_1 + 0xfd3) = 1;
      }
    }
    lVar15 = DAT_710532f8d0;
  }
  if (*(char *)(*(long *)(lVar15 + 8) + 0x191) == '\0') {
    param_3 = (undefined **)&DAT_00000004;
    uVar10 = FUN_7103313f20(*(long *)(lVar15 + 8),0x121801d522,(long ****)&DAT_00000004,param_4,
                            param_5,param_6,param_7,param_8);
    if ((uVar10 & 1) == 0) goto LAB_7101eecf98;
    FUN_71024076d0(local_b8,0x121801d522);
    if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_a0 == DAT_7106dd53ac)) {
      piVar14 = (int *)(local_a8 + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
LAB_7101eecf98:
    local_a0 = 0;
    uStack_9c = 0x876500;
    local_b8[0] = 0;
    local_90 = 0xffffffffffffffff;
    uStack_88 = 0;
    local_80 = 0;
  }
  local_b0 = &PTR_FUN_7104f73d50;
  local_a8 = 0;
  local_98 = 0;
  if (*(char *)(*(long *)(lVar15 + 8) + 0x191) == '\0') {
    param_3 = (undefined **)&DAT_00000004;
    uVar10 = FUN_7103313f20(*(long *)(lVar15 + 8),0xf5418fb61,(long ****)&DAT_00000004,param_4,
                            param_5,param_6,param_7,param_8);
    if ((uVar10 & 1) == 0) goto LAB_7101eed068;
    FUN_71024076d0((undefined4 *)&local_f8,0xf5418fb61);
    *(undefined4 *)(param_1 + 0xf78) = local_f8._0_4_;
    if (local_e8 == 0) goto LAB_7101eed08c;
    if (*(int *)(param_1 + 0xf94) == 0x876500) {
      if (*(int *)(param_1 + 0xf90) == DAT_7106dd53ac) {
        if ((*(long *)(param_1 + 0xf88) != 0) && (DAT_7106dd53a8 == '\x01')) {
          piVar14 = (int *)(*(long *)(param_1 + 0xf88) + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar5) {
              *piVar14 = *piVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined8 *)(param_1 + 0xf88) = 0;
        *(undefined1 *)(param_1 + 0xf98) = 0;
      }
      else {
        *(int *)(param_1 + 0xf90) = DAT_7106dd53ac;
      }
      *(long *)(param_1 + 0xf88) = local_e8;
      piVar14 = (int *)(local_e8 + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_7101eed0d4;
    }
  }
  else {
LAB_7101eed068:
    local_e0 = 0;
    uStack_dc = 0x876500;
    local_d8 = 0;
    local_e8 = 0;
    local_f8 = (undefined **)((ulong)local_f8 & 0xffffffff00000000);
    local_c0 = 0;
    local_d0 = 0xffffffffffffffff;
    uStack_c8 = 0;
    *(undefined4 *)(param_1 + 0xf78) = 0;
LAB_7101eed08c:
    if (((*(long *)(param_1 + 0xf88) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_1 + 0xf90) == DAT_7106dd53ac)) {
      piVar14 = (int *)(*(long *)(param_1 + 0xf88) + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined8 *)(param_1 + 0xf88) = 0;
LAB_7101eed0d4:
    *(undefined1 *)(param_1 + 0xf98) = 0;
  }
  *(undefined8 *)(param_1 + 4000) = local_d0;
  *(undefined8 *)(param_1 + 0xfb0) = local_c0;
  *(undefined8 *)(param_1 + 0xfa8) = uStack_c8;
  local_f0 = &PTR_FUN_7104f73d50;
  if (((local_e8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_e0 == DAT_7106dd53ac)) {
    piVar14 = (int *)(local_e8 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = *piVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_e8 = 0;
  if ((*(char *)(param_1 + 0xfbc) != '\0') &&
     ((ulong)((*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 3) * -0x7b425ed097b425ed) <
      4)) {
    FUN_71037780e0(&local_f8,**(long **)(param_1 + 0xf70) + 8,(long ****)&DAT_7104421055,param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar6 = local_f0;
    if (((long *)local_f0[1] == (long *)0x0) ||
       (uVar10 = (**(code **)(*(long *)local_f0[1] + 0x138))(), (uVar10 & 1) != 0)) {
      local_f8 = &PTR_FUN_710523d9e8;
      local_f0 = (undefined **)0x0;
      if (ppuVar6 == (undefined **)0x0) goto LAB_7101eed1e4;
    }
    else if ((long *)ppuVar6[1] != (long *)0x0) {
      (**(code **)(*(long *)ppuVar6[1] + 0x1b8))(0x3f800000);
    }
    local_f0 = (undefined **)0x0;
    local_f8 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)ppuVar6);
  }
LAB_7101eed1e4:
  if (*(uint *)(param_1 + 0xdc) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xdc) * 4 + 0x90) = 5;
    return;
  }
LAB_7101eed288:
                    /* WARNING: Subroutine does not return */
  abort();
}

