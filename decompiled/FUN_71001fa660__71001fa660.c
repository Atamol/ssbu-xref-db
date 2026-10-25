// addr:      71001fa660
// offset:    0x1fa660
// name:      FUN_71001fa660
// mangled:   
// signature: undefined8 __cdecl FUN_71001fa660(long param_1, uint * param_2)


undefined8 FUN_71001fa660(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if (DAT_7104f561d1 == '\0') {
    puVar3 = *(uint **)(param_1 + 0x2c8);
    puVar5 = *(uint **)(param_1 + 0x2d0);
    if ((long)puVar5 - (long)puVar3 != 0) {
      uVar6 = (long)puVar5 - (long)puVar3 >> 4;
      do {
        while( true ) {
          uVar7 = uVar6;
          if ((long)uVar6 < 0) {
            uVar7 = uVar6 + 1;
          }
          uVar7 = (long)uVar7 >> 1;
          puVar1 = puVar3 + uVar7 * 4;
          if ((ushort)puVar1[1] == (ushort)param_2[1]) break;
          if ((ushort)puVar1[1] < (ushort)param_2[1]) goto LAB_71001fa748;
LAB_71001fa738:
          uVar6 = uVar7;
          if (uVar7 == 0) goto LAB_71001fa75c;
        }
        if (*param_2 <= *puVar1) goto LAB_71001fa738;
LAB_71001fa748:
        puVar3 = puVar1 + 4;
        uVar6 = uVar6 + ~uVar7;
      } while (uVar6 != 0);
    }
LAB_71001fa75c:
    if (puVar3 == puVar5) {
      return 0;
    }
    if ((ushort)param_2[1] == (ushort)puVar3[1]) {
      if (*param_2 < *puVar3) {
        return 0;
      }
    }
    else if ((ushort)param_2[1] < (ushort)puVar3[1]) {
      return 0;
    }
    if (puVar3 == puVar5) {
      return 0;
    }
    return *(undefined8 *)(puVar3 + 2);
  }
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fa6dc:
    if ((*plVar8 == 0) || (lVar4 = *(long *)(*plVar8 + 0x10), lVar4 == 0)) goto LAB_71001fa7b8;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_71001fa6dc;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001fa6dc;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001fa7b8:
    lVar4 = 0;
  }
  plVar8 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  puVar3 = *(uint **)(param_1 + 0x2c8);
  puVar5 = *(uint **)(param_1 + 0x2d0);
  if ((long)puVar5 - (long)puVar3 != 0) {
    uVar6 = (long)puVar5 - (long)puVar3 >> 4;
    do {
      while( true ) {
        uVar7 = uVar6;
        if ((long)uVar6 < 0) {
          uVar7 = uVar6 + 1;
        }
        uVar7 = (long)uVar7 >> 1;
        puVar1 = puVar3 + uVar7 * 4;
        if ((ushort)puVar1[1] == (ushort)param_2[1]) break;
        if ((ushort)puVar1[1] < (ushort)param_2[1]) goto LAB_71001fa820;
LAB_71001fa810:
        uVar6 = uVar7;
        if (uVar7 == 0) goto LAB_71001fa834;
      }
      if (*param_2 <= *puVar1) goto LAB_71001fa810;
LAB_71001fa820:
      puVar3 = puVar1 + 4;
      uVar6 = uVar6 + ~uVar7;
    } while (uVar6 != 0);
  }
LAB_71001fa834:
  if (puVar3 == puVar5) {
    uVar9 = 0;
  }
  else {
    if ((ushort)param_2[1] == (ushort)puVar3[1]) {
      uVar9 = 0;
      if (*param_2 < *puVar3) goto LAB_71001fa874;
    }
    else {
      uVar9 = 0;
      if ((ushort)param_2[1] < (ushort)puVar3[1]) goto LAB_71001fa874;
    }
    uVar9 = 0;
    if (puVar3 != puVar5) {
      uVar9 = *(undefined8 *)(puVar3 + 2);
    }
  }
LAB_71001fa874:
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return uVar9;
}

