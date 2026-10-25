// addr:      710377cfc0
// offset:    0x377cfc0
// name:      FUN_710377cfc0
// mangled:   
// signature: undefined __cdecl FUN_710377cfc0(undefined8 * param_1)


void FUN_710377cfc0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  
  *param_1 = &PTR_FUN_710523da68;
  param_1[4] = &PTR_FUN_710523db18;
  lVar10 = param_1[0x31];
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x34) = 0;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  }
  lVar10 = param_1[0x33];
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x30) = param_1[0x5a];
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  }
  lVar10 = param_1[0x34];
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x50) = param_1[0x5c];
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  }
  lVar10 = param_1[0x33];
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  plVar9 = param_1 + 0x35;
  if ((long *)param_1[0x35] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x35] + 0x180))(0);
    (**(code **)(*(long *)*plVar9 + 0x140))((long *)*plVar9,0);
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x180))(0);
    (**(code **)(*(long *)param_1[0x36] + 0x140))((long *)param_1[0x36],0);
  }
  *plVar9 = 0;
  param_1[0x36] = 0;
  if ((param_1[0x32] != 0) &&
     (plVar5 = (long *)FUN_71037964b0(param_1[0x32],0x7104453b4c), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x180))(0);
    (**(code **)(*plVar5 + 0x140))(plVar5,0);
  }
  plVar5 = (long *)param_1[0x2d];
  plVar1 = (long *)param_1[0x2e];
  param_1[0x32] = 0;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    plVar13 = *(long **)(*plVar5 + 0x28);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x1f8))(plVar13,1);
      (**(code **)(*plVar13 + 0x208))(plVar13,1);
      (**(code **)(*plVar13 + 600))(plVar13,0);
      plVar13[0x2a] = 0;
      *(undefined4 *)(plVar13 + 0x34) = 0;
      (**(code **)(*plVar13 + 0x1c0))(plVar13);
      if (*(char *)(param_1 + 9) != '\0') {
        (**(code **)(*plVar13 + 0x180))(plVar13);
      }
    }
    plVar13 = *(long **)(*plVar5 + 0x28);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x218))(plVar13,0);
      (**(code **)(*plVar13 + 0x410))(plVar13);
      (**(code **)(*plVar13 + 0x3f0))(plVar13,0);
      iVar4 = (**(code **)(*plVar13 + 0x140))(plVar13);
      if ((iVar4 != 6) && (iVar4 = (**(code **)(*plVar13 + 0x140))(plVar13), iVar4 != 1)) {
        (**(code **)(*plVar13 + 0x400))(plVar13);
      }
      uVar6 = (**(code **)(*plVar13 + 0x158))(plVar13);
      if ((uVar6 & 1) == 0) {
        (**(code **)(*plVar13 + 0x370))(plVar13);
      }
    }
    lVar10 = *plVar5;
    lVar12 = **(long **)(lVar10 + 0x20);
    if (lVar12 != 0) {
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
      lVar10 = *plVar5;
    }
    *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
  }
  plVar5 = (long *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined8 *)(param_1[0x39] + 8) = 0;
  puVar14 = (ulong *)param_1[0x2d];
  puVar15 = (ulong *)param_1[0x2e];
  while (puVar15 != puVar14) {
    puVar15 = puVar15 + -1;
    uVar6 = *puVar15;
    *puVar15 = 0;
    if (uVar6 != 0) {
      uVar7 = *(ulong *)(uVar6 + 0x20);
      *(undefined ***)(uVar6 + 0x18) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x20) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      uVar7 = *(ulong *)(uVar6 + 0x10);
      *(undefined ***)(uVar6 + 8) = &PTR_FUN_710523d988;
      *(undefined8 *)(uVar6 + 0x10) = 0;
      if (uVar7 != 0) {
        uVar8 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar6);
    }
  }
  plVar5 = (long *)param_1[0x3b];
  param_1[0x2e] = puVar14;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined4 *)((long)param_1 + 0x2a4) = 0xffffffff;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x56] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((long)param_1 + 700) = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)(param_1[0x2b] + 8) = 0;
  plVar5 = (long *)param_1[0x3b];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar6 = param_1[0x39];
  param_1[0x38] = &PTR_FUN_710523d988;
  param_1[0x39] = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  plVar5 = (long *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if ((long *)*plVar9 != (long *)0x0) {
    (**(code **)(*(long *)*plVar9 + 0x180))(0);
    (**(code **)(*(long *)*plVar9 + 0x140))((long *)*plVar9,0);
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x180))(0);
    (**(code **)(*(long *)param_1[0x36] + 0x140))((long *)param_1[0x36],0);
  }
  *plVar9 = 0;
  param_1[0x36] = 0;
  puVar14 = (ulong *)param_1[0x2d];
  if (puVar14 != (ulong *)0x0) {
    puVar15 = (ulong *)param_1[0x2e];
    if (puVar15 == puVar14) {
      param_1[0x2e] = puVar14;
      puVar15 = puVar14;
    }
    else {
      do {
        puVar15 = puVar15 + -1;
        uVar6 = *puVar15;
        *puVar15 = 0;
        if (uVar6 != 0) {
          uVar7 = *(ulong *)(uVar6 + 0x20);
          *(undefined ***)(uVar6 + 0x18) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar6 + 0x20) = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          uVar7 = *(ulong *)(uVar6 + 0x10);
          *(undefined ***)(uVar6 + 8) = &PTR_FUN_710523d988;
          *(undefined8 *)(uVar6 + 0x10) = 0;
          if (uVar7 != 0) {
            uVar8 = *(ulong *)(uVar7 + 0x18);
            *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar7 + 0x18) = 0;
            if (uVar8 != 0) {
              FUN_710392eb40(uVar8);
            }
            FUN_710392eb40(uVar7);
          }
          FUN_710392eb40(uVar6);
        }
      } while (puVar14 != puVar15);
      puVar15 = (ulong *)param_1[0x2d];
      param_1[0x2e] = puVar14;
    }
    if (puVar15 != (ulong *)0x0) {
      FUN_710392eb40((ulong)puVar15);
    }
  }
  uVar6 = param_1[0x2b];
  param_1[0x2a] = &PTR_FUN_710523d988;
  param_1[0x2b] = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  plVar9 = (long *)param_1[0x28];
  if (param_1 + 0x24 == plVar9) {
    pcVar11 = *(code **)(*plVar9 + 0x20);
LAB_710377d50c:
    (*pcVar11)();
  }
  else if (plVar9 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar9 + 0x28);
    goto LAB_710377d50c;
  }
  plVar9 = (long *)param_1[0x22];
  if (param_1 + 0x1e == plVar9) {
    pcVar11 = *(code **)(*plVar9 + 0x20);
LAB_710377d538:
    (*pcVar11)();
  }
  else if (plVar9 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar9 + 0x28);
    goto LAB_710377d538;
  }
  plVar9 = (long *)param_1[0x1c];
  if (param_1 + 0x18 == plVar9) {
    pcVar11 = *(code **)(*plVar9 + 0x20);
LAB_710377d564:
    (*pcVar11)();
  }
  else if (plVar9 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar9 + 0x28);
    goto LAB_710377d564;
  }
  plVar9 = (long *)param_1[0x16];
  if (param_1 + 0x12 == plVar9) {
    pcVar11 = *(code **)(*plVar9 + 0x20);
LAB_710377d590:
    (*pcVar11)();
  }
  else if (plVar9 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar9 + 0x28);
    goto LAB_710377d590;
  }
  plVar9 = (long *)param_1[0x10];
  if (param_1 + 0xc == plVar9) {
    pcVar11 = *(code **)(*plVar9 + 0x20);
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_710377d5c0;
    pcVar11 = *(code **)(*plVar9 + 0x28);
  }
  (*pcVar11)();
LAB_710377d5c0:
  FUN_710378c330(param_1);
  return;
}

