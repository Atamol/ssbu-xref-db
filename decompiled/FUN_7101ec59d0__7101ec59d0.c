// addr:      7101ec59d0
// offset:    0x1ec59d0
// name:      FUN_7101ec59d0
// mangled:   
// signature: undefined __cdecl FUN_7101ec59d0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101ec5fb4) */
/* WARNING: Removing unreachable block (ram,0x007101ec5c98) */
/* WARNING: Removing unreachable block (ram,0x007101ec5b94) */
/* WARNING: Removing unreachable block (ram,0x007101ec5eac) */
/* WARNING: Removing unreachable block (ram,0x007101ec60bc) */

void FUN_7101ec59d0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  long ****pppplVar9;
  byte ****ppppbVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined **local_128;
  undefined8 *local_120;
  undefined **local_118;
  ulong local_110;
  byte ***local_108;
  long *plStack_100;
  long ***local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_a0;
  uint *local_98;
  uint *local_90;
  undefined **local_88;
  undefined8 *local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  puVar6 = (uint *)FUN_710392e290(0x10,0x1f8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (uint *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (uint *)((ulong)local_a0._4_4_ << 0x20);
      local_e8 = (undefined **)&DAT_000001f8;
      param_3 = (long ****)&local_e8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (uint *)FUN_710392e290(0x10,0x1f8,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), puVar6 != (uint *)0x0)) goto LAB_7101ec5a48;
    }
    puVar6 = (uint *)0x0;
  }
LAB_7101ec5a48:
  local_90 = puVar6 + 0x7e;
  local_a0 = puVar6;
  local_98 = puVar6;
  uVar19 = 0x811c9dc5;
  local_e0 = 0x5f6e74625f746573;
  local_d8 = 0x6564696365645f6c;
  local_d0 = local_d0 & 0xffffff00;
  pcVar14 = (char *)((long)&local_e0 + 1);
  do {
    cVar18 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar18 != '\0');
  uVar7 = 0;
  cVar18 = 's';
  *puVar6 = 0;
  do {
    *(char *)((long)puVar6 + uVar7 + 8) = cVar18;
    if (0x3e < (int)uVar7 + 1U) {
      uVar7 = (ulong)((int)uVar7 + 1);
      break;
    }
    cVar18 = *(char *)((long)&local_e0 + uVar7 + 1);
    uVar7 = uVar7 + 1;
  } while (cVar18 != '\0');
  *(undefined1 *)((long)puVar6 + (uVar7 & 0xffffffff) + 8) = 0;
  uVar13 = (uint)(byte)puVar6[2];
  puVar6[1] = (uint)uVar7;
  uVar17 = uVar19;
  if ((byte)puVar6[2] != 0) {
    pbVar15 = (byte *)((long)puVar6 + 9);
    do {
      uVar17 = uVar17 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar13 != 0);
  }
  local_98 = puVar6 + 0x12;
  *puVar6 = uVar17;
  local_e0 = 0x5f6e74625f746573;
  local_d8 = 0x6564696365645f6c;
  local_d0 = 0x31305f;
  pcVar14 = (char *)((long)&local_e0 + 1);
  do {
    cVar18 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar18 != '\0');
  uVar7 = 0;
  cVar18 = 's';
  *local_98 = 0;
  do {
    *(char *)((long)puVar6 + uVar7 + 0x50) = cVar18;
    if (0x3e < (int)uVar7 + 1U) {
      uVar7 = (ulong)((int)uVar7 + 1);
      break;
    }
    cVar18 = *(char *)((long)&local_e0 + uVar7 + 1);
    if (cVar18 == '\0') {
      uVar7 = uVar7 + 1;
      break;
    }
    *(char *)((long)puVar6 + uVar7 + 0x51) = cVar18;
    cVar18 = *(char *)((long)&local_e0 + uVar7 + 2);
    uVar7 = uVar7 + 2;
  } while (cVar18 != '\0');
  *(undefined1 *)((long)local_98 + (uVar7 & 0xffffffff) + 8) = 0;
  puVar6[0x13] = (uint)uVar7;
  uVar13 = (uint)(byte)puVar6[0x14];
  uVar17 = uVar19;
  if ((byte)puVar6[0x14] != 0) {
    pbVar15 = (byte *)((long)puVar6 + 0x51);
    do {
      uVar17 = uVar17 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar13 != 0);
  }
  local_98 = puVar6 + 0x24;
  puVar6[0x12] = uVar17;
  local_e0 = 0x745f39305f746573;
  uVar13 = 0x73;
  lVar11 = 9;
  local_d8 = 0x656469006c616972;
  uVar17 = uVar19;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar13;
    uVar13 = (uint)*(byte *)((long)&local_e8 + lVar11);
    lVar11 = lVar11 + 1;
  } while (uVar13 != 0);
  local_e8 = (undefined **)CONCAT44(0xc,uVar17);
  if (local_98 < puVar6 + 0x7e) {
    uVar7 = 0;
    cVar18 = 's';
    *local_98 = 0;
    do {
      *(char *)((long)puVar6 + uVar7 + 0x98) = cVar18;
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 1);
      if (cVar18 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)puVar6 + uVar7 + 0x99) = cVar18;
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 2);
      uVar7 = uVar7 + 2;
    } while (cVar18 != '\0');
    *(undefined1 *)((long)puVar6 + (uVar7 & 0xffffffff) + 0x98) = 0;
    puVar6[0x25] = (uint)uVar7;
    uVar13 = (uint)(byte)puVar6[0x26];
    uVar17 = uVar19;
    if ((byte)puVar6[0x26] != 0) {
      pbVar15 = (byte *)((long)puVar6 + 0x99);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
    }
    *local_98 = uVar17;
    local_98 = puVar6 + 0x36;
  }
  else {
    FUN_71019c1c50(&local_a0,(long)&local_e8,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  local_d0 = local_d0 & 0xffffff00;
  local_e0 = 0x735f38305f746573;
  uVar13 = 0x73;
  local_d8 = 0x7765697665676174;
  lVar11 = 9;
  uVar17 = uVar19;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar13;
    uVar13 = (uint)*(byte *)((long)&local_e8 + lVar11);
    lVar11 = lVar11 + 1;
  } while (uVar13 != 0);
  local_e8 = (undefined **)CONCAT44(0x10,uVar17);
  if (local_98 < local_90) {
    *local_98 = 0;
    for (uVar7 = 0; *(char *)((long)&local_e0 + uVar7) != '\0'; uVar7 = uVar7 + 2) {
      *(char *)((long)local_98 + uVar7 + 8) = *(char *)((long)&local_e0 + uVar7);
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 1);
      if (cVar18 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)local_98 + uVar7 + 9) = cVar18;
    }
    *(undefined1 *)((long)local_98 + (uVar7 & 0xffffffff) + 8) = 0;
    local_98[1] = (uint)uVar7;
    uVar13 = (uint)(byte)local_98[2];
    uVar17 = uVar19;
    if ((byte)local_98[2] != 0) {
      pbVar15 = (byte *)((long)local_98 + 9);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
    }
    *local_98 = uVar17;
    local_98 = local_98 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_a0,(long)&local_e8,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar13 = 0x73;
  local_e0 = 0x5f6e74625f746573;
  lVar11 = 9;
  local_d8._0_5_ = 0x6f646e75;
  uVar17 = uVar19;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar13;
    uVar13 = (uint)*(byte *)((long)&local_e8 + lVar11);
    lVar11 = lVar11 + 1;
  } while (uVar13 != 0);
  local_e8 = (undefined **)CONCAT44(0xc,uVar17);
  if (local_98 < local_90) {
    uVar7 = 0;
    cVar18 = 's';
    *local_98 = 0;
    do {
      *(char *)((long)local_98 + uVar7 + 8) = cVar18;
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 1);
      if (cVar18 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)local_98 + uVar7 + 9) = cVar18;
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 2);
      uVar7 = uVar7 + 2;
    } while (cVar18 != '\0');
    *(undefined1 *)((long)local_98 + (uVar7 & 0xffffffff) + 8) = 0;
    local_98[1] = (uint)uVar7;
    uVar13 = (uint)(byte)local_98[2];
    uVar17 = uVar19;
    if ((byte)local_98[2] != 0) {
      pbVar15 = (byte *)((long)local_98 + 9);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
    }
    *local_98 = uVar17;
    local_98 = local_98 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_a0,(long)&local_e8,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar13 = 0x73;
  local_e0 = 0x5f6e74625f746573;
  lVar11 = 9;
  local_d8._0_5_ = 0x6f646572;
  uVar17 = uVar19;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar13;
    uVar13 = (uint)*(byte *)((long)&local_e8 + lVar11);
    lVar11 = lVar11 + 1;
  } while (uVar13 != 0);
  local_e8 = (undefined **)CONCAT44(0xc,uVar17);
  if (local_98 < local_90) {
    uVar7 = 0;
    cVar18 = 's';
    *local_98 = 0;
    do {
      *(char *)((long)local_98 + uVar7 + 8) = cVar18;
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 1);
      if (cVar18 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)local_98 + uVar7 + 9) = cVar18;
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 2);
      uVar7 = uVar7 + 2;
    } while (cVar18 != '\0');
    *(undefined1 *)((long)local_98 + (uVar7 & 0xffffffff) + 8) = 0;
    local_98[1] = (uint)uVar7;
    uVar13 = (uint)(byte)local_98[2];
    uVar17 = uVar19;
    if ((byte)local_98[2] != 0) {
      pbVar15 = (byte *)((long)local_98 + 9);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
    }
    *local_98 = uVar17;
    local_98 = local_98 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_a0,(long)&local_e8,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar13 = 0x73;
  local_e0 = 0x5f6e74625f746573;
  lVar11 = 9;
  local_d8 = CONCAT35(local_d8._5_3_,0x706c6568);
  uVar17 = uVar19;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar13;
    uVar13 = (uint)*(byte *)((long)&local_e8 + lVar11);
    lVar11 = lVar11 + 1;
  } while (uVar13 != 0);
  local_e8 = (undefined **)CONCAT44(0xc,uVar17);
  if (local_98 < local_90) {
    uVar7 = 0;
    cVar18 = 's';
    *local_98 = 0;
    do {
      *(char *)((long)local_98 + uVar7 + 8) = cVar18;
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 1);
      if (cVar18 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)local_98 + uVar7 + 9) = cVar18;
      cVar18 = *(char *)((long)&local_e0 + uVar7 + 2);
      uVar7 = uVar7 + 2;
    } while (cVar18 != '\0');
    *(undefined1 *)((long)local_98 + (uVar7 & 0xffffffff) + 8) = 0;
    uVar17 = (uint)(byte)local_98[2];
    local_98[1] = (uint)uVar7;
    if ((byte)local_98[2] != 0) {
      pbVar15 = (byte *)((long)local_98 + 9);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar17 != 0);
    }
    *local_98 = uVar19;
    local_98 = local_98 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_a0,(long)&local_e8,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar20 = &local_a0;
  FUN_7101ec4640(param_1,(long ****)"selector_edit",plVar20,param_4,param_5,param_6,param_7,param_8)
  ;
  FUN_7101ec7250((long)param_1,0,plVar20,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec7250((long)param_1,1,plVar20,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec7250((long)param_1,2,plVar20,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec7250((long)param_1,3,plVar20,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec7250((long)param_1,4,plVar20,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec7250((long)param_1,5,plVar20,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec7250((long)param_1,6,plVar20,param_4,param_5,param_6,param_7,param_8);
  plVar21 = param_1 + 4;
  plVar16 = (long *)*plVar21;
  plVar20 = plVar21;
  plVar22 = plVar16;
  if (plVar16 == (long *)0x0) {
LAB_7101ec61f4:
    plVar20 = plVar21;
  }
  else {
    do {
      bVar5 = (int)plVar22[4] < 0;
      if (!bVar5) {
        plVar20 = plVar22;
      }
      plVar1 = plVar22 + bVar5;
      plVar22 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar20 == plVar21) || (0 < (int)plVar20[4])) goto LAB_7101ec61f4;
  }
  plVar22 = plVar21;
  if (plVar16 == (long *)0x0) {
LAB_7101ec622c:
    plVar22 = plVar21;
  }
  else {
    do {
      if (0 < (int)plVar16[4]) {
        plVar22 = plVar16;
      }
      plVar16 = (long *)plVar16[(int)plVar16[4] < 1];
    } while (plVar16 != (long *)0x0);
    if ((plVar22 == plVar21) || (1 < (int)plVar22[4])) goto LAB_7101ec622c;
  }
  lVar11 = param_1[1];
  local_f8 = (long ***)plVar20[5];
  local_f0 = (long *)plVar20[6];
  if (local_f0 != (long *)0x0) {
    plVar20 = local_f0 + 1;
    do {
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = *plVar20 + 1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
  }
  local_108 = (byte ***)plVar22[5];
  plVar20 = (long *)plVar22[6];
  plStack_100 = plVar20;
  if (plVar20 == (long *)0x0) {
    pppplVar9 = &local_f8;
    ppppbVar10 = &local_108;
    FUN_7101ec4ee0((long)(param_1 + 0x17),lVar11,pppplVar9,ppppbVar10,param_5,param_6,param_7,
                   param_8);
  }
  else {
    plVar22 = plVar20 + 1;
    do {
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = *plVar22 + 1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    pppplVar9 = &local_f8;
    ppppbVar10 = &local_108;
    FUN_7101ec4ee0((long)(param_1 + 0x17),lVar11,pppplVar9,ppppbVar10,param_5,param_6,param_7,
                   param_8);
    do {
      lVar11 = *plVar22;
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = lVar11 + -1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_f0 != (long *)0x0) {
    plVar20 = local_f0 + 1;
    do {
      lVar11 = *plVar20;
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar11 + -1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_f0 + 0x10))(local_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar11 = *(long *)(param_1[2] + 0x1b8);
  if (lVar11 != 0) {
    lVar2 = param_1[2] + 0x1b8;
    lVar12 = lVar2;
    do {
      if (0 < *(int *)(lVar11 + 0x20)) {
        lVar12 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 1) * 8);
    } while (lVar11 != 0);
    if ((((lVar12 != lVar2) && (*(int *)(lVar12 + 0x20) < 2)) &&
        (*(long **)(lVar12 + 0x28) != (long *)0x0)) &&
       (uVar7 = (**(code **)(**(long **)(lVar12 + 0x28) + 0x200))(), (uVar7 & 1) != 0)) {
      lVar11 = *(long *)(param_1[2] + 0x1b8);
      if (lVar11 != 0) {
        lVar2 = param_1[2] + 0x1b8;
        lVar12 = lVar2;
        do {
          if (0 < *(int *)(lVar11 + 0x20)) {
            lVar12 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 1) * 8);
        } while (lVar11 != 0);
        if (((lVar12 != lVar2) && (*(int *)(lVar12 + 0x20) < 2)) &&
           (plVar20 = *(long **)(lVar12 + 0x28), plVar20 != (long *)0x0)) {
          (**(code **)(*plVar20 + 0x1f8))(plVar20,0);
          pppplVar9 = (long ****)0x0;
          (**(code **)(*plVar20 + 0x388))(plVar20,1);
        }
      }
    }
  }
  plVar16 = (long *)*plVar21;
  plVar20 = plVar21;
  plVar22 = plVar16;
  if (plVar16 == (long *)0x0) {
LAB_7101ec6408:
    plVar20 = plVar21;
  }
  else {
    do {
      if (3 < (int)plVar22[4]) {
        plVar20 = plVar22;
      }
      plVar1 = plVar22 + ((int)plVar22[4] < 4);
      plVar22 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar20 == plVar21) || (4 < (int)plVar20[4])) goto LAB_7101ec6408;
  }
  plVar22 = plVar21;
  if (plVar16 == (long *)0x0) {
LAB_7101ec6440:
    plVar22 = plVar21;
  }
  else {
    do {
      if (4 < (int)plVar16[4]) {
        plVar22 = plVar16;
      }
      plVar16 = (long *)plVar16[(int)plVar16[4] < 5];
    } while (plVar16 != (long *)0x0);
    if ((plVar22 == plVar21) || (5 < (int)plVar22[4])) goto LAB_7101ec6440;
  }
  lVar11 = plVar20[5];
  plVar20 = (long *)plVar20[6];
  if (plVar20 != (long *)0x0) {
    plVar16 = plVar20 + 1;
    do {
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    do {
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
  }
  plVar16 = (long *)param_1[0x27];
  param_1[0x26] = lVar11;
  param_1[0x27] = (long)plVar20;
  if (plVar16 != (long *)0x0) {
    plVar21 = plVar16 + 1;
    do {
      lVar11 = *plVar21;
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar11 + -1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar20 != (long *)0x0) {
    plVar16 = plVar20 + 1;
    do {
      lVar11 = *plVar16;
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar11 + -1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar11 = plVar22[5];
  plVar20 = (long *)plVar22[6];
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 1;
    do {
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = *plVar22 + 1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    do {
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = *plVar22 + 1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
  }
  plVar22 = (long *)param_1[0x2a];
  param_1[0x29] = lVar11;
  param_1[0x2a] = (long)plVar20;
  if (plVar22 != (long *)0x0) {
    plVar16 = plVar22 + 1;
    do {
      lVar11 = *plVar16;
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar11 + -1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 1;
    do {
      lVar11 = *plVar22;
      cVar18 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = lVar11 + -1;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar11 = param_1[1];
  FUN_7103776640(&local_88,lVar11,(byte ****)"set_parts_keyhelp_00",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_88,(long ****)"set_txt_help",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 7 != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[8];
    param_1[8] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar3 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = *(ulong *)((long)puVar3 + 0x18);
    *(undefined ***)((long)puVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar3 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_e8,lVar11,(long ****)"key_help_00_fadeout",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 9 != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[10];
    param_1[10] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9e8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  lVar11 = param_1[1];
  FUN_7103776640(&local_88,lVar11,(byte ****)"set_parts_keyhelp_01",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_88,(long ****)"set_txt_help",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 0xb != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[0xc];
    param_1[0xc] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar3 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = *(ulong *)((long)puVar3 + 0x18);
    *(undefined ***)((long)puVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar3 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_e8,lVar11,(long ****)"key_help_01_fadeout",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 0xd != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[0xe];
    param_1[0xe] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9e8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  lVar11 = param_1[1];
  FUN_7103776640(&local_88,lVar11,(byte ****)"set_parts_keyhelp_02",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_88,(long ****)"set_txt_help",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 0xf != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[0x10];
    param_1[0x10] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar3 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = *(ulong *)((long)puVar3 + 0x18);
    *(undefined ***)((long)puVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar3 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_e8,lVar11,(long ****)"key_help_02_fadeout",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 0x11 != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[0x12];
    param_1[0x12] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9e8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  lVar11 = param_1[1];
  FUN_7103776640(&local_88,lVar11,(byte ****)"set_parts_keyhelp_03",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_88,(long ****)"set_txt_help",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 0x13 != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[0x14];
    param_1[0x14] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar3 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = *(ulong *)((long)puVar3 + 0x18);
    *(undefined ***)((long)puVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar3 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_71037780e0(&local_e8,lVar11,(long ****)"key_help_03_fadeout",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_e0;
  if (param_1 + 0x15 != &local_e8) {
    local_e0 = 0;
    uVar8 = param_1[0x16];
    param_1[0x16] = uVar7;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d9e8;
  local_e0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_710377a120((long)(param_1 + 7),"mnu_stgcreate_edit_display_erase",pppplVar9,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  FUN_710377a120((long)(param_1 + 0xb),"mnu_stgcreate_edit_camera_scaling",pppplVar9,ppppbVar10,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)(param_1 + 0xf),"mnu_stgcreate_edit_birds_view",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)(param_1 + 0x13),"mnu_stgcreate_edit_function",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_e8,param_1[1],(byte ****)"set_btn_l_decide",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_88,(long)&local_e8,(long ****)"set_txt_00",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_88,"mnu_stgcreate_edit_save",pppplVar9,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_88,(long)&local_e8,(long ****)"set_txt_01",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_88,"mnu_stgcreate_edit_save",pppplVar9,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  puVar3 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776390(&local_118,&local_e8,pppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
  FUN_710337d360(&local_118,extraout_x1,(undefined **)pppplVar9,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  uVar7 = local_110;
  local_118 = &PTR_FUN_710523d988;
  local_110 = 0;
  if (uVar7 != 0) {
    uVar8 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_88,(long)&local_e8,(long ****)"set_txt_guide",pppplVar9,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  local_128 = &PTR_FUN_710523d9a8;
  local_120 = (undefined8 *)
              FUN_710392e290(0x10,0x20,pppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
  if (local_120 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_78 = (long ***)&SUB_00000020;
      pppplVar9 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar7 & 1) != 0) &&
         (local_120 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,pppplVar9,ppppbVar10,param_5,param_6,param_7,param_8)
         , local_120 != (undefined8 *)0x0)) goto LAB_7101ec6a44;
    }
    local_120 = (undefined8 *)0x0;
  }
LAB_7101ec6a44:
  puVar4 = local_80;
  local_120[2] = 0;
  local_120[3] = 0;
  *local_120 = 0;
  local_120[1] = 0;
  *local_120 = *local_80;
  local_120[1] = local_80[1];
  local_120[2] = local_80[2];
  local_120[3] = local_80[3];
  FUN_710337cef0(&local_128,0x40000,(undefined **)pppplVar9,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  puVar3 = local_120;
  local_128 = &PTR_FUN_710523d9a8;
  local_120 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar4);
  }
  uVar7 = local_e0;
  local_e8 = &PTR_FUN_710523d988;
  local_e0 = 0;
  if (uVar7 != 0) {
    uVar8 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar7);
  }
  if (local_a0 != (uint *)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  return;
}

