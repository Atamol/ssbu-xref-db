// addr:      71002ab1d0
// offset:    0x2ab1d0
// name:      FUN_71002ab1d0
// mangled:   
// signature: undefined8 __cdecl FUN_71002ab1d0(long param_1, long param_2, long param_3, long param_4)


/* WARNING: Removing unreachable block (ram,0x0071002ab3c4) */
/* WARNING: Removing unreachable block (ram,0x0071002ab430) */
/* WARNING: Removing unreachable block (ram,0x0071002ab41c) */
/* WARNING: Removing unreachable block (ram,0x0071002ab3d8) */

undefined8 FUN_71002ab1d0(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  
  if (*(int *)(param_2 + 0x14) == 1) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  pcVar1 = (code *)0x0;
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
    pcVar1 = FUN_71002ae260;
  }
  if (pcVar1 == (code *)0x0) {
    return 0;
  }
  FUN_71002aa710(param_1);
  plVar6 = FUN_71001af850(0x110);
  if (plVar6 != (long *)0x0) {
    FUN_71001d3840(plVar6,2,"SmartDeviceVoiceChatJoinRoomCompleteCallback",param_2);
    *plVar6 = (long)&PTR_FUN_7104f61060;
    plVar6[0x17] = param_1;
    plVar6[0x18] = (long)&PTR_FUN_7104f61578;
    plVar6[0x1a] = (long)&PTR_FUN_710509cc08;
    *(undefined1 *)(plVar6 + 0x1b) = 0;
    plVar6[0x1d] = (long)(plVar6 + 0x1b);
    plVar6[0x1e] = 0x10;
    plVar6[0x19] = 0;
    FUN_71001b3cb0((long)(plVar6 + 0x1a),"");
    *(undefined4 *)(plVar6 + 0x1f) = 0;
    plVar6[0x20] = 0;
    plVar6[0x21] = param_4;
    plVar6[0x18] = (long)&PTR_FUN_7104f616d8;
  }
  plVar9 = (long *)plVar6[0x16];
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6);
    plVar6[0x16] = (long)plVar9;
  }
  bVar4 = FUN_71002ab480(*(undefined8 *)(param_1 + 0x28),plVar9,param_1 + 8,param_3,plVar6 + 0x18,
                         param_1 + 0x18,*(undefined4 *)(param_1 + 0x30));
  if (bVar4) {
    uVar5 = FUN_71001d3a20((long)plVar6);
    if ((uVar5 & 1) != 0) {
      *(int *)(param_1 + 0x40) = (int)plVar9[3];
      return 1;
    }
    plVar9 = plVar6 + 1;
    iVar8 = (int)*plVar9;
    iVar7 = (int)*plVar9 + -1;
    if (iVar8 == (int)*plVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_71002ab440;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while( true ) {
        iVar2 = (int)*plVar9;
        iVar7 = iVar8 + -1;
        if (iVar2 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar2;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      iVar8 = iVar2;
    } while (cVar3 != '\0');
  }
  else {
    plVar9 = plVar6 + 1;
    iVar8 = (int)*plVar9;
    iVar7 = (int)*plVar9 + -1;
    if (iVar8 == (int)*plVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_71002ab440;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while( true ) {
        iVar2 = (int)*plVar9;
        iVar7 = iVar8 + -1;
        if (iVar2 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar2;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      iVar8 = iVar2;
    } while (cVar3 != '\0');
  }
LAB_71002ab440:
  if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar6 + 0xc) = 1;
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  return 0;
}

