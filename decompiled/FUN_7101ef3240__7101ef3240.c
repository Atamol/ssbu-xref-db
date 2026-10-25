// addr:      7101ef3240
// offset:    0x1ef3240
// name:      FUN_7101ef3240
// mangled:   
// signature: undefined __cdecl FUN_7101ef3240(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ef3240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined **local_50;
  long *local_48;
  
  bVar3 = *(byte *)(*DAT_7105328e18 + 0x3a7);
  if (*(int *)((long)param_1 + 0x24c) == 0) {
    FUN_7103776910(&local_50,(long)(param_1 + 0x4b),(long ****)"set_part_result_help_l",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    plVar4 = local_48;
    lVar8 = *local_48;
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar3;
    }
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar4 == (long *)0x0) {
      return;
    }
    FUN_710392eb40((ulong)plVar4);
    return;
  }
  lVar8 = *(long *)(**(long **)*param_1 + 0x600);
  if (bVar3 == 0) {
    if (*(char *)(lVar8 + 0x4aa) != '\0') goto LAB_7101ef330c;
  }
  else if (*(char *)(lVar8 + 0x4aa) != '\0') {
    if ((*(byte *)(lVar8 + 0x1b8) >> 1 & 1) != 0) {
      if (0x11 < *(int *)((long)param_1 + 0x244)) {
        return;
      }
      uVar1 = *(int *)((long)param_1 + 0x244) + 1;
      *(uint *)((long)param_1 + 0x244) = uVar1;
      if (0x12 < uVar1) goto LAB_7101ef3450;
      lVar8 = (long)param_1 + (long)(int)uVar1 * 4;
      uVar9 = 0x17;
      goto LAB_7101ef33f4;
    }
LAB_7101ef330c:
    if ((*(byte *)(lVar8 + 0x1b0) >> 1 & 1) != 0) {
      if (0x11 < *(int *)((long)param_1 + 0x244)) {
        return;
      }
      uVar1 = *(int *)((long)param_1 + 0x244) + 1;
      *(uint *)((long)param_1 + 0x244) = uVar1;
      if (0x12 < uVar1) goto LAB_7101ef3450;
      lVar8 = (long)param_1 + (long)(int)uVar1 * 4;
      uVar9 = 0x16;
      goto LAB_7101ef33f4;
    }
  }
  uVar1 = (*(uint **)(param_1[0x4e] + 8))[0x7e];
  bVar5 = FUN_7101f06470(*(uint **)(param_1[0x4e] + 8),0);
  uVar2 = (*(uint **)(param_1[0x4f] + 8))[0x7e];
  bVar6 = FUN_7101f06470(*(uint **)(param_1[0x4f] + 8),0);
  if (uVar1 != 0xd) {
    return;
  }
  if (uVar2 != 0xd) {
    return;
  }
  *(undefined1 *)(*DAT_7105328e18 + 0x3a7) = 0;
  if (!bVar5 && !bVar6) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_710530a976 != '\0') {
      if (*(int *)((long)param_1 + 0x24c) < 0x3d) {
        return;
      }
      if (0x12 < *(uint *)((long)param_1 + 0x244)) goto LAB_7101ef3450;
      lVar8 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x244) * 4;
      uVar9 = 9;
      goto LAB_7101ef33f4;
    }
  }
  FUN_71037760f0(**(long **)*param_1,0);
  if (0x12 < *(uint *)((long)param_1 + 0x244)) {
LAB_7101ef3450:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar8 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x244) * 4;
  uVar9 = 10;
LAB_7101ef33f4:
  *(undefined4 *)(lVar8 + 0x1f8) = uVar9;
  return;
}

