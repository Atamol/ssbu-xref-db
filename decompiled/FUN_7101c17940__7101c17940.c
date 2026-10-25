// addr:      7101c17940
// offset:    0x1c17940
// name:      FUN_7101c17940
// mangled:   
// signature: undefined __cdecl FUN_7101c17940(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c17940(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    plVar12 = *(long **)(param_1 + 0x40);
    plVar8 = (long *)*plVar12;
    lVar13 = *plVar8;
    *(undefined4 *)(plVar8 + 2) = 0;
    plVar8 = *(long **)(lVar13 + 0x10);
    *plVar8 = lVar13;
    *(undefined4 *)(plVar8 + 1) = 0x48;
    lVar10 = *(long *)(lVar13 + 0x10);
    *(long *)(lVar13 + 0x10) = lVar10 + 0x10;
    lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 200);
    *(long *)(lVar13 + 0x10) = lVar10;
    if (lVar11 == lVar13) {
      lVar10 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
      if (*(uint *)(lVar10 + 0xc) < 2) {
        plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar8[3] == 0x13) && (plVar6 = plVar8, plVar8[2] == 2)) break;
          piVar1 = (int *)((long)plVar8 + 0x1c);
          plVar8 = plVar8 + (long)*piVar1 * 4;
          plVar6 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar6 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
      }
      param_3 = "get_item_appear";
      FUN_71038f4d40(lVar13,plVar6,"get_item_appear");
    }
    else {
      FUN_71038f4b20(lVar13,"get_item_appear");
      FUN_71038f4fc0(lVar13,-2);
    }
    puVar9 = (undefined8 *)(*(long *)(lVar13 + 0x10) + -0x10);
    if ((puVar9 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar13 + 0x10) + -8) & 0xf) != 6)) {
      uVar2 = 0;
      *(undefined8 **)(lVar13 + 0x10) = puVar9;
    }
    else {
      uVar3 = FUN_7103377130(plVar12,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      uVar2 = (undefined1)uVar3;
    }
    lVar10 = *(long *)(param_1 + 0x50);
    lVar11 = *(long *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x78) = uVar2;
    if (lVar11 != lVar10) {
      uVar15 = 0;
      do {
        if (uVar15 != 0) {
          plVar12 = *(long **)(param_1 + 0x40);
          lVar13 = *(long *)*plVar12;
          *(undefined4 *)((long *)*plVar12 + 2) = 0;
          plVar8 = *(long **)(lVar13 + 0x10);
          *plVar8 = lVar13;
          *(undefined4 *)(plVar8 + 1) = 0x48;
          lVar10 = *(long *)(lVar13 + 0x10);
          *(long *)(lVar13 + 0x10) = lVar10 + 0x10;
          lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 200);
          *(long *)(lVar13 + 0x10) = lVar10;
          if (lVar11 == lVar13) {
            lVar10 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
            if (*(uint *)(lVar10 + 0xc) < 2) {
              plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                               ((ulong)~(uint)(0xffffffffL <<
                                              ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) & 2) * 0x20);
              do {
                if (((int)plVar8[3] == 0x13) && (plVar6 = plVar8, plVar8[2] == 2)) break;
                piVar1 = (int *)((long)plVar8 + 0x1c);
                plVar8 = plVar8 + (long)*piVar1 * 4;
                plVar6 = &DAT_7104862960;
              } while (*piVar1 != 0);
            }
            else {
              plVar6 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
            }
            param_3 = "get_item_on_off";
            FUN_71038f4d40(lVar13,plVar6,"get_item_on_off");
          }
          else {
            FUN_71038f4b20(lVar13,"get_item_on_off");
            FUN_71038f4fc0(lVar13,-2);
          }
          puVar9 = (undefined8 *)(*(long *)(lVar13 + 0x10) + -0x10);
          if ((puVar9 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar13 + 0x10) + -8) & 0xf) != 6)
             ) {
            iVar4 = 0;
            *(undefined8 **)(lVar13 + 0x10) = puVar9;
          }
          else {
            lVar10 = *(long *)*plVar12;
            plVar8 = *(long **)(lVar10 + 0x10);
            *plVar8 = (long)(int)uVar15;
            *(undefined4 *)(plVar8 + 1) = 0x13;
            *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 0x10;
            *(int *)(*plVar12 + 0x10) = *(int *)(*plVar12 + 0x10) + 1;
            iVar4 = FUN_7103377130(plVar12,1,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
          }
          if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar14 = *(ulong *)(*(long *)(param_1 + 0x50) + uVar15 * 8);
          lVar10 = *(long *)(DAT_710532f730 + 8);
          uVar5 = FUN_710327f590(*(long *)(lVar10 + 0x268),uVar14);
          if (-1 < (int)uVar5) {
            uVar5 = FUN_710327f590(*(long *)(lVar10 + 0x268),uVar14);
            lVar10 = param_1 + (uVar5 >> 5 & 0x7ffffff) * 4;
            uVar7 = 1 << (ulong)((uint)uVar5 & 0x1f);
            if (iVar4 == 0) {
              uVar7 = *(uint *)(lVar10 + 0x7c) & (uVar7 ^ 0xffffffff);
            }
            else {
              uVar7 = *(uint *)(lVar10 + 0x7c) | uVar7;
            }
            *(uint *)(lVar10 + 0x7c) = uVar7;
          }
          lVar10 = *(long *)(param_1 + 0x50);
          lVar11 = *(long *)(param_1 + 0x58);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulong)(lVar11 - lVar10 >> 3));
    }
  }
  return;
}

