// addr:      71001e8b20
// offset:    0x1e8b20
// name:      FUN_71001e8b20
// mangled:   
// signature: undefined __cdecl FUN_71001e8b20(long param_1)


void FUN_71001e8b20(long param_1)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  uint *puVar5;
  long *plVar6;
  ulong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  ulong local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined1 local_e8 [8];
  undefined ***local_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 uStack_a0;
  int iStack_94;
  undefined8 uStack_90;
  undefined1 local_88;
  ulong auStack_80 [2];
  undefined ***local_70 [2];
  
  plVar17 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e8b98:
    if ((*plVar17 != 0) && (lVar11 = *(long *)(*plVar17 + 0x10), lVar11 != 0)) {
      lVar11 = *(long *)(lVar11 + 0x10);
      goto LAB_71001e8bcc;
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar5;
    if (uVar2 == 0) goto LAB_71001e8b98;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001e8b98;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar11 = 0;
LAB_71001e8bcc:
  (**(code **)(*(long *)(lVar11 + 0x78) + 0x10))();
  plVar17 = (long *)(param_1 + 0x198);
  if (*(long *)(param_1 + 0x1a8) != 0) {
    lVar10 = *(long *)(param_1 + 0x198);
    plVar1 = *(long **)(param_1 + 0x1a0);
    lVar13 = *plVar1;
    *(undefined8 *)(lVar13 + 8) = *(undefined8 *)(lVar10 + 8);
    **(long **)(lVar10 + 8) = lVar13;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    while (plVar1 != plVar17) {
      plVar16 = (long *)plVar1[1];
      FUN_71001b1870((long)plVar1);
      plVar1 = plVar16;
    }
  }
  plVar1 = (long *)(param_1 + 0x1b0);
  if (*(long *)(param_1 + 0x1c0) != 0) {
    lVar10 = *(long *)(param_1 + 0x1b0);
    plVar16 = *(long **)(param_1 + 0x1b8);
    lVar13 = *plVar16;
    *(undefined8 *)(lVar13 + 8) = *(undefined8 *)(lVar10 + 8);
    **(long **)(lVar10 + 8) = lVar13;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    while (plVar16 != plVar1) {
      plVar18 = (long *)plVar16[1];
      (**(code **)plVar16[2])();
      FUN_71001b1870((long)plVar16);
      plVar16 = plVar18;
    }
  }
  plVar16 = (long *)(param_1 + 0x58);
  if (plVar16 != *(long **)(param_1 + 0x60)) {
    plVar18 = (long *)(param_1 + 0x78);
    plVar19 = (long *)(param_1 + 0x88);
    plVar12 = *(long **)(param_1 + 0x60);
    do {
      while ((FUN_71001b12a0(auStack_80), (int)plVar12[0x12] != -1 ||
             (*(uint *)(plVar12 + 0x15) <= *(uint *)((long)plVar12 + 0xa4)))) {
        puVar9 = FUN_71001b1400();
        lVar10 = FUN_71001b17c0((long)puVar9);
        FUN_71001b3130(lVar10,2);
        puVar9 = FUN_71001b1400();
        lVar10 = FUN_71001b17c0((long)puVar9);
        FUN_71001b3140(lVar10,2);
        plVar20 = plVar12 + 3;
        if ((int)plVar12[0x12] == -1) {
          uVar7 = FUN_71001e9a60(param_1,(long)plVar20,1);
          if (((uVar7 & 1) == 0) ||
             (uVar8 = FUN_71001f2ba0((long)plVar20,"probeinit",0), uVar8 != 0)) {
            plVar6 = FUN_71001b1820(0xb0);
            *plVar6 = 0;
            plVar6[2] = (long)&PTR_FUN_7104f57a78;
            plVar6[3] = (long)&PTR_FUN_7104f57900;
            plVar6[7] = 0;
            plVar6[6] = (long)(plVar6 + 7);
            plVar6[10] = 0;
            plVar6[8] = 0;
            plVar6[9] = (long)(plVar6 + 10);
            plVar6[0xd] = 0;
            plVar6[0xb] = 0;
            plVar6[0xc] = (long)(plVar6 + 0xd);
            plVar6[0xe] = 0;
            plVar6[0xf] = 0;
            *(undefined2 *)(plVar6 + 0x10) = 1;
            *(undefined1 *)((long)plVar6 + 0x82) = 0;
            puVar9 = FUN_71001af850(0x90);
            if (puVar9 != (undefined8 *)0x0) {
              FUN_71001beb40(puVar9);
            }
            plVar6[4] = (long)puVar9;
            FUN_71001f1f40((long)(plVar6 + 3),(long)plVar20);
            plVar6[0x11] = plVar12[0x11];
            lVar14 = plVar12[0x14];
            lVar10 = plVar12[0x12];
            lVar13 = plVar12[0x13];
            lVar15 = plVar12[0x15];
            plVar6[1] = (long)plVar18;
            *(int *)(plVar6 + 0x15) = (int)lVar15;
            plVar6[0x13] = lVar13;
            plVar6[0x14] = lVar14;
            plVar6[0x12] = lVar10;
            lVar10 = *plVar18;
            *plVar6 = lVar10;
            *(long **)(lVar10 + 8) = plVar6;
            *plVar18 = (long)plVar6;
            plVar20 = plVar19;
          }
          else {
            plVar6 = FUN_71001b1820(0x80);
            *plVar6 = 0;
            plVar6[2] = (long)&PTR_FUN_7104f57900;
            plVar6[6] = 0;
            plVar6[5] = (long)(plVar6 + 6);
            plVar6[9] = 0;
            plVar6[7] = 0;
            plVar6[8] = (long)(plVar6 + 9);
            plVar6[0xc] = 0;
            plVar6[10] = 0;
            plVar6[0xb] = (long)(plVar6 + 0xc);
            plVar6[0xd] = 0;
            plVar6[0xe] = 0;
            *(undefined2 *)(plVar6 + 0xf) = 1;
            *(undefined1 *)((long)plVar6 + 0x7a) = 0;
            puVar9 = FUN_71001af850(0x90);
            if (puVar9 != (undefined8 *)0x0) {
              FUN_71001beb40(puVar9);
            }
            plVar6[3] = (long)puVar9;
            FUN_71001f1f40((long)(plVar6 + 2),(long)plVar20);
            plVar6[1] = (long)plVar1;
            lVar10 = *plVar1;
            *plVar6 = lVar10;
            *(long **)(lVar10 + 8) = plVar6;
            *plVar1 = (long)plVar6;
            plVar20 = (long *)(param_1 + 0x1c0);
          }
          *plVar20 = *plVar20 + 1;
          plVar20 = &DAT_71052af128;
          if (DAT_71052af1d8 == '\0') {
LAB_71001e9218:
            if ((*plVar20 == 0) || (lVar10 = *(long *)(*plVar20 + 0x10), lVar10 == 0))
            goto LAB_71001e9250;
            lVar10 = *(long *)(lVar10 + 0xe8);
          }
          else {
            puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar2 = *puVar5;
            if (uVar2 == 0) goto LAB_71001e9218;
            if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
              plVar20 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
              goto LAB_71001e9218;
            }
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
LAB_71001e9250:
            lVar10 = 0;
          }
          local_f8 = &PTR_FUN_7104f57550;
          local_f0 = &PTR_FUN_710509cc08;
          local_e8[0] = 0;
          uStack_d0 = 0x10;
          local_d8 = local_e8;
          FUN_71001b47e0((long)&local_f0,*(char **)(lVar10 + 0x168),-1);
          local_c8 = *(undefined2 *)(lVar10 + 0x178);
          local_c0 = &PTR_FUN_710509cc08;
          uStack_a0 = 0x10;
          local_b8[0] = 0;
          local_a8 = local_b8;
          FUN_71001b47e0((long)&local_c0,*(char **)(lVar10 + 0x198),-1);
          uStack_90 = *(undefined8 *)(lVar10 + 0x1b0);
          local_88 = *(undefined1 *)(lVar10 + 0x1b8);
          iStack_94 = (int)((ulong)*(undefined8 *)(lVar10 + 0x1a8) >> 0x20);
          if (iStack_94 == 2) {
            plVar20 = &DAT_71052af128;
            if (DAT_71052af1d8 != '\0') {
              puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
              uVar2 = *puVar5;
              if (uVar2 != 0) {
                if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
                  FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
                  return;
                }
                plVar20 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
              }
            }
            lVar10 = (**(code **)(**(long **)(*(long *)(*plVar20 + 0x10) + 0xe8) + 0x80))();
            if ((*(char *)(lVar10 + 0x10) != '\0') &&
               (bVar4 = FUN_71001b4e00(*(char **)(param_1 + 0x180),""), !bVar4)) {
              sVar3 = *(short *)(param_1 + 400);
              local_f8 = &PTR_FUN_7104f57550;
              local_c0 = &PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_c0);
              local_f0 = &PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_f0);
              if (sVar3 != 0) {
                lVar10 = *(long *)(param_1 + 0x40);
                *(undefined1 *)(param_1 + 0x192) = 1;
                for (; param_1 + 0x38 != lVar10; lVar10 = *(long *)(lVar10 + 8)) {
                  lVar13 = lVar10 + 0x10;
                  uVar8 = FUN_71001f2ba0(lVar13,"R",0);
                  if ((uVar8 == 0) &&
                     (uVar8 = FUN_71001f2ba0(lVar13,"type",0), ((uint)uVar8 >> 1 & 1) != 0)) {
                    FUN_71001f2a80((undefined4 *)&local_f8,lVar13,"R",1);
                    local_f0 = (undefined **)((ulong)local_f0 & 0xffffffffffffff00);
                    local_d8 = (undefined1 *)0x10;
                    local_f8 = &PTR_FUN_710509cc08;
                    local_e0 = &local_f0;
                    FUN_71001b47e0((long)&local_f8,"Rsa",-1);
                    FUN_710021bff0((long *)(lVar10 + 0x40),(long)&local_f8);
                    local_f8 = &PTR_FUN_710509cc08;
                    FUN_71001b4910((long)&local_f8);
                    local_f0 = (undefined **)((ulong)local_f0 & 0xffffffffffffff00);
                    local_d8 = &DAT_00000010;
                    local_f8 = &PTR_FUN_710509cc08;
                    local_e0 = &local_f0;
                    FUN_71001b47e0((long)&local_f8,"Rsa",-1);
                    local_70[0] = &local_f8;
                    auVar21 = FUN_710021c110((long *)(lVar10 + 0x40),(long)&local_f8,"",local_70);
                    FUN_71001b2f70(auVar21._0_8_ + 0x48,param_1 + 0x168);
                    local_f8 = &PTR_FUN_710509cc08;
                    FUN_71001b4910((long)&local_f8);
                    FUN_71001f2a80((undefined4 *)&local_f8,lVar13,"Rsp",
                                   (ulong)*(ushort *)(param_1 + 400));
                  }
                }
              }
              goto LAB_71001e93ac;
            }
            local_f8 = &PTR_FUN_7104f57550;
            local_c0 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_c0);
          }
          else {
            local_f8 = &PTR_FUN_7104f57550;
            local_c0 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_c0);
          }
          local_f0 = &PTR_FUN_710509cc08;
          FUN_71001b4910((long)&local_f0);
        }
        else {
          uVar8 = FUN_71001f2ba0((long)plVar20,"RVCID",0);
          plVar6 = FUN_71001b1820(0x18);
          *(int *)(plVar6 + 2) = (int)uVar8;
          *plVar6 = 0;
          plVar6[1] = (long)plVar17;
          lVar10 = *(long *)(param_1 + 0x198);
          *plVar6 = lVar10;
          *(long **)(lVar10 + 8) = plVar6;
          *(long **)(param_1 + 0x198) = plVar6;
          *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
          plVar6 = FUN_71001b1820(0xb0);
          *plVar6 = 0;
          plVar6[2] = (long)&PTR_FUN_7104f57a78;
          plVar6[3] = (long)&PTR_FUN_7104f57900;
          plVar6[7] = 0;
          plVar6[6] = (long)(plVar6 + 7);
          plVar6[10] = 0;
          plVar6[8] = 0;
          plVar6[9] = (long)(plVar6 + 10);
          plVar6[0xd] = 0;
          plVar6[0xb] = 0;
          plVar6[0xc] = (long)(plVar6 + 0xd);
          plVar6[0xe] = 0;
          plVar6[0xf] = 0;
          *(undefined2 *)(plVar6 + 0x10) = 1;
          *(undefined1 *)((long)plVar6 + 0x82) = 0;
          puVar9 = FUN_71001af850(0x90);
          if (puVar9 != (undefined8 *)0x0) {
            FUN_71001beb40(puVar9);
          }
          plVar6[4] = (long)puVar9;
          FUN_71001f1f40((long)(plVar6 + 3),(long)plVar20);
          plVar6[0x11] = plVar12[0x11];
          lVar15 = plVar12[0x14];
          lVar10 = plVar12[0x12];
          lVar13 = plVar12[0x15];
          plVar6[0x13] = plVar12[0x13];
          plVar6[0x14] = lVar15;
          *(int *)(plVar6 + 0x15) = (int)lVar13;
          plVar6[0x12] = lVar10;
          plVar6[1] = (long)plVar18;
          lVar10 = *plVar18;
          *plVar6 = lVar10;
          *(long **)(lVar10 + 8) = plVar6;
          *plVar18 = (long)plVar6;
          *plVar19 = *plVar19 + 1;
        }
LAB_71001e93ac:
        lVar10 = *plVar12;
        plVar20 = (long *)plVar12[1];
        *(long **)(lVar10 + 8) = plVar20;
        *(long *)plVar12[1] = lVar10;
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
        (**(code **)plVar12[2])(plVar12 + 2);
        FUN_71001b1870((long)plVar12);
        plVar12 = plVar20;
        if (plVar16 == plVar20) goto LAB_71001e93f0;
      }
      plVar20 = plVar12 + 1;
      plVar12 = (long *)*plVar20;
    } while (plVar16 != (long *)*plVar20);
  }
LAB_71001e93f0:
  plVar18 = *(long **)(param_1 + 0x1a0);
  if (plVar17 != plVar18) {
    do {
      for (plVar19 = *(long **)(param_1 + 0x40); (long *)(param_1 + 0x38) != plVar19;
          plVar19 = (long *)plVar19[1]) {
        while( true ) {
          uVar8 = FUN_71001f2ba0((long)(plVar19 + 2),"RVCID",0);
          if ((int)plVar18[2] != (int)uVar8) break;
          puVar9 = FUN_71001b1400();
          lVar10 = FUN_71001b17c0((long)puVar9);
          FUN_71001b3130(lVar10,2);
          puVar9 = FUN_71001b1400();
          lVar10 = FUN_71001b17c0((long)puVar9);
          FUN_71001b3140(lVar10,2);
          lVar10 = *plVar19;
          plVar12 = (long *)plVar19[1];
          *(long **)(lVar10 + 8) = plVar12;
          *(long *)plVar19[1] = lVar10;
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
          (**(code **)plVar19[2])(plVar19 + 2);
          FUN_71001b1870((long)plVar19);
          plVar19 = plVar12;
          if ((long *)(param_1 + 0x38) == plVar12) goto LAB_71001e94a4;
        }
      }
LAB_71001e94a4:
      plVar18 = (long *)plVar18[1];
    } while (plVar17 != plVar18);
    plVar18 = *(long **)(param_1 + 0x1a0);
  }
  if (plVar17 != plVar18) {
    do {
      plVar19 = *(long **)(param_1 + 0x150);
      while ((long *)(param_1 + 0x158) != plVar19) {
        while (uVar8 = FUN_71001f2ba0((long)(plVar19 + 6),"RVCID",0), (int)plVar18[2] != (int)uVar8)
        {
          plVar12 = (long *)plVar19[1];
          if ((long *)plVar19[1] == (long *)0x0) {
            plVar12 = plVar19 + 2;
            bVar4 = *(long **)*plVar12 != plVar19;
            plVar19 = (long *)*plVar12;
            if (bVar4) {
              do {
                lVar10 = *plVar12;
                plVar12 = (long *)(lVar10 + 0x10);
                plVar19 = (long *)*plVar12;
              } while (*plVar19 != lVar10);
            }
          }
          else {
            do {
              plVar19 = plVar12;
              plVar12 = (long *)*plVar19;
            } while ((long *)*plVar19 != (long *)0x0);
          }
          if ((long *)(param_1 + 0x158) == plVar19) goto LAB_71001e95d8;
        }
        puVar9 = FUN_71001b1400();
        lVar10 = FUN_71001b17c0((long)puVar9);
        FUN_71001b3130(lVar10,2);
        puVar9 = FUN_71001b1400();
        lVar10 = FUN_71001b17c0((long)puVar9);
        FUN_71001b3140(lVar10,2);
        plVar12 = (long *)plVar19[1];
        if ((long *)plVar19[1] == (long *)0x0) {
          plVar12 = plVar19 + 2;
          plVar20 = (long *)*plVar12;
          if ((long *)*plVar20 != plVar19) {
            do {
              lVar10 = *plVar12;
              plVar12 = (long *)(lVar10 + 0x10);
              plVar20 = (long *)*plVar12;
            } while (*plVar20 != lVar10);
          }
        }
        else {
          do {
            plVar20 = plVar12;
            plVar12 = (long *)*plVar20;
          } while ((long *)*plVar20 != (long *)0x0);
        }
        FUN_710021b5f0((long *)(param_1 + 0x150),plVar19);
        plVar19 = plVar20;
      }
LAB_71001e95d8:
      plVar18 = (long *)plVar18[1];
    } while (plVar17 != plVar18);
  }
  if ((*(long *)(param_1 + 0x1a8) != 0) &&
     (plVar18 = *(long **)(param_1 + 0x60), plVar16 != plVar18)) {
    do {
      plVar19 = *(long **)(param_1 + 0x1a0);
      uVar8 = FUN_71001f2ba0((long)(plVar18 + 3),"RVCID",0);
      for (; (plVar17 != plVar19 && ((int)plVar19[2] != (int)uVar8)); plVar19 = (long *)plVar19[1])
      {
      }
      if (plVar17 == plVar19) {
        lVar10 = *(long *)(param_1 + 0x1a8);
        plVar18 = (long *)plVar18[1];
      }
      else {
        puVar9 = FUN_71001b1400();
        lVar10 = FUN_71001b17c0((long)puVar9);
        FUN_71001b3130(lVar10,2);
        puVar9 = FUN_71001b1400();
        lVar10 = FUN_71001b17c0((long)puVar9);
        FUN_71001b3140(lVar10,2);
        plVar19 = FUN_71001b1820(0xb0);
        *plVar19 = 0;
        plVar19[2] = (long)&PTR_FUN_7104f57a78;
        plVar19[3] = (long)&PTR_FUN_7104f57900;
        plVar19[7] = 0;
        plVar19[6] = (long)(plVar19 + 7);
        plVar19[10] = 0;
        plVar19[8] = 0;
        plVar19[9] = (long)(plVar19 + 10);
        plVar19[0xd] = 0;
        plVar19[0xb] = 0;
        plVar19[0xc] = (long)(plVar19 + 0xd);
        *(undefined2 *)(plVar19 + 0x10) = 1;
        *(undefined1 *)((long)plVar19 + 0x82) = 0;
        plVar19[0xe] = 0;
        plVar19[0xf] = 0;
        puVar9 = FUN_71001af850(0x90);
        if (puVar9 != (undefined8 *)0x0) {
          FUN_71001beb40(puVar9);
        }
        plVar19[4] = (long)puVar9;
        FUN_71001f1f40((long)(plVar19 + 3),(long)(plVar18 + 3));
        plVar19[0x11] = plVar18[0x11];
        lVar15 = plVar18[0x14];
        lVar10 = plVar18[0x12];
        lVar13 = plVar18[0x15];
        plVar19[0x13] = plVar18[0x13];
        plVar19[0x14] = lVar15;
        plVar19[0x12] = lVar10;
        *(int *)(plVar19 + 0x15) = (int)lVar13;
        plVar19[1] = param_1 + 0x78;
        lVar10 = *(long *)(param_1 + 0x78);
        *plVar19 = lVar10;
        *(long **)(lVar10 + 8) = plVar19;
        *(long **)(param_1 + 0x78) = plVar19;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
        lVar10 = *plVar18;
        plVar19 = (long *)plVar18[1];
        *(long **)(lVar10 + 8) = plVar19;
        *(long *)plVar18[1] = lVar10;
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
        (**(code **)plVar18[2])(plVar18 + 2);
        FUN_71001b1870((long)plVar18);
        lVar10 = *(long *)(param_1 + 0x1a8);
        plVar18 = plVar19;
      }
    } while ((lVar10 != 0) && (plVar16 != plVar18));
  }
  for (plVar17 = *(long **)(param_1 + 0x80); (long *)(param_1 + 0x78) != plVar17;
      plVar17 = (long *)plVar17[1]) {
    while (FUN_71001b12a0(&local_100), (ulong)plVar17[0x11] < local_100) {
      puVar9 = FUN_71001b1400();
      lVar10 = FUN_71001b17c0((long)puVar9);
      FUN_71001b3130(lVar10,2);
      puVar9 = FUN_71001b1400();
      lVar10 = FUN_71001b17c0((long)puVar9);
      FUN_71001b3140(lVar10,2);
      lVar10 = *plVar17;
      plVar16 = (long *)plVar17[1];
      *(long **)(lVar10 + 8) = plVar16;
      *(long *)plVar17[1] = lVar10;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
      (**(code **)plVar17[2])(plVar17 + 2);
      FUN_71001b1870((long)plVar17);
      plVar17 = plVar16;
      if ((long *)(param_1 + 0x78) == plVar16) goto LAB_71001e9838;
    }
  }
LAB_71001e9838:
  plVar17 = *(long **)(param_1 + 0x1b8);
  if (plVar1 != plVar17) {
    do {
      puVar9 = FUN_71001b1400();
      lVar10 = FUN_71001b17c0((long)puVar9);
      FUN_71001b3130(lVar10,2);
      puVar9 = FUN_71001b1400();
      lVar10 = FUN_71001b17c0((long)puVar9);
      FUN_71001b3140(lVar10,2);
      plVar16 = plVar17 + 2;
      FUN_71001f2a80((undefined4 *)&local_f8,(long)plVar16,"R",1);
      local_f0 = (undefined **)((ulong)local_f0 & 0xffffffffffffff00);
      local_d8 = (undefined1 *)0x10;
      local_f8 = &PTR_FUN_710509cc08;
      local_e0 = &local_f0;
      FUN_71001b47e0((long)&local_f8,"Rsa",-1);
      FUN_710021bff0(plVar17 + 8,(long)&local_f8);
      local_f8 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_f8);
      local_d8 = &DAT_00000010;
      local_f0 = (undefined **)((ulong)local_f0 & 0xffffffffffffff00);
      local_f8 = &PTR_FUN_710509cc08;
      local_e0 = &local_f0;
      FUN_71001b47e0((long)&local_f8,"Rsa",-1);
      local_70[0] = &local_f8;
      auVar21 = FUN_710021c110(plVar17 + 8,(long)&local_f8,"",local_70);
      FUN_71001b2f70(auVar21._0_8_ + 0x48,param_1 + 0x168);
      local_f8 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_f8);
      FUN_71001f2a80((undefined4 *)&local_f8,(long)plVar16,"Rsp",(ulong)*(ushort *)(param_1 + 400));
      plVar18 = FUN_71001b1820(0x80);
      *plVar18 = 0;
      plVar18[2] = (long)&PTR_FUN_7104f57900;
      plVar18[6] = 0;
      plVar18[5] = (long)(plVar18 + 6);
      plVar18[9] = 0;
      plVar18[7] = 0;
      plVar18[8] = (long)(plVar18 + 9);
      plVar18[0xc] = 0;
      plVar18[10] = 0;
      plVar18[0xb] = (long)(plVar18 + 0xc);
      *(undefined2 *)(plVar18 + 0xf) = 1;
      *(undefined1 *)((long)plVar18 + 0x7a) = 0;
      plVar18[0xd] = 0;
      plVar18[0xe] = 0;
      puVar9 = FUN_71001af850(0x90);
      if (puVar9 != (undefined8 *)0x0) {
        FUN_71001beb40(puVar9);
      }
      plVar18[3] = (long)puVar9;
      FUN_71001f1f40((long)(plVar18 + 2),(long)plVar16);
      *plVar18 = param_1 + 0x38;
      puVar9 = *(undefined8 **)(param_1 + 0x40);
      plVar18[1] = (long)puVar9;
      *puVar9 = plVar18;
      *(long **)(param_1 + 0x40) = plVar18;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
      plVar17 = (long *)plVar17[1];
    } while (plVar1 != plVar17);
  }
  (**(code **)(*(long *)(lVar11 + 0x78) + 0x20))();
  return;
}

