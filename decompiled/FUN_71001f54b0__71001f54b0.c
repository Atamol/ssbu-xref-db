// addr:      71001f54b0
// offset:    0x1f54b0
// name:      FUN_71001f54b0
// mangled:   
// signature: undefined4 __cdecl FUN_71001f54b0(long param_1, undefined1 param_2, undefined1 param_3)


undefined4 FUN_71001f54b0(long param_1,undefined1 param_2,undefined1 param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined2 local_38;
  
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f5524:
    if ((*plVar13 != 0) && (lVar6 = *(long *)(*plVar13 + 0x10), lVar6 != 0)) {
      lVar6 = *(long *)(lVar6 + 0x10);
      goto LAB_71001f5558;
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar5;
    if (uVar4 == 0) goto LAB_71001f5524;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71001f5524;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar6 = 0;
LAB_71001f5558:
  plVar13 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  local_38 = CONCAT11(param_3,param_2);
  lVar6 = FUN_71001f59a0(param_1,&local_38);
  if (lVar6 == 0) {
    uVar12 = 0;
  }
  else {
    puVar2 = *(ushort **)(param_1 + 0x10);
    puVar3 = *(ushort **)(param_1 + 0x18);
    puVar1 = puVar2;
    if ((long)puVar3 - (long)puVar2 != 0) {
      uVar9 = (long)puVar3 - (long)puVar2 >> 4;
      puVar7 = puVar2;
      do {
        uVar11 = uVar9;
        if ((long)uVar9 < 0) {
          uVar11 = uVar9 + 1;
        }
        uVar11 = (long)uVar11 >> 1;
        puVar1 = puVar7 + uVar11 * 8 + 8;
        uVar9 = uVar9 + ~uVar11;
        if (local_38 <= puVar7[uVar11 * 8]) {
          puVar1 = puVar7;
          uVar9 = uVar11;
        }
        puVar7 = puVar1;
      } while (uVar9 != 0);
    }
    puVar7 = puVar1;
    if ((puVar1 != puVar3) && (puVar7 = puVar3, *puVar1 <= local_38)) {
      puVar7 = puVar1;
    }
    if (puVar3 != puVar7) {
      puVar1 = puVar7 + 8;
      if (puVar1 != puVar3) {
        lVar6 = (long)puVar7 - (long)puVar2 >> 4;
        uVar9 = (long)puVar3 + ((-2 - lVar6) * 0x10 - (long)puVar2);
        puVar8 = puVar1;
        puVar10 = puVar7;
        if (((uint)uVar9 >> 4 & 1) == 0) {
          *puVar7 = puVar7[8];
          *(undefined8 *)(puVar2 + lVar6 * 8 + 4) = *(undefined8 *)(puVar7 + 0xc);
          puVar8 = puVar7 + 0x10;
          puVar10 = puVar7 + 8;
        }
        if (0xf < uVar9) {
          do {
            *puVar10 = *puVar8;
            *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar8 + 4);
            puVar10[8] = puVar8[8];
            puVar2 = puVar8 + 0xc;
            puVar8 = puVar8 + 0x10;
            *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)puVar2;
            puVar10 = puVar10 + 0x10;
          } while (puVar8 != puVar3);
        }
        puVar7 = (ushort *)
                 ((long)puVar7 +
                 ((long)puVar3 + (-0x10 - (long)puVar1) & 0xfffffffffffffff0U) + 0x10);
      }
      *(ushort **)(param_1 + 0x18) = puVar7;
    }
    uVar12 = 1;
  }
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return uVar12;
}

