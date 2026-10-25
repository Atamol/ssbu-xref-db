// addr:      71001d3db0
// offset:    0x1d3db0
// name:      FUN_71001d3db0
// mangled:   
// signature: undefined FUN_71001d3db0(void)


void FUN_71001d3db0(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 uStack_4c;
  ulong auStack_48 [3];
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  plVar11 = (long *)(*(long *)(*(long *)(*plVar8 + 0x10) + 0x18) + 0x50);
  plVar12 = (long *)*plVar11;
  plVar8 = plVar11;
  if (plVar12 != (long *)0x0) {
    do {
      if (*(uint *)(plVar12 + 4) >= uVar1) {
        plVar8 = plVar12;
      }
      plVar12 = (long *)plVar12[*(uint *)(plVar12 + 4) < uVar1];
    } while (plVar12 != (long *)0x0);
    if (((plVar8 != plVar11) && (*(uint *)(plVar8 + 4) <= uVar1)) && (plVar8[5] != 0)) {
      lVar13 = param_1[0x16];
      if (*(int *)(lVar13 + 0x14) != 1) {
        FUN_71001b12a0(auStack_48);
        param_1[0x10] = (long)FUN_71001d41f0;
        param_1[0x11] = 0;
        param_1[0xd] = auStack_48[0];
        param_1[0x12] = (long)&DAT_71044114cc;
        return;
      }
      *(undefined4 *)(param_1 + 8) = 2;
      puVar6 = FUN_71001af850(0x20);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[2] = 0;
        puVar6[3] = &DAT_71044114cc;
        *puVar6 = &PTR_FUN_7104f56e28;
        puVar6[1] = FUN_71001d41f0;
      }
      plVar8 = param_1 + 1;
      iVar4 = (int)*plVar8;
      if (iVar4 == (int)*plVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        while (iVar10 = iVar4, cVar2 != '\0') {
LAB_71001d3f54:
          while (iVar4 = (int)*plVar8, iVar4 != iVar10) {
            ClearExclusiveLocal();
            iVar10 = iVar4;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        }
        puVar7 = FUN_71001af850(0x28);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &DAT_7104f57018;
          puVar7[1] = param_1;
          puVar7[2] = FUN_71001db1d0;
          puVar7[3] = 0;
          puVar7[4] = puVar6;
        }
        plVar8 = FUN_71001b1820(0x20);
        plVar8[2] = (long)FUN_71001d06e0;
        plVar8[3] = (long)puVar7;
        *plVar8 = 0;
        plVar8[1] = lVar13 + 0x20;
        lVar9 = *(long *)(lVar13 + 0x20);
        *plVar8 = lVar9;
        *(long **)(lVar9 + 8) = plVar8;
        *(long **)(lVar13 + 0x20) = plVar8;
        *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + 1;
        return;
      }
      ClearExclusiveLocal();
      iVar10 = iVar4;
      goto LAB_71001d3f54;
    }
  }
  uStack_4c = 0x80010004;
  FUN_71001b4200((undefined4 *)auStack_48,&uStack_4c);
  FUN_71001d4010(param_1,(int *)auStack_48);
  return;
}

