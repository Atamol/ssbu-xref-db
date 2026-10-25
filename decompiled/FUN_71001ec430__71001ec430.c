// addr:      71001ec430
// offset:    0x1ec430
// name:      FUN_71001ec430
// mangled:   
// signature: undefined __cdecl FUN_71001ec430(long param_1, ulong * param_2)


void FUN_71001ec430(long param_1,ulong *param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **local_108;
  undefined **local_100;
  long *local_f8;
  undefined1 auStack_e8 [8];
  undefined8 *local_e0;
  undefined1 auStack_d0 [8];
  undefined8 *local_c8;
  undefined1 auStack_b8 [8];
  undefined8 *local_b0;
  long local_a0;
  undefined1 local_97;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ec4ac:
    if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_71001ec4e0;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001ec4ac;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001ec4ac;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_71001ec4e0:
  (**(code **)(*(long *)(lVar5 + 0x78) + 0x10))();
  plVar7 = (long *)(param_1 + 0x158);
  if (plVar7 != *(long **)(param_1 + 0x150)) {
    plVar9 = *(long **)(param_1 + 0x150);
LAB_71001ec54c:
    do {
      if ((ulong)plVar9[5] < *param_2) {
        FUN_71001f5fe0(&local_108,(long)(plVar9 + 6),DAT_7104f575e0,90000,0xc);
        plVar3 = FUN_71001b1820(0xb0);
        *plVar3 = 0;
        plVar3[2] = (long)&PTR_FUN_7104f57a78;
        plVar3[3] = (long)&PTR_FUN_7104f57900;
        plVar3[7] = 0;
        plVar3[6] = (long)(plVar3 + 7);
        plVar3[10] = 0;
        plVar3[8] = 0;
        plVar3[9] = (long)(plVar3 + 10);
        plVar3[0xd] = 0;
        plVar3[0xb] = 0;
        plVar3[0xc] = (long)(plVar3 + 0xd);
        *(undefined2 *)(plVar3 + 0x10) = 1;
        *(undefined1 *)((long)plVar3 + 0x82) = 0;
        plVar3[0xe] = 0;
        plVar3[0xf] = 0;
        puVar4 = FUN_71001af850(0x90);
        if (puVar4 != (undefined8 *)0x0) {
          FUN_71001beb40(puVar4);
        }
        plVar3[4] = (long)puVar4;
        FUN_71001f1f40((long)(plVar3 + 3),(long)&local_100);
        plVar3[0x11] = local_90;
        plVar3[0x13] = lStack_80;
        plVar3[0x14] = local_78;
        plVar3[0x12] = local_88;
        *(undefined4 *)(plVar3 + 0x15) = local_70;
        plVar3[1] = param_1 + 0x78;
        lVar6 = *(long *)(param_1 + 0x78);
        *plVar3 = lVar6;
        *(long **)(lVar6 + 8) = plVar3;
        *(long **)(param_1 + 0x78) = plVar3;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
        local_108 = &PTR_FUN_7104f57a78;
        local_100 = &PTR_FUN_7104f57900;
        if (local_a0 != 0) {
          FUN_71001b1870(local_a0 + -4);
          local_a0 = 0;
          local_97 = 0;
        }
        if (local_f8 != (long *)0x0) {
          (**(code **)(*local_f8 + 8))();
        }
        FUN_7101711670(auStack_b8,local_b0);
        FUN_7101711670(auStack_d0,local_c8);
        FUN_7100219ca0(auStack_e8,local_e0);
        plVar3 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar3 = plVar9 + 2;
          plVar8 = (long *)*plVar3;
          if ((long *)*plVar8 != plVar9) {
            do {
              lVar6 = *plVar3;
              plVar3 = (long *)(lVar6 + 0x10);
              plVar8 = (long *)*plVar3;
            } while (*plVar8 != lVar6);
          }
        }
        else {
          do {
            plVar8 = plVar3;
            plVar3 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        FUN_710021b5f0((undefined8 *)(param_1 + 0x150),plVar9);
      }
      else {
        plVar3 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar3 = plVar9 + 2;
          plVar8 = (long *)*plVar3;
          if ((long *)*plVar8 == plVar9) {
            plVar9 = plVar8;
            if (plVar7 == plVar8) break;
            goto LAB_71001ec54c;
          }
          do {
            lVar6 = *plVar3;
            plVar3 = (long *)(lVar6 + 0x10);
            plVar8 = (long *)*plVar3;
          } while (*plVar8 != lVar6);
        }
        else {
          do {
            plVar8 = plVar3;
            plVar3 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
      plVar9 = plVar8;
    } while (plVar7 != plVar8);
  }
  (**(code **)(*(long *)(lVar5 + 0x78) + 0x20))();
  return;
}

