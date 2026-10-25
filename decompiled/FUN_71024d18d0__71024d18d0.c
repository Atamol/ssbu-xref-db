// addr:      71024d18d0
// offset:    0x24d18d0
// name:      FUN_71024d18d0
// mangled:   
// signature: undefined __cdecl FUN_71024d18d0(undefined4 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, undefined * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71024d18d0(undefined4 *param_1,long param_2,long ****param_3,byte ****param_4,
                   undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *extraout_x1;
  int *extraout_x1_00;
  int *extraout_x1_01;
  int *extraout_x1_02;
  int *extraout_x1_03;
  int *extraout_x1_04;
  int *extraout_x1_05;
  int *extraout_x1_06;
  int *extraout_x1_07;
  char *pcVar12;
  code *pcVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  ulong *puVar25;
  char *pcVar26;
  ulong local_118;
  long *local_110;
  ulong local_108;
  long *local_100 [14];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  uint local_70 [4];
  
  local_108 = 0xffffffff;
  local_100[0] = (long *)0x0;
  local_100[0xb] = (long *)0x0;
  local_100[0xc] = (long *)0x0;
  uVar22 = (ulong)param_5 & 0xffffffff;
  local_100[9] = (long *)0x0;
  local_100[10] = (long *)0x0;
  uVar19 = (ulong)param_4 & 0xffffffff;
  local_100[0xd] = (long *)&DAT_3f8000003f800000;
  uStack_90 = 0;
  uVar21 = (ulong)param_3 & 0xffffffff;
  local_100[7] = (long *)0x0;
  local_100[8] = (long *)0x0;
  local_100[5] = (long *)0x0;
  local_100[6] = (long *)0x0;
  local_100[3] = (long *)0x0;
  local_100[4] = (long *)0x0;
  local_100[1] = (long *)0x0;
  local_100[2] = (long *)0x0;
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_7b = 0;
  iVar20 = (int)param_3;
  iVar18 = (int)param_4;
  for (piVar11 = *(int **)(*DAT_710532a868 + 0x2b8); pcVar13 = (code *)param_5,
      piVar11 != *(int **)(*DAT_710532a868 + 0x2c0); piVar11 = piVar11 + 0x26) {
    if ((*piVar11 == iVar20) && (piVar11[1] == iVar18)) {
      param_3 = (long ****)0x95;
      memcpy(&local_108,piVar11,0x95);
      piVar11 = extraout_x1;
      pcVar13 = (code *)param_5;
      break;
    }
  }
  lVar2 = DAT_7105332f20;
  uVar24 = 0;
  puVar25 = (ulong *)(param_2 + 0x3d308);
  do {
    if ((((char)puVar25[3] != '\0') && (*(char *)((long)puVar25 + 0x19) == '\0')) &&
       (((*puVar25 ^ (ulong)local_100[uVar22]) & 0xffffffffff) == 0)) {
      if ((int)uVar24 != 0xffff) goto LAB_71024d1f0c;
      break;
    }
    uVar24 = uVar24 + 1;
    puVar25 = puVar25 + 4;
  } while (uVar24 < 0x400);
  if (*(char *)(param_2 + 0x5f3d7) == '\0') {
    uVar24 = 0;
    pcVar26 = (char *)(param_2 + 0x3d340);
    do {
      if (pcVar26[-0x20] == '\0') {
        pcVar26 = pcVar26 + -0x20;
LAB_71024d1a40:
        puVar25 = (ulong *)(param_2 + 0x45308);
        plVar1 = (long *)(param_2 + uVar21 * 0x3840 + uVar19 * 0x48 + uVar22 * 0x18 + 0x8090);
        lVar14 = *plVar1;
        if (lVar14 == 0) goto LAB_71024d1f08;
        uVar4 = *(uint *)(lVar14 + 8);
        if ((uVar4 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x48) <= uVar4)) goto LAB_71024d1f08;
        std::recursive_mutex::lock();
        piVar23 = (int *)(*(long *)(lVar2 + 0x40) + (ulong)uVar4 * 0x48);
        bVar6 = *(byte *)(piVar23 + 2);
        std::recursive_mutex::unlock();
        piVar11 = extraout_x1_00;
        if ((((bVar6 & 1) == 0) || ((piVar23 == (int *)0x0 || (*piVar23 == 0xffffff)))) ||
           (iVar9 = FUN_7103543080((long)piVar23), piVar11 = extraout_x1_01, iVar9 != 3))
        goto LAB_71024d1f08;
        local_108 = 0xffffffff;
        local_100[0] = (long *)0x0;
        local_100[0xb] = (long *)0x0;
        local_100[0xc] = (long *)0x0;
        local_100[9] = (long *)0x0;
        local_100[10] = (long *)0x0;
        local_100[7] = (long *)0x0;
        local_100[8] = (long *)0x0;
        local_100[5] = (long *)0x0;
        local_100[6] = (long *)0x0;
        local_100[0xd] = (long *)&DAT_3f8000003f800000;
        uStack_90 = 0;
        local_100[3] = (long *)0x0;
        local_100[4] = (long *)0x0;
        local_100[1] = (long *)0x0;
        local_100[2] = (long *)0x0;
        uStack_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_7b = 0;
        piVar23 = *(int **)(*DAT_710532a868 + 0x2b8);
        piVar16 = *(int **)(*DAT_710532a868 + 0x2c0);
        piVar11 = piVar23;
        goto joined_r0x0071024d1b34;
      }
      if (*pcVar26 == '\0') {
        uVar24 = uVar24 + 1;
        goto LAB_71024d1a40;
      }
      uVar24 = uVar24 + 2;
      pcVar26 = pcVar26 + 0x40;
    } while (uVar24 < 0x400);
  }
  goto LAB_71024d19e4;
joined_r0x0071024d1b34:
  if (piVar11 == piVar16) goto LAB_71024d1b7c;
  if ((*piVar11 == iVar20) && (piVar11[1] == iVar18)) {
    param_3 = (long ****)0x95;
    memcpy(&local_108,piVar11,0x95);
    goto LAB_71024d1b7c;
  }
  piVar11 = piVar11 + 0x26;
  goto joined_r0x0071024d1b34;
LAB_71024d1b7c:
  uVar19 = 0;
  pcVar12 = (char *)(param_2 + 0x3d321);
  do {
    if (((pcVar12[-1] != '\0') && (*pcVar12 == '\0')) &&
       (((*(ulong *)(pcVar12 + -0x19) ^ (ulong)local_100[uVar22]) & 0xffffffffff) == 0))
    goto LAB_71024d1bcc;
    uVar19 = uVar19 + 1;
    pcVar12 = pcVar12 + 0x20;
  } while (uVar19 < 0x400);
  uVar19 = 0xffff;
LAB_71024d1bcc:
  local_108 = 0xffffffff;
  local_100[0] = (long *)0x0;
  local_100[0xb] = (long *)0x0;
  local_100[0xc] = (long *)0x0;
  local_100[9] = (long *)0x0;
  local_100[10] = (long *)0x0;
  local_100[0xd] = (long *)&DAT_3f8000003f800000;
  uStack_90 = 0;
  local_100[7] = (long *)0x0;
  local_100[8] = (long *)0x0;
  local_100[5] = (long *)0x0;
  local_100[6] = (long *)0x0;
  local_100[3] = (long *)0x0;
  local_100[4] = (long *)0x0;
  local_100[1] = (long *)0x0;
  local_100[2] = (long *)0x0;
  uStack_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_7b = 0;
  for (; piVar23 != piVar16; piVar23 = piVar23 + 0x26) {
    if ((*piVar23 == iVar20) && (piVar23[1] == iVar18)) {
      param_3 = (long ****)0x95;
      memcpy(&local_108,piVar23,0x95);
      break;
    }
  }
  lVar2 = param_2 + uVar24 * 0x20;
  *(long **)(lVar2 + 0x3d308) = local_100[uVar22];
  if ((int)uVar19 == 0xffff) {
    pcVar12 = "model.numdlb";
    FUN_710353e1d0((uint *)&local_108,(uint *)(*plVar1 + 8),(byte *)"model.numdlb");
    uVar4 = (uint)local_108;
    uVar19 = local_108 & 0xffffffff;
    if ((uint)local_108 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,(uint)local_108,(long *********)pcVar12,param_4,
                     (long ****)pcVar13,param_6,param_7,param_8);
    }
    if ((uVar4 == 0xffffff) ||
       (lVar14 = **(long **)(DAT_7105332f20 + 0x78),
       *(uint *)(*(long *)(lVar14 + 0x40) + 4) <= uVar4)) {
      local_108 = 0;
    }
    else {
      local_108 = *(ulong *)(*(long *)(lVar14 + 0x60) + uVar19 * 0x20) & 0xffffffffff;
    }
    lVar14 = (*(long **)(DAT_7105332f20 + 0x78))[1];
    pcVar13 = FUN_7103542240;
    param_4 = (byte ****)&DAT_00000008;
    puVar10 = bsearch(&local_108,*(void **)(lVar14 + 0x20),
                      (ulong)*(uint *)(*(long *)(lVar14 + 8) + 8),8,FUN_7103542240);
    local_70[0] = 0xffffff;
    if (puVar10 != (undefined8 *)0x0) {
      uVar4 = (uint)((ulong)*puVar10 >> 0x20);
      uVar15 = uVar4 >> 8;
      if ((uVar15 != 0xffffff) &&
         (uVar5 = *(uint *)(*(long *)(lVar14 + 8) + 4), local_70[0] = uVar4 >> 8,
         uVar5 < uVar15 || uVar5 == local_70[0])) {
        local_70[0] = 0xffffff;
      }
    }
    param_3 = (long ****)&DAT_00000004;
    FUN_71035c2890(&local_108,local_70,(long *********)&DAT_00000004,param_4,(long ****)pcVar13,
                   param_6,param_7,param_8);
    plVar1 = local_100[0];
    uVar19 = local_108;
    local_108 = 0;
    local_100[0] = (long *)0x0;
    *(ulong *)(lVar2 + 0x3d310) = uVar19;
    plVar17 = *(long **)(lVar2 + 0x3d318);
    *(long **)(lVar2 + 0x3d318) = plVar1;
    piVar11 = extraout_x1_05;
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 1;
      do {
        lVar14 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        std::__shared_weak_count::__release_weak();
        piVar11 = extraout_x1_06;
      }
    }
    if (local_100[0] != (long *)0x0) {
      plVar1 = local_100[0] + 1;
      do {
        lVar14 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        plVar17 = local_100[0];
      } while (cVar7 != '\0');
LAB_71024d1ec0:
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        std::__shared_weak_count::__release_weak();
        piVar11 = extraout_x1_07;
      }
    }
  }
  else {
    puVar3 = puVar25;
    if ((int)uVar19 != 0xfffe) {
      puVar3 = (ulong *)(param_2 + (uVar19 & 0xffffffff) * 0x20 + 0x3d308);
    }
    local_118 = puVar3[1];
    local_110 = (long *)puVar3[2];
    if (local_110 != (long *)0x0) {
      plVar1 = local_110 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    FUN_71035c2e50(&local_108,&local_118,param_3,param_4,(long ****)pcVar13,param_6,param_7,param_8)
    ;
    plVar1 = local_100[0];
    uVar19 = local_108;
    local_108 = 0;
    local_100[0] = (long *)0x0;
    *(ulong *)(lVar2 + 0x3d310) = uVar19;
    plVar17 = *(long **)(lVar2 + 0x3d318);
    *(long **)(lVar2 + 0x3d318) = plVar1;
    piVar11 = extraout_x1_02;
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 1;
      do {
        lVar14 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        std::__shared_weak_count::__release_weak();
        piVar11 = extraout_x1_03;
      }
    }
    if (local_100[0] != (long *)0x0) {
      plVar1 = local_100[0] + 1;
      do {
        lVar14 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_100[0] + 0x10))(local_100[0]);
        std::__shared_weak_count::__release_weak();
        piVar11 = extraout_x1_04;
      }
    }
    if (local_110 != (long *)0x0) {
      plVar1 = local_110 + 1;
      do {
        lVar14 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        plVar17 = local_110;
      } while (cVar7 != '\0');
      goto LAB_71024d1ec0;
    }
  }
  *pcVar26 = '\x01';
  *(undefined1 *)(lVar2 + 0x3d321) = 0;
  if ((int)uVar24 != 0xffff) {
    if ((int)uVar24 == 0xfffe) {
LAB_71024d1f08:
      uVar24 = 0xfffe;
    }
    else {
      puVar25 = (ulong *)(lVar2 + 0x3d308);
    }
LAB_71024d1f0c:
    *(undefined1 *)((long)puVar25 + 0x19) = 1;
    *param_1 = (int)uVar24;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    plVar1 = (long *)puVar25[1];
    uVar19 = puVar25[2];
    if (uVar19 != 0) {
      plVar17 = (long *)(uVar19 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *plVar17 = *plVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    *(long **)(param_1 + 2) = plVar1;
    *(ulong *)(param_1 + 4) = uVar19;
    if (plVar1 != (long *)0x0) {
      FUN_71035597d0((undefined8 *)(param_1 + 2),piVar11,param_3,param_4,(long ****)pcVar13,param_6,
                     param_7,param_8);
      (**(code **)(*plVar1 + 0xa8))(plVar1,1);
      return;
    }
    return;
  }
LAB_71024d19e4:
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}

