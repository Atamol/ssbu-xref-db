// addr:      71001d4de0
// offset:    0x1d4de0
// name:      FUN_71001d4de0
// mangled:   
// signature: undefined __cdecl FUN_71001d4de0(undefined8 * param_1)


/* WARNING: Removing unreachable block (ram,0x0071001d4fac) */
/* WARNING: Removing unreachable block (ram,0x0071001d4f98) */

void FUN_71001d4de0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 auStack_48 [3];
  
  *param_1 = &PTR_FUN_7104f561e8;
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d4e5c:
    if ((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) goto LAB_71001d4e8c;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71001d4e5c;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001d4e5c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d4e8c:
    lVar9 = 0;
  }
  plVar11 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  FUN_71001d5110(*(long **)(param_1[4] + 0x78));
  (**(code **)(*plVar11 + 0x20))(plVar11);
  FUN_71001d5270(auStack_48,(long *)param_1[4],-1);
  FUN_71001d5390(param_1[2],60000,1);
  lVar9 = *(long *)(param_1[4] + 0x78);
  plVar8 = *(long **)(lVar9 + 0x50);
  plVar11 = (long *)(lVar9 + 0x48);
  if (plVar11 != plVar8) {
    plVar12 = (long *)param_1[3];
    do {
      if ((long *)plVar8[2] == plVar12) {
        if (plVar11 != plVar8) {
          lVar2 = *plVar8;
          *(long *)(lVar2 + 8) = plVar8[1];
          *(long *)plVar8[1] = lVar2;
          *(long *)(lVar9 + 0x58) = *(long *)(lVar9 + 0x58) + -1;
          FUN_71001b1870((long)plVar8);
          plVar11 = plVar12 + 1;
          iVar10 = (int)*plVar11;
          iVar6 = (int)*plVar11 + -1;
          if (iVar10 != (int)*plVar11) {
            ClearExclusiveLocal();
            goto LAB_71001d4f74;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          while (cVar4 != '\0') {
LAB_71001d4f74:
            while( true ) {
              iVar1 = (int)*plVar11;
              iVar6 = iVar10 + -1;
              if (iVar1 == iVar10) break;
              ClearExclusiveLocal();
              iVar10 = iVar1;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            iVar10 = iVar1;
            if (bVar5) {
              *(int *)plVar11 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          }
          if ((iVar6 == 0) && (*(char *)((long)plVar12 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar12 + 0xc) = 1;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
        break;
      }
      plVar8 = (long *)plVar8[1];
    } while (plVar11 != plVar8);
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  DAT_71052af0dc = DAT_71052af0dc + -1;
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  FUN_71001b8b10();
  FUN_71001b17e0(param_1 + 0xf);
  param_1[6] = &PTR_FUN_7104f56208;
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar3 = *(uint *)((long)param_1 + 0x3c);
    if (*(uint *)(param_1 + 7) == 0) {
      if (uVar3 < 0x11) {
        (&DAT_71052af120)[uVar3] = 0;
        goto LAB_71001d50dc;
      }
    }
    else if (uVar3 < 0x11) {
      *(undefined8 *)
       (*(long *)(*DAT_71052af1b0 + (ulong)*(uint *)(param_1 + 7) * 8) + (ulong)uVar3 * 8 + 8) = 0;
      goto LAB_71001d50dc;
    }
    FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp"
                   ,0x55,0xe0000003,0);
  }
LAB_71001d50dc:
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  *param_1 = &PTR_FUN_710523be40;
  return;
}

