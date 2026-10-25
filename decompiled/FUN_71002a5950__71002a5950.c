// addr:      71002a5950
// offset:    0x2a5950
// name:      FUN_71002a5950
// mangled:   
// signature: undefined FUN_71002a5950(void)


void FUN_71002a5950(long param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined1 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uStack_74;
  int aiStack_70 [6];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar14 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar14 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar4 == 0) {
    aiStack_70[0] = -0x7ffefffc;
LAB_71002a5a20:
    FUN_71001b4200((undefined4 *)&uStack_58,aiStack_70);
  }
  else if (*(int *)(param_1 + 0xd4) == 2) {
    puVar13 = *(undefined1 **)(param_1 + 0xb0);
    plVar14 = (long *)(param_1 + 0xa8);
    if (puVar13 < *(undefined1 **)(param_1 + 0xb8)) {
      *puVar13 = 0;
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
      iVar1 = *(int *)(param_1 + 0x150);
    }
    else {
      lVar16 = *plVar14;
      lVar4 = (long)puVar13 - lVar16;
      uVar15 = lVar4 + 1;
      if ((long)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar7 = (long)*(undefined1 **)(param_1 + 0xb8) - lVar16;
      if (uVar7 < 0x3fffffffffffffff) {
        uVar7 = uVar7 * 2;
        if (uVar15 <= uVar7) {
          uVar15 = uVar7;
        }
        if (uVar15 != 0) goto LAB_71002a5aa4;
        puVar8 = (undefined8 *)0x0;
      }
      else {
        uVar15 = 0x7fffffffffffffff;
LAB_71002a5aa4:
        puVar8 = FUN_71001b1820(uVar15);
      }
      puVar12 = (undefined1 *)((long)puVar8 + lVar4);
      puVar10 = puVar12 + 1;
      *puVar12 = 0;
      puVar5 = *(undefined1 **)(param_1 + 0xa8);
      puVar11 = *(undefined1 **)(param_1 + 0xb0);
      if (puVar11 != puVar5) {
        lVar4 = lVar4 - (long)puVar11;
        puVar13 = (undefined1 *)((long)puVar8 + (long)(puVar13 + (-1 - lVar16)));
        do {
          puVar11 = puVar11 + -1;
          *puVar13 = *puVar11;
          puVar13 = puVar13 + -1;
        } while (puVar5 != puVar11);
        puVar12 = puVar5 + lVar4;
        puVar5 = (undefined1 *)*plVar14;
        puVar12 = (undefined1 *)((long)puVar8 + (long)puVar12);
      }
      *(undefined1 **)(param_1 + 0xa8) = puVar12;
      *(undefined1 **)(param_1 + 0xb0) = puVar10;
      *(ulong *)(param_1 + 0xb8) = (long)puVar8 + uVar15;
      if (puVar5 != (undefined1 *)0x0) {
        FUN_71001b1870((long)puVar5);
      }
      iVar1 = *(int *)(param_1 + 0x150);
    }
    if (0x12a < iVar1 - 1U) {
      aiStack_70[0] = -0x7ffaffe8;
      if (iVar1 != 0x194) {
        if ((iVar1 == 500) || (iVar1 == 0x199)) {
          aiStack_70[0] = -0x7ffaffe7;
        }
        else {
          aiStack_70[0] = -0x7ffaffe6;
        }
      }
      goto LAB_71002a5a20;
    }
    lVar4 = *(long *)(param_1 + 0x1a0);
    uVar2 = FUN_71002ac4c0(lVar4,plVar14);
    if ((uVar2 & 1) == 0) {
      aiStack_70[0] = -0x7f8dfffd;
      FUN_71001b4200((undefined4 *)&uStack_58,aiStack_70);
    }
    else {
      FUN_71002a9850((undefined4 *)&uStack_58,*(long *)(lVar4 + 8));
    }
    pcVar9 = FUN_710170d030;
    if ((int)uStack_58 < 0) {
      pcVar9 = (code *)0x0;
    }
    if (pcVar9 != (code *)0x0) {
      uStack_74 = 0x10001;
      FUN_71001b4200(aiStack_70,&uStack_74);
      piVar6 = aiStack_70;
      goto LAB_71002a5a48;
    }
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 0x118);
    uStack_50 = *(undefined8 *)(param_1 + 0x120);
    uStack_48 = *(undefined8 *)(param_1 + 0x128);
  }
  piVar6 = (int *)&uStack_58;
LAB_71002a5a48:
  FUN_71002a4b30(param_1,piVar6);
  return;
}

