// addr:      710027d7e0
// offset:    0x27d7e0
// name:      FUN_710027d7e0
// mangled:   
// signature: undefined FUN_710027d7e0(void)


void FUN_710027d7e0(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined4 unaff_w22;
  uint unaff_w23;
  undefined8 unaff_x24;
  undefined1 uVar16;
  undefined2 unaff_w28;
  undefined **appuStack_98 [3];
  undefined **ppuStack_80;
  undefined1 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_68;
  
  plVar15 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) goto LAB_710027dc84;
      plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar15 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar7 == 0) {
LAB_710027dc1c:
    uVar5 = 0x80010004;
  }
  else {
    if ((ulong)*(uint *)(param_1 + 0x5f8) <=
        (ulong)(*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 3)) {
      lVar7 = *(long *)(param_1 + 0x1c0);
      uVar13 = *(long *)(param_1 + 0x1c8) - lVar7 >> 5;
      uVar12 = (ulong)*(uint *)(param_1 + 0x5fc);
      if (uVar13 != uVar12) {
        lVar14 = *(long *)(param_1 + 0x608);
        if (lVar14 != *(long *)(param_1 + 0x610)) {
          if (uVar13 <= uVar12) goto LAB_710027dc9c;
          lVar1 = lVar7 + uVar12 * 0x20;
          iVar3 = *(int *)(lVar1 + 0x18);
          bVar4 = false;
          uVar16 = 0;
          do {
            if (*(int *)(lVar14 + 0xc) == iVar3) {
              uVar16 = *(undefined1 *)(lVar14 + 8);
              unaff_x24 = *(undefined8 *)(lVar14 + 0x10);
              bVar4 = true;
              unaff_w22 = *(undefined4 *)(lVar14 + 0x18);
              unaff_w23 = (uint)*(ushort *)(lVar14 + 0x1c);
              unaff_w28 = *(undefined2 *)(lVar14 + 0x1e);
            }
            lVar14 = lVar14 + 0x20;
          } while (*(long *)(param_1 + 0x610) != lVar14);
          if (bVar4) {
            if (uVar13 <= uVar12) {
LAB_710027dca0:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            (**(code **)(**(long **)(param_1 + 0x5f0) + 0x10))
                      (*(long **)(param_1 + 0x5f0),iVar3,unaff_w22,unaff_x24,unaff_w23,unaff_w28,
                       *(undefined8 *)(lVar1 + 0x10));
            plVar15 = &DAT_71052af138;
            if (DAT_71052af1d8 != '\0') {
              puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
              uVar2 = *puVar6;
              if (uVar2 != 0) {
                if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2)
                goto LAB_710027dc84;
                plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
              }
            }
            lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar15 + 0x10) + 0x18),
                                   *(uint *)(param_1 + 0xa0));
            if (lVar7 != 0) {
              if (*(long **)(param_1 + 0x628) != (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0x628) + 8))();
              }
              puVar8 = FUN_71001af850(0x38);
              if (puVar8 != (undefined8 *)0x0) {
                if ((ulong)(*(long *)(param_1 + 0x5e0) - *(long *)(param_1 + 0x5d8) >> 3) <=
                    (ulong)*(uint *)(param_1 + 0x5f8)) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                uVar10 = *(undefined8 *)
                          (*(long *)(param_1 + 0x5d8) + (ulong)*(uint *)(param_1 + 0x5f8) * 8);
                *(undefined1 *)(puVar8 + 4) = uVar16;
                *(int *)((long)puVar8 + 0x24) = iVar3;
                puVar8[5] = unaff_x24;
                *(undefined4 *)(puVar8 + 6) = unaff_w22;
                *(short *)((long)puVar8 + 0x34) = (short)unaff_w23;
                *(undefined2 *)((long)puVar8 + 0x36) = unaff_w28;
                *puVar8 = &PTR_FUN_7104f607d8;
                puVar8[1] = uVar10;
                puVar8[2] = param_1 + 0xc0;
                puVar8[3] = &PTR_FUN_7104f601b8;
              }
              *(undefined8 **)(param_1 + 0x628) = puVar8;
              uStack_78 = 0;
              uStack_74 = 0;
              ppuStack_80 = &PTR_FUN_7104f5fd38;
              if ((ulong)(*(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0) >> 5) <=
                  (ulong)*(uint *)(param_1 + 0x5fc)) goto LAB_710027dca0;
              uStack_74 = *(undefined4 *)
                           (*(long *)(param_1 + 0x1c0) + (ulong)*(uint *)(param_1 + 0x5fc) * 0x20 +
                           0x18);
              plVar15 = (long *)(*(long *)(param_1 + 0xa8) + ((long)DAT_7104f5e180 >> 1));
              pcVar11 = DAT_7104f5e178;
              if ((DAT_7104f5e180 & 1) != 0) {
                pcVar11 = *(code **)(DAT_7104f5e178 + *plVar15);
              }
              uVar12 = (*pcVar11)(plVar15,param_1 + 0xc0,&ppuStack_80);
              if ((uVar12 & 1) != 0) {
                plVar15 = &DAT_71052af138;
                if (DAT_71052af1d8 == '\0') {
LAB_710027dad8:
                  FUN_71001d3780(*(long *)(*(long *)(*plVar15 + 0x10) + 0x18),
                                 *(uint *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xd8));
                  FUN_71001d6410(param_1,2);
                  puVar8 = FUN_71001af850(0x20);
                  if (puVar8 != (undefined8 *)0x0) {
                    puVar8[2] = 0;
                    puVar8[3] = &DAT_71044114cc;
                    *puVar8 = &PTR_FUN_7104f56e28;
                    puVar8[1] = FUN_710027de10;
                  }
                  FUN_71001d4200(param_1,param_1 + 0xc0,puVar8);
                  return;
                }
                puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
                uVar2 = *puVar6;
                if (uVar2 == 0) goto LAB_710027dad8;
                if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                  plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
                  goto LAB_710027dad8;
                }
                goto LAB_710027dc84;
              }
              uStack_68 = CONCAT44(uStack_68._4_4_,0x8001000d);
              FUN_71001b4200((undefined4 *)appuStack_98,(undefined4 *)&uStack_68);
              pppuVar9 = appuStack_98;
              goto LAB_710027dc38;
            }
            goto LAB_710027dc1c;
          }
        }
        if (uVar13 <= uVar12) {
LAB_710027dc9c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(lVar7 + uVar12 * 0x20 + 0x10);
        FUN_71001cde10(&ppuStack_80);
        uStack_68 = 0x1f8;
        appuStack_98[0] = (undefined **)(param_1 + 0x3d8);
        uVar5 = (*(code *)ppuStack_80[6])(&ppuStack_80,appuStack_98,&uStack_68,1);
        *(undefined4 *)(param_1 + 0x5d0) = uVar5;
        FUN_71001cb860();
        (**(code **)(**(long **)(param_1 + 0x5f0) + 0x18))
                  (*(long **)(param_1 + 0x5f0),(undefined **)(param_1 + 0x3d8),0,
                   *(undefined8 *)(param_1 + 1000));
        plVar15 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar2 = *puVar6;
          if (uVar2 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_710027dc84:
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
          }
        }
        lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar15 + 0x10) + 0x18),
                               *(uint *)(param_1 + 0xa0));
        if (lVar7 != 0) {
          *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) + 1;
          return;
        }
        goto LAB_710027dc1c;
      }
    }
    uVar5 = 0x10001;
  }
  appuStack_98[0] = (undefined **)CONCAT44(appuStack_98[0]._4_4_,uVar5);
  FUN_71001b4200((undefined4 *)&ppuStack_80,(undefined4 *)appuStack_98);
  pppuVar9 = &ppuStack_80;
LAB_710027dc38:
  FUN_710027ca30(param_1,(int *)pppuVar9);
  return;
}

