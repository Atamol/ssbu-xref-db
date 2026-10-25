// addr:      7100204590
// offset:    0x204590
// name:      FUN_7100204590
// mangled:   
// signature: undefined __cdecl FUN_7100204590(uint * param_1, long * param_2, long param_3, uint param_4, ulong param_5, undefined1 param_6, uint param_7)


/* WARNING: Type propagation algorithm not settling */

void FUN_7100204590(uint *param_1,long *param_2,long param_3,uint param_4,ulong param_5,
                   undefined1 param_6,uint param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  byte local_7c [4];
  uint local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar7 = (**(code **)(*param_2 + 0x58))();
  if (((uVar7 & 1) == 0) && (uVar7 = (**(code **)(*param_2 + 0x60))(param_2), (uVar7 & 1) == 0)) {
    local_78 = 0x80050002;
    goto LAB_7100204be0;
  }
  if ((*(byte *)(param_3 + 0x30) >> 2 & 1) == 0) {
LAB_710020475c:
    plVar9 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar12 = *puVar8;
      if (uVar12 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar12) {
LAB_7100204c10:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x10);
      }
    }
    uVar1 = *(uint *)(*(long *)(*(long *)(*plVar9 + 0x10) + 0xe8) + 0x98);
    uVar7 = FUN_7100204c30((long)param_2);
    uVar12 = 0x60;
    if ((param_4 & 1) == 0) {
      uVar12 = 0;
    }
    uVar12 = uVar12 | (param_4 >> 1 & 1) << 8 | (param_4 >> 4 & 1) << 9 | (param_4 >> 5 & 1) << 10 |
             (param_4 >> 2 & 1) << 0xb;
    if (((param_4 & 1) != 0) && (uVar7 < *(ulong *)(param_3 + 0x18))) {
      param_2[0x8a] = param_2[0x8a] + 1;
      FUN_7100203e30(param_1,param_2,param_3,(ulong)uVar1,uVar7,2,uVar12,(byte)(param_4 >> 3) & 1,
                     param_7,param_6);
      return;
    }
    if (uVar7 < *(ulong *)(param_3 + 0x18)) {
      param_2[0x74] = param_2[0x74] + 1;
      local_78 = 0x8001000a;
      goto LAB_7100204be0;
    }
    if ((*(byte *)(param_3 + 0x30) >> 2 & 1) == 0) {
      plVar9 = FUN_71001af850(0x238);
      if (plVar9 != (long *)0x0) {
        FUN_7100216320(plVar9,param_2,2,uVar12,param_3,param_7);
      }
joined_r0x0071002048d8:
      if (((param_5 & 1) == 0) || (uVar7 = FUN_7100204de0((long)plVar9,param_3), (uVar7 & 1) != 0))
      {
        *(byte *)(plVar9 + 0x42) = (byte)(param_4 >> 3) & 1;
        *(undefined1 *)(plVar9 + 0x14) = 0;
        *(undefined1 *)(plVar9 + 8) = *(undefined1 *)((long)param_2 + 0x1eb);
        *(undefined1 *)((long)plVar9 + 0xa4) = param_6;
        FUN_71002039c0((undefined8 *)&local_78,param_2,(long)plVar9);
        local_7c[0] = 0;
        bVar6 = FUN_71001b4280(&local_78,local_7c);
        if (bVar6) {
          plVar13 = plVar9 + 1;
          iVar4 = (int)*plVar13;
          iVar3 = (int)*plVar13 + -1;
          if (iVar4 == (int)*plVar13) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *(int *)plVar13 = iVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            while (iVar11 = iVar4, cVar2 != '\0') {
LAB_71002049f8:
              while( true ) {
                iVar4 = (int)*plVar13;
                iVar3 = iVar11 + -1;
                if (iVar4 == iVar11) break;
                ClearExclusiveLocal();
                iVar11 = iVar4;
              }
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *(int *)plVar13 = iVar3;
                cVar2 = ExclusiveMonitorsStatus();
              }
            }
            if ((iVar3 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
              *(undefined1 *)((long)plVar9 + 0xc) = 1;
              (**(code **)(*plVar9 + 8))(plVar9);
            }
            *(undefined8 *)(param_1 + 4) = local_68;
            *(ulong *)param_1 = CONCAT44(uStack_74,local_78);
            *(undefined8 *)(param_1 + 2) = uStack_70;
            return;
          }
          ClearExclusiveLocal();
          iVar11 = iVar4;
          goto LAB_71002049f8;
        }
        if ((param_7 != 0) && ((*(ushort *)(plVar9 + 0xc) >> 5 & 1) != 0)) {
          plVar14 = (long *)param_2[0x97];
          plVar13 = param_2 + 0x97;
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)*plVar13;
            plVar10 = plVar13;
          }
          else {
            do {
              bVar6 = param_7 <= *(uint *)((long)plVar14 + 0x1c);
              if (!bVar6 || *(uint *)((long)plVar14 + 0x1c) == param_7) {
                do {
                  plVar10 = plVar14;
                  if (bVar6) goto LAB_7100204ac8;
                  plVar13 = plVar14 + 1;
                  plVar14 = (long *)*plVar13;
                  if (plVar14 == (long *)0x0) goto LAB_7100204ac8;
                  bVar6 = param_7 <= *(uint *)((long)plVar14 + 0x1c);
                } while (*(uint *)((long)plVar14 + 0x1c) <= param_7);
              }
              plVar13 = plVar14;
              plVar14 = (long *)*plVar13;
              plVar10 = plVar13;
            } while (plVar14 != (long *)0x0);
LAB_7100204ac8:
            plVar14 = (long *)*plVar13;
          }
          if (plVar14 == (long *)0x0) {
            plVar14 = FUN_71001b1820(0x28);
            *(uint *)((long)plVar14 + 0x1c) = param_7;
            *(undefined4 *)(plVar14 + 4) = 0;
            *plVar14 = 0;
            plVar14[1] = 0;
            plVar14[2] = (long)plVar10;
            *plVar13 = (long)plVar14;
            plVar10 = plVar14;
            if (*(long *)param_2[0x96] != 0) {
              param_2[0x96] = *(long *)param_2[0x96];
              plVar10 = (long *)*plVar13;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                      ((long *)param_2[0x97],plVar10);
            param_2[0x98] = param_2[0x98] + 1;
          }
          *(undefined4 *)(plVar14 + 4) = 1;
        }
        plVar13 = plVar9 + 1;
        iVar4 = (int)*plVar13;
        iVar3 = (int)*plVar13 + -1;
        if (iVar4 != (int)*plVar13) {
          ClearExclusiveLocal();
          iVar11 = iVar4;
          goto LAB_7100204b80;
        }
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
        while (iVar11 = iVar4, cVar2 != '\0') {
LAB_7100204b80:
          while( true ) {
            iVar4 = (int)*plVar13;
            iVar3 = iVar11 + -1;
            if (iVar4 == iVar11) break;
            ClearExclusiveLocal();
            iVar11 = iVar4;
          }
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *(int *)plVar13 = iVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
        }
        if ((iVar3 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar9 + 0xc) = 1;
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        local_78 = 0x10001;
        goto LAB_7100204be0;
      }
      plVar13 = plVar9 + 1;
      iVar4 = (int)*plVar13;
      iVar3 = (int)*plVar13 + -1;
      if (iVar4 != (int)*plVar13) {
        ClearExclusiveLocal();
        iVar11 = iVar4;
        goto LAB_7100204a74;
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
      while (iVar11 = iVar4, cVar2 != '\0') {
LAB_7100204a74:
        while( true ) {
          iVar4 = (int)*plVar13;
          iVar3 = iVar11 + -1;
          if (iVar4 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar4;
        }
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar3 != 0) || (*(char *)((long)plVar9 + 0xc) != '\0')) goto LAB_7100204ab8;
      *(undefined1 *)((long)plVar9 + 0xc) = 1;
    }
    else {
      plVar9 = FUN_71001b4580(0x238,0);
      if (plVar9 == (long *)0x0) goto LAB_7100204ab8;
      FUN_71001e2270(plVar9,param_2,2,uVar12,param_3,param_7);
      if (((*(byte *)(plVar9 + 0xc) >> 6 & 1) == 0) || (plVar9[0x3e] != 0))
      goto joined_r0x0071002048d8;
    }
    (**(code **)(*plVar9 + 8))(plVar9);
    local_78 = 0x8005001f;
  }
  else {
    plVar9 = &DAT_71052af190;
    if (DAT_71052af1d8 != '\0') {
      puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar12 = *puVar8;
      if (uVar12 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar12) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          goto LAB_710020475c;
        }
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x78);
      }
    }
    if (*plVar9 == 0) goto LAB_710020475c;
    lVar5 = DAT_71052af190;
    if (DAT_71052af1d8 != '\0') {
      puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar12 = *puVar8;
      lVar5 = DAT_71052af190;
      if (uVar12 != 0) {
        if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          lVar5 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x78);
        }
        else {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          lVar5 = 0;
        }
      }
    }
    plVar9 = &DAT_71052af190;
    if (DAT_71052af1d8 != '\0') {
      plVar9 = &DAT_71052af190;
      puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar12 = *puVar8;
      if (uVar12 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar12) goto LAB_7100204c10;
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x78);
      }
    }
    uVar7 = FUN_71001b2170(lVar5,0x554,*(ulong *)(*plVar9 + 0x50));
    if ((uVar7 & 1) != 0) goto LAB_710020475c;
LAB_7100204ab8:
    local_78 = 0x8005001f;
  }
LAB_7100204be0:
  FUN_71001b4200(param_1,&local_78);
  return;
}

