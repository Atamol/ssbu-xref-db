// addr:      7100218560
// offset:    0x218560
// name:      FUN_7100218560
// mangled:   
// signature: long * __cdecl FUN_7100218560(long param_1, long param_2, long param_3, long param_4, undefined1 * param_5)


/* WARNING: Removing unreachable block (ram,0x007100218870) */
/* WARNING: Removing unreachable block (ram,0x007100218980) */
/* WARNING: Removing unreachable block (ram,0x00710021896c) */
/* WARNING: Removing unreachable block (ram,0x007100218884) */

long * FUN_7100218560(long param_1,long param_2,long param_3,long param_4,undefined1 *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  size_t sVar7;
  long *plVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  undefined8 auStack_88 [3];
  undefined8 local_70;
  long local_68;
  ushort local_58 [4];
  
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    plVar8 = FUN_71001af850(0x1f0);
    if (plVar8 != (long *)0x0) {
      FUN_7100215f40(plVar8);
    }
  }
  else {
    plVar8 = FUN_71001b4580(0x1f0,0);
    if (plVar8 == (long *)0x0) {
LAB_71002185d8:
      *param_5 = 1;
      return (long *)0x0;
    }
    FUN_7100216120(plVar8,*(ulong *)(param_4 + 0x18));
    if ((plVar8[0x27] == 0) || (*(long *)(plVar8[0x27] + 0x10) == 0)) {
      (**(code **)(*plVar8 + 8))(plVar8);
      goto LAB_71002185d8;
    }
  }
  FUN_71001bec20((long)(plVar8 + 0x28),param_3);
  *(undefined4 *)(plVar8 + 0x3d) = *(undefined4 *)(param_1 + 0x9c);
  FUN_71001d01c0(auStack_88,param_4);
  if (DAT_71052af481 == '\0') {
LAB_71002187ec:
    uVar10 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x30))
                       (*(long **)(param_1 + 0x1b0),auStack_88,plVar8,&local_68);
    if ((uVar10 & 1) != 0) {
      FUN_71001cfb70(param_4,local_68 + *(long *)(param_4 + 0x28));
      goto LAB_71002188cc;
    }
    plVar15 = plVar8 + 1;
    iVar14 = (int)*plVar15;
    iVar13 = (int)*plVar15 + -1;
    if (iVar14 == (int)*plVar15) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_71002188a4;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while( true ) {
        iVar2 = (int)*plVar15;
        iVar13 = iVar14 + -1;
        if (iVar2 == iVar14) break;
        ClearExclusiveLocal();
        iVar14 = iVar2;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      iVar14 = iVar2;
    } while (cVar5 != '\0');
  }
  else {
    plVar15 = &DAT_71052af128;
    if (DAT_71052af1d8 == '\0') {
LAB_7100218684:
      lVar12 = 0;
      if (*plVar15 != 0) {
        lVar12 = *(long *)(*plVar15 + 0x10);
      }
    }
    else {
      puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar3 = *puVar9;
      if (uVar3 == 0) goto LAB_7100218684;
      if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
        goto LAB_7100218684;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      lVar12 = 0;
    }
    lVar1 = 0x1b0;
    if (1 < *(int *)(param_1 + 0x9c) - 1U) {
      lVar1 = 0x1a8;
    }
    plVar15 = *(long **)(lVar12 + lVar1);
    uVar10 = (**(code **)(*plVar15 + 0x38))(plVar15,auStack_88,plVar8,&local_68);
    if ((uVar10 & 1) == 0) {
LAB_71002187e8:
      local_70 = 0;
      goto LAB_71002187ec;
    }
    lVar12 = 0;
    while (((uVar4 = *(ushort *)(plVar8 + 0xc), (uVar4 & 0xf) == 2 &&
            (*(char *)((long)plVar8 + 0x42) == '\x01')) &&
           (((uVar4 & 0x30) != 0 || (DAT_7104f577cd != '\0'))))) {
      if ((((uVar4 & 0x30) != 0) && ((uVar4 & 0x10) != 0 || DAT_7104f577cc == '\0')) ||
         (((uVar4 >> 0xb & 1) == 0 && (DAT_7104f577ce == '\0')))) break;
      local_58[0] = *(ushort *)((long)plVar8 + 0x44);
      plVar11 = (long *)FUN_71001f59a0(param_2,local_58);
      if ((plVar11 == (long *)0x0) ||
         (uVar10 = (**(code **)(*plVar11 + 0x20))(plVar11,plVar8), (uVar10 & 1) == 0)) break;
      lVar12 = local_68 + lVar12;
      uVar10 = (**(code **)(*plVar15 + 0x38))(plVar15,auStack_88,plVar8,&local_68);
      if ((uVar10 & 1) == 0) break;
    }
    if (lVar12 == 0) goto LAB_71002187e8;
    sVar7 = *(long *)(param_4 + 0x18) - lVar12;
    if (sVar7 != 0) {
      FUN_71001cb870(param_4,(void *)(*(long *)(param_4 + 0x10) + *(long *)(param_4 + 0x28) + lVar12
                                     ),sVar7,0);
      *(size_t *)(param_4 + 0x18) = sVar7;
      goto LAB_71002187e8;
    }
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined2 *)(param_4 + 0x31) = 0;
    *(byte *)(param_4 + 0x30) = *(byte *)(param_4 + 0x30) & 4;
    plVar15 = plVar8 + 1;
    iVar14 = (int)*plVar15;
    iVar13 = (int)*plVar15 + -1;
    if (iVar14 != (int)*plVar15) {
      ClearExclusiveLocal();
      goto LAB_7100218948;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *(int *)plVar15 = iVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
    while (cVar5 != '\0') {
LAB_7100218948:
      while( true ) {
        iVar2 = (int)*plVar15;
        iVar13 = iVar14 + -1;
        if (iVar2 == iVar14) break;
        ClearExclusiveLocal();
        iVar14 = iVar2;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      iVar14 = iVar2;
      if (bVar6) {
        *(int *)plVar15 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    }
  }
LAB_71002188a4:
  if ((iVar13 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar8 + 0xc) = 1;
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  plVar8 = (long *)0x0;
LAB_71002188cc:
  FUN_71001d0250(auStack_88);
  return plVar8;
}

