// addr:      7101e55e00
// offset:    0x1e55e00
// name:      FUN_7101e55e00
// mangled:   
// signature: undefined __cdecl FUN_7101e55e00(long param_1)


void FUN_7101e55e00(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  uVar2 = *(uint *)(*DAT_710532a860 + 0x1c);
  iVar4 = FUN_71025135b0(uVar2);
  if (iVar4 == 0) {
    if (2 < uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) + (ulong)uVar2 * 0x3d700 +
                     0x3d6f8);
    if ((uVar2 >> 1 & 1) + (uVar2 >> 2 & 1) + (uVar2 >> 3 & 1) != 0) goto LAB_7101e55f2c;
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x1b8);
    if (lVar8 != 0) {
      lVar1 = *(long *)(param_1 + 0x28) + 0x1b8;
      lVar7 = lVar1;
      do {
        if (3 < *(int *)(lVar8 + 0x20)) {
          lVar7 = lVar8;
        }
        lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < 4) * 8);
      } while (lVar8 != 0);
      if (((lVar7 != lVar1) && (*(int *)(lVar7 + 0x20) < 5)) &&
         (plVar9 = *(long **)(lVar7 + 0x28), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x1f8))(plVar9,uVar2 & 1);
        (**(code **)(*plVar9 + 0x388))(plVar9,(uVar2 & 1) == 0,0);
      }
    }
    if ((uVar2 & 1) == 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042b497a);
      bVar3 = 0;
      goto LAB_7101e55fc0;
    }
  }
  else {
LAB_7101e55f2c:
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x1b8);
    if (lVar8 != 0) {
      lVar1 = *(long *)(param_1 + 0x28) + 0x1b8;
      lVar7 = lVar1;
      do {
        if (3 < *(int *)(lVar8 + 0x20)) {
          lVar7 = lVar8;
        }
        lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < 4) * 8);
      } while (lVar8 != 0);
      if (((lVar7 != lVar1) && (*(int *)(lVar7 + 0x20) < 5)) &&
         (plVar9 = *(long **)(lVar7 + 0x28), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x1f8))(plVar9,1);
        (**(code **)(*plVar9 + 0x388))(plVar9,0,0);
      }
    }
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710433a746);
  bVar3 = 1;
LAB_7101e55fc0:
  iVar4 = FUN_7102513670(*(uint *)(*DAT_710532a860 + 0x1c));
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x1b8);
  if (lVar8 != 0) {
    lVar1 = *(long *)(param_1 + 0x28) + 0x1b8;
    lVar7 = lVar1;
    do {
      if (4 < *(int *)(lVar8 + 0x20)) {
        lVar7 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < 5) * 8);
    } while (lVar8 != 0);
    if (((lVar7 != lVar1) && (*(int *)(lVar7 + 0x20) < 6)) &&
       (plVar9 = *(long **)(lVar7 + 0x28), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x1f8))(plVar9,iVar4 != 0);
      (**(code **)(*plVar9 + 0x388))(plVar9,iVar4 == 0,0);
    }
  }
  if (iVar4 == 0) {
    pcVar5 = "shop_hide";
  }
  else {
    pcVar5 = "shop_show";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),(long)pcVar5);
  if ((bool)(*(int *)(param_1 + 400) == 4 & (bVar3 ^ 1))) {
    uVar6 = 5;
  }
  else {
    if (iVar4 != 0) {
      return;
    }
    if (*(int *)(param_1 + 400) != 5) {
      return;
    }
    uVar6 = 4;
  }
  *(undefined4 *)(param_1 + 400) = uVar6;
  return;
}

