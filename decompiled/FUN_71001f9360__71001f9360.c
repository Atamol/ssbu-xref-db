// addr:      71001f9360
// offset:    0x1f9360
// name:      FUN_71001f9360
// mangled:   
// signature: undefined __cdecl FUN_71001f9360(long * param_1)


/* WARNING: Removing unreachable block (ram,0x0071001f9558) */
/* WARNING: Removing unreachable block (ram,0x0071001f9544) */

void FUN_71001f9360(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long local_38;
  long local_28;
  
  *param_1 = (long)&PTR_FUN_7104f57ba8;
  FUN_71001f98e0((long)param_1);
  if (param_1[0x24] == 0) goto LAB_71001f9440;
  plVar16 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f93e8:
    if ((*plVar16 == 0) || (lVar11 = *(long *)(*plVar16 + 0x10), lVar11 == 0)) goto LAB_71001f9418;
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  else {
    puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar10;
    if (uVar5 == 0) goto LAB_71001f93e8;
    if ((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar16 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
      goto LAB_71001f93e8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001f9418:
    lVar11 = 0;
  }
  plVar16 = (long *)(lVar11 + 0x78);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  param_1[0x24] = 0;
  (**(code **)(*plVar16 + 0x20))(plVar16);
LAB_71001f9440:
  (**(code **)(*param_1 + 0x50))(param_1);
  plVar16 = (long *)param_1[0xa2];
  if (plVar16 != (long *)0x0) {
    FUN_71001feb20(plVar16);
    FUN_71001af8a0((long)plVar16);
    param_1[0xa2] = 0;
  }
  (**(code **)(*(long *)param_1[0x65] + 0x10))();
  if ((long *)param_1[0x65] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x65] + 8))();
  }
  plVar16 = (long *)param_1[0x67];
  if ((long *)param_1[0x69] != plVar16) {
    do {
      while( true ) {
        plVar2 = (long *)plVar16[6];
        lVar11 = plVar16[7];
        if (lVar11 != 0) {
          *(long **)(lVar11 + 0x30) = plVar2;
        }
        plVar16[7] = 0;
        if (plVar2 != (long *)0x0) {
          plVar2[7] = lVar11;
        }
        plVar16[6] = 0;
        if ((long *)param_1[0x67] == plVar16) {
          param_1[0x67] = (long)plVar2;
          plVar12 = (long *)param_1[0x68];
        }
        else {
          plVar12 = (long *)param_1[0x68];
        }
        if (plVar12 == plVar16) {
          param_1[0x68] = lVar11;
        }
        param_1[0x6a] = param_1[0x6a] + -1;
        plVar12 = plVar16 + 1;
        iVar14 = (int)*plVar12;
        iVar8 = (int)*plVar12 + -1;
        if (iVar14 != (int)*plVar12) {
          ClearExclusiveLocal();
          goto LAB_71001f9520;
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *(int *)plVar12 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
        while (cVar6 != '\0') {
LAB_71001f9520:
          while( true ) {
            iVar1 = (int)*plVar12;
            iVar8 = iVar14 + -1;
            if (iVar1 == iVar14) break;
            ClearExclusiveLocal();
            iVar14 = iVar1;
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          iVar14 = iVar1;
          if (bVar7) {
            *(int *)plVar12 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        }
        if ((iVar8 != 0) || (*(char *)((long)plVar16 + 0xc) != '\0')) break;
        *(undefined1 *)((long)plVar16 + 0xc) = 1;
        (**(code **)(*plVar16 + 8))();
        plVar16 = plVar2;
        if ((long *)param_1[0x69] == plVar2) goto LAB_71001f95b8;
      }
      plVar16 = plVar2;
    } while ((long *)param_1[0x69] != plVar2);
  }
LAB_71001f95b8:
  plVar16 = param_1 + 0x5f;
  lVar11 = param_1[0x61];
  if (param_1[99] != param_1[0x61]) {
    do {
      local_38 = lVar11;
      (**(code **)(param_1[0x5f] + 0x28))(&local_28,plVar16,&local_38);
      lVar11 = local_28;
    } while (param_1[99] != local_28);
  }
  FUN_71001beaf0();
  FUN_71001d5c40();
  FUN_71001cfad0(param_1 + 0xa3);
  param_1[0x8b] = (long)&PTR_FUN_7104f57af8;
  if (*(char *)((long)param_1 + 0x469) != '\0') {
    lVar11 = *(long *)(param_1[0x8c] + 0x10);
    if (lVar11 != 0) {
      uVar9 = FUN_71001f54b0(lVar11 + 0xf0,(char)*(undefined4 *)(param_1[0x8c] + 8),0xf);
      *(byte *)((long)param_1 + 0x469) = ~(byte)uVar9 & 1;
    }
    FUN_71001e0c80((long)(param_1 + 0x8b));
  }
  if ((long *)param_1[0x8c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8c] + 8))();
  }
  FUN_71001bef00();
  param_1[0x87] = (long)&PTR_FUN_7104f581f8;
  if (*(char *)((long)param_1 + 0x441) != '\0') {
    lVar11 = *(long *)(param_1[0x8a] + 0xc0);
    if (lVar11 != 0) {
      uVar9 = FUN_71001f54b0(lVar11 + 0xf0,(char)*(undefined4 *)(param_1[0x8a] + 8),1);
      *(byte *)((long)param_1 + 0x441) = ~(byte)uVar9 & 1;
    }
  }
  lVar11 = param_1[0x89];
  if (lVar11 != 0) {
    FUN_710021ac20(lVar11 + 0x20,*(undefined8 **)(lVar11 + 0x28));
    FUN_710021ac70(lVar11 + 8,*(undefined8 **)(lVar11 + 0x10));
    FUN_71001af8a0(lVar11);
  }
  if ((long *)param_1[0x8a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8a] + 8))();
  }
  FUN_71001b3a50(param_1 + 0x6b);
  param_1[0x66] = (long)&PTR_FUN_7104f59688;
  lVar11 = param_1[0x69];
  if (lVar11 != param_1[0x67]) {
    lVar4 = param_1[0x6a];
    lVar15 = param_1[0x67];
    do {
      while( true ) {
        lVar13 = lVar4;
        lVar3 = *(long *)(lVar15 + 0x30);
        lVar4 = *(long *)(lVar15 + 0x38);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x30) = lVar3;
        }
        *(undefined8 *)(lVar15 + 0x38) = 0;
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x38) = lVar4;
        }
        *(undefined8 *)(lVar15 + 0x30) = 0;
        if (param_1[0x67] != lVar15) break;
        param_1[0x67] = lVar3;
        if (param_1[0x68] == lVar15) goto LAB_71001f9770;
LAB_71001f974c:
        lVar4 = lVar13 + -1;
        lVar15 = lVar3;
        if (lVar11 == lVar3) goto LAB_71001f9784;
      }
      if (param_1[0x68] != lVar15) goto LAB_71001f974c;
LAB_71001f9770:
      param_1[0x68] = lVar4;
      lVar4 = lVar13 + -1;
      lVar15 = lVar3;
    } while (lVar11 != lVar3);
LAB_71001f9784:
    param_1[0x6a] = lVar13 + -1;
  }
  param_1[0x5f] = (long)&PTR_FUN_7104f582d0;
  if (param_1[99] == param_1[0x61]) {
    param_1[0x60] = (long)&PTR_FUN_7104f599b8;
    FUN_71001bf290((undefined4 *)(param_1 + 0x5d));
    lVar11 = param_1[0x59];
  }
  else {
    local_38 = param_1[0x61];
    FUN_71001fcab0(&local_28,(long)plVar16,&local_38);
    lVar11 = param_1[99];
    if (lVar11 != local_28) {
      do {
        local_38 = local_28;
        (**(code **)(param_1[0x5f] + 0x28))(&local_28,plVar16,&local_38);
        lVar11 = param_1[99];
      } while (lVar11 != local_28);
    }
    param_1[0x60] = (long)&PTR_FUN_7104f599b8;
    if (lVar11 != param_1[0x61]) {
      lVar4 = param_1[100];
      lVar15 = param_1[0x61];
      do {
        while( true ) {
          lVar13 = lVar4;
          lVar3 = *(long *)(lVar15 + 0x10);
          lVar4 = *(long *)(lVar15 + 0x18);
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
          }
          *(undefined8 *)(lVar15 + 0x18) = 0;
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x18) = lVar4;
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          if (param_1[0x61] != lVar15) break;
          param_1[0x61] = lVar3;
          if (param_1[0x62] == lVar15) goto LAB_71001f9870;
LAB_71001f984c:
          lVar4 = lVar13 + -1;
          lVar15 = lVar3;
          if (lVar11 == lVar3) goto LAB_71001f9884;
        }
        if (param_1[0x62] != lVar15) goto LAB_71001f984c;
LAB_71001f9870:
        param_1[0x62] = lVar4;
        lVar4 = lVar13 + -1;
        lVar15 = lVar3;
      } while (lVar11 != lVar3);
LAB_71001f9884:
      param_1[100] = lVar13 + -1;
    }
    FUN_71001bf290((undefined4 *)(param_1 + 0x5d));
    lVar11 = param_1[0x59];
  }
  if (lVar11 != 0) {
    param_1[0x5a] = lVar11;
    FUN_71001b1870(lVar11);
  }
  FUN_71001f0ee0(param_1);
  return;
}

