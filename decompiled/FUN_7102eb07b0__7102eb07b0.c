// addr:      7102eb07b0
// offset:    0x2eb07b0
// name:      FUN_7102eb07b0
// mangled:   
// signature: undefined __cdecl FUN_7102eb07b0(long param_1)


/* WARNING: Removing unreachable block (ram,0x007102eb0850) */
/* WARNING: Removing unreachable block (ram,0x007102eb08e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102eb07b0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0xa8) == '\0') goto LAB_7102eb09b8;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  uVar2 = _ConstantZero;
  auVar3._8_8_ = _DAT_7107521008;
  auVar3._0_8_ = _ConstantZero;
  auVar10._8_8_ = _DAT_7107521008;
  auVar10._0_8_ = _ConstantZero;
  *(undefined8 *)(param_1 + 0x138) = 0;
  auVar10 = NEON_ext(auVar10,auVar3,8,1);
  uVar9 = (ulong)auVar10._0_4_;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(ulong *)(param_1 + 0x278) = uVar9;
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  *(ulong *)(param_1 + 0x38) = uVar9;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(ulong *)(param_1 + 0x128) = uVar9;
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  if (((undefined8 *)(param_1 + 0x148) != &local_38) &&
     (lVar8 = *(long *)(param_1 + 0x158), lVar8 != 0)) {
    lVar7 = *(long *)(param_1 + 0x148);
    plVar1 = *(long **)(param_1 + 0x150);
    *plVar1 = lVar7;
    *(long **)(lVar7 + 8) = plVar1;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1b0) = 0xffffffff;
  uVar2 = _ConstantZero;
  auVar5._8_8_ = _DAT_7107521008;
  auVar5._0_8_ = _ConstantZero;
  auVar4._8_8_ = _DAT_7107521008;
  auVar4._0_8_ = _ConstantZero;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  auVar10 = NEON_ext(auVar4,auVar5,8,1);
  *(ulong *)(param_1 + 0x1c8) = (ulong)auVar10._0_4_;
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  if (((undefined8 *)(param_1 + 0x1e8) != &local_38) &&
     (lVar8 = *(long *)(param_1 + 0x1f8), lVar8 != 0)) {
    lVar7 = *(long *)(param_1 + 0x1e8);
    plVar1 = *(long **)(param_1 + 0x1f0);
    *plVar1 = lVar7;
    *(long **)(lVar7 + 8) = plVar1;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  lVar8 = *(long *)(param_1 + 0x268);
  plVar1 = (long *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x250) = 0xffffffff;
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
    }
    if (*(long *)(lVar8 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
    }
    if (*(char *)(lVar8 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
    }
  }
  FUN_7102610070(*plVar1,(byte *)"reshiram_Landing");
  lVar8 = *plVar1;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar8 + 0xd8);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x22) != '\0')) {
      *(undefined1 *)(lVar7 + 0x22) = 0;
      lVar8 = *plVar1;
      if (lVar8 == 0) goto LAB_7102eb098c;
    }
    FUN_71025ee450(0,*(long **)(lVar8 + 0xd8),1);
  }
LAB_7102eb098c:
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  *(ulong *)(param_1 + 0x28) = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
LAB_7102eb09b8:
  bVar6 = FUN_710260ffb0(*(long *)(param_1 + 0x268));
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x40) = 3;
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}

