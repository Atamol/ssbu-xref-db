// addr:      7101ef56e0
// offset:    0x1ef56e0
// name:      FUN_7101ef56e0
// mangled:   
// signature: undefined __cdecl FUN_7101ef56e0(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ef56e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  long ****pppplVar12;
  int *piVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 local_b8 [2];
  undefined **local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  ulong local_70;
  undefined **local_68;
  ulong local_60;
  long ***local_58;
  ulong local_50;
  undefined4 local_44;
  
  if (*(int *)((long)param_1 + 0x24c) == 0) {
    ppuVar14 = (undefined **)
               (&PTR_DAT_71050b3e88)
               [*(int *)(*DAT_7105328e18 + 0x34) < *(int *)(*DAT_7105328e18 + 0x1ec)];
    puVar1 = param_1 + 0x4b;
    FUN_7103778430((long)puVar1,"count_up_%s_hl",ppuVar14,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_68,(long)puVar1,(byte ****)"set_part_win_%s",ppuVar14,param_4,param_5,
                   param_6,param_7,param_8);
    puVar6 = (undefined8 *)
             FUN_710392e290(0x10,0xb8,(long ****)ppuVar14,param_4,param_5,param_6,param_7,param_8);
    if (puVar6 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_58 = (long ***)&DAT_000000b8;
        ppuVar14 = (undefined **)&local_58;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar7 & 1) != 0) &&
           (puVar6 = (undefined8 *)
                     FUN_710392e290(0x10,0xb8,(long ****)ppuVar14,param_4,param_5,param_6,param_7,
                                    param_8), puVar6 != (undefined8 *)0x0)) goto LAB_7101ef57b8;
      }
      puVar6 = (undefined8 *)0x0;
    }
LAB_7101ef57b8:
    local_50 = local_60;
    local_60 = 0;
    local_58 = (long ***)&PTR_FUN_710523d988;
    FUN_7103776390(puVar6,&local_58,(long ****)ppuVar14,param_4,param_5,param_6,param_7,param_8);
    uVar7 = local_50;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x16) = 0xffffffff;
    puVar6[8] = 0;
    puVar6[9] = 0;
    *(undefined1 *)((long)puVar6 + 0xb4) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[7] = FUN_7101ef65f0;
    puVar6[8] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = puVar6;
    puVar6[3] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0;
    puVar6[9] = FUN_7101ef6600;
    puVar6[10] = 0;
    local_58 = (long ***)&PTR_FUN_710523d988;
    local_50 = 0;
    if (uVar7 != 0) {
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    puVar15 = (undefined8 *)param_1[0x4d];
    param_1[0x4d] = puVar6;
    if (puVar15 != (undefined8 *)0x0) {
      uVar7 = puVar15[1];
      *puVar15 = &PTR_FUN_710523d988;
      puVar15[1] = 0;
      if (uVar7 != 0) {
        uVar8 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40((ulong)puVar15);
    }
    local_68 = &PTR_FUN_710523d988;
    local_60 = 0;
    uVar2 = *(uint *)(param_1[0x4d] + 0xa4);
    if (0x12 < uVar2) goto LAB_7101ef5c9c;
    *(undefined4 *)(param_1[0x4d] + (long)(int)uVar2 * 4 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      ppuVar14 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052cc5f0 == '\0') {
      uVar2 = *(uint *)(*DAT_7105328e18 + 0x3a0);
      FUN_7103776640(&local_78,(long)puVar1,(byte ****)"set_part_result_coin",ppuVar14,param_4,
                     param_5,param_6,param_7,param_8);
      pppplVar12 = (long ****)(ulong)uVar2;
      FUN_7103392c70((undefined1 *)param_1[0x55],&local_78,pppplVar12,param_4,param_5,param_6,
                     param_7,param_8);
      uVar7 = local_70;
      local_78 = &PTR_FUN_710523d988;
      local_70 = 0;
      uVar11 = extraout_x1;
      if (uVar7 != 0) {
        uVar8 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar7);
        uVar11 = extraout_x1_00;
      }
      FUN_71033934a0(param_1[0x55],uVar11,pppplVar12,param_4,param_5,param_6,param_7,param_8);
    }
  }
  if (*(char *)(*DAT_7105328e18 + 0x3a6) == '\0') {
LAB_7101ef5a9c:
    cVar3 = *(char *)(param_1 + 0x5f);
  }
  else {
    lVar16 = param_1[0x55];
    if (*(char *)(lVar16 + 0xb1) == '\0') {
      *(undefined2 *)(lVar16 + 0xb0) = 0x100;
      lVar9 = *(long *)(*(long *)(lVar16 + 8) + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)FUN_71037964b0(lVar9,lVar16 + 0x68);
        if ((plVar10 != (long *)0x0) &&
           (uVar7 = (**(code **)(*plVar10 + 0x138))(), (uVar7 & 1) == 0)) {
          FUN_7103778760(*(long *)(lVar16 + 8),lVar16 + 0x68);
          *(undefined1 *)(lVar16 + 0x68) = 0;
          *(undefined8 *)(lVar16 + 0x60) = 0x811c9dc5;
        }
      }
      lVar9 = *(long *)(lVar16 + 0xa8);
      if (*(char *)(lVar9 + 0x90) != '\0') {
        *(undefined4 *)(lVar9 + 0xa0) = *(undefined4 *)(lVar9 + 0xa4);
        if (*(long *)(lVar9 + 0x88) != 0) {
          FUN_710373b540(*(long *)(lVar9 + 0x88),0);
          uVar7 = *(ulong *)(lVar9 + 0x88);
          *(undefined8 *)(lVar9 + 0x88) = 0;
          if (uVar7 != 0) {
            *(undefined ***)(uVar7 + 8) = &PTR_FUN_7104f73d50;
            if (((*(long *)(uVar7 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
               (*(int *)(uVar7 + 0x18) == DAT_7106dd53ac)) {
              piVar13 = (int *)(*(long *)(uVar7 + 0x10) + 0x38);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar4) {
                  *piVar13 = *piVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            *(undefined8 *)(uVar7 + 0x10) = 0;
            *(undefined1 *)(uVar7 + 0x20) = 0;
            FUN_710392eb40(uVar7);
          }
        }
      }
      FUN_7103399c10(*(long *)(lVar16 + 0xa8));
    }
    lVar16 = *(long *)(*(long *)(param_1[0x4d] + 8) + 8);
    if (((lVar16 == 0) ||
        (plVar10 = (long *)FUN_71037964b0(lVar16,0x71044552dc), plVar10 == (long *)0x0)) ||
       ((uVar7 = (**(code **)(*plVar10 + 0x138))(), (uVar7 & 1) != 0 ||
        (*(int *)(param_1[0x4d] + 0xa8) != 1)))) goto LAB_7101ef5a9c;
    FUN_7103778760(*(long *)(param_1[0x4d] + 8),0x71044552dc);
    cVar3 = *(char *)(param_1 + 0x5f);
  }
  if ((cVar3 == '\0') &&
     (((lVar16 = *(long *)(*(long *)(param_1[0x4d] + 8) + 8), lVar16 == 0 ||
       (plVar10 = (long *)FUN_71037964b0(lVar16,0x71044552dc), plVar10 == (long *)0x0)) ||
      (uVar7 = (**(code **)(*plVar10 + 0x138))(), (uVar7 & 1) != 0)))) {
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19405f08e7,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8), (uVar7 & 1) != 0)) {
      FUN_71024076d0(local_b8,0x19405f08e7);
      if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a0 == DAT_7106dd53ac)) {
        piVar13 = (int *)(local_a8 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = *piVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      local_a0 = 0x87650000000000;
      local_90 = 0xffffffffffffffff;
      uStack_88 = 0;
      local_b8[0] = 0;
      local_80 = 0;
    }
    local_b0 = &PTR_FUN_7104f73d50;
    local_a8 = 0;
    local_98 = 0;
    *(undefined1 *)(param_1 + 0x5f) = 1;
  }
  lVar16 = *(long *)(*(long *)(param_1[0x4d] + 8) + 8);
  if ((((lVar16 == 0) ||
       (plVar10 = (long *)FUN_71037964b0(lVar16,0x71044552dc), plVar10 == (long *)0x0)) ||
      (uVar7 = (**(code **)(*plVar10 + 0x138))(), (uVar7 & 1) != 0)) &&
     (*(char *)(param_1[0x55] + 0xb1) != '\0')) {
    if (0x12 < *(uint *)((long)param_1 + 0x244)) {
LAB_7101ef5c9c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x244) * 4 + 0x1f8) = 0xc;
  }
  else {
    uVar7 = FUN_71023489d0(*DAT_7105328e18);
    if ((((uVar7 & 1) != 0) && (*(char *)(*DAT_7105328e18 + 0x3a6) == '\0')) &&
       ((*(char *)(*(long *)(**(long **)*param_1 + 0x600) + 0x4aa) != '\0' &&
        ((*(byte *)(*(long *)(**(long **)*param_1 + 0x600) + 0x1c0) >> 1 & 1) != 0)))) {
      *(undefined1 *)(*DAT_7105328e18 + 0x3a6) = 1;
    }
  }
  return;
}

