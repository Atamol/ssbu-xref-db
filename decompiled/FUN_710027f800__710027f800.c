// addr:      710027f800
// offset:    0x27f800
// name:      FUN_710027f800
// mangled:   
// signature: undefined FUN_710027f800(void)


void FUN_710027f800(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 in_x7;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  uint unaff_w24;
  undefined8 unaff_x25;
  undefined1 uVar16;
  long alStack_e0 [3];
  undefined **ppuStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar14 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) goto LAB_710027fd2c;
      plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar14 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar7 == 0) {
LAB_710027fc6c:
    uVar5 = 0x80010004;
  }
  else {
    if ((ulong)*(uint *)(param_1 + 0x5f8) <=
        (ulong)(*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 3)) {
      lVar7 = *(long *)(param_1 + 0x1c0);
      uVar12 = *(long *)(param_1 + 0x1c8) - lVar7 >> 5;
      uVar11 = (ulong)*(uint *)(param_1 + 0x5fc);
      if (uVar12 != uVar11) {
        lVar13 = *(long *)(param_1 + 0x608);
        if (lVar13 != *(long *)(param_1 + 0x610)) {
          if (uVar12 <= uVar11) goto LAB_710027fd44;
          lVar1 = lVar7 + uVar11 * 0x20;
          lVar15 = *(long *)(lVar1 + 0x18);
          bVar3 = false;
          uVar16 = 0;
          do {
            if (*(long *)(lVar13 + 0x10) == lVar15) {
              uVar16 = *(undefined1 *)(lVar13 + 8);
              unaff_x25 = *(undefined8 *)(lVar13 + 0x18);
              bVar3 = true;
              unaff_w22 = *(undefined4 *)(lVar13 + 0x20);
              unaff_w24 = (uint)*(ushort *)(lVar13 + 0x24);
              unaff_w23 = *(undefined4 *)(lVar13 + 0x28);
            }
            lVar13 = lVar13 + 0x30;
          } while (*(long *)(param_1 + 0x610) != lVar13);
          if (bVar3) {
            if (uVar12 <= uVar11) {
LAB_710027fd48:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            (**(code **)(**(long **)(param_1 + 0x5f0) + 0x10))
                      (*(long **)(param_1 + 0x5f0),lVar15,unaff_w22,unaff_x25,unaff_w24,unaff_w23,
                       *(undefined8 *)(lVar1 + 0x10),in_x7,param_1 + 0x5d8,param_1 + 0x1c0);
            plVar14 = &DAT_71052af138;
            if (DAT_71052af1d8 != '\0') {
              puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
              uVar2 = *puVar6;
              if (uVar2 != 0) {
                if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2)
                goto LAB_710027fd2c;
                plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
              }
            }
            lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar14 + 0x10) + 0x18),
                                   *(uint *)(param_1 + 0xa0));
            if (lVar7 != 0) {
              if (*(long **)(param_1 + 0x628) != (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0x628) + 8))();
              }
              puVar8 = FUN_71001af850(0x48);
              if (puVar8 != (undefined8 *)0x0) {
                if ((ulong)(*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 3) <=
                    (ulong)*(uint *)(param_1 + 0x5f8)) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                uVar9 = *(undefined8 *)
                         (*(long *)(param_1 + 0x5d8) + (ulong)*(uint *)(param_1 + 0x5f8) * 8);
                *(undefined1 *)(puVar8 + 4) = uVar16;
                *(undefined4 *)(puVar8 + 7) = unaff_w22;
                puVar8[5] = lVar15;
                puVar8[6] = unaff_x25;
                *(short *)((long)puVar8 + 0x3c) = (short)unaff_w24;
                *(undefined4 *)(puVar8 + 8) = unaff_w23;
                *puVar8 = &PTR_FUN_7104f60868;
                puVar8[1] = uVar9;
                puVar8[2] = param_1 + 0xc0;
                puVar8[3] = &PTR_FUN_7104f60298;
              }
              *(undefined8 **)(param_1 + 0x628) = puVar8;
              uStack_c0 = 0;
              puStack_80 = (undefined8 *)0x0;
              ppuStack_a8 = &PTR_FUN_710509d038;
              uStack_70 = 0;
              uStack_b8 = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              uStack_88 = 0;
              ppuStack_c8 = &PTR_FUN_710509d058;
              uStack_90 = 0xffff;
              uStack_b0 = 0;
              puStack_78 = (undefined8 *)0x0;
              if ((ulong)(*(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0) >> 5) <=
                  (ulong)*(uint *)(param_1 + 0x5fc)) goto LAB_710027fd48;
              uStack_b8 = *(undefined8 *)
                           (*(long *)(param_1 + 0x1c0) + (ulong)*(uint *)(param_1 + 0x5fc) * 0x20 +
                           0x18);
              plVar14 = (long *)(*(long *)(param_1 + 0xa8) + ((long)DAT_7104f5e190 >> 1));
              pcVar10 = DAT_7104f5e188;
              if ((DAT_7104f5e190 & 1) != 0) {
                pcVar10 = *(code **)(DAT_7104f5e188 + *plVar14);
              }
              uVar11 = (*pcVar10)(plVar14,param_1 + 0xc0,&ppuStack_c8);
              if ((uVar11 & 1) == 0) {
                uStack_68 = CONCAT44(uStack_68._4_4_,0x8001000d);
                FUN_71001b4200((undefined4 *)alStack_e0,(undefined4 *)&uStack_68);
                FUN_710027ea50(param_1,(int *)alStack_e0);
              }
              else {
                plVar14 = &DAT_71052af138;
                if (DAT_71052af1d8 != '\0') {
                  puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
                  uVar2 = *puVar6;
                  if (uVar2 != 0) {
                    if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2)
                    goto LAB_710027fd2c;
                    plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
                  }
                }
                FUN_71001d3780(*(long *)(*(long *)(*plVar14 + 0x10) + 0x18),
                               *(uint *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xd8));
                FUN_71001d6410(param_1,2);
                puVar8 = FUN_71001af850(0x20);
                if (puVar8 != (undefined8 *)0x0) {
                  puVar8[2] = 0;
                  puVar8[3] = &DAT_71044114cc;
                  *puVar8 = &PTR_FUN_7104f56e28;
                  puVar8[1] = FUN_710027fec0;
                }
                FUN_71001d4200(param_1,param_1 + 0xc0,puVar8);
              }
              puVar4 = puStack_80;
              ppuStack_c8 = &PTR_FUN_710509d078;
              puVar8 = puStack_78;
              if (puStack_80 == (undefined8 *)0x0) {
                return;
              }
              while (puVar8 != puVar4) {
                puVar8 = puVar8 + -5;
                (**(code **)*puVar8)(puVar8);
              }
              puStack_78 = puVar4;
              FUN_71001b1870((long)puStack_80);
              return;
            }
            goto LAB_710027fc6c;
          }
        }
        if (uVar12 <= uVar11) {
LAB_710027fd44:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(lVar7 + uVar11 * 0x20 + 0x10);
        FUN_71001cde10(&ppuStack_c8);
        uStack_68 = 0x1f8;
        alStack_e0[0] = param_1 + 0x3d8;
        uVar5 = (*(code *)ppuStack_c8[6])(&ppuStack_c8,alStack_e0,&uStack_68,1);
        *(undefined4 *)(param_1 + 0x5d0) = uVar5;
        FUN_71001cb860();
        (**(code **)(**(long **)(param_1 + 0x5f0) + 0x18))
                  (*(long **)(param_1 + 0x5f0),param_1 + 0x3d8,0,*(undefined8 *)(param_1 + 1000));
        plVar14 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar2 = *puVar6;
          if (uVar2 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_710027fd2c:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
          }
        }
        lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar14 + 0x10) + 0x18),
                               *(uint *)(param_1 + 0xa0));
        if (lVar7 != 0) {
          *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) + 1;
          return;
        }
        goto LAB_710027fc6c;
      }
    }
    uVar5 = 0x10001;
  }
  alStack_e0[0] = CONCAT44(alStack_e0[0]._4_4_,uVar5);
  FUN_71001b4200((undefined4 *)&ppuStack_c8,(undefined4 *)alStack_e0);
  FUN_710027ea50(param_1,(int *)&ppuStack_c8);
  return;
}

