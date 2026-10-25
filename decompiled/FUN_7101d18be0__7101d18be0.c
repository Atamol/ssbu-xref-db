// addr:      7101d18be0
// offset:    0x1d18be0
// name:      FUN_7101d18be0
// mangled:   
// signature: undefined __cdecl FUN_7101d18be0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d18be0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  code *pcVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long *plVar17;
  long lVar18;
  undefined4 local_508 [2];
  undefined **local_500;
  long local_4f8;
  int local_4f0;
  undefined4 uStack_4ec;
  undefined1 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8 [2];
  undefined **local_4c0;
  long local_4b8;
  int local_4b0;
  undefined4 uStack_4ac;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined4 local_488 [2];
  undefined **local_480;
  long local_478;
  undefined8 local_470;
  undefined1 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined4 local_448 [2];
  undefined **local_440;
  long local_438;
  undefined8 local_430;
  undefined1 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined **local_408;
  undefined8 *local_400;
  undefined **local_3f8;
  undefined **local_3f0;
  long local_3e8;
  int local_3e0;
  undefined2 uStack_3dc;
  undefined2 local_3da;
  undefined1 uStack_3d8;
  undefined5 uStack_3d7;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  byte local_a0 [64];
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x128) + 8),0x7104453107);
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x128) + 8),0x710424f777);
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar6 = DAT_7105308400;
    if (1 < (int)DAT_7105308400) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x128) + 8),0x71043f0bf0);
      FUN_7103776910(&local_3f8,*(long *)(param_1 + 0x128),(long ****)"set_txt_winning",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      param_3 = (undefined **)(ulong)uVar6;
      FUN_710377a310((long)&local_3f8,1);
      ppuVar3 = local_3f0;
      local_3f8 = &PTR_FUN_710523d9a8;
      local_3f0 = (undefined **)0x0;
      if (ppuVar3 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar3);
      }
    }
    uVar6 = *(uint *)(*(long *)(param_1 + 0x130) + 0xc4);
    if (0x12 < uVar6) goto LAB_7101d19864;
    *(undefined4 *)(*(long *)(param_1 + 0x130) + (long)(int)uVar6 * 4 + 0x78) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x138) + 0x4c0) = 1;
  }
  plVar17 = *(long **)(param_1 + 0x130);
  lVar9 = *(long *)(*(long *)(DAT_7105325d88 + 8) + 0x118);
  if (*(char *)(lVar9 + 0xd8) == '\0') {
    if (*(uint *)(plVar17 + 0x1f) != 0) goto LAB_7101d18d70;
  }
  else {
    uVar6 = 0;
    if (*(long *)(lVar9 + 0x490) != 0) {
      uVar13 = (*(long *)(lVar9 + 0xe8) - *(long *)(lVar9 + 0x490)) * 1000000000;
      uVar8 = ((long)uVar13 >> 0x20) * 0x26d694b3 + ((uVar13 & 0xfffffe00) * 0x26d694b3 >> 0x20);
      uVar6 = (int)(((long)uVar13 >> 0x20) * 0x112e0be8 + ((long)uVar8 >> 0x20) +
                    ((uVar13 & 0xfffffe00) * 0x112e0be8 + (uVar8 & 0xffffffff) >> 0x20) >> 0x1a) -
              (int)((long)uVar13 >> 0x3f);
      uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    }
    if (*(uint *)(plVar17 + 0x1f) != uVar6) {
LAB_7101d18d70:
      if ((*(char *)(lVar9 + 0xd8) == '\0') || (*(long *)(lVar9 + 0x490) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar13 = (*(long *)(lVar9 + 0xe8) - *(long *)(lVar9 + 0x490)) * 1000000000;
        uVar8 = ((long)uVar13 >> 0x20) * 0x26d694b3 + ((uVar13 & 0xfffffe00) * 0x26d694b3 >> 0x20);
        uVar6 = (int)(((long)uVar13 >> 0x20) * 0x112e0be8 + ((long)uVar8 >> 0x20) +
                      ((uVar13 & 0xfffffe00) * 0x112e0be8 + (uVar8 & 0xffffffff) >> 0x20) >> 0x1a) -
                (int)((long)uVar13 >> 0x3f);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
      }
      *(uint *)(plVar17 + 0x1f) = uVar6;
      FUN_7103776910(&local_3f8,plVar17[0x1b],(long ****)"set_txt_count",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a310((long)&local_3f8,1);
      ppuVar3 = local_3f0;
      local_3f8 = &PTR_FUN_710523d9a8;
      local_3f0 = (undefined **)0x0;
      if (ppuVar3 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar3);
      }
      if ((int)plVar17[0x1f] < 10) {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13563b48a5,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar8 & 1) != 0)) {
          FUN_71024076d0((undefined4 *)&local_3f8,0x13563b48a5);
          if (((local_3e8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_3e0 == DAT_7106dd53ac)) {
            piVar10 = (int *)(local_3e8 + 0x38);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar4) {
                *piVar10 = *piVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        else {
          local_3e0 = 0;
          uStack_3dc = 0x6500;
          local_3da = 0x87;
          local_3d0 = 0xffffffffffffffff;
          uStack_3c8 = 0;
          local_3f8 = (undefined **)((ulong)local_3f8 & 0xffffffff00000000);
          local_3c0 = 0;
        }
        local_3f0 = &PTR_FUN_7104f73d50;
        local_3e8 = 0;
        uStack_3d8 = 0;
      }
    }
  }
  if (0x12 < *(uint *)((long)plVar17 + 0xc4)) goto LAB_7101d19864;
  uVar6 = *(uint *)((long)plVar17 + (long)(int)*(uint *)((long)plVar17 + 0xc4) * 4 + 0x78);
  if (*(uint *)(plVar17 + 0x19) != uVar6) {
    *(uint *)(plVar17 + 0x1a) = *(uint *)(plVar17 + 0x19);
    *(uint *)(plVar17 + 0x19) = uVar6;
    if (4 < uVar6) goto LAB_7101d19864;
    lVar9 = plVar17[(long)(int)uVar6 * 2 + 6];
    plVar17[1] = plVar17[(long)(int)uVar6 * 2 + 5];
    plVar17[2] = lVar9;
    pcVar11 = (code *)plVar17[3];
    uVar8 = plVar17[4] & 1;
    if (uVar8 != 0 || pcVar11 != (code *)0x0) {
      if (uVar8 != 0) {
        pcVar11 = *(code **)(pcVar11 + *(long *)(*plVar17 + (plVar17[4] >> 1)));
      }
      (*pcVar11)();
    }
    *(undefined4 *)((long)plVar17 + 0xcc) = 0;
  }
  if (*(char *)((long)plVar17 + 0xd4) != '\0') {
    pcVar11 = (code *)plVar17[3];
    uVar8 = plVar17[4] & 1;
    if (uVar8 != 0 || pcVar11 != (code *)0x0) {
      if (uVar8 != 0) {
        pcVar11 = *(code **)(pcVar11 + *(long *)(*plVar17 + (plVar17[4] >> 1)));
      }
      (*pcVar11)();
    }
    *(undefined4 *)((long)plVar17 + 0xcc) = 0;
    *(undefined1 *)((long)plVar17 + 0xd4) = 0;
  }
  if (*plVar17 != 0) {
    pcVar11 = (code *)plVar17[1];
    uVar8 = plVar17[2] & 1;
    if (uVar8 != 0 || pcVar11 != (code *)0x0) {
      if (uVar8 != 0) {
        pcVar11 = *(code **)(pcVar11 + *(long *)(*plVar17 + (plVar17[2] >> 1)));
      }
      (*pcVar11)();
    }
  }
  *(int *)((long)plVar17 + 0xcc) = *(int *)((long)plVar17 + 0xcc) + 1;
  FUN_7101d176e0(*(long **)(param_1 + 0x138));
  *(byte *)(*(long *)(param_1 + 0x140) + 0x4a8) =
       (byte)((uint)*(undefined4 *)(*(long *)(param_1 + 0x138) + 0x4bc) >> 0x1f) ^ 1;
  FUN_7101d20830(*(long **)(param_1 + 0x140));
  iVar7 = *(int *)(*(long *)(param_1 + 0x138) + 0x4bc);
  if (iVar7 < 0) {
    *(undefined1 *)(*(long *)(*(long *)(DAT_7105325d88 + 8) + 0x120) + 0xf2) = 0;
  }
  else {
    plVar17 = *(long **)(*(long *)(param_1 + 0x140) + 0x458);
    while (plVar17 != (long *)(*(long *)(param_1 + 0x140) + 0x460)) {
      if ((int)plVar17[4] == iVar7) {
        lVar9 = *(long *)(DAT_7105325d88 + 8);
        lVar18 = *(long *)(lVar9 + 0x118);
        if ((*(int *)(lVar18 + 200) == 2) || (*(char *)(lVar18 + 0xd8) == '\0'))
        goto LAB_7101d19228;
        uVar6 = *(uint *)((long)plVar17 + 0x1c);
        local_3f8 = (undefined **)((ulong)local_3f8 & 0xffffffffffffff00);
        local_3f0 = *(undefined ***)(lVar18 + 0xf0);
        local_3e8 = *(long *)(lVar18 + 0xf8);
        uVar15 = *(undefined8 *)(lVar18 + 0x100);
        uStack_3d8 = (undefined1)((ulong)*(undefined8 *)(lVar18 + 0x106) >> 0x10);
        uStack_3d7 = (undefined5)((ulong)*(undefined8 *)(lVar18 + 0x106) >> 0x18);
        local_3e0 = (int)uVar15;
        uStack_3dc = (undefined2)((ulong)uVar15 >> 0x20);
        local_3da = (undefined2)((ulong)uVar15 >> 0x30);
        FUN_7101d11b60((long)&local_3d0,lVar18 + 0x110);
        local_110 = *(undefined8 *)(lVar18 + 0x3d0);
        local_f0 = *(undefined8 *)(lVar18 + 0x3f0);
        local_f8 = *(undefined8 *)(lVar18 + 1000);
        local_100 = *(undefined8 *)(lVar18 + 0x3e0);
        local_108 = *(undefined8 *)(lVar18 + 0x3d8);
        local_d0 = *(undefined8 *)(lVar18 + 0x410);
        local_d8 = *(undefined8 *)(lVar18 + 0x408);
        local_e0 = *(undefined8 *)(lVar18 + 0x400);
        local_e8 = *(undefined8 *)(lVar18 + 0x3f8);
        local_c8 = *(undefined8 *)(lVar18 + 0x418);
        local_b0 = *(undefined8 *)(lVar18 + 0x430);
        local_b8 = *(undefined8 *)(lVar18 + 0x428);
        local_c0 = *(undefined8 *)(lVar18 + 0x420);
        local_a8 = 0;
        uVar8 = 0;
        goto LAB_7101d1916c;
      }
      plVar14 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        plVar14 = plVar17 + 2;
        bVar4 = *(long **)*plVar14 != plVar17;
        plVar17 = (long *)*plVar14;
        if (bVar4) {
          do {
            lVar9 = *plVar14;
            plVar14 = (long *)(lVar9 + 0x10);
            plVar17 = (long *)*plVar14;
          } while (*plVar17 != lVar9);
        }
      }
      else {
        do {
          plVar17 = plVar14;
          plVar14 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_7101d19254;
LAB_7101d1916c:
  pbVar16 = (byte *)(lVar18 + 0x440 + uVar8);
  bVar5 = *pbVar16;
  if (bVar5 == 0) goto LAB_7101d191a0;
  local_a0[uVar8] = bVar5;
  if (0x3e < (int)uVar8 + 1U) {
    uVar8 = (ulong)((int)uVar8 + 1);
    goto LAB_7101d191a0;
  }
  bVar5 = pbVar16[1];
  if (bVar5 == 0) {
    uVar8 = uVar8 + 1;
    goto LAB_7101d191a0;
  }
  local_a0[uVar8 + 1] = bVar5;
  uVar8 = uVar8 + 2;
  goto LAB_7101d1916c;
LAB_7101d191a0:
  local_a0[uVar8 & 0xffffffff] = 0;
  uVar12 = (uint)local_a0[0];
  local_a8 = 0x811c9dc5;
  local_a4 = (int)uVar8;
  if (local_a0[0] != 0) {
    pbVar16 = local_a0;
    do {
      pbVar16 = pbVar16 + 1;
      local_a8 = local_a8 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar16;
    } while (uVar12 != 0);
  }
  lVar18 = 0;
  uVar8 = 0;
  bVar4 = true;
  pbVar16 = (byte *)((long)&local_3d0 + 4);
  local_3f8 = (undefined **)((ulong)local_3f8 & 0xffffffffffffff00);
  do {
    if ((pbVar16[-4] != 0) && (uVar6 == *pbVar16)) goto LAB_7101d19230;
    uVar8 = uVar8 + 1;
    lVar18 = lVar18 + 0x100;
    pbVar16 = pbVar16 + 0x58;
  } while (uVar8 < 8);
LAB_7101d19228:
  lVar18 = 0;
  bVar4 = false;
LAB_7101d19230:
  local_3f8 = (undefined **)((ulong)local_3f8 & 0xffffffffffffff00);
  if (bVar4) {
    lVar9 = *(long *)(lVar9 + 0x120);
    *(char *)(lVar9 + 0xf3) = (char)((ulong)lVar18 >> 8);
    *(undefined1 *)(lVar9 + 0xf2) = 1;
  }
LAB_7101d19254:
  if (*(int *)(*(long *)(param_1 + 0x138) + 0xf8) == 1) {
    if (*(int *)(param_1 + 0x108) - 7U < 2) {
      return;
    }
    if (*(uint *)(param_1 + 0x104) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 7;
      return;
    }
    goto LAB_7101d19864;
  }
  uVar15 = 0;
  FUN_7103771d60(&local_3f8,*(long *)(param_1 + 0x4d8),(long ****)0x0,param_4,param_5,param_6,
                 param_7,param_8);
  if ((long *)*local_3f0 == (long *)0x0) {
    if (*(int *)(*(long *)(param_1 + 0x138) + 0x4bc) != -1) goto LAB_7101d192e4;
  }
  else {
    bVar5 = (**(code **)(*(long *)*local_3f0 + 0x210))();
    if (((bVar5 ^ *(int *)(*(long *)(param_1 + 0x138) + 0x4bc) == -1) & 1) != 0) {
LAB_7101d192e4:
      uVar15 = 0;
      FUN_7103771d60(&local_408,*(long *)(param_1 + 0x4d8),(long ****)0x0,param_4,param_5,param_6,
                     param_7,param_8);
      puVar2 = local_400;
      plVar17 = (long *)*local_400;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x208))(plVar17,*(int *)(*(long *)(param_1 + 0x138) + 0x4bc) == -1);
        uVar8 = (**(code **)(*plVar17 + 0x200))(plVar17);
        if ((uVar8 & 1) == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)(*plVar17 + 0x210))(plVar17);
          uVar6 = uVar6 ^ 1;
        }
        uVar15 = 0;
        (**(code **)(*plVar17 + 0x388))(plVar17,uVar6 & 1);
      }
      local_408 = &PTR_FUN_710523d9c8;
      local_400 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar2);
      }
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x4d8) + 0x25c) != 0) {
    lVar9 = *(long *)(**(long **)**(undefined8 **)(param_1 + 0x120) + 0x600);
    if ((*(char *)(lVar9 + 0x4aa) != '\0') && ((*(byte *)(lVar9 + 0x1b4) >> 1 & 1) != 0)) {
      lVar9 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40) >> 3) < 5) {
        uVar8 = 0;
        if (*(char *)(lVar9 + 0x191) == '\0') goto LAB_7101d19570;
LAB_7101d195e0:
        local_470 = 0x87650000000000;
        local_460 = 0xffffffffffffffff;
        uStack_458 = 0;
        local_488[0] = 0;
        local_450 = 0;
      }
      else {
        uVar8 = *(ulong *)(*(long *)(lVar9 + 0x40) + 0x20);
        if (*(char *)(lVar9 + 0x191) != '\0') goto LAB_7101d195e0;
LAB_7101d19570:
        uVar13 = FUN_7103313f20(lVar9,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                                ,param_8);
        if ((uVar13 & 1) == 0) goto LAB_7101d195e0;
        FUN_71024076d0(local_488,uVar8);
        if (((local_478 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_470 == DAT_7106dd53ac))
        {
          piVar10 = (int *)(local_478 + 0x38);
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      local_480 = &PTR_FUN_7104f73d50;
      local_478 = 0;
      local_468 = 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x130) + 200) == 4) {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13d3b19adc,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
        FUN_71024076d0(local_4c8,0x13d3b19adc);
        if (((local_4b8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_4b0 == DAT_7106dd53ac)) {
          piVar10 = (int *)(local_4b8 + 0x38);
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
        local_4a0 = 0xffffffffffffffff;
        uStack_498 = 0;
        local_4b0 = 0;
        uStack_4ac = 0x876500;
        local_4c8[0] = 0;
        local_490 = 0;
      }
      local_4c0 = &PTR_FUN_7104f73d50;
      local_4b8 = 0;
      local_4a8 = 0;
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x17a3061361,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
        FUN_71024076d0(local_508,0x17a3061361);
        if (((local_4f8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_4f0 == DAT_7106dd53ac)) {
          piVar10 = (int *)(local_4f8 + 0x38);
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
        local_4e0 = 0xffffffffffffffff;
        uStack_4d8 = 0;
        local_4f0 = 0;
        uStack_4ec = 0x876500;
        local_508[0] = 0;
        local_4d0 = 0;
      }
      local_500 = &PTR_FUN_7104f73d50;
      local_4f8 = 0;
      local_4e8 = 0;
      lVar9 = *(long *)(param_1 + 0x138);
      (**(code **)(**(long **)(lVar9 + 0x118) + 0x60))(*(long **)(lVar9 + 0x118),0);
      if (*(char *)(lVar9 + 0x4c1) != '\0') {
        (**(code **)(**(long **)(lVar9 + 0x120) + 0x60))(*(long **)(lVar9 + 0x120),0);
      }
      if (0x12 < *(uint *)(param_1 + 0x104)) {
LAB_7101d19864:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 8;
    }
    goto LAB_7101d197ec;
  }
  FUN_7103776640(&local_408,*(long *)(param_1 + 0x128),(byte ****)"set_btn_keyhelp",uVar15,param_4,
                 param_5,param_6,param_7,param_8);
  puVar2 = local_400;
  FUN_7103778300(0x3f800000,(long)local_400,0x71042a357e);
  local_408 = &PTR_FUN_710523d988;
  local_400 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar8 = puVar2[3];
    puVar2[2] = &PTR_FUN_710523d9a8;
    puVar2[3] = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  lVar9 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40) >> 3) < 3) {
    uVar8 = 0;
    if (*(char *)(lVar9 + 0x191) == '\0') goto LAB_7101d19478;
LAB_7101d194e8:
    local_430 = 0x87650000000000;
    local_420 = 0xffffffffffffffff;
    uStack_418 = 0;
    local_448[0] = 0;
    local_410 = 0;
  }
  else {
    uVar8 = *(ulong *)(*(long *)(lVar9 + 0x40) + 0x10);
    if (*(char *)(lVar9 + 0x191) != '\0') goto LAB_7101d194e8;
LAB_7101d19478:
    uVar13 = FUN_7103313f20(lVar9,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                            param_8);
    if ((uVar13 & 1) == 0) goto LAB_7101d194e8;
    FUN_71024076d0(local_448,uVar8);
    if (((local_438 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_430 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_438 + 0x38);
      do {
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  local_440 = &PTR_FUN_7104f73d50;
  local_438 = 0;
  local_428 = 0;
  *(undefined8 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 6;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_7101d197ec:
  ppuVar3 = local_3f0;
  local_3f8 = &PTR_FUN_710523d9c8;
  local_3f0 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar3);
  }
  return;
}

