// addr:      7101e722f0
// offset:    0x1e722f0
// name:      FUN_7101e722f0
// mangled:   
// signature: undefined __cdecl FUN_7101e722f0(long param_1, byte param_2, long param_3)


void FUN_7101e722f0(long param_1,byte param_2,long param_3)

{
  char *pcVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  
  cVar5 = *(char *)(param_3 + 9);
  uVar9 = 1;
  if (cVar5 != '\0') {
    uVar9 = 2;
  }
  if ((3 < param_2) || (lVar13 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x210), lVar13 == 0))
  goto LAB_7101e7258c;
  if (cVar5 == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar13 + 8),0x710437ae59);
    lVar6 = *(long *)(*(long *)(param_1 + 0x208) + 0x1b8);
    if (lVar6 != 0) {
      lVar8 = *(long *)(param_1 + 0x208) + 0x1b8;
      lVar10 = lVar8;
      lVar11 = lVar6;
      do {
        if ((int)(uint)param_2 <= *(int *)(lVar11 + 0x20)) {
          lVar10 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < (int)(uint)param_2) * 8);
      } while (lVar11 != 0);
      uVar14 = (uint)param_2;
      if (((lVar10 != lVar8) && (*(int *)(lVar10 + 0x20) <= (int)uVar14)) &&
         (plVar12 = *(long **)(lVar10 + 0x28), plVar12 != (long *)0x0)) {
        (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
        (**(code **)(*plVar12 + 0x388))(plVar12,0,0);
        lVar8 = *(long *)(param_1 + 0x208) + 0x1b8;
        lVar6 = *(long *)(*(long *)(param_1 + 0x208) + 0x1b8);
      }
      lVar10 = lVar8;
      if (lVar6 != 0) {
        do {
          if ((int)uVar14 <= *(int *)(lVar6 + 0x20)) {
            lVar10 = lVar6;
          }
          lVar6 = *(long *)(lVar6 + (ulong)(*(int *)(lVar6 + 0x20) < (int)uVar14) * 8);
        } while (lVar6 != 0);
        if (((lVar10 != lVar8) && (*(int *)(lVar10 + 0x20) <= (int)uVar14)) &&
           (plVar12 = *(long **)(lVar10 + 0x28), plVar12 != (long *)0x0)) {
          (**(code **)(*plVar12 + 0x208))(plVar12,1);
          pcVar7 = *(code **)(*plVar12 + 0x388);
          uVar4 = 0;
          goto LAB_7101e7257c;
        }
      }
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar13 + 8),0x71042e59d7);
    FUN_7103778300(0x3f800000,*(long *)(lVar13 + 8),0x71043ade67);
    FUN_7103778300(0x3f800000,*(long *)(lVar13 + 8),0x7104306de4);
    FUN_7103778300(0x3f800000,*(long *)(lVar13 + 8),0x71043176ce);
    lVar6 = *(long *)(*(long *)(param_1 + 0x208) + 0x1b8);
    if (lVar6 != 0) {
      lVar8 = *(long *)(param_1 + 0x208) + 0x1b8;
      lVar10 = lVar8;
      lVar11 = lVar6;
      do {
        if ((int)(uint)param_2 <= *(int *)(lVar11 + 0x20)) {
          lVar10 = lVar11;
        }
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < (int)(uint)param_2) * 8);
      } while (lVar11 != 0);
      uVar14 = (uint)param_2;
      if (((lVar10 != lVar8) && (*(int *)(lVar10 + 0x20) <= (int)uVar14)) &&
         (plVar12 = *(long **)(lVar10 + 0x28), plVar12 != (long *)0x0)) {
        (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
        (**(code **)(*plVar12 + 0x388))(plVar12,1,0);
        lVar8 = *(long *)(param_1 + 0x208) + 0x1b8;
        lVar6 = *(long *)(*(long *)(param_1 + 0x208) + 0x1b8);
      }
      lVar10 = lVar8;
      if (lVar6 != 0) {
        do {
          if ((int)uVar14 <= *(int *)(lVar6 + 0x20)) {
            lVar10 = lVar6;
          }
          lVar6 = *(long *)(lVar6 + (ulong)(*(int *)(lVar6 + 0x20) < (int)uVar14) * 8);
        } while (lVar6 != 0);
        if (((lVar10 != lVar8) && (*(int *)(lVar10 + 0x20) <= (int)uVar14)) &&
           (plVar12 = *(long **)(lVar10 + 0x28), plVar12 != (long *)0x0)) {
          (**(code **)(*plVar12 + 0x208))(plVar12,0);
          pcVar7 = *(code **)(*plVar12 + 0x388);
          uVar4 = 1;
LAB_7101e7257c:
          (*pcVar7)(plVar12,uVar4,0);
        }
      }
    }
  }
  *(undefined1 *)(lVar13 + 0xf8) = uVar9;
  cVar5 = *(char *)(param_3 + 9);
LAB_7101e7258c:
  if ((cVar5 == '\0') && (param_2 < 4)) {
    lVar13 = param_1 + (ulong)param_2 * 8;
    lVar6 = *(long *)(lVar13 + 0x210);
    if (lVar6 != 0) {
      plVar12 = (long *)(lVar13 + 0x210);
      if (*(int *)(param_3 + 4) == 0) {
        FUN_7103778300(0x3f800000,*(long *)(lVar6 + 8),0x710439b9e1);
        lVar13 = *plVar12;
      }
      else {
        FUN_7103778300(0x3f800000,*(long *)(lVar6 + 8),0x710427f2c1);
        FUN_710377a280(lVar6 + 0x80,(byte *)"cam_shop_item_sale_n",1);
        lVar13 = *plVar12;
      }
      if (lVar13 != 0) {
        bVar3 = *(char *)(param_3 + 8) == '\0';
        pcVar1 = "new_show";
        if (bVar3) {
          pcVar1 = "new_hide";
        }
        puVar2 = &DAT_710429257e;
        if (bVar3) {
          puVar2 = &DAT_71043cd335;
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar13 + 8),(long)pcVar1);
        FUN_7103778300(0x3f800000,*(long *)(lVar13 + 0x38),(long)puVar2);
        if (*plVar12 != 0) {
          FUN_710377a280(*plVar12 + 0x70,(byte *)"cam_shop_item_price_n",1);
          return;
        }
      }
    }
  }
  return;
}

