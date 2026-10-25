// addr:      71001e3bc0
// offset:    0x1e3bc0
// name:      FUN_71001e3bc0
// mangled:   
// signature: undefined FUN_71001e3bc0(void)


void FUN_71001e3bc0(long param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined **ppuStack_d0;
  long *plStack_c8;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ushort uStack_68;
  undefined1 uStack_66;
  undefined **ppuStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  plVar8 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e3c30:
    if ((*plVar8 != 0) && (*(long *)(*plVar8 + 0x10) != 0)) {
      plVar8 = &DAT_71052af128;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar3 = *puVar4;
        if (uVar3 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3)
          goto LAB_71001e3fe4;
          plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
        }
      }
      if (*(long *)(*(long *)(*plVar8 + 0x10) + 0x198) != 0) {
        if (*(char *)(param_1 + 800) == '\0') {
          piVar10 = *(int **)(param_1 + 0x338);
          piVar9 = *(int **)(param_1 + 0x340);
          uVar5 = FUN_71001f2ba0(*(long *)(param_1 + 0x318) + 0x10,"RVCID",0);
          piVar11 = piVar10;
          if ((piVar10 == piVar9) || (*piVar10 == (int)uVar5)) {
LAB_71001e3df0:
            if (*(int **)(param_1 + 0x340) != piVar11) {
LAB_71001e3dfc:
              if (*(short *)(param_1 + 0x310) != 0) {
                lVar6 = *(long *)(param_1 + 0x318);
                if (*(char *)(lVar6 + 0x78) == '\0') {
                  FUN_71001f2180(lVar6 + 0x10);
                }
                FUN_71001bec20(*(long *)(lVar6 + 0x18),param_1 + 0x280);
                *(undefined1 *)(lVar6 + 0x79) = 0;
                lVar6 = *(long *)(param_1 + 0x318);
                uVar1 = *(ushort *)(param_1 + 0x310);
                if (*(char *)(lVar6 + 0x78) == '\0') {
                  FUN_71001f2180(lVar6 + 0x10);
                }
                FUN_71001bee30(*(long *)(lVar6 + 0x18),uVar1);
                *(undefined1 *)(lVar6 + 0x79) = 0;
                FUN_71001beb90(param_1 + 0x280);
                *(undefined2 *)(param_1 + 0x310) = 0;
              }
              *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(*(long *)(param_1 + 0x318) + 8);
              pcStack_58 = FUN_71001e37f0;
              goto LAB_71001e3d54;
            }
          }
          else {
            do {
              piVar10 = piVar10 + 1;
              piVar11 = piVar9;
              if (piVar9 == piVar10) goto LAB_71001e3df0;
            } while (*piVar10 != (int)uVar5);
            if (*(int **)(param_1 + 0x340) != piVar10) goto LAB_71001e3dfc;
          }
          plVar8 = &DAT_71052af128;
          if (DAT_71052af1d8 != '\0') {
            puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar3 = *puVar4;
            if (uVar3 != 0) {
              if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
LAB_71001e3fe4:
                FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
                return;
              }
              plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
            }
          }
          lVar6 = *(long *)(param_1 + 0x318);
          lVar7 = *(long *)(*(long *)(*plVar8 + 0x10) + 0x198);
          puStack_b0 = (undefined8 *)0x0;
          uStack_a8 = 0;
          ppuStack_b8 = &puStack_b0;
          ppuStack_a0 = &puStack_98;
          ppuStack_88 = &puStack_80;
          puStack_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          puStack_80 = (undefined8 *)0x0;
          uStack_78 = 0;
          lStack_70 = 0;
          uStack_66 = 0;
          uStack_68 = 1;
          ppuStack_d0 = &PTR_FUN_7104f57900;
          plStack_c8 = FUN_71001af850(0x90);
          if (plStack_c8 != (long *)0x0) {
            FUN_71001beb40(plStack_c8);
          }
          FUN_71001f1f40((long)&ppuStack_d0,lVar6 + 0x10);
          uVar3 = FUN_71001e4400(lVar7,(long)&ppuStack_d0);
          ppuStack_d0 = &PTR_FUN_7104f57900;
          if (lStack_70 != 0) {
            FUN_71001b1870(lStack_70 + -4);
            lStack_70 = 0;
            uStack_68 = uStack_68 & 0xff;
          }
          if (plStack_c8 != (long *)0x0) {
            (**(code **)(*plStack_c8 + 8))();
          }
          FUN_7101711670(&ppuStack_88,puStack_80);
          FUN_7101711670(&ppuStack_a0,puStack_98);
          FUN_7100219ca0(&ppuStack_b8,puStack_b0);
          if ((uVar3 & 1) != 0) goto LAB_71001e3fb4;
        }
        else {
          plVar8 = &DAT_71052af128;
          if (DAT_71052af1d8 != '\0') {
            puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar3 = *puVar4;
            if (uVar3 != 0) {
              if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3)
              goto LAB_71001e3fe4;
              plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
            }
          }
          lVar6 = *(long *)(*(long *)(*plVar8 + 0x10) + 0x198);
          uVar5 = FUN_71001f2ba0(*(long *)(param_1 + 0x318) + 0x10,"RVCID",0);
          iVar2 = FUN_71001e85d0(lVar6,(int)uVar5);
          if (iVar2 == -1) {
LAB_71001e3fb4:
            FUN_71001b74f0((long *)&ppuStack_60,DAT_7104f577a8);
            *(undefined ***)(param_1 + 600) = ppuStack_60;
            pcStack_58 = FUN_71001e4000;
            goto LAB_71001e3d54;
          }
        }
        pcStack_58 = FUN_71001e3b20;
        goto LAB_71001e3d54;
      }
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 == 0) goto LAB_71001e3c30;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
      goto LAB_71001e3c30;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  pcStack_58 = FUN_71001e2a90;
LAB_71001e3d54:
  ppuStack_60 = &PTR_FUN_7104f56e28;
  uStack_50 = 0;
  puStack_48 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_60);
  return;
}

