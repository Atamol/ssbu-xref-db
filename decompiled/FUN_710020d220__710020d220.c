// addr:      710020d220
// offset:    0x20d220
// name:      FUN_710020d220
// mangled:   
// signature: undefined4 __cdecl FUN_710020d220(long * param_1, uint param_2, ulong param_3, long * param_4)


/* WARNING: Removing unreachable block (ram,0x00710020e13c) */
/* WARNING: Removing unreachable block (ram,0x00710020dad0) */
/* WARNING: Removing unreachable block (ram,0x00710020dae4) */
/* WARNING: Removing unreachable block (ram,0x00710020ded4) */
/* WARNING: Removing unreachable block (ram,0x00710020dfec) */
/* WARNING: Removing unreachable block (ram,0x00710020da14) */
/* WARNING: Removing unreachable block (ram,0x00710020d99c) */
/* WARNING: Removing unreachable block (ram,0x00710020d988) */
/* WARNING: Removing unreachable block (ram,0x00710020dd48) */
/* WARNING: Removing unreachable block (ram,0x00710020de7c) */
/* WARNING: Removing unreachable block (ram,0x00710020de68) */
/* WARNING: Removing unreachable block (ram,0x00710020da28) */
/* WARNING: Removing unreachable block (ram,0x00710020e128) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_710020d220(long *param_1,uint param_2,ulong param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  long *plVar9;
  size_t sVar10;
  byte bVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  uint *puVar17;
  long *plVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined1 auStack_130 [16];
  size_t local_120;
  undefined **local_118;
  long *local_110;
  size_t local_108;
  undefined8 **local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 **local_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 **local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  ushort local_b0;
  undefined1 local_ae;
  undefined1 local_88;
  undefined4 auStack_80 [8];
  
  if (param_4 == (long *)0x0) {
    return 1;
  }
  plVar24 = (long *)param_1[0x2d];
  uVar21 = param_3 & 0xffffffff;
  (**(code **)(*plVar24 + 0x48))(plVar24,(int)param_4[0x3d]);
  uVar19 = *(uint *)(param_4 + 0x3d);
  plVar15 = param_1 + 6;
  plVar25 = (long *)*plVar15;
  plVar23 = plVar15;
  plVar18 = plVar15;
  if (plVar25 != (long *)0x0) {
    uVar3 = *(uint *)((long)plVar25 + 0x1c);
    plVar23 = param_1 + 6;
    while( true ) {
      while (plVar18 = plVar25, uVar19 < uVar3) {
        plVar25 = (long *)*plVar18;
        plVar23 = plVar18;
        if (plVar25 == (long *)0x0) {
          lVar22 = *plVar18;
          goto joined_r0x00710020d2d4;
        }
        uVar3 = *(uint *)((long)plVar25 + 0x1c);
      }
      if (uVar19 <= uVar3) break;
      plVar23 = plVar18 + 1;
      plVar25 = (long *)*plVar23;
      if (plVar25 == (long *)0x0) break;
      uVar3 = *(uint *)((long)plVar25 + 0x1c);
    }
  }
  lVar22 = *plVar23;
joined_r0x00710020d2d4:
  if (lVar22 == 0) {
    plVar25 = FUN_71001b1820(0x28);
    *(uint *)((long)plVar25 + 0x1c) = uVar19;
    *(undefined2 *)(plVar25 + 4) = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[2] = (long)plVar18;
    *plVar23 = (long)plVar25;
    plVar18 = plVar25;
    if (*(long *)param_1[5] != 0) {
      param_1[5] = *(long *)param_1[5];
      plVar18 = (long *)*plVar23;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)param_1[6],plVar18);
    param_1[7] = param_1[7] + 1;
    uVar19 = (uint)*(ushort *)(plVar25 + 4);
    if (uVar19 == 0) goto LAB_710020d418;
LAB_710020d328:
    if (uVar19 != (param_2 & 0xffff)) {
LAB_710020d330:
      uVar19 = *(uint *)(param_4 + 0x3d);
      plVar25 = (long *)*plVar15;
      plVar18 = plVar15;
      plVar23 = plVar15;
      if (plVar25 != (long *)0x0) {
        uVar3 = *(uint *)((long)plVar25 + 0x1c);
        plVar18 = param_1 + 6;
        while( true ) {
          while (plVar9 = plVar25, plVar23 = plVar9, uVar19 < uVar3) {
            plVar25 = (long *)*plVar9;
            if (plVar25 == (long *)0x0) {
              lVar22 = *plVar9;
              goto joined_r0x00710020d3dc;
            }
            uVar3 = *(uint *)((long)plVar25 + 0x1c);
            plVar18 = plVar9;
          }
          if (uVar19 <= uVar3) break;
          plVar18 = plVar9 + 1;
          plVar25 = (long *)*plVar18;
          if (plVar25 == (long *)0x0) break;
          uVar3 = *(uint *)((long)plVar25 + 0x1c);
        }
      }
      lVar22 = *plVar18;
      plVar9 = plVar18;
joined_r0x00710020d3dc:
      if (lVar22 == 0) {
        plVar25 = FUN_71001b1820(0x28);
        *(uint *)((long)plVar25 + 0x1c) = uVar19;
        *(undefined2 *)(plVar25 + 4) = 0;
        *plVar25 = 0;
        plVar25[1] = 0;
        plVar25[2] = (long)plVar23;
        *plVar9 = (long)plVar25;
        plVar18 = plVar25;
        if (*(long *)param_1[5] != 0) {
          param_1[5] = *(long *)param_1[5];
          plVar18 = (long *)*plVar9;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)param_1[6],plVar18);
        param_1[7] = param_1[7] + 1;
        sVar8 = (short)plVar25[4];
      }
      else {
        sVar8 = *(short *)(lVar22 + 0x20);
      }
      if (sVar8 != 0) {
        return 0;
      }
      if (*(short *)(param_1[3] + 0x128) != 0) {
        return 0;
      }
    }
  }
  else {
    uVar19 = (uint)*(ushort *)(lVar22 + 0x20);
    if (*(ushort *)(lVar22 + 0x20) != 0) goto LAB_710020d328;
LAB_710020d418:
    if ((uint)*(ushort *)(param_1[3] + 0x128) != (param_2 & 0xffff)) goto LAB_710020d330;
  }
  uVar5 = *(ushort *)(param_4 + 0xc);
  plVar18 = param_4 + 0x28;
  if ((uVar5 & 0xf) == 5) {
    FUN_710020ce90((long)param_1,(long)plVar18,param_4[0x27]);
  }
  else {
    iVar14 = (int)param_3;
    uVar7 = (undefined1)param_3;
    if ((uVar5 & 0xf) == 1) {
      if ((uVar5 >> 4 & 1) != 0) {
        iVar14 = FUN_710020d010(param_1,(long)plVar18,param_2,iVar14,(long)param_4);
        if (iVar14 == 2) {
          return 0;
        }
        if (iVar14 == 3) {
          plVar15 = param_4 + 1;
          iVar14 = (int)*plVar15;
          iVar20 = (int)*plVar15 + -1;
          if (iVar14 == (int)*plVar15) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *(int *)plVar15 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_710020e14c;
          }
          else {
            ClearExclusiveLocal();
          }
          do {
            while( true ) {
              iVar2 = (int)*plVar15;
              iVar20 = iVar14 + -1;
              if (iVar2 == iVar14) break;
              ClearExclusiveLocal();
              iVar14 = iVar2;
            }
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *(int *)plVar15 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
            iVar14 = iVar2;
          } while (cVar6 != '\0');
          goto LAB_710020e14c;
        }
        (**(code **)(*param_1 + 0x88))(param_1);
        FUN_71001beb40(&local_118);
        FUN_71001bec20((long)&local_118,(long)plVar18);
        plVar18 = param_1 + 0x14;
        plVar23 = (long *)*plVar18;
        plVar15 = plVar18;
        local_88 = uVar7;
        if (plVar23 != (long *)0x0) {
          do {
            bVar12 = FUN_710021a4f0((long)(plVar23 + 4),(long)&local_118);
            lVar22 = 8;
            if (!bVar12) {
              lVar22 = 0;
              plVar15 = plVar23;
            }
            plVar23 = *(long **)((long)plVar23 + lVar22);
          } while (plVar23 != (long *)0x0);
          if ((plVar15 != plVar18) &&
             (bVar12 = FUN_710021a4f0((long)&local_118,(long)(plVar15 + 4)), !bVar12))
          goto LAB_710020d950;
        }
        goto LAB_710020d92c;
      }
      local_120 = 0;
      uVar16 = (**(code **)(*plVar24 + 0x30))(plVar24,param_4,param_1 + 0x1d,uVar21,auStack_130);
      if ((uVar16 & 1) == 0) {
        plVar15 = param_4 + 1;
        iVar14 = (int)*plVar15;
        iVar20 = (int)*plVar15 + -1;
        if (iVar14 == (int)*plVar15) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(int *)plVar15 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_710020e14c;
        }
        else {
          ClearExclusiveLocal();
        }
        do {
          while( true ) {
            iVar2 = (int)*plVar15;
            iVar20 = iVar14 + -1;
            if (iVar2 == iVar14) break;
            ClearExclusiveLocal();
            iVar14 = iVar2;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(int *)plVar15 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
          iVar14 = iVar2;
        } while (cVar6 != '\0');
        goto LAB_710020e14c;
      }
      plVar23 = &DAT_71052af128;
      if (DAT_71052af1d8 == '\0') {
LAB_710020d694:
        lVar22 = 0;
        if (*plVar23 != 0) {
          lVar22 = *(long *)(*plVar23 + 0x10);
        }
      }
      else {
        puVar17 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar19 = *puVar17;
        if (uVar19 == 0) goto LAB_710020d694;
        if ((ulong)uVar19 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar23 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar19 * 8) + 0x10);
          goto LAB_710020d694;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar22 = 0;
      }
      lVar1 = 0x1b0;
      if (1 < (int)param_4[0x3d] - 1U) {
        lVar1 = 0x1a8;
      }
      uVar13 = (**(code **)(**(long **)(lVar22 + lVar1) + 0x20))
                         (*(long **)(lVar22 + lVar1),param_4,(int)param_1[1],0);
      iVar14 = (**(code **)(*plVar24 + 0x28))
                         (plVar24,plVar18,param_2,uVar21,param_4,0,param_1 + 0x1d,auStack_130,uVar13
                         );
      if (iVar14 == 2) {
        uVar19 = *(uint *)(param_4 + 0x3d);
        if (uVar19 == 0) {
          return 0;
        }
        plVar25 = (long *)param_1[3];
        plVar23 = (long *)param_1[6];
        if (plVar23 != (long *)0x0) {
          plVar15 = param_1 + 6;
          uVar3 = *(uint *)((long)plVar23 + 0x1c);
          do {
            if (uVar19 < uVar3) {
              plVar24 = (long *)*plVar23;
              plVar15 = plVar23;
              if (plVar24 == (long *)0x0) {
                plVar24 = (long *)*plVar23;
                goto joined_r0x00710020df00;
              }
            }
            else {
              if (uVar19 <= uVar3) goto LAB_710020dd74;
              plVar15 = plVar23 + 1;
              plVar24 = (long *)*plVar15;
              if (plVar24 == (long *)0x0) goto LAB_710020dd74;
            }
            uVar3 = *(uint *)((long)plVar24 + 0x1c);
            plVar23 = plVar24;
          } while( true );
        }
        plVar24 = (long *)*plVar15;
        plVar23 = plVar15;
        goto joined_r0x00710020df00;
      }
      if (iVar14 == 3) {
        plVar15 = param_4 + 1;
        iVar14 = (int)*plVar15;
        iVar20 = (int)*plVar15 + -1;
        if (iVar14 == (int)*plVar15) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(int *)plVar15 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_710020e14c;
        }
        else {
          ClearExclusiveLocal();
        }
        do {
          while( true ) {
            iVar2 = (int)*plVar15;
            iVar20 = iVar14 + -1;
            if (iVar2 == iVar14) break;
            ClearExclusiveLocal();
            iVar14 = iVar2;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(int *)plVar15 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
          iVar14 = iVar2;
        } while (cVar6 != '\0');
        goto LAB_710020e14c;
      }
      plVar15 = FUN_710020cc70((long)param_1,(long)plVar18,param_4[0x27],param_2,uVar21,
                               *(uint *)(param_4 + 0x3d));
      if (plVar15 != (long *)0x0) {
        if (*(char *)((long)param_4 + 0xcc) != '\0') {
          *(undefined1 *)(plVar15 + 0x3f) = 1;
        }
        uVar21 = (**(code **)(*plVar15 + 0x58))(plVar15);
        if (((uVar21 & 1) != 0) &&
           (uVar21 = (**(code **)(*plVar15 + 0x60))(plVar15), (uVar21 & 1) != 0)) {
          local_b8 = 0;
          local_f8 = (undefined8 *)0x0;
          uStack_f0 = 0;
          local_118 = &PTR_FUN_7104f57900;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          local_100 = &local_f8;
          local_e8 = &local_e0;
          local_d0 = &local_c8;
          local_c8 = (undefined8 *)0x0;
          uStack_c0 = 0;
          local_b0 = 1;
          local_ae = 1;
          local_110 = FUN_71001af850(0x90);
          if (local_110 != (long *)0x0) {
            FUN_71001beb40(local_110);
          }
          if ((char)local_b0 == '\0') {
            FUN_71001f2180((long)&local_118);
            cVar6 = (char)local_b0;
            local_108 = CONCAT44(local_108._4_4_,1);
            local_b0 = local_b0 & 0xff;
            if (cVar6 == '\0') {
              FUN_71001f2180((long)&local_118);
            }
          }
          else {
            local_108 = CONCAT44(local_108._4_4_,1);
            local_b0 = local_b0 & 0xff;
          }
          FUN_71001bec20((long)local_110,(long)plVar18);
          local_b0 = local_b0 & 0xff;
          FUN_71001f2a80(auStack_80,(long)&local_118,"sid",param_3 & 0xff);
          FUN_7100206970(plVar15,(long)param_4);
          local_118 = &PTR_FUN_7104f57900;
          if (local_b8 != 0) {
            FUN_71001b1870(local_b8 + -4);
            local_b8 = 0;
            local_b0 = local_b0 & 0xff;
          }
          if (local_110 != (long *)0x0) {
            (**(code **)(*local_110 + 8))();
          }
          FUN_7101711670(&local_d0,local_c8);
          FUN_7101711670(&local_e8,local_e0);
          FUN_7100219ca0(&local_100,local_f8);
          goto LAB_710020e0cc;
        }
        sVar10 = local_120;
        if ((char)param_4[8] == '\0') {
          memcpy(plVar15 + 0x34,auStack_130,local_120);
          plVar15[0x36] = sVar10;
        }
        else {
          memcpy(plVar15 + 0x31,auStack_130,local_120);
          plVar15[0x33] = sVar10;
        }
      }
joined_r0x00710020dd6c:
      if (plVar15 == (long *)0x0) goto LAB_710020e0cc;
    }
    else {
      if ((uVar5 & 0xf) == 0) {
        if ((uVar5 >> 4 & 1) == 0) {
          local_108 = 0;
          uVar21 = (**(code **)(*plVar24 + 0x20))(plVar24,param_4,param_1 + 0x1d,uVar21,&local_118);
          if ((uVar21 & 1) != 0) {
            plVar15 = FUN_71001af850(0x238);
            if (plVar15 != (long *)0x0) {
              *plVar15 = (long)&PTR_FUN_710523be40;
              *(undefined4 *)(plVar15 + 1) = 1;
              *(undefined1 *)((long)plVar15 + 0xc) = 0;
              plVar15[2] = 0;
              plVar15[3] = 0;
              plVar15[4] = 0;
              plVar15[5] = 0;
              *(undefined1 *)(plVar15 + 8) = 0;
              plVar15[6] = 0;
              plVar15[7] = 0;
              *plVar15 = (long)&PTR_FUN_7104f58250;
              *(undefined4 *)((long)plVar15 + 0x42) = 0;
              plVar15[0xb] = 0;
              *(undefined2 *)(plVar15 + 0xc) = 0;
              *(undefined2 *)(plVar15 + 0xe) = 0;
              *(undefined2 *)(plVar15 + 0x10) = 0;
              plVar15[0xd] = (long)&PTR_FUN_7104f59348;
              plVar15[0xf] = (long)&PTR_FUN_7104f59348;
              plVar15[0x13] = 0;
              *(undefined1 *)(plVar15 + 0x14) = 0;
              *(undefined4 *)((long)plVar15 + 0xa1) = 0;
              *(undefined4 *)(plVar15 + 0x15) = 0;
              *(undefined2 *)((long)plVar15 + 0xac) = 0;
              *(undefined2 *)((long)plVar15 + 0xcc) = 0;
              *(undefined4 *)(plVar15 + 0x1a) = 0;
              plVar15[0x1b] = (long)&PTR_FUN_7104f59938;
              plVar15[0x1c] = 0;
              *(undefined1 *)(plVar15 + 0x26) = 0;
              plVar15[0x27] = 0;
              plVar15[0x1d] = (long)&PTR_FUN_7104f59978;
              plVar15[0x1e] = 0;
              FUN_71001beb40(plVar15 + 0x28);
              *(undefined4 *)(plVar15 + 0x3d) = 0xffffffff;
              plVar15[0x3a] = 0;
              plVar15[0x3b] = 0;
              *(ushort *)(plVar15 + 0xc) = *(ushort *)(plVar15 + 0xc) | 0x10;
              plVar15[0x3c] = 0;
              *(undefined4 *)(plVar15 + 0x40) = 0;
              plVar15[0x45] = 0;
              plVar15[0x41] = 0;
              plVar15[0x3e] = 0;
              plVar15[0x3f] = 0;
              *plVar15 = (long)&PTR_FUN_7104f582b0;
              *(undefined4 *)(plVar15 + 0x46) = 0;
              *(undefined2 *)(plVar15 + 0x42) = 0;
              plVar15[0x43] = 0;
              *(undefined4 *)(plVar15 + 0x44) = 0;
            }
            sVar10 = local_108;
            *(undefined1 *)((long)plVar15 + 0xcc) = *(undefined1 *)((long)param_4 + 0xcc);
            *(short *)(plVar15 + 0xe) = (short)param_4[0xe];
            memcpy(plVar15 + 0x11,&local_118,local_108);
            plVar15[0x13] = sVar10;
            FUN_71001bec20((long)(plVar15 + 0x28),(long)plVar18);
            *(int *)(plVar15 + 0x3d) = (int)param_4[0x3d];
            (**(code **)(*(long *)param_1[0x2d] + 0x48))((long *)param_1[0x2d],(int)param_4[0x3d]);
            bVar11 = (**(code **)(*(long *)param_1[0x2d] + 0x10))();
            bVar4 = *(byte *)(param_4 + 8);
            if ((bVar11 < bVar4) || (bVar4 < bVar11)) {
              *(byte *)(plVar15 + 8) = bVar4;
            }
            else {
              *(byte *)(plVar15 + 8) = bVar11;
            }
            uVar21 = (**(code **)(*(long *)param_1[0x2d] + 0x18))
                               ((long *)param_1[0x2d],param_4,plVar15);
            if ((uVar21 & 1) != 0) {
              FUN_7100205520(param_1,param_2,iVar14,(long)plVar15,0);
            }
            plVar18 = plVar15 + 1;
            iVar14 = (int)*plVar18;
            iVar20 = (int)*plVar18 + -1;
            if (iVar14 != (int)*plVar18) {
              ClearExclusiveLocal();
              goto LAB_710020daac;
            }
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar12) {
              *(int *)plVar18 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
            while (cVar6 != '\0') {
LAB_710020daac:
              while( true ) {
                iVar2 = (int)*plVar18;
                iVar20 = iVar14 + -1;
                if (iVar2 == iVar14) break;
                ClearExclusiveLocal();
                iVar14 = iVar2;
              }
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              iVar14 = iVar2;
              if (bVar12) {
                *(int *)plVar18 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            }
            if ((iVar20 == 0) && (*(char *)((long)plVar15 + 0xc) == '\0')) {
              *(undefined1 *)((long)plVar15 + 0xc) = 1;
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
          goto LAB_710020e0cc;
        }
        (**(code **)(*param_1 + 0x88))(param_1);
        FUN_71001beb40(&local_118);
        FUN_71001bec20((long)&local_118,(long)plVar18);
        plVar18 = param_1 + 0x14;
        plVar23 = (long *)*plVar18;
        plVar15 = plVar18;
        local_88 = uVar7;
        if (plVar23 == (long *)0x0) {
LAB_710020d92c:
          plVar15 = (long *)0x0;
        }
        else {
          do {
            bVar12 = FUN_710021a4f0((long)(plVar23 + 4),(long)&local_118);
            lVar22 = 8;
            if (!bVar12) {
              lVar22 = 0;
              plVar15 = plVar23;
            }
            plVar23 = *(long **)((long)plVar23 + lVar22);
          } while (plVar23 != (long *)0x0);
          if ((plVar15 == plVar18) ||
             (bVar12 = FUN_710021a4f0((long)&local_118,(long)(plVar15 + 4)), bVar12))
          goto LAB_710020d92c;
LAB_710020d950:
          plVar15 = (long *)plVar15[0x17];
        }
        FUN_71001bef00();
        (**(code **)(*param_1 + 0x90))(param_1);
        goto joined_r0x00710020dd6c;
      }
      (**(code **)(*param_1 + 0x88))(param_1);
      FUN_71001beb40(&local_118);
      FUN_71001bec20((long)&local_118,(long)plVar18);
      plVar23 = param_1 + 0x14;
      plVar25 = (long *)*plVar23;
      plVar15 = plVar23;
      local_88 = uVar7;
      if (plVar25 == (long *)0x0) {
LAB_710020d718:
        plVar15 = (long *)0x0;
      }
      else {
        do {
          bVar12 = FUN_710021a4f0((long)(plVar25 + 4),(long)&local_118);
          lVar22 = 8;
          if (!bVar12) {
            lVar22 = 0;
            plVar15 = plVar25;
          }
          plVar25 = *(long **)((long)plVar25 + lVar22);
        } while (plVar25 != (long *)0x0);
        if ((plVar15 == plVar23) ||
           (bVar12 = FUN_710021a4f0((long)&local_118,(long)(plVar15 + 4)), bVar12))
        goto LAB_710020d718;
        plVar15 = (long *)plVar15[0x17];
      }
      FUN_71001bef00();
      (**(code **)(*param_1 + 0x90))(param_1);
      if (plVar15 == (long *)0x0) goto LAB_710020e0cc;
      if ((DAT_71052af481 != '\0') && (uVar5 = *(ushort *)(param_4 + 0xc), (uVar5 & 0x2f) == 2)) {
        if ((uVar5 >> 4 & 1) == 0) {
          if ((uVar5 >> 0xd & 1) == 0) {
            if ((uVar5 & 0x600) == 0) {
              sVar8 = (short)plVar15[0x2c] - (short)param_4[0xe];
            }
            else {
              if (*(char *)((long)plVar15 + 0x1ea) == '\0') goto LAB_710020dde4;
              sVar8 = (short)plVar15[0x2f] - (short)param_4[0xe];
            }
            if (0 < sVar8) {
              plVar15[0x87] = plVar15[0x87] + 1;
              goto LAB_710020ddb8;
            }
          }
        }
        else if (((ushort)*(byte *)((long)param_4 + 0xa4) <= *(ushort *)(plVar15 + 0x30)) &&
                (0 < (short)(*(short *)(*(long *)(plVar15[0x1c] +
                                                 (ulong)*(byte *)((long)param_4 + 0xa4) * 8) + 0x50)
                            - (short)param_4[0xe]))) {
LAB_710020ddb8:
          plVar15 = param_4 + 1;
          iVar14 = (int)*plVar15;
          iVar20 = (int)*plVar15 + -1;
          if (iVar14 == (int)*plVar15) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *(int *)plVar15 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_710020e14c;
          }
          else {
            ClearExclusiveLocal();
          }
          do {
            while( true ) {
              iVar2 = (int)*plVar15;
              iVar20 = iVar14 + -1;
              if (iVar2 == iVar14) break;
              ClearExclusiveLocal();
              iVar14 = iVar2;
            }
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *(int *)plVar15 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
            iVar14 = iVar2;
          } while (cVar6 != '\0');
          goto LAB_710020e14c;
        }
      }
LAB_710020dde4:
      iVar14 = FUN_710020d010(param_1,(long)plVar18,param_2,iVar14,(long)param_4);
      if (iVar14 == 2) {
        return 0;
      }
      if (iVar14 == 3) {
        plVar15 = param_4 + 1;
        iVar14 = (int)*plVar15;
        iVar20 = (int)*plVar15 + -1;
        if (iVar14 == (int)*plVar15) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(int *)plVar15 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_710020e14c;
        }
        else {
          ClearExclusiveLocal();
        }
        do {
          while( true ) {
            iVar2 = (int)*plVar15;
            iVar20 = iVar14 + -1;
            if (iVar2 == iVar14) break;
            ClearExclusiveLocal();
            iVar14 = iVar2;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(int *)plVar15 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
          iVar14 = iVar2;
        } while (cVar6 != '\0');
        goto LAB_710020e14c;
      }
    }
    uVar21 = (**(code **)(*plVar15 + 0x50))(plVar15);
    if ((uVar21 & 1) == 0) {
      FUN_71002071d0(plVar15,(long)param_4);
    }
  }
LAB_710020e0cc:
  plVar15 = param_4 + 1;
  iVar14 = (int)*plVar15;
  iVar20 = (int)*plVar15 + -1;
  if (iVar14 == (int)*plVar15) {
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar12) {
      *(int *)plVar15 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_710020e14c;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      iVar2 = (int)*plVar15;
      iVar20 = iVar14 + -1;
      if (iVar2 == iVar14) break;
      ClearExclusiveLocal();
      iVar14 = iVar2;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar12) {
      *(int *)plVar15 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
    iVar14 = iVar2;
  } while (cVar6 != '\0');
LAB_710020e14c:
  if (iVar20 != 0) {
    return 1;
  }
  if (*(char *)((long)param_4 + 0xc) == '\0') {
    *(undefined1 *)((long)param_4 + 0xc) = 1;
    (**(code **)(*param_4 + 8))(param_4);
    return 1;
  }
  return 1;
LAB_710020dd74:
  plVar24 = (long *)*plVar15;
joined_r0x00710020df00:
  if (plVar24 == (long *)0x0) {
    plVar24 = FUN_71001b1820(0x28);
    *(uint *)((long)plVar24 + 0x1c) = uVar19;
    *(undefined2 *)(plVar24 + 4) = 0;
    *plVar24 = 0;
    plVar24[1] = 0;
    plVar24[2] = (long)plVar23;
    *plVar15 = (long)plVar24;
    plVar23 = plVar24;
    if (*(long *)param_1[5] != 0) {
      param_1[5] = *(long *)param_1[5];
      plVar23 = (long *)*plVar15;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)param_1[6],plVar23);
    param_1[7] = param_1[7] + 1;
  }
  sVar8 = (short)plVar24[4];
  if (sVar8 == 0) {
    sVar8 = *(short *)(param_1[3] + 0x128);
  }
  (**(code **)(*plVar25 + 0x38))(plVar25,uVar19,sVar8,plVar18);
  plVar15 = param_4 + 1;
  iVar14 = (int)*plVar15;
  iVar20 = (int)*plVar15 + -1;
  if (iVar14 == (int)*plVar15) {
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar12) {
      *(int *)plVar15 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_710020e14c;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      iVar2 = (int)*plVar15;
      iVar20 = iVar14 + -1;
      if (iVar2 == iVar14) break;
      ClearExclusiveLocal();
      iVar14 = iVar2;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar12) {
      *(int *)plVar15 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
    iVar14 = iVar2;
  } while (cVar6 != '\0');
  goto LAB_710020e14c;
}

