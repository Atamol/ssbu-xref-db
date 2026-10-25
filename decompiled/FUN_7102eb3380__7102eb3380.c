// addr:      7102eb3380
// offset:    0x2eb3380
// name:      FUN_7102eb3380
// mangled:   
// signature: undefined __cdecl FUN_7102eb3380(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102eb3380(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (*(char *)(param_1 + 0x140) != '\0') {
    *(undefined1 *)(param_1 + 0x140) = 0;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x2c);
    *(ulong *)(param_1 + 0x28) = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x34);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = _ConstantZero;
    auVar2._8_8_ = _DAT_7107521008;
    auVar2._0_8_ = _ConstantZero;
    auVar6._8_8_ = _DAT_7107521008;
    auVar6._0_8_ = _ConstantZero;
    auVar6 = NEON_ext(auVar6,auVar2,8,1);
    *(ulong *)(param_1 + 0x128) = (ulong)auVar6._0_4_;
    *(undefined8 *)(param_1 + 0x120) = uVar1;
    *(ulong *)(param_1 + 0x138) = (ulong)auVar6._0_4_;
    *(undefined8 *)(param_1 + 0x130) = uVar1;
    FUN_7102610070(*(long *)(param_1 + 0x108),(byte *)"zekrom_Landing");
    lVar4 = *(long *)(param_1 + 0x108);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0xd8);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x22) != '\0')) {
        *(undefined1 *)(lVar5 + 0x22) = 0;
        lVar4 = *(long *)(param_1 + 0x108);
        if (lVar4 == 0) goto LAB_7102eb3430;
      }
      FUN_71025ee450(0,*(long **)(lVar4 + 0xd8),1);
    }
  }
LAB_7102eb3430:
  bVar3 = FUN_710260ffb0(*(long *)(param_1 + 0x108));
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x40) = 3;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  return;
}

