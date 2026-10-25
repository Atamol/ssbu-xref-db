// addr:      710027f3f0
// offset:    0x27f3f0
// name:      FUN_710027f3f0
// mangled:   
// signature: undefined FUN_710027f3f0(void)


void FUN_710027f3f0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uStack_ac;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined **ppuStack_88;
  undefined1 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_710027f7dc;
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    ppuStack_a8 = (undefined **)CONCAT44(ppuStack_a8._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&ppuStack_88,(undefined4 *)&ppuStack_a8);
    FUN_710027ea50(param_1,(int *)&ppuStack_88);
    return;
  }
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  ppuStack_88 = &PTR_FUN_7104f60218;
  plStack_68 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x1c0);
  if (lVar3 != *(long *)(param_1 + 0x1c8)) {
    plVar9 = (long *)0x0;
    plVar13 = (long *)0x0;
    plVar12 = (long *)0x0;
    plVar11 = (long *)0x0;
    plVar14 = (long *)0x0;
    do {
      while (lVar6 = *(long *)(lVar3 + 0x18), lVar6 == 0) {
LAB_710027f4e8:
        lVar3 = lVar3 + 0x20;
        if (lVar3 == *(long *)(param_1 + 0x1c8)) goto LAB_710027f630;
      }
      if (plVar14 != plVar12) {
        plVar13 = plVar14 + 1;
        *plVar14 = lVar6;
        plVar14 = plVar13;
        plStack_70 = plVar13;
        goto LAB_710027f4e8;
      }
      uVar10 = (long)plVar12 - (long)plVar11 >> 3;
      uVar4 = uVar10 + 1;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar10 < 0xfffffffffffffff) {
        uVar7 = (long)plVar12 - (long)plVar11 >> 2;
        if (uVar4 <= uVar7) {
          uVar4 = uVar7;
        }
        if (uVar4 != 0) goto LAB_710027f538;
        puVar5 = (undefined8 *)0x0;
        plVar14 = plVar12;
      }
      else {
        uVar4 = 0x1fffffffffffffff;
LAB_710027f538:
        puVar5 = FUN_71001b1820(uVar4 << 3);
        lVar6 = *(long *)(lVar3 + 0x18);
        plVar14 = plVar13;
      }
      plVar9 = puVar5 + uVar10;
      plVar12 = puVar5 + uVar4;
      plVar13 = plVar9 + 1;
      *plVar9 = lVar6;
      if (plVar14 != plVar11) {
        uVar4 = (long)plVar14 + (-8 - (long)plVar11);
        uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
        plVar8 = plVar9;
        plVar15 = plVar14;
        if ((uVar1 & 7) != 0) {
          lVar6 = -((ulong)uVar1 & 7);
          do {
            plVar15 = plVar15 + -1;
            lVar6 = lVar6 + 1;
            plVar8 = plVar8 + -1;
            *plVar8 = *plVar15;
          } while (lVar6 != 0);
        }
        if (0x37 < uVar4) {
          plVar8 = plVar8 + -4;
          do {
            plVar8[3] = plVar15[-1];
            plVar8[2] = plVar15[-2];
            plVar8[1] = plVar15[-3];
            *plVar8 = plVar15[-4];
            plVar8[-1] = plVar15[-5];
            plVar8[-2] = plVar15[-6];
            plVar8[-3] = plVar15[-7];
            plVar15 = plVar15 + -8;
            plVar8[-4] = *plVar15;
            plVar8 = plVar8 + -8;
          } while (plVar11 != plVar15);
        }
        plVar9 = (long *)((long)plVar9 +
                         (~((long)plVar14 + (-8 - (long)plVar11)) & 0xfffffffffffffff8U));
      }
      plStack_78 = plVar9;
      plStack_70 = plVar13;
      plStack_68 = plVar12;
      if (plVar11 != (long *)0x0) {
        FUN_71001b1870((long)plVar11);
      }
      lVar3 = lVar3 + 0x20;
      plVar11 = plVar9;
      plVar14 = plVar13;
    } while (lVar3 != *(long *)(param_1 + 0x1c8));
LAB_710027f630:
    if (plVar9 != plVar14) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0xe8))
                        (*(long **)(param_1 + 0xb0),param_1 + 0xc0,&ppuStack_88,param_1 + 0x608);
      if ((uVar4 & 1) == 0) {
        uStack_ac = 0x8001000d;
        FUN_71001b4200((undefined4 *)&ppuStack_a8,&uStack_ac);
        FUN_710027ea50(param_1,(int *)&ppuStack_a8);
      }
      else {
        plVar9 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar2;
          if (uVar1 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_710027f7dc:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
          }
        }
        FUN_71001d3780(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                       *(undefined4 *)(param_1 + 0xd8));
        FUN_71001d6410(param_1,2);
        puVar5 = FUN_71001af850(0x20);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[2] = 0;
          puVar5[3] = &DAT_71044114cc;
          *puVar5 = &PTR_FUN_7104f56e28;
          puVar5[1] = FUN_710027fd60;
        }
        FUN_71001d4200(param_1,param_1 + 0xc0,puVar5);
      }
      goto LAB_710027f794;
    }
  }
  ppuStack_a8 = &PTR_FUN_7104f56e28;
  pcStack_a0 = FUN_710027f800;
  uStack_98 = 0;
  puStack_90 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_a8);
LAB_710027f794:
  ppuStack_88 = &PTR_FUN_7104f60278;
  if (plStack_78 != (long *)0x0) {
    plStack_70 = plStack_78;
    FUN_71001b1870((long)plStack_78);
  }
  return;
}

