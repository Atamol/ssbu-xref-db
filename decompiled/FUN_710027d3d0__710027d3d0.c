// addr:      710027d3d0
// offset:    0x27d3d0
// name:      FUN_710027d3d0
// mangled:   
// signature: undefined FUN_710027d3d0(void)


void FUN_710027d3d0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uStack_ac;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined **ppuStack_88;
  undefined1 uStack_80;
  int *piStack_78;
  int *piStack_70;
  int *piStack_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_710027d7bc;
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    ppuStack_a8 = (undefined **)CONCAT44(ppuStack_a8._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&ppuStack_88,(undefined4 *)&ppuStack_a8);
    FUN_710027ca30(param_1,(int *)&ppuStack_88);
    return;
  }
  uStack_80 = 0;
  piStack_78 = (int *)0x0;
  piStack_70 = (int *)0x0;
  ppuStack_88 = &PTR_FUN_7104f60138;
  piStack_68 = (int *)0x0;
  lVar3 = *(long *)(param_1 + 0x1c0);
  if (lVar3 != *(long *)(param_1 + 0x1c8)) {
    piVar11 = (int *)0x0;
    piVar15 = (int *)0x0;
    piVar14 = (int *)0x0;
    piVar13 = (int *)0x0;
    piVar16 = (int *)0x0;
    do {
      while (iVar6 = *(int *)(lVar3 + 0x18), iVar6 == 0) {
LAB_710027d4c8:
        lVar3 = lVar3 + 0x20;
        if (lVar3 == *(long *)(param_1 + 0x1c8)) goto LAB_710027d610;
      }
      if (piVar16 != piVar14) {
        piVar15 = piVar16 + 1;
        *piVar16 = iVar6;
        piVar16 = piVar15;
        piStack_70 = piVar15;
        goto LAB_710027d4c8;
      }
      uVar12 = (long)piVar14 - (long)piVar13 >> 2;
      uVar4 = uVar12 + 1;
      if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar12 < 0x1fffffffffffffff) {
        uVar7 = (long)piVar14 - (long)piVar13 >> 1;
        if (uVar4 <= uVar7) {
          uVar4 = uVar7;
        }
        if (uVar4 != 0) goto LAB_710027d518;
        puVar5 = (undefined8 *)0x0;
        piVar16 = piVar14;
      }
      else {
        uVar4 = 0x3fffffffffffffff;
LAB_710027d518:
        puVar5 = FUN_71001b1820(uVar4 << 2);
        iVar6 = *(int *)(lVar3 + 0x18);
        piVar16 = piVar15;
      }
      piVar11 = (int *)((long)puVar5 + uVar12 * 4);
      piVar14 = (int *)((long)puVar5 + uVar4 * 4);
      piVar15 = piVar11 + 1;
      *piVar11 = iVar6;
      if (piVar16 != piVar13) {
        uVar4 = (long)piVar16 + (-4 - (long)piVar13);
        uVar1 = ((uint)(uVar4 >> 2) & 0x3fffffff) + 1;
        piVar8 = piVar11;
        piVar17 = piVar16;
        if ((uVar1 & 7) != 0) {
          lVar9 = -((ulong)uVar1 & 7);
          do {
            piVar17 = piVar17 + -1;
            lVar9 = lVar9 + 1;
            piVar8 = piVar8 + -1;
            *piVar8 = *piVar17;
          } while (lVar9 != 0);
        }
        if (0x1b < uVar4) {
          piVar8 = piVar8 + -4;
          do {
            piVar8[3] = piVar17[-1];
            piVar8[2] = piVar17[-2];
            piVar8[1] = piVar17[-3];
            *piVar8 = piVar17[-4];
            piVar8[-1] = piVar17[-5];
            piVar8[-2] = piVar17[-6];
            piVar8[-3] = piVar17[-7];
            piVar17 = piVar17 + -8;
            piVar8[-4] = *piVar17;
            piVar8 = piVar8 + -8;
          } while (piVar13 != piVar17);
        }
        piVar11 = (int *)((long)piVar11 +
                         (~((long)piVar16 + (-4 - (long)piVar13)) & 0xfffffffffffffffcU));
      }
      piStack_78 = piVar11;
      piStack_70 = piVar15;
      piStack_68 = piVar14;
      if (piVar13 != (int *)0x0) {
        FUN_71001b1870((long)piVar13);
      }
      lVar3 = lVar3 + 0x20;
      piVar13 = piVar11;
      piVar16 = piVar15;
    } while (lVar3 != *(long *)(param_1 + 0x1c8));
LAB_710027d610:
    if (piVar11 != piVar16) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0xf0))
                        (*(long **)(param_1 + 0xb0),param_1 + 0xc0,&ppuStack_88,param_1 + 0x608);
      if ((uVar4 & 1) == 0) {
        uStack_ac = 0x8001000d;
        FUN_71001b4200((undefined4 *)&ppuStack_a8,&uStack_ac);
        FUN_710027ca30(param_1,(int *)&ppuStack_a8);
      }
      else {
        plVar10 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar2;
          if (uVar1 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_710027d7bc:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
          }
        }
        FUN_71001d3780(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                       *(undefined4 *)(param_1 + 0xd8));
        FUN_71001d6410(param_1,2);
        puVar5 = FUN_71001af850(0x20);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[2] = 0;
          puVar5[3] = &DAT_71044114cc;
          *puVar5 = &PTR_FUN_7104f56e28;
          puVar5[1] = FUN_710027dcb0;
        }
        FUN_71001d4200(param_1,param_1 + 0xc0,puVar5);
      }
      goto LAB_710027d774;
    }
  }
  ppuStack_a8 = &PTR_FUN_7104f56e28;
  pcStack_a0 = FUN_710027d7e0;
  uStack_98 = 0;
  puStack_90 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_a8);
LAB_710027d774:
  ppuStack_88 = &PTR_FUN_7104f60198;
  if (piStack_78 != (int *)0x0) {
    piStack_70 = piStack_78;
    FUN_71001b1870((long)piStack_78);
  }
  return;
}

