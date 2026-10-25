// addr:      710020c4e0
// offset:    0x20c4e0
// name:      FUN_710020c4e0
// mangled:   
// signature: undefined __cdecl FUN_710020c4e0(undefined8 * param_1, long param_2)


void FUN_710020c4e0(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020c54c:
    if ((*plVar11 != 0) && (lVar5 = *(long *)(*plVar11 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710020c580;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_710020c54c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710020c54c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710020c580:
  plVar11 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *(long *)(param_2 + 0x140) - *(long *)(param_2 + 0x138);
  if (lVar5 != 0) {
    if ((ulong)(lVar5 >> 2) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar4 = FUN_71001b1820(lVar5);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = (long)puVar4 + (lVar5 >> 2) * 4;
    puVar7 = *(undefined4 **)(param_2 + 0x138);
    puVar1 = *(undefined4 **)(param_2 + 0x140);
    if (puVar7 != puVar1) {
      uVar8 = (long)puVar1 + (-4 - (long)puVar7);
      uVar2 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
      puVar10 = puVar4;
      if ((uVar2 & 3) != 0) {
        lVar5 = -((ulong)uVar2 & 3);
        puVar6 = puVar7;
        puVar9 = puVar4;
        do {
          puVar7 = puVar6 + 1;
          lVar5 = lVar5 + 1;
          puVar10 = (undefined8 *)((long)puVar9 + 4);
          *(undefined4 *)puVar9 = *puVar6;
          puVar6 = puVar7;
          puVar9 = puVar10;
        } while (lVar5 != 0);
      }
      if (0xb < uVar8) {
        do {
          *(undefined4 *)puVar10 = *puVar7;
          *(undefined4 *)((long)puVar10 + 4) = puVar7[1];
          *(undefined4 *)(puVar10 + 1) = puVar7[2];
          puVar6 = puVar7 + 3;
          puVar7 = puVar7 + 4;
          *(undefined4 *)((long)puVar10 + 0xc) = *puVar6;
          puVar10 = puVar10 + 2;
        } while (puVar7 != puVar1);
      }
      param_1[1] = (long)puVar4 + (uVar8 & 0xfffffffffffffffc) + 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00710020c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}

