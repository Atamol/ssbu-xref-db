// addr:      71001d29d0
// offset:    0x1d29d0
// name:      FUN_71001d29d0
// mangled:   
// signature: undefined FUN_71001d29d0(void)


uint * FUN_71001d29d0(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint *puVar8;
  long *plVar9;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  
  if (DAT_7104f54e20 == '\0') {
    puVar3 = (uint *)FUN_71001b6a50((long *)&uStack_58);
  }
  else {
    puVar3 = (uint *)FUN_71001b68a0(&uStack_58,0);
  }
  DAT_71052aeba8 = uStack_58;
  plVar9 = *(long **)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x90) = *(ulong *)(param_1 + 0x88);
  if ((long *)(param_1 + 0x50) != plVar9) {
    do {
      if ((*(int *)(plVar9[5] + 0x14) == 1) &&
         (uVar4 = *(ulong *)(plVar9[5] + 0x88), uVar4 != 0 && uVar4 < uStack_58)) {
        plVar6 = &DAT_71052af138;
        uStack_80 = 0;
        puStack_90 = (uint *)0x0;
        puStack_88 = (uint *)0x0;
        if (DAT_71052af1d8 != '\0') {
          puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar2 = *puVar3;
          if (uVar2 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2)
            goto LAB_71001d2cb4;
            plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
          }
        }
        FUN_71001d19f0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(plVar9[5] + 0x18),
                       (long *)&puStack_90);
        FUN_71001d2cd0((ulong *)(param_1 + 0x88),*(undefined4 **)(param_1 + 0x90),puStack_90,
                       puStack_88);
        plVar6 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar6 = plVar9 + 2;
          plVar7 = (long *)*plVar6;
          if ((long *)*plVar7 != plVar9) {
            do {
              lVar5 = *plVar6;
              plVar6 = (long *)(lVar5 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (*plVar7 != lVar5);
          }
        }
        else {
          do {
            plVar7 = plVar6;
            plVar6 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        plVar9 = (long *)plVar9[5];
        uStack_ac = 0x8001000b;
        FUN_71001b4200((undefined4 *)&uStack_a8,&uStack_ac);
        uStack_70 = uStack_a0;
        uStack_68 = uStack_98;
        uStack_78 = uStack_a8;
        FUN_71001d0f00(plVar9,3,&uStack_78,1);
        puVar3 = puStack_90;
        plVar9 = plVar7;
        if (puStack_90 != (uint *)0x0) {
          puStack_88 = puStack_90;
          puVar3 = (uint *)FUN_71001b1870((long)puStack_90);
        }
      }
      else {
        plVar6 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar6 = plVar9 + 2;
          bVar1 = *(long **)*plVar6 != plVar9;
          plVar9 = (long *)*plVar6;
          if (bVar1) {
            do {
              lVar5 = *plVar6;
              plVar6 = (long *)(lVar5 + 0x10);
              plVar9 = (long *)*plVar6;
            } while (*plVar9 != lVar5);
          }
        }
        else {
          do {
            plVar9 = plVar6;
            plVar6 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
    } while ((long *)(param_1 + 0x50) != plVar9);
    puVar8 = *(uint **)(param_1 + 0x88);
    if (puVar8 != *(uint **)(param_1 + 0x90)) {
      do {
        plVar9 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar2 = *puVar3;
          if (uVar2 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_71001d2cb4:
              puVar3 = (uint *)FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h"
                                              ,0x47,0xe0000003,0);
              return puVar3;
            }
            plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
          }
        }
        uVar2 = *puVar8;
        plVar6 = (long *)(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18) + 0x50);
        plVar7 = (long *)*plVar6;
        plVar9 = plVar6;
        if (plVar7 != (long *)0x0) {
          do {
            if (*(uint *)(plVar7 + 4) >= uVar2) {
              plVar9 = plVar7;
            }
            plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < uVar2];
          } while (plVar7 != (long *)0x0);
          if ((plVar9 != plVar6) && (*(uint *)(plVar9 + 4) <= uVar2)) {
            puVar3 = (uint *)0x0;
            if ((long *)plVar9[5] != (long *)0x0) {
              uVar2 = FUN_71001d0a10((long *)plVar9[5]);
              puVar3 = (uint *)(ulong)uVar2;
            }
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != *(uint **)(param_1 + 0x90));
    }
  }
  return puVar3;
}

