// addr:      71001f59a0
// offset:    0x1f59a0
// name:      FUN_71001f59a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001f59a0(long param_1, ushort * param_2)


undefined8 FUN_71001f59a0(long param_1,ushort *param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if (DAT_7104f561d1 == '\0') {
    puVar6 = *(ushort **)(param_1 + 0x10);
    puVar1 = *(ushort **)(param_1 + 0x18);
    if ((long)puVar1 - (long)puVar6 != 0) {
      uVar7 = (long)puVar1 - (long)puVar6 >> 4;
      puVar5 = puVar6;
      do {
        uVar8 = uVar7;
        if ((long)uVar7 < 0) {
          uVar8 = uVar7 + 1;
        }
        uVar8 = (long)uVar8 >> 1;
        puVar6 = puVar5 + uVar8 * 8 + 8;
        uVar7 = uVar7 + ~uVar8;
        if (*param_2 <= puVar5[uVar8 * 8]) {
          puVar6 = puVar5;
          uVar7 = uVar8;
        }
        puVar5 = puVar6;
      } while (uVar7 != 0);
    }
    puVar5 = puVar6;
    if ((puVar6 != puVar1) && (puVar5 = puVar1, *puVar6 <= *param_2)) {
      puVar5 = puVar6;
    }
    if (puVar5 != puVar1) {
      return *(undefined8 *)(puVar5 + 4);
    }
    return 0;
  }
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f5a1c:
    if ((*plVar10 != 0) && (lVar4 = *(long *)(*plVar10 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71001f5ac0;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_71001f5a1c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001f5a1c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71001f5ac0:
  plVar10 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  puVar6 = *(ushort **)(param_1 + 0x10);
  puVar1 = *(ushort **)(param_1 + 0x18);
  if ((long)puVar1 - (long)puVar6 != 0) {
    uVar7 = (long)puVar1 - (long)puVar6 >> 4;
    puVar5 = puVar6;
    do {
      uVar8 = uVar7;
      if ((long)uVar7 < 0) {
        uVar8 = uVar7 + 1;
      }
      uVar8 = (long)uVar8 >> 1;
      puVar6 = puVar5 + uVar8 * 8 + 8;
      uVar7 = uVar7 + ~uVar8;
      if (*param_2 <= puVar5[uVar8 * 8]) {
        puVar6 = puVar5;
        uVar7 = uVar8;
      }
      puVar5 = puVar6;
    } while (uVar7 != 0);
  }
  puVar5 = puVar6;
  if ((puVar6 != puVar1) && (puVar5 = puVar1, *puVar6 <= *param_2)) {
    puVar5 = puVar6;
  }
  if (puVar5 == puVar1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(puVar5 + 4);
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar9;
}

