// addr:      7101c29e10
// offset:    0x1c29e10
// name:      FUN_7101c29e10
// mangled:   
// signature: undefined __cdecl FUN_7101c29e10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c29e10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    lVar6 = *(long *)(param_1 + 0x58);
    lVar9 = *(long *)(param_1 + 0x60);
    if (lVar9 != lVar6) {
      uVar13 = 0;
      do {
        if (uVar13 != 0) {
          plVar10 = *(long **)(param_1 + 0x40);
          lVar11 = *(long *)*plVar10;
          *(undefined4 *)((long *)*plVar10 + 2) = 0;
          plVar7 = *(long **)(lVar11 + 0x10);
          *plVar7 = lVar11;
          *(undefined4 *)(plVar7 + 1) = 0x48;
          lVar6 = *(long *)(lVar11 + 0x10);
          *(long *)(lVar11 + 0x10) = lVar6 + 0x10;
          lVar9 = *(long *)(*(long *)(lVar11 + 0x18) + 200);
          *(long *)(lVar11 + 0x10) = lVar6;
          if (lVar9 == lVar11) {
            lVar6 = *(long *)(*(long *)(lVar11 + 0x18) + 0x40);
            if (*(uint *)(lVar6 + 0xc) < 2) {
              plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                               ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f)
                                              ) & 2) * 0x20);
              do {
                if (((int)plVar7[3] == 0x13) && (plVar4 = plVar7, plVar7[2] == 2)) break;
                piVar1 = (int *)((long)plVar7 + 0x1c);
                plVar7 = plVar7 + (long)*piVar1 * 4;
                plVar4 = &DAT_7104862960;
              } while (*piVar1 != 0);
            }
            else {
              plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
            }
            param_3 = (long ****)"get_stage_on_off";
            FUN_71038f4d40(lVar11,plVar4,"get_stage_on_off");
          }
          else {
            FUN_71038f4b20(lVar11,"get_stage_on_off");
            FUN_71038f4fc0(lVar11,-2);
          }
          puVar8 = (undefined8 *)(*(long *)(lVar11 + 0x10) + -0x10);
          if ((puVar8 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar11 + 0x10) + -8) & 0xf) != 6)
             ) {
            iVar2 = 0;
            *(undefined8 **)(lVar11 + 0x10) = puVar8;
          }
          else {
            lVar6 = *(long *)*plVar10;
            plVar7 = *(long **)(lVar6 + 0x10);
            *plVar7 = (long)(int)uVar13;
            *(undefined4 *)(plVar7 + 1) = 0x13;
            *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 0x10;
            *(int *)(*plVar10 + 0x10) = *(int *)(*plVar10 + 0x10) + 1;
            iVar2 = FUN_7103377130(plVar10,1,param_3,param_4,param_5,param_6,param_7,param_8);
          }
          if ((ulong)(*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar12 = *(ulong *)(*(long *)(param_1 + 0x58) + uVar13 * 8);
          lVar6 = *(long *)(DAT_710532f730 + 8);
          uVar3 = FUN_71032b1e40(*(long *)(lVar6 + 0x178),uVar12);
          if (-1 < (int)uVar3) {
            uVar3 = FUN_71032b1e40(*(long *)(lVar6 + 0x178),uVar12);
            lVar6 = param_1 + (uVar3 >> 5 & 0x7ffffff) * 4;
            uVar5 = 1 << (ulong)((uint)uVar3 & 0x1f);
            if (iVar2 == 0) {
              uVar5 = *(uint *)(lVar6 + 0x80) & (uVar5 ^ 0xffffffff);
            }
            else {
              uVar5 = *(uint *)(lVar6 + 0x80) | uVar5;
            }
            *(uint *)(lVar6 + 0x80) = uVar5;
          }
          lVar6 = *(long *)(param_1 + 0x58);
          lVar9 = *(long *)(param_1 + 0x60);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulong)(lVar9 - lVar6 >> 3));
    }
  }
  return;
}

