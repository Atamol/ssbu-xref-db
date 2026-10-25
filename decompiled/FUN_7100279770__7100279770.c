// addr:      7100279770
// offset:    0x279770
// name:      FUN_7100279770
// mangled:   
// signature: undefined FUN_7100279770(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_7100279770(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  uint *puVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *****ppppplVar20;
  ulong uVar21;
  long *plVar22;
  long *******ppppppplVar23;
  long lVar24;
  long *****ppppplVar25;
  long *******ppppppplVar26;
  long lVar27;
  undefined4 uStack_7c;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long lStack_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar8 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar8 == 0) {
    uStack_7c = 0x80010004;
  }
  else {
    if (*(int *)(param_1 + 300) != 2) {
      ppppppplStack_78 = *(long ********)(param_1 + 0x170);
      ppppppplStack_70 = *(long ********)(param_1 + 0x178);
      lStack_68 = *(long *)(param_1 + 0x180);
      goto LAB_7100279be0;
    }
    if (*(char *)(param_1 + 0x110) != '\0') {
      piVar1 = *(int **)(param_1 + 0xf8);
      if (*(long *)(param_1 + 0x100) - (long)piVar1 != 0x18) {
        uStack_7c = 0x80690001;
        goto LAB_7100279bd0;
      }
      pcVar9 = FUN_710170d030;
      if (*piVar1 < 0) {
        pcVar9 = (code *)0x0;
      }
      if (pcVar9 == (code *)0x0) {
        FUN_7100279610(param_1,piVar1);
        return;
      }
    }
    puVar18 = *(undefined8 **)(param_1 + 0xe8);
    if ((puVar18 != (undefined8 *)0x0) && (*(long *)(param_1 + 0xd0) != *(long *)(param_1 + 200))) {
      puVar15 = puVar18 + 1;
      FUN_71036fe0c0(puVar18,(undefined8 *)*puVar15);
      puVar18[2] = 0;
      *puVar18 = puVar15;
      *puVar15 = 0;
      plVar10 = *(long **)(param_1 + 200);
      lVar8 = *plVar10;
      if (lVar8 != plVar10[1]) {
        do {
          plVar19 = *(long **)(param_1 + 0xe8);
          cVar5 = *(char *)(lVar8 + 9);
          uVar4 = *(undefined1 *)(lVar8 + 0x18);
          lVar24 = *(long *)(lVar8 + 0x20);
          uVar3 = *(undefined4 *)(lVar8 + 0x28);
          lVar27 = *(long *)(lVar8 + 0x30);
          plVar17 = plVar19 + 1;
          plVar16 = (long *)*plVar17;
          plVar22 = plVar17;
          if (plVar16 != (long *)0x0) {
            cVar6 = (char)plVar16[4];
            plVar22 = plVar19 + 1;
            while( true ) {
              while (plVar17 = plVar16, cVar5 < cVar6) {
                plVar16 = (long *)*plVar17;
                plVar22 = plVar17;
                if (plVar16 == (long *)0x0) {
                  lVar11 = *plVar17;
                  goto joined_r0x007100279914;
                }
                cVar6 = (char)plVar16[4];
              }
              if (cVar5 <= cVar6) break;
              plVar22 = plVar17 + 1;
              plVar16 = (long *)*plVar22;
              if (plVar16 == (long *)0x0) break;
              cVar6 = (char)plVar16[4];
            }
          }
          lVar11 = *plVar22;
joined_r0x007100279914:
          if (lVar11 == 0) {
            plVar10 = FUN_71001b1820(0x50);
            *(char *)(plVar10 + 4) = cVar5;
            *(undefined1 *)(plVar10 + 6) = uVar4;
            plVar10[7] = lVar24;
            *(undefined4 *)(plVar10 + 8) = uVar3;
            plVar10[9] = lVar27;
            plVar10[5] = (long)&PTR_FUN_710523bc88;
            plVar10[2] = (long)plVar17;
            *plVar10 = 0;
            plVar10[1] = 0;
            *plVar22 = (long)plVar10;
            if (*(long *)*plVar19 != 0) {
              *plVar19 = *(long *)*plVar19;
              plVar10 = (long *)*plVar22;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                      ((long *)plVar19[1],plVar10);
            plVar19[2] = plVar19[2] + 1;
            plVar10 = *(long **)(param_1 + 200);
          }
          lVar8 = lVar8 + 0x38;
        } while (lVar8 != plVar10[1]);
      }
    }
    plVar10 = *(long **)(param_1 + 0xe0);
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      lVar24 = plVar10[1];
      while (lVar24 != lVar8) {
        puVar18 = (undefined8 *)(lVar24 + -0x10);
        lVar24 = lVar24 + -0x18;
        FUN_71036fe0c0(lVar24,(undefined8 *)*puVar18);
      }
      plVar10[1] = lVar8;
      lVar8 = *(long *)(param_1 + 200);
      if (*(long *)(param_1 + 0xd0) != lVar8) {
        uVar21 = 0;
        do {
          plVar10 = (long *)(lVar8 + uVar21 * 0x18);
          ppppppplStack_70 = (long *******)0x0;
          lStack_68 = 0;
          lVar24 = *plVar10;
          ppppppplStack_78 = (long *******)&ppppppplStack_70;
          if (lVar24 != plVar10[1]) {
            do {
              cVar5 = *(char *)(lVar24 + 9);
              uVar4 = *(undefined1 *)(lVar24 + 0x18);
              ppppplVar20 = *(long ******)(lVar24 + 0x20);
              uVar3 = *(undefined4 *)(lVar24 + 0x28);
              ppppplVar25 = *(long ******)(lVar24 + 0x30);
              ppppppplVar23 = (long *******)&ppppppplStack_70;
              ppppppplVar26 = (long *******)&ppppppplStack_70;
              if (ppppppplStack_70 != (long *******)0x0) {
                cVar6 = *(char *)(ppppppplStack_70 + 4);
                ppppppplVar23 = ppppppplStack_70;
                while( true ) {
                  while (cVar5 < cVar6) {
                    ppppppplVar12 = (long *******)*ppppppplVar23;
                    ppppppplVar26 = ppppppplVar23;
                    if (ppppppplVar12 == (long *******)0x0) {
                      pppppplVar13 = *ppppppplVar23;
                      goto joined_r0x007100279aa4;
                    }
                    ppppppplVar23 = ppppppplVar12;
                    cVar6 = *(char *)(ppppppplVar12 + 4);
                  }
                  if (cVar5 <= cVar6) break;
                  ppppppplVar26 = ppppppplVar23 + 1;
                  ppppppplVar12 = (long *******)*ppppppplVar26;
                  if (ppppppplVar12 == (long *******)0x0) break;
                  cVar6 = *(char *)(ppppppplVar12 + 4);
                  ppppppplVar23 = ppppppplVar12;
                }
              }
              pppppplVar13 = *ppppppplVar26;
joined_r0x007100279aa4:
              if (pppppplVar13 == (long ******)0x0) {
                pppppplVar13 = (long ******)FUN_71001b1820(0x50);
                *(char *)(pppppplVar13 + 4) = cVar5;
                *(undefined1 *)(pppppplVar13 + 6) = uVar4;
                pppppplVar13[7] = ppppplVar20;
                *(undefined4 *)(pppppplVar13 + 8) = uVar3;
                pppppplVar13[9] = ppppplVar25;
                pppppplVar13[2] = (long *****)ppppppplVar23;
                pppppplVar13[5] = (long *****)&PTR_FUN_710523bc88;
                *pppppplVar13 = (long *****)0x0;
                pppppplVar13[1] = (long *****)0x0;
                *ppppppplVar26 = pppppplVar13;
                if ((long *******)*ppppppplStack_78 != (long *******)0x0) {
                  pppppplVar13 = *ppppppplVar26;
                  ppppppplStack_78 = (long *******)*ppppppplStack_78;
                }
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          ((long *)ppppppplStack_70,(long *)pppppplVar13);
                lStack_68 = lStack_68 + 1;
                lVar8 = *(long *)(param_1 + 200);
              }
              lVar24 = lVar24 + 0x38;
            } while (lVar24 != *(long *)(lVar8 + uVar21 * 0x18 + 8));
          }
          plVar10 = *(long **)(param_1 + 0xe0);
          if ((long *)plVar10[1] == (long *)plVar10[2]) {
            FUN_710029aa00(plVar10,(long *)&ppppppplStack_78);
          }
          else {
            FUN_7103700640((long *)plVar10[1],(long *)&ppppppplStack_78);
            plVar10[1] = plVar10[1] + 0x18;
          }
          FUN_71036fe0c0(&ppppppplStack_78,ppppppplStack_70);
          lVar8 = *(long *)(param_1 + 200);
          uVar14 = (*(long *)(param_1 + 0xd0) - lVar8 >> 3) * -0x5555555555555555;
          uVar21 = (ulong)((int)uVar21 + 1);
        } while (uVar21 <= uVar14 && uVar14 - uVar21 != 0);
      }
    }
    uStack_7c = 0x10001;
  }
LAB_7100279bd0:
  FUN_71001b4200((undefined4 *)&ppppppplStack_78,&uStack_7c);
LAB_7100279be0:
  FUN_7100279610(param_1,(int *)&ppppppplStack_78);
  return;
}

