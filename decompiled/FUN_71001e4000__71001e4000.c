// addr:      71001e4000
// offset:    0x1e4000
// name:      FUN_71001e4000
// mangled:   
// signature: undefined FUN_71001e4000(void)


void FUN_71001e4000(long param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  plVar17 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e406c:
    if ((*plVar17 != 0) && (*(long *)(*plVar17 + 0x10) != 0)) {
      plVar17 = &DAT_71052af128;
      if (DAT_71052af1d8 != '\0') {
        puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar4 = *puVar5;
        if (uVar4 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4)
          goto LAB_71001e43dc;
          plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x10);
        }
      }
      if (*(long *)(*(long *)(*plVar17 + 0x10) + 0x198) != 0) {
        plVar17 = &DAT_71052af128;
        if (DAT_71052af1d8 != '\0') {
          puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar4 = *puVar5;
          if (uVar4 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4) {
LAB_71001e43dc:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x10);
          }
        }
        lVar16 = *(long *)(*(long *)(*plVar17 + 0x10) + 0x198);
        uVar6 = FUN_71001f2ba0(*(long *)(param_1 + 0x318) + 0x10,"RVCID",0);
        iVar3 = FUN_71001e85d0(lVar16,(int)uVar6);
        if (iVar3 != -1) {
          *(int *)(param_1 + 0x330) = iVar3;
          pcStack_48 = FUN_71001e3b20;
          goto LAB_71001e418c;
        }
        FUN_71001b12a0((ulong *)&ppuStack_50);
        if ((ppuStack_50 <= *(undefined ***)(param_1 + 600)) &&
           ((*(char *)(param_1 + 800) != '\0' ||
            (uVar4 = FUN_71001e48b0(lVar16,*(long *)(param_1 + 0x318) + 0x10), (uVar4 & 1) == 0))))
        {
          FUN_71001d6410(param_1,1);
          *(undefined4 *)(param_1 + 0x44) = 100;
          return;
        }
        uVar6 = FUN_71001f2ba0(*(long *)(param_1 + 0x318) + 0x10,"RVCID",0);
        puVar11 = *(undefined4 **)(param_1 + 0x340);
        if (puVar11 < *(undefined4 **)(param_1 + 0x348)) {
          *puVar11 = (int)uVar6;
          *(undefined4 **)(param_1 + 0x340) = puVar11 + 1;
          sVar1 = *(short *)(param_1 + 0x310);
        }
        else {
          puVar7 = *(undefined4 **)(param_1 + 0x338);
          lVar16 = (long)puVar11 - (long)puVar7 >> 2;
          uVar18 = lVar16 + 1;
          if (uVar18 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar8 = (long)*(undefined4 **)(param_1 + 0x348) - (long)puVar7;
          if ((ulong)(lVar8 >> 2) < 0x1fffffffffffffff) {
            uVar9 = lVar8 >> 1;
            if (uVar18 <= uVar9) {
              uVar18 = uVar9;
            }
            if (uVar18 != 0) goto LAB_71001e4298;
            puVar10 = (undefined8 *)0x0;
          }
          else {
            uVar18 = 0x3fffffffffffffff;
LAB_71001e4298:
            puVar10 = FUN_71001b1820(uVar18 << 2);
            puVar7 = *(undefined4 **)(param_1 + 0x338);
            puVar11 = *(undefined4 **)(param_1 + 0x340);
          }
          puVar13 = (undefined4 *)((long)puVar10 + lVar16 * 4);
          puVar14 = puVar13 + 1;
          *puVar13 = (int)uVar6;
          if (puVar11 != puVar7) {
            uVar9 = (long)puVar11 + (-4 - (long)puVar7);
            uVar4 = ((uint)(uVar9 >> 2) & 0x3fffffff) + 1;
            puVar12 = puVar11;
            puVar15 = puVar13;
            if ((uVar4 & 3) != 0) {
              lVar16 = -((ulong)uVar4 & 3);
              do {
                puVar12 = puVar12 + -1;
                lVar16 = lVar16 + 1;
                puVar15 = puVar15 + -1;
                *puVar15 = *puVar12;
              } while (lVar16 != 0);
            }
            if (0xb < uVar9) {
              puVar15 = puVar15 + -2;
              do {
                puVar15[1] = puVar12[-1];
                *puVar15 = puVar12[-2];
                puVar15[-1] = puVar12[-3];
                puVar12 = puVar12 + -4;
                puVar15[-2] = *puVar12;
                puVar15 = puVar15 + -4;
              } while (puVar7 != puVar12);
            }
            puVar13 = (undefined4 *)
                      ((long)puVar13 +
                      (~((long)puVar11 + (-4 - (long)puVar7)) & 0xfffffffffffffffcU));
          }
          *(undefined4 **)(param_1 + 0x338) = puVar13;
          *(undefined4 **)(param_1 + 0x340) = puVar14;
          *(ulong *)(param_1 + 0x348) = (long)puVar10 + uVar18 * 4;
          if (puVar7 != (undefined4 *)0x0) {
            FUN_71001b1870((long)puVar7);
          }
          sVar1 = *(short *)(param_1 + 0x310);
        }
        if (sVar1 != 0) {
          lVar16 = *(long *)(param_1 + 0x318);
          if (*(char *)(lVar16 + 0x78) == '\0') {
            FUN_71001f2180(lVar16 + 0x10);
          }
          FUN_71001bec20(*(long *)(lVar16 + 0x18),param_1 + 0x280);
          *(undefined1 *)(lVar16 + 0x79) = 0;
          lVar16 = *(long *)(param_1 + 0x318);
          uVar2 = *(ushort *)(param_1 + 0x310);
          if (*(char *)(lVar16 + 0x78) == '\0') {
            FUN_71001f2180(lVar16 + 0x10);
          }
          FUN_71001bee30(*(long *)(lVar16 + 0x18),uVar2);
          *(undefined1 *)(lVar16 + 0x79) = 0;
          FUN_71001beb90(param_1 + 0x280);
          *(undefined2 *)(param_1 + 0x310) = 0;
        }
        *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(*(long *)(param_1 + 0x318) + 8);
        pcStack_48 = FUN_71001e37f0;
        goto LAB_71001e418c;
      }
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar5;
    if (uVar4 == 0) goto LAB_71001e406c;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x10);
      goto LAB_71001e406c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  pcStack_48 = FUN_71001e2a90;
LAB_71001e418c:
  ppuStack_50 = &PTR_FUN_7104f56e28;
  uStack_40 = 0;
  puStack_38 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_50);
  return;
}

