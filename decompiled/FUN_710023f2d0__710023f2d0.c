// addr:      710023f2d0
// offset:    0x23f2d0
// name:      FUN_710023f2d0
// mangled:   
// signature: undefined FUN_710023f2d0(void)


/* WARNING: Removing unreachable block (ram,0x00710023f810) */
/* WARNING: Removing unreachable block (ram,0x00710023f790) */
/* WARNING: Removing unreachable block (ram,0x00710023f8ac) */
/* WARNING: Removing unreachable block (ram,0x00710023f898) */
/* WARNING: Removing unreachable block (ram,0x00710023f77c) */
/* WARNING: Removing unreachable block (ram,0x00710023f824) */

void FUN_710023f2d0(long param_1)

{
  long lVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  long *plVar21;
  long lVar22;
  undefined **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined **appuStack_b8 [3];
  char *pcStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x4c0) + 0x10) + 0x38) != 0x3913919df86eeb1) {
    if (*(int *)(param_1 + 0x1dc) != 2) {
      uStack_78 = *(undefined8 *)(param_1 + 0x220);
      uStack_70 = *(undefined8 *)(param_1 + 0x228);
      puVar14 = &uStack_78;
      uStack_68 = *(undefined8 *)(param_1 + 0x230);
LAB_710023f420:
      FUN_710023d9c0(param_1,(undefined4 *)puVar14);
      return;
    }
    pcVar16 = FUN_710170d030;
    if (*(int *)(param_1 + 0x288) < 0) {
      pcVar16 = (code *)0x0;
    }
    if (pcVar16 == (code *)0x0) {
      uStack_90 = *(undefined8 *)(param_1 + 0x288);
      uStack_88 = *(undefined8 *)(param_1 + 0x290);
      uStack_80 = *(undefined8 *)(param_1 + 0x298);
      puVar14 = &uStack_90;
      goto LAB_710023f420;
    }
  }
  lVar15 = param_1 + 0x2f8;
  FUN_71001e8160(lVar15,(ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x18));
  FUN_71001f1c60(lVar15,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x10));
  FUN_71001f3090(lVar15);
  lVar17 = *(long *)(param_1 + 0x2f0);
  if (*(char *)(lVar17 + 0x128) != '\0') {
    sVar3 = *(short *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x78) + 0x4c);
    plVar21 = &DAT_71052af128;
    if (DAT_71052af1d8 == '\0') {
LAB_710023f3dc:
      if (*plVar21 == 0) goto LAB_710023f444;
      lVar17 = *(long *)(*plVar21 + 0x10);
    }
    else {
      puVar11 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar9 = *puVar11;
      if (uVar9 == 0) goto LAB_710023f3dc;
      if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar21 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x10);
        goto LAB_710023f3dc;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023f444:
      lVar17 = 0;
    }
    lVar17 = FUN_71001ef600(lVar17);
    plVar21 = (long *)(lVar17 + 8);
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar22 = *(long *)(lVar17 + 0x58);
    if (lVar17 + 0x50 != lVar22) {
      do {
        lVar1 = lVar22 + 0x10;
        iVar8 = FUN_71001e32f0(lVar1);
        if ((iVar8 == 0) && (uVar9 = FUN_71001f2e90(lVar1), (uVar9 >> 1 & 1) == 0)) {
          iVar8 = FUN_71001f3070(lVar1);
          iVar10 = FUN_71001f3070(lVar15);
          if ((iVar8 == iVar10) && (sVar6 = FUN_71001e5d60(lVar1), sVar6 == sVar3)) {
            uVar12 = FUN_71001e32f0(lVar15);
            FUN_71001e8160(lVar1,uVar12 & 0xffffffff);
            uVar13 = FUN_71001f16c0(lVar15);
            FUN_71001f1c60(lVar1,uVar13);
            FUN_71001f1bc0(&ppuStack_f0,lVar1);
            FUN_71001f1bc0(appuStack_b8,lVar15);
            bVar5 = FUN_71001b4e00(pcStack_d8,pcStack_a0);
            appuStack_b8[0] = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)appuStack_b8);
            ppuStack_f0 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&ppuStack_f0);
            if (bVar5) {
              uVar12 = FUN_71001f2e90(lVar15);
              FUN_71001f2e60(lVar1,uVar12 & 0xffffffff);
              uVar7 = FUN_71001e5d60(lVar1);
              FUN_71001e59e0(lVar15,uVar7);
            }
          }
        }
        lVar22 = *(long *)(lVar22 + 8);
      } while (lVar17 + 0x50 != lVar22);
    }
    plVar18 = &DAT_71052af128;
    if (DAT_71052af1d8 == '\0') {
LAB_710023f5b4:
      if (*plVar18 == 0) goto LAB_710023f5dc;
      lVar17 = *(long *)(*plVar18 + 0x10);
    }
    else {
      puVar11 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar9 = *puVar11;
      if (uVar9 == 0) goto LAB_710023f5b4;
      if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar18 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x10);
        goto LAB_710023f5b4;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023f5dc:
      lVar17 = 0;
    }
    FUN_71001ef610(lVar17,lVar15);
    (**(code **)(*plVar21 + 0x20))(plVar21);
    lVar17 = *(long *)(param_1 + 0x2f0);
  }
  FUN_71001ece20(lVar17 + 0x130,lVar15);
  (**(code **)(**(long **)(param_1 + 0x2f0) + 0x18))();
  uVar12 = FUN_71001f16c0(param_1 + 0x378);
  plVar18 = (long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x4c0) + 0x10) + 0x30) + 0x10);
  plVar19 = (long *)*plVar18;
  plVar21 = plVar18;
  if (plVar19 != (long *)0x0) {
    do {
      if ((ulong)plVar19[4] >= uVar12) {
        plVar21 = plVar19;
      }
      plVar19 = (long *)plVar19[(ulong)plVar19[4] < uVar12];
    } while (plVar19 != (long *)0x0);
    if (((plVar21 != plVar18) && ((ulong)plVar21[4] <= uVar12)) &&
       (plVar21 = (long *)plVar21[6], plVar21 != (long *)0x0)) {
      plVar18 = plVar21 + 1;
      if ((int)*plVar18 != 0) {
        iVar8 = (int)*plVar18;
        if (iVar8 == (int)*plVar18) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_710023f8bc;
        }
        else {
          ClearExclusiveLocal();
        }
        do {
          while (iVar10 = (int)*plVar18, iVar10 != iVar8) {
            ClearExclusiveLocal();
            iVar8 = iVar10;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          iVar8 = iVar10;
        } while (cVar4 != '\0');
      }
LAB_710023f8bc:
      lVar17 = *(long *)(param_1 + 0x2f0);
      lVar15 = plVar21[2];
      bVar5 = false;
      goto LAB_710023f6b4;
    }
  }
  lVar17 = *(long *)(param_1 + 0x2f0);
  plVar21 = (long *)0x0;
  lVar15 = 0;
  bVar5 = true;
LAB_710023f6b4:
  FUN_710022c610((undefined1 *)&ppuStack_f0,lVar15,*(undefined4 *)(*(long *)(lVar17 + 0xc0) + 0x18))
  ;
  *(code **)(lVar17 + 0x1b0) = pcStack_e8;
  *(undefined8 *)(lVar17 + 0x1b8) = uStack_e0;
  *(undefined ***)(lVar17 + 0x1a8) = ppuStack_f0;
  *(undefined1 *)(lVar17 + 0x1d8) = uStack_c0;
  *(undefined8 *)(lVar17 + 0x1c8) = uStack_d0;
  *(undefined8 *)(lVar17 + 0x1d0) = uStack_c8;
  *(char **)(lVar17 + 0x1c0) = pcStack_d8;
  ppuStack_f0 = &PTR_FUN_7104f56e28;
  pcStack_e8 = FUN_710023fef0;
  uStack_e0 = 0;
  pcStack_d8 = "";
  FUN_71001d3d60(param_1,(long)&ppuStack_f0);
  if (!bVar5) {
    plVar18 = plVar21 + 1;
    iVar8 = (int)*plVar18;
    iVar10 = (int)*plVar18 + -1;
    if (iVar8 != (int)*plVar18) {
      ClearExclusiveLocal();
      goto LAB_710023f758;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *(int *)plVar18 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_710023f758:
      while( true ) {
        iVar2 = (int)*plVar18;
        iVar10 = iVar8 + -1;
        if (iVar2 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      iVar8 = iVar2;
      if (bVar5) {
        *(int *)plVar18 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if (iVar10 == 0) {
      piVar20 = (int *)((long)plVar21 + 0xc);
      (**(code **)(*plVar21 + 0x10))(plVar21);
      iVar8 = *piVar20;
      iVar10 = *piVar20 + -1;
      if (iVar8 != *piVar20) {
        ClearExclusiveLocal();
        goto LAB_710023f7ec;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar5) {
        *piVar20 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      while (cVar4 != '\0') {
LAB_710023f7ec:
        while( true ) {
          iVar2 = *piVar20;
          iVar10 = iVar8 + -1;
          if (iVar2 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar2;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        iVar8 = iVar2;
        if (bVar5) {
          *piVar20 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar10 == 0) {
        (**(code **)(*plVar21 + 8))(plVar21);
      }
    }
  }
  return;
}

