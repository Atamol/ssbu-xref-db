// addr:      7100222960
// offset:    0x222960
// name:      FUN_7100222960
// mangled:   
// signature: undefined FUN_7100222960(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_7100222960(long param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  ulong uVar11;
  code *pcVar12;
  uint uVar13;
  uint uStack_98;
  uint uStack_94;
  int aiStack_90 [6];
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar13 = *puVar6;
    if (uVar13 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar13) goto LAB_7100222e70;
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar13 * 8) + 0x20);
    }
  }
  lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar7 == 0) {
    aiStack_90[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&puStack_78,aiStack_90);
  }
  else {
    pcVar12 = FUN_710170d030;
    uVar13 = 0;
    do {
      uVar8 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))();
      if ((((uVar8 & 1) == 0) ||
          (uVar8 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x48))(), (uVar8 & 1) != 0)) ||
         (100 < uVar13)) goto LAB_7100222cb8;
      uVar8 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x78))();
      uVar11 = *(ulong *)(param_1 + 0x108);
      if (uVar8 < uVar11) {
        uVar11 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x78))();
      }
      if (uVar11 == 0) goto LAB_7100222cb8;
      puStack_78 = (undefined8 *)0x0;
      puStack_70 = (undefined8 *)0x0;
      lStack_68 = 0;
      if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      puStack_78 = FUN_71001b1820(uVar11);
      lStack_68 = (long)puStack_78 + uVar11;
      puStack_70 = puStack_78;
      uVar8 = uVar11;
      if ((uVar11 & 3) != 0) {
        lVar7 = -(uVar11 & 3);
        do {
          *(undefined1 *)puStack_70 = 0;
          puStack_70 = (undefined8 *)((long)puStack_70 + 1);
          uVar8 = uVar8 - 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
      if (2 < uVar11 - 1) {
        do {
          *(undefined1 *)puStack_70 = 0;
          *(undefined1 *)((long)puStack_70 + 1) = 0;
          *(undefined1 *)((long)puStack_70 + 2) = 0;
          *(undefined1 *)((long)puStack_70 + 3) = 0;
          puStack_70 = (undefined8 *)((long)puStack_70 + 4);
          uVar8 = uVar8 - 4;
        } while (uVar8 != 0);
      }
      uStack_98 = uStack_98 & 0xffffff00;
      uVar8 = (**(code **)(**(long **)(param_1 + 0x100) + 0x18))
                        (*(long **)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xa8),puStack_78,
                         (long)puStack_70 - (long)puStack_78,&uStack_98);
      if (uVar11 < uVar8) {
LAB_7100222bc8:
        uStack_94 = 0x80010004;
        FUN_71001b4200(aiStack_90,&uStack_94);
LAB_7100222bd8:
        FUN_71002227f0(param_1,aiStack_90);
        iVar1 = 1;
      }
      else {
        plVar10 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar3 = *puVar6;
          if (uVar3 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3)
            goto LAB_7100222e70;
            plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
          }
        }
        lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),
                               *(uint *)(param_1 + 0xa0));
        if (lVar7 == 0) goto LAB_7100222bc8;
        uVar11 = (long)puStack_70 - (long)puStack_78;
        if (uVar8 >= uVar11 && uVar8 - uVar11 != 0) {
          FUN_71001dd4a0((long *)&puStack_78,uVar8 - uVar11);
          if (puStack_78 == puStack_70) goto LAB_7100222c50;
LAB_7100222c28:
          (**(code **)(**(long **)(param_1 + 0xa8) + 0x70))
                    (aiStack_90,*(long **)(param_1 + 0xa8),puStack_78,
                     (long)puStack_70 - (long)puStack_78);
          pcVar2 = pcVar12;
          if (aiStack_90[0] < 0) {
            pcVar2 = (code *)0x0;
          }
          if (pcVar2 != (code *)0x0) goto LAB_7100222c50;
          goto LAB_7100222bd8;
        }
        if (uVar8 < uVar11) {
          puStack_70 = (undefined8 *)((long)puStack_78 + uVar8);
        }
        if (puStack_78 != puStack_70) goto LAB_7100222c28;
LAB_7100222c50:
        if ((char)uStack_98 == '\0') {
          iVar1 = 3;
          if (uVar8 != 0) {
            iVar1 = 0;
          }
        }
        else {
          (**(code **)(**(long **)(param_1 + 0xa8) + 0x40))();
          iVar1 = 3;
        }
      }
      if (puStack_78 != (undefined8 *)0x0) {
        puStack_70 = puStack_78;
        FUN_71001b1870((long)puStack_78);
      }
      uVar13 = uVar13 + 1;
    } while (iVar1 == 0);
    if (iVar1 != 3) {
      return;
    }
LAB_7100222cb8:
    if (*(char *)(param_1 + 0xf8) == '\0') {
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x88))(&puStack_78);
      if ((int)puStack_78 < 0) {
        pcVar12 = (code *)0x0;
      }
      if (pcVar12 == (code *)0x0) {
        aiStack_90[0] = -0x7ffeffff;
        bVar5 = FUN_71001b4260((int *)&puStack_78,aiStack_90);
        if (bVar5) goto LAB_7100222cec;
        aiStack_90[0] = -0x7ffafffe;
        bVar5 = FUN_71001b4260((int *)&puStack_78,aiStack_90);
        if (!bVar5) goto LAB_7100222e10;
        uStack_94 = 0x80050002;
        puVar6 = &uStack_94;
      }
      else {
        *(undefined1 *)(param_1 + 0xf8) = 1;
        uVar8 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x60))
                          (*(long **)(param_1 + 0xa8),&uStack_94);
        if ((uStack_94 == 0) || ((uVar8 & 1) == 0)) {
          uStack_98 = 0x8005000b;
        }
        else {
          (**(code **)(**(long **)(param_1 + 0x100) + 0x20))
                    (*(long **)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xa8));
          plVar10 = &DAT_71052af138;
          if (DAT_71052af1d8 != '\0') {
            puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar13 = *puVar6;
            if (uVar13 != 0) {
              if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar13) {
LAB_7100222e70:
                FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
                return;
              }
              plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar13 * 8) + 0x20);
            }
          }
          lVar7 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),
                                 *(uint *)(param_1 + 0xa0));
          if (lVar7 != 0) {
            (**(code **)(**(long **)(param_1 + 0xa8) + 0xa8))();
            goto LAB_7100222cc0;
          }
          uStack_98 = 0x80010004;
        }
        puVar6 = &uStack_98;
      }
      FUN_71001b4200(aiStack_90,puVar6);
      ppuVar9 = (undefined8 **)aiStack_90;
      goto LAB_7100222e14;
    }
LAB_7100222cc0:
    FUN_71002224e0(&puStack_78,param_1);
    aiStack_90[0] = -0x7ffaffea;
    bVar5 = FUN_71001b4260((int *)&puStack_78,aiStack_90);
    if (bVar5) {
LAB_7100222cec:
      uVar4 = *(undefined4 *)(param_1 + 0x110);
      FUN_71001d6410(param_1,1);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      return;
    }
  }
LAB_7100222e10:
  ppuVar9 = &puStack_78;
LAB_7100222e14:
  FUN_71002227f0(param_1,(int *)ppuVar9);
  return;
}

