// addr:      7101d07270
// offset:    0x1d07270
// name:      FUN_7101d07270
// mangled:   
// signature: undefined __cdecl FUN_7101d07270(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d07270(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  long *plVar15;
  ulong uVar16;
  long local_d8 [4];
  long lStack_b8;
  undefined **local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  undefined ***local_90;
  
  if (*(int *)(param_1 + 0x2ac) == 0) {
    if ((*(long *)(param_1 + 0x150) != 0) &&
       (lVar12 = *(long *)(param_1 + 0x88), *(char *)(lVar12 + 0xc2) == '\0')) {
      FUN_71003a4ca0((uint *)&local_b0,"waiting_%s",&DAT_7104421055,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar12 + 0x80) + 0x10),(long)&local_a8);
      *(undefined1 *)(lVar12 + 0xc2) = 1;
    }
    *(undefined1 *)(param_1 + 0x159) = 0;
  }
  plVar1 = (long *)(param_1 + 0x140);
  if (plVar1 != *(long **)(param_1 + 0x148)) {
    plVar13 = *(long **)(param_1 + 0x148);
    do {
      while( true ) {
        lVar12 = plVar13[2];
        plVar5 = (long *)plVar13[3];
        if (plVar5 != (long *)0x0) {
          plVar9 = plVar5 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *plVar9 = *plVar9 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)(lVar12 + 0x50) == -1) break;
        uVar16 = (ulong)*(int *)(lVar12 + 8);
        local_d8[0] = param_1 + 0xc0;
        local_d8[3] = param_1 + 0x108;
        lStack_b8 = param_1 + 0x120;
        local_d8[1] = param_1 + 0xd8;
        local_d8[2] = param_1 + 0xf0;
        if (*(uint *)(param_1 + 0x138) < 5) {
          plVar9 = (long *)local_d8[(int)*(uint *)(param_1 + 0x138)];
        }
        else {
          if (((DAT_7105325d40 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(&DAT_7105325d40), iVar8 != 0)) {
            DAT_7105325d28 = 0;
            DAT_7105325d30 = 0;
            DAT_7105325d38 = 0;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_7105325d40);
          }
          plVar9 = &DAT_7105325d28;
        }
        lVar3 = *plVar9;
        uVar11 = (plVar9[1] - lVar3 >> 5) * 0x4ec4ec4ec4ec4ec5;
        if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar11 = FUN_71023976c0(lVar12,*(int *)(lVar12 + 0x50));
        if (plVar5 != (long *)0x0) {
          plVar9 = plVar5 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *plVar9 = *plVar9 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        param_3 = (undefined **)&local_b0;
        local_b0 = &PTR_FUN_71050ae958;
        local_a8 = param_1;
        local_a0 = lVar12;
        local_98 = plVar5;
        local_90 = &local_b0;
        FUN_7101d0ee10((long *)(lVar3 + uVar16 * 0x1a0),(int)uVar11,(long *)param_3);
        if (&local_b0 == local_90) {
          pcVar10 = (code *)(*local_90)[4];
LAB_7101d074a8:
          (*pcVar10)();
        }
        else if (local_90 != (undefined ***)0x0) {
          pcVar10 = (code *)(*local_90)[5];
          goto LAB_7101d074a8;
        }
        plVar9 = (long *)plVar13[1];
        *(long **)(*plVar13 + 8) = plVar9;
        *(long *)plVar13[1] = *plVar13;
        *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
        plVar15 = (long *)plVar13[3];
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
          do {
            lVar12 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar13 == (long *)0x0) goto joined_r0x007101d07520;
        FUN_710392eb40((ulong)plVar13);
        if (plVar5 != (long *)0x0) goto LAB_7101d07524;
LAB_7101d0753c:
        plVar13 = plVar9;
        if (plVar1 == plVar9) goto LAB_7101d07544;
      }
      plVar9 = (long *)plVar13[1];
joined_r0x007101d07520:
      if (plVar5 == (long *)0x0) goto LAB_7101d0753c;
LAB_7101d07524:
      plVar13 = plVar5 + 1;
      do {
        lVar12 = *plVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 != 0) goto LAB_7101d0753c;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      plVar13 = plVar9;
    } while (plVar1 != plVar9);
  }
LAB_7101d07544:
  if (*(long *)(param_1 + 0x150) == 0) {
    local_b0 = (undefined **)(param_1 + 0xc0);
    local_a8 = param_1 + 0xd8;
    local_a0 = param_1 + 0xf0;
    local_98 = (long *)(param_1 + 0x108);
    local_90 = (undefined ***)(param_1 + 0x120);
    if (*(uint *)(param_1 + 0x138) < 5) {
      ppuVar14 = (&local_b0)[(int)*(uint *)(param_1 + 0x138)];
    }
    else if ((DAT_7105325d40 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_7105325d40);
      ppuVar14 = (undefined **)&DAT_7105325d28;
      if (iVar8 != 0) {
        param_3 = &PTR_LOOP_7104f17000;
        DAT_7105325d28 = 0;
        DAT_7105325d30 = 0;
        DAT_7105325d38 = 0;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_7105325d40);
      }
    }
    else {
      ppuVar14 = (undefined **)&DAT_7105325d28;
    }
    for (puVar4 = *ppuVar14; puVar4 != ppuVar14[1]; puVar4 = puVar4 + 0x1a0) {
      if (*(int *)(puVar4 + 0xe8) != 6) {
        return;
      }
    }
    lVar12 = *(long *)(param_1 + 0x88);
    if (*(char *)(lVar12 + 0xc2) != '\0') {
      FUN_71003a4ca0((uint *)&local_b0,"waiting_%s",&DAT_710428ff7d,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar12 + 0x80) + 0x10),(long)&local_a8);
      *(undefined1 *)(lVar12 + 0xc2) = 0;
    }
    if (0x12 < *(uint *)(param_1 + 0x2a4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4 + 600) = 9;
  }
  return;
}

