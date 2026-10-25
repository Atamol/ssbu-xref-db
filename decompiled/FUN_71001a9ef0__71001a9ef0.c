// addr:      71001a9ef0
// offset:    0x1a9ef0
// name:      FUN_71001a9ef0
// mangled:   
// signature: undefined FUN_71001a9ef0(void)


undefined8 FUN_71001a9ef0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  bVar5 = FUN_7100193560(DAT_71052adfc0);
  uVar7 = (uint)bVar5;
  if (0x1f < bVar5) {
    return 1;
  }
  if (*(short *)(param_1 + 0x58) != 0) {
    uVar15 = 0;
    bVar3 = true;
    do {
      if (uVar7 != uVar15) {
        bVar6 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar15);
        bVar4 = *(int *)(*(long *)(param_1 + 0x70) + uVar15 * 4) == 0;
        if (bVar6) {
          bVar4 = !bVar4;
        }
        bVar3 = (bool)(bVar3 & bVar4);
      }
      uVar1 = *(ushort *)(param_1 + 0x58);
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar1);
    if (!bVar3) {
      return 5;
    }
    if (uVar1 != 0) {
      uVar2 = uVar1 * uVar7;
      bVar3 = true;
      uVar14 = 0;
      do {
        uVar15 = (ulong)uVar2;
        plVar10 = (long *)FUN_7100161fa0(DAT_71052add68);
        lVar11 = (**(code **)(*plVar10 + 0x48))(plVar10,uVar14);
        if (((lVar11 == 0) || (*(int *)(lVar11 + 0x48) != 5)) ||
           (iVar8 = FUN_710015e850(lVar11), iVar8 == -1)) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_710015e850(lVar11);
        }
        uVar16 = uVar9;
        if ((uVar7 != uVar14) && (bVar4 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar14), bVar4)) {
          uVar12 = FUN_710019b8b0(lVar11);
          if ((uVar9 & 0xffff) == 0) {
            if (((uVar12 & 1) != 0) ||
               ((lVar13 = FUN_7100193a30(DAT_71052adfc0), lVar13 != 0 &&
                (bVar4 = FUN_71001ad100(lVar13,(uint)*(byte *)(lVar11 + 0x38),uVar7), bVar4)))) {
              uVar16 = 0;
            }
            else {
              bVar3 = false;
              uVar16 = 0;
            }
          }
          else {
            uVar16 = 0;
            if ((uVar12 & 1) == 0) {
              uVar16 = uVar9;
            }
          }
        }
        uVar9 = uVar16 >> 2 & 0x3fff;
        uVar2 = uVar2 + 1;
        if ((uVar16 - 1 & 0xffff) < 3) {
          uVar9 = 1;
        }
        if (0xfe < uVar9) {
          uVar9 = 0xff;
        }
        *(char *)(*(long *)(param_1 + 0x68) + (uVar15 & 0xffff)) = (char)uVar9;
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)(param_1 + 0x58));
      if (!bVar3) {
        return 5;
      }
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71001aa200;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "RelayRouteManageJob::SendRelayRouteDirections";
  return 0;
}

