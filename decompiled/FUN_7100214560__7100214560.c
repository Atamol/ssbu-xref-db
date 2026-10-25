// addr:      7100214560
// offset:    0x214560
// name:      FUN_7100214560
// mangled:   
// signature: undefined4 __cdecl FUN_7100214560(long param_1, undefined4 param_2, undefined8 param_3, long * param_4)


/* WARNING: Removing unreachable block (ram,0x007100214bd0) */
/* WARNING: Removing unreachable block (ram,0x0071002149f0) */
/* WARNING: Removing unreachable block (ram,0x0071002149dc) */
/* WARNING: Removing unreachable block (ram,0x007100214be4) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_7100214560(long param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  code *pcVar10;
  long *plVar11;
  bool bVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined8 auStack_370 [18];
  undefined8 auStack_2e0 [18];
  ulong local_250;
  undefined8 auStack_248 [18];
  undefined8 auStack_1b8 [18];
  undefined **local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 auStack_f0 [19];
  undefined1 *local_58;
  
  lVar7 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x78))(*(long **)(param_1 + 0xc0),param_2);
  lVar14 = param_4[0x27];
  if ((lVar14 == 0) || (*(ulong *)(lVar14 + 0x18) < 0xd)) {
    return 0;
  }
  FUN_71001beb40(auStack_f0);
  local_120 = 1;
  local_128 = &PTR_FUN_7104f56018;
  local_11c = 0;
  uVar8 = FUN_71001cf750();
  FUN_71001cf760((long)&local_128,uVar8,0);
  FUN_7100214ce0(lVar14,(long)auStack_f0,(long)&local_128);
  if ((*(ushort *)(param_4 + 0xc) & 0xf) != 6) {
    if ((*(ushort *)(param_4 + 0xc) & 0xf) != 2) {
      FUN_71001cfad0(&local_128);
      FUN_71001bef00();
      return 0;
    }
    FUN_71001bebd0(auStack_370,(long)auStack_f0);
    FUN_71001f7bc0(param_1 + 0x90,(long)auStack_370,(long)(param_4 + 0x28),1);
    plVar15 = *(long **)(param_1 + 0xc0);
    uVar6 = *(uint *)(param_1 + 8);
    if (DAT_71052af1d8 == '\0') {
LAB_710021478c:
      lVar7 = (ulong)uVar6 * 0x2e8 + 0x71052af4f0;
    }
    else {
      puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar9 == 0) goto LAB_710021478c;
      lVar7 = *(long *)(&DAT_71052af4e8 + (ulong)uVar6 * 0x2e8) + (ulong)*puVar9 * 0x168;
    }
    uVar8 = (**(code **)(*plVar15 + 0x70))
                      (plVar15,*(undefined4 *)(lVar7 + 0x140),param_2,&local_128,auStack_370);
    if ((uVar8 & 1) == 0) {
      FUN_71001f8ed0(param_1 + 0x90,(long)auStack_370);
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    goto LAB_7100214b5c;
  }
  FUN_71001beb40(auStack_1b8);
  FUN_71001beb40(auStack_248);
  iVar4 = FUN_71001bef20((long)auStack_f0);
  if (((DAT_71052b5258 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71052b5258), iVar5 != 0)) {
    FUN_71001bec60((undefined8 *)&DAT_71052b52a8,"255.0.0.0",0);
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71052b5258);
  }
  iVar5 = FUN_71001bef20(0x71052b52a8);
  if (iVar4 == iVar5) {
    lVar14 = *(long *)(lVar7 + 0x10);
    uVar3 = FUN_71001beb30((long)auStack_f0);
    plVar16 = (long *)(lVar14 + 0x10);
    plVar11 = (long *)*plVar16;
    plVar15 = plVar16;
    if (plVar11 != (long *)0x0) {
      do {
        if (*(ushort *)(plVar11 + 4) >= uVar3) {
          plVar15 = plVar11;
        }
        plVar11 = (long *)plVar11[*(ushort *)(plVar11 + 4) < uVar3];
      } while (plVar11 != (long *)0x0);
      if ((plVar15 != plVar16) && (*(ushort *)(plVar15 + 4) <= uVar3)) {
        FUN_71001bec20((long)auStack_1b8,(long)(plVar15 + 5));
      }
    }
    uVar8 = *(ulong *)(lVar7 + 0x10);
    plVar15 = FUN_710021e800(uVar8 + 0x20,(long)(param_4 + 0x28));
    if ((long *)(uVar8 + 0x28) != plVar15) {
      uVar8 = (ulong)*(ushort *)(plVar15 + 0x16);
    }
    if (((DAT_71052b5258 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71052b5258), iVar4 != 0)) {
      FUN_71001bec60((undefined8 *)&DAT_71052b52a8,"255.0.0.0",0);
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71052b5258);
    }
    uVar6 = FUN_71001bef20(0x71052b52a8);
    FUN_71001beed0((long)auStack_248,uVar6);
    FUN_71001bee30((long)auStack_248,(ushort)uVar8);
    FUN_71001bf040((long)auStack_1b8);
    FUN_71001bf040((long)auStack_248);
    if (DAT_71052af4b8 == 0) goto LAB_710021489c;
LAB_7100214868:
    plVar15 = FUN_710021e910(param_1 + 0x28,(long)auStack_f0);
    if (((long *)(param_1 + 0x30) != plVar15) ||
       (plVar11 = FUN_710021e910(param_1 + 0x28,(long)auStack_248), plVar15 != plVar11))
    goto LAB_710021489c;
    plVar11 = (long *)(param_1 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_71001b12a0(&local_250);
    FUN_71001bebd0(auStack_370,(long)auStack_f0);
    FUN_71001bebd0(auStack_2e0,(long)auStack_248);
    plVar15 = FUN_710021ea20(param_1 + 0x10,(long)auStack_370);
    FUN_71001bef00();
    FUN_71001bef00();
    if ((long *)(param_1 + 0x18) == plVar15) {
      if ((DAT_71052af4bc == 0) || (*(ulong *)(param_1 + 0x20) < (ulong)DAT_71052af4bc)) {
        FUN_71001bebd0(auStack_370,(long)auStack_f0);
        FUN_71001bebd0(auStack_2e0,(long)auStack_248);
        local_58 = (undefined1 *)auStack_370;
        auVar17 = FUN_710021ecb0((long *)(param_1 + 0x10),(long)auStack_370,"",(long *)&local_58);
        *(ulong *)(auVar17._0_8_ + 0x140) = local_250;
        FUN_71001bef00();
        FUN_71001bef00();
        goto LAB_7100214b2c;
      }
      bVar12 = false;
    }
    else {
      plVar15[0x28] = local_250;
LAB_7100214b2c:
      bVar12 = true;
    }
    (**(code **)(*plVar11 + 0x20))(plVar11);
    pcVar10 = *(code **)(param_1 + 200);
    if (pcVar10 == (code *)0x0) goto LAB_7100214b48;
LAB_71002148a8:
    uVar8 = (*pcVar10)(auStack_248,auStack_1b8,param_4);
    if ((uVar8 & 1) != 0) goto LAB_71002148bc;
LAB_7100214b4c:
    bVar12 = false;
  }
  else {
    FUN_71001bec20((long)auStack_1b8,(long)auStack_f0);
    FUN_71001bec20((long)auStack_248,(long)(param_4 + 0x28));
    if (DAT_71052af4b8 != 0) goto LAB_7100214868;
LAB_710021489c:
    bVar12 = true;
    pcVar10 = *(code **)(param_1 + 200);
    if (pcVar10 != (code *)0x0) goto LAB_71002148a8;
LAB_7100214b48:
    if (!bVar12) goto LAB_7100214b4c;
LAB_71002148bc:
    plVar15 = FUN_71002141b0((long)&local_128,2,(long)auStack_248);
    if (plVar15 != (long *)0x0) {
      if (((*(byte *)(plVar15 + 0xc) >> 6 & 1) == 0) || (plVar15[0x3e] != 0)) {
        FUN_71001bec20((long)(plVar15 + 0x28),(long)auStack_1b8);
        plVar11 = *(long **)(param_1 + 0xc0);
        uVar6 = *(uint *)(param_1 + 8);
        if (DAT_71052af1d8 == '\0') {
LAB_7100214940:
          lVar7 = (ulong)uVar6 * 0x2e8 + 0x71052af4f0;
        }
        else {
          puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
          if (*puVar9 == 0) goto LAB_7100214940;
          lVar7 = *(long *)(&DAT_71052af4e8 + (ulong)uVar6 * 0x2e8) + (ulong)*puVar9 * 0x168;
        }
        (**(code **)(*plVar11 + 0x68))
                  (plVar11,*(undefined4 *)(lVar7 + 0x140),param_2,*(undefined4 *)(param_1 + 8),1,1,
                   plVar15,0);
        plVar11 = plVar15 + 1;
        iVar4 = (int)*plVar11;
        iVar5 = (int)*plVar11 + -1;
        if (iVar4 != (int)*plVar11) {
          ClearExclusiveLocal();
          goto LAB_71002149b8;
        }
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *(int *)plVar11 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        while (cVar2 != '\0') {
LAB_71002149b8:
          while( true ) {
            iVar1 = (int)*plVar11;
            iVar5 = iVar4 + -1;
            if (iVar1 == iVar4) break;
            ClearExclusiveLocal();
            iVar4 = iVar1;
          }
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          iVar4 = iVar1;
          if (bVar12) {
            *(int *)plVar11 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar5 == 0) {
          bVar12 = true;
          if (*(char *)((long)plVar15 + 0xc) == '\0') {
            *(undefined1 *)((long)plVar15 + 0xc) = 1;
            (**(code **)(*plVar15 + 8))(plVar15);
          }
          goto LAB_7100214b50;
        }
      }
      else {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
    bVar12 = true;
  }
LAB_7100214b50:
  FUN_71001bef00();
LAB_7100214b5c:
  FUN_71001bef00();
  FUN_71001cfad0(&local_128);
  FUN_71001bef00();
  uVar13 = 0;
  if (bVar12) {
    plVar15 = param_4 + 1;
    iVar4 = (int)*plVar15;
    iVar5 = (int)*plVar15 + -1;
    if (iVar4 != (int)*plVar15) {
      ClearExclusiveLocal();
      goto LAB_7100214bac;
    }
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar12) {
      *(int *)plVar15 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    while (cVar2 != '\0') {
LAB_7100214bac:
      while( true ) {
        iVar1 = (int)*plVar15;
        iVar5 = iVar4 + -1;
        if (iVar1 == iVar4) break;
        ClearExclusiveLocal();
        iVar4 = iVar1;
      }
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      iVar4 = iVar1;
      if (bVar12) {
        *(int *)plVar15 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    }
    if (iVar5 == 0) {
      uVar13 = 1;
      if (*(char *)((long)param_4 + 0xc) == '\0') {
        *(undefined1 *)((long)param_4 + 0xc) = 1;
        (**(code **)(*param_4 + 8))(param_4);
      }
    }
    else {
      uVar13 = 1;
    }
  }
  return uVar13;
}

