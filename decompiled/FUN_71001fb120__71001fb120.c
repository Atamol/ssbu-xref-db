// addr:      71001fb120
// offset:    0x1fb120
// name:      FUN_71001fb120
// mangled:   
// signature: undefined FUN_71001fb120(void)


undefined4 FUN_71001fb120(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  long *plVar17;
  undefined1 *puStack_90;
  long *plStack_88;
  long lStack_80;
  uint uStack_78;
  ushort uStack_74;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fb1a0:
    if ((*plVar8 == 0) || (lVar10 = *(long *)(*plVar8 + 0x10), lVar10 == 0)) goto LAB_71001fb1d0;
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71001fb1a0;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001fb1a0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001fb1d0:
    lVar10 = 0;
  }
  plVar17 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar17 + 0x10))(plVar17);
  uStack_78 = param_2;
  uStack_74 = (ushort)param_3;
  plVar8 = (long *)FUN_71001fa660(param_1,&uStack_78);
  if (plVar8 == (long *)0x0) {
    uVar16 = 0;
    goto LAB_71001fb624;
  }
  iVar4 = (int)plVar8[0x1b] + -1;
  if (iVar4 == 0) {
    plVar9 = *(long **)(param_1 + 0x2b0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9,param_2,param_3);
    }
    puVar12 = *(uint **)(param_1 + 0x2c8);
    puVar11 = *(uint **)(param_1 + 0x2d0);
    puVar7 = puVar12;
    if ((long)puVar11 - (long)puVar12 == 0) {
      if (puVar12 != puVar11) goto LAB_71001fb294;
LAB_71001fb3d0:
      if (puVar11 != puVar7) {
        puVar2 = puVar7 + 4;
        if (puVar2 != puVar11) {
          uVar15 = (long)puVar11 +
                   ((-2 - ((long)puVar7 - (long)puVar12 >> 4)) * 0x10 - (long)puVar12);
          uVar3 = ((uint)(uVar15 >> 4) & 0xfffffff) + 1;
          puVar12 = puVar2;
          puVar13 = puVar7;
          if ((uVar3 & 3) != 0) {
            lVar10 = -((ulong)uVar3 & 3);
            do {
              puVar12 = puVar13;
              *(short *)(puVar12 + 1) = (short)puVar12[5];
              lVar10 = lVar10 + 1;
              puVar13 = puVar12 + 4;
              *puVar12 = *puVar13;
              *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 6);
            } while (lVar10 != 0);
            puVar12 = puVar12 + 8;
          }
          if (0x2f < uVar15) {
            do {
              uVar3 = *puVar12;
              *(short *)(puVar13 + 1) = (short)puVar12[1];
              *puVar13 = uVar3;
              *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar12 + 2);
              uVar3 = puVar12[4];
              *(short *)(puVar13 + 5) = (short)puVar12[5];
              puVar13[4] = uVar3;
              *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(puVar12 + 6);
              uVar3 = puVar12[8];
              *(short *)(puVar13 + 9) = (short)puVar12[9];
              puVar13[8] = uVar3;
              *(undefined8 *)(puVar13 + 10) = *(undefined8 *)(puVar12 + 10);
              uVar3 = puVar12[0xc];
              *(short *)(puVar13 + 0xd) = (short)puVar12[0xd];
              puVar13[0xc] = uVar3;
              puVar1 = puVar12 + 0xe;
              puVar12 = puVar12 + 0x10;
              *(undefined8 *)(puVar13 + 0xe) = *(undefined8 *)puVar1;
              puVar13 = puVar13 + 0x10;
            } while (puVar12 != puVar11);
          }
          puVar7 = (uint *)((long)puVar7 +
                           ((long)puVar11 + (-0x10 - (long)puVar2) & 0xfffffffffffffff0U) + 0x10);
        }
        *(uint **)(param_1 + 0x2d0) = puVar7;
      }
    }
    else {
      uVar15 = (long)puVar11 - (long)puVar12 >> 4;
      do {
        while( true ) {
          uVar14 = uVar15;
          if ((long)uVar15 < 0) {
            uVar14 = uVar15 + 1;
          }
          uVar14 = (long)uVar14 >> 1;
          puVar2 = puVar7 + uVar14 * 4;
          if ((uint)(ushort)puVar2[1] == (param_3 & 0xffff)) break;
          if ((uint)(ushort)puVar2[1] < (param_3 & 0xffff)) goto LAB_71001fb278;
LAB_71001fb268:
          uVar15 = uVar14;
          if (uVar14 == 0) goto LAB_71001fb28c;
        }
        if (param_2 <= *puVar2) goto LAB_71001fb268;
LAB_71001fb278:
        puVar7 = puVar2 + 4;
        uVar15 = uVar15 + ~uVar14;
      } while (uVar15 != 0);
LAB_71001fb28c:
      if (puVar7 == puVar11) goto LAB_71001fb3d0;
LAB_71001fb294:
      bVar5 = (param_3 & 0xffff) <= (uint)(ushort)puVar7[1];
      bVar6 = false;
      if ((uint)(ushort)puVar7[1] == (param_3 & 0xffff)) {
        bVar5 = param_2 <= *puVar7;
        bVar6 = *puVar7 == param_2;
      }
      if (!bVar5 || bVar6) goto LAB_71001fb3d0;
    }
    FUN_71001c0150((long)plVar8);
    (**(code **)(*plVar8 + 8))(plVar8);
    plVar8 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar3 = *puVar7;
      if (uVar3 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          goto LAB_71001fb620;
        }
        plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
      }
    }
    if (((*plVar8 != 0) && (*(long *)(*plVar8 + 0x10) != 0)) && (DAT_71052af448 != (long *)0x0)) {
      lStack_80 = 0;
      puStack_90 = (undefined1 *)&puStack_90;
      plStack_88 = (long *)&puStack_90;
      (**(code **)(*DAT_71052af448 + 0x10))(DAT_71052af448,&puStack_90);
      if (lStack_80 != 0) {
        do {
          plVar8 = plStack_88;
          if ((char)plStack_88[0xf] == '\0') {
            FUN_71001f2180((long)(plStack_88 + 2));
          }
          FUN_71001bee30(plVar8[3],(ushort)param_3);
          *(undefined1 *)((long)plVar8 + 0x79) = 0;
          FUN_71001f2a80(&uStack_78,(long)(plStack_88 + 2),"Tpt",(ulong)param_2);
          plVar8 = &DAT_71052af128;
          if (DAT_71052af1d8 == '\0') {
LAB_71001fb50c:
            if (*plVar8 == 0) goto LAB_71001fb530;
            lVar10 = *(long *)(*plVar8 + 0x10);
          }
          else {
            puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar3 = *puVar7;
            if (uVar3 == 0) goto LAB_71001fb50c;
            if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
              plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
              goto LAB_71001fb50c;
            }
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
LAB_71001fb530:
            lVar10 = 0;
          }
          plVar9 = (long *)(lVar10 + 0x88);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          plVar8 = &DAT_71052af128;
          if (DAT_71052af1d8 == '\0') {
LAB_71001fb580:
            if (*plVar8 == 0) goto LAB_71001fb5a4;
            lVar10 = *(long *)(*plVar8 + 0x10);
          }
          else {
            puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar3 = *puVar7;
            if (uVar3 == 0) goto LAB_71001fb580;
            if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
              plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
              goto LAB_71001fb580;
            }
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
LAB_71001fb5a4:
            lVar10 = 0;
          }
          FUN_71001ef7e0(lVar10,(long)(plStack_88 + 2));
          plVar8 = plStack_88;
          lVar10 = *plStack_88;
          *(long *)(lVar10 + 8) = plStack_88[1];
          *(long *)plStack_88[1] = lVar10;
          lStack_80 = lStack_80 + -1;
          (**(code **)plStack_88[2])();
          FUN_71001b1870((long)plVar8);
          (**(code **)(*plVar9 + 0x20))(plVar9);
        } while (lStack_80 != 0);
      }
    }
  }
  else {
    *(int *)(plVar8 + 0x1b) = iVar4;
  }
LAB_71001fb620:
  uVar16 = 1;
LAB_71001fb624:
  (**(code **)(*plVar17 + 0x20))(plVar17);
  return uVar16;
}

