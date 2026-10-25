// addr:      7102de8370
// offset:    0x2de8370
// name:      FUN_7102de8370
// mangled:   
// signature: undefined __cdecl FUN_7102de8370(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102de8370(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  
  lVar18 = *(long *)(param_1 + 0x300);
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  *(uint *)(param_1 + 0x780) = param_2;
  FUN_710262bb40(lVar18,uVar2);
  FUN_710262beb0(lVar18,~uVar2);
  uVar4 = (ulong)*(uint *)(param_1 + 0x780);
  lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + uVar4 * 8);
  puVar3 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
  if (puVar3 != (ulong *)(lVar18 + 8)) {
    FUN_7102616cf0(puVar3,*(undefined1 (**) [16])(lVar18 + 8),*(undefined1 (**) [16])(lVar18 + 0x10)
                   ,param_4,param_5,param_6,param_7,param_8);
    uVar4 = (ulong)*(uint *)(param_1 + 0x780);
    lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + uVar4 * 8);
    puVar3 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
  }
  if (puVar3 + 3 != (ulong *)(lVar18 + 0x20)) {
    FUN_7102616cf0(puVar3 + 3,*(undefined1 (**) [16])(lVar18 + 0x20),
                   *(undefined1 (**) [16])(lVar18 + 0x28),param_4,param_5,param_6,param_7,param_8);
    uVar4 = (ulong)*(uint *)(param_1 + 0x780);
  }
  FUN_7102624870(*(long *)(param_1 + 0x308),uVar4);
  FUN_7102624740(*(long *)(param_1 + 0x308),(ulong)*(uint *)(param_1 + 0x780));
  uVar2 = *(uint *)(param_1 + 0x780);
  if (uVar2 < 2) {
    plVar10 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
    plVar13 = (long *)*plVar10;
    plVar10 = (long *)plVar10[1];
    if (plVar13 != plVar10) {
      plVar17 = plVar13;
      do {
        lVar18 = *plVar17;
        uVar8 = (uint)(byte)*(&PTR_s_dyr_redplane_set_710513d730)[(long)(int)uVar2 * 2];
        if (uVar8 == 0) {
          uVar6 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          uVar7 = 0xffffffff;
          pbVar5 = (&PTR_s_dyr_redplane_set_710513d730)[(long)(int)uVar2 * 2];
          do {
            pbVar5 = pbVar5 + 1;
            uVar1 = uVar8 + 0x20;
            if (0x19 < uVar8 - 0x41) {
              uVar1 = uVar8;
            }
            uVar7 = (&DAT_7104754084)[(uVar1 ^ uVar7) & 0xff] ^ uVar7 >> 8;
            uVar8 = (uint)*pbVar5;
            uVar4 = uVar4 + 0x100000000;
          } while (uVar8 != 0);
          uVar6 = (ulong)~uVar7;
          uVar4 = uVar4 & 0xff00000000;
        }
        if ((*(ulong *)(lVar18 + 0xa0) & 0xffffffffff) == (uVar4 | uVar6)) goto LAB_7102de84e0;
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar10);
      lVar18 = 0;
LAB_7102de84e0:
      if (plVar13 != plVar10) {
        do {
          lVar16 = *plVar13;
          uVar8 = (uint)(byte)*(&PTR_s_dyr_redplane_set_710513d730)[(1 - (long)(int)uVar2) * 2];
          if (uVar8 == 0) {
            uVar6 = 0;
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            uVar7 = 0xffffffff;
            pbVar5 = (&PTR_s_dyr_redplane_set_710513d730)[(1 - (long)(int)uVar2) * 2];
            do {
              pbVar5 = pbVar5 + 1;
              uVar1 = uVar8 + 0x20;
              if (0x19 < uVar8 - 0x41) {
                uVar1 = uVar8;
              }
              uVar7 = (&DAT_7104754084)[(uVar1 ^ uVar7) & 0xff] ^ uVar7 >> 8;
              uVar8 = (uint)*pbVar5;
              uVar4 = uVar4 + 0x100000000;
            } while (uVar8 != 0);
            uVar6 = (ulong)~uVar7;
            uVar4 = uVar4 & 0xff00000000;
          }
          if ((*(ulong *)(lVar16 + 0xa0) & 0xffffffffff) == (uVar4 | uVar6)) {
            if (lVar18 == 0) {
              return;
            }
            if (lVar16 == 0) {
              return;
            }
            puVar11 = *(undefined8 **)(lVar18 + 0x130);
            if (puVar11 == (undefined8 *)0x0) {
              return;
            }
            puVar9 = *(undefined8 **)(lVar16 + 0x130);
            if (puVar9 == (undefined8 *)0x0) {
              return;
            }
            puVar14 = (undefined8 *)puVar11[1];
            for (puVar11 = (undefined8 *)*puVar11; puVar11 != puVar14; puVar11 = puVar11 + 1) {
              plVar13 = (long *)*puVar11;
              if ((char)plVar13[4] == '\0') {
                plVar10 = (long *)plVar13[1];
                lVar18 = plVar13[2];
                lVar16 = *plVar13;
                *(undefined1 *)(plVar13 + 4) = 1;
                *plVar10 = lVar16;
                *(long **)(lVar16 + 8) = plVar10;
                *(long *)(lVar18 + 0x30) = *(long *)(lVar18 + 0x30) + -1;
                *plVar13 = 0;
                plVar13[1] = 0;
                puVar15 = *(undefined8 **)(lVar18 + 0x28);
                *plVar13 = lVar18 + 0x20;
                plVar13[1] = (long)puVar15;
                *(long **)(lVar18 + 0x28) = plVar13;
                *puVar15 = plVar13;
                *(long *)(lVar18 + 0x18) = *(long *)(lVar18 + 0x18) + 1;
                iVar12 = 0;
                if (plVar13[3] != 0) {
                  iVar12 = *(int *)(plVar13[3] + 0x110);
                }
                *(int *)(lVar18 + 0x48) = *(int *)(lVar18 + 0x48) + iVar12;
              }
            }
            puVar11 = (undefined8 *)puVar9[1];
            for (puVar9 = (undefined8 *)*puVar9; puVar9 != puVar11; puVar9 = puVar9 + 1) {
              plVar13 = (long *)*puVar9;
              if ((char)plVar13[4] != '\0') {
                plVar10 = (long *)plVar13[1];
                lVar18 = plVar13[2];
                lVar16 = *plVar13;
                *(undefined1 *)(plVar13 + 4) = 0;
                *plVar10 = lVar16;
                *(long **)(lVar16 + 8) = plVar10;
                *(long *)(lVar18 + 0x18) = *(long *)(lVar18 + 0x18) + -1;
                *plVar13 = 0;
                plVar13[1] = 0;
                puVar14 = *(undefined8 **)(lVar18 + 0x40);
                *plVar13 = lVar18 + 0x38;
                plVar13[1] = (long)puVar14;
                *(long **)(lVar18 + 0x40) = plVar13;
                *puVar14 = plVar13;
                *(long *)(lVar18 + 0x30) = *(long *)(lVar18 + 0x30) + 1;
                iVar12 = 0;
                if (plVar13[3] != 0) {
                  iVar12 = *(int *)(plVar13[3] + 0x110);
                }
                *(int *)(lVar18 + 0x48) = *(int *)(lVar18 + 0x48) - iVar12;
              }
            }
            return;
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar10);
      }
    }
  }
  return;
}

