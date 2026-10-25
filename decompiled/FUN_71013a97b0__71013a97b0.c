// addr:      71013a97b0
// offset:    0x13a97b0
// name:      FUN_71013a97b0
// mangled:   
// signature: undefined __cdecl FUN_71013a97b0(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71013a97b0(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  *(undefined8 *)(param_1 + 0x250) = 0;
  uVar4 = _ConstantZero;
  auVar1._8_8_ = _DAT_7107521008;
  auVar1._0_8_ = _ConstantZero;
  auVar8._8_8_ = _DAT_7107521008;
  auVar8._0_8_ = _ConstantZero;
  auVar8 = NEON_ext(auVar8,auVar1,8,1);
  uVar7 = (ulong)auVar8._0_4_;
  *(ulong *)(param_1 + 0x248) = uVar7;
  *(undefined8 *)(param_1 + 0x240) = uVar4;
  uVar3 = uRam0000007107459008;
  uVar2 = _ConstantZero;
  lVar6 = 0x238;
  *(undefined1 *)(param_1 + 0x221) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x261) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined1 *)(param_1 + 0x2a1) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined1 *)(param_1 + 0x2e1) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x321) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined1 *)(param_1 + 0x361) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x238) = uVar3;
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  *(undefined8 *)(param_1 + 0x278) = uVar3;
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  *(ulong *)(param_1 + 0x288) = uVar7;
  *(undefined8 *)(param_1 + 0x280) = uVar4;
  *(undefined1 *)(param_1 + 0x3a1) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  *(ulong *)(param_1 + 0x2c8) = uVar7;
  *(undefined8 *)(param_1 + 0x2c0) = uVar4;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = uVar3;
  *(undefined8 *)(param_1 + 0x2f0) = uVar2;
  *(ulong *)(param_1 + 0x308) = uVar7;
  *(undefined8 *)(param_1 + 0x300) = uVar4;
  *(undefined1 *)(param_1 + 0x3e1) = 0;
  *(undefined8 *)(param_1 + 0x338) = uVar3;
  *(undefined8 *)(param_1 + 0x330) = uVar2;
  *(ulong *)(param_1 + 0x348) = uVar7;
  *(undefined8 *)(param_1 + 0x340) = uVar4;
  *(undefined8 *)(param_1 + 0x378) = uVar3;
  *(undefined8 *)(param_1 + 0x370) = uVar2;
  *(ulong *)(param_1 + 0x388) = uVar7;
  *(undefined8 *)(param_1 + 0x380) = uVar4;
  *(undefined8 *)(param_1 + 0x3b8) = uVar3;
  *(undefined8 *)(param_1 + 0x3b0) = uVar2;
  *(ulong *)(param_1 + 0x3c8) = uVar7;
  *(undefined8 *)(param_1 + 0x3c0) = uVar4;
  *(undefined8 *)(param_1 + 0x3f8) = uVar3;
  *(undefined8 *)(param_1 + 0x3f0) = uVar2;
  *(ulong *)(param_1 + 0x408) = uVar7;
  *(undefined8 *)(param_1 + 0x400) = uVar4;
  do {
    FUN_710377a280(*(long *)(*(long *)(param_1 + 8) + 0x80) + lVar6 + 8,
                   (byte *)"mel_homerun_distance_difference_n",2);
    lVar5 = **(long **)(*(long *)(*(long *)(param_1 + 8) + 0x80) + lVar6);
    if (lVar5 != 0) {
      uVar7 = (ulong)_ConstantZero >> 0x20;
      *(float *)(lVar5 + 0x30) = (float)_ConstantZero + -960.0;
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
      *(float *)(lVar5 + 0x34) = 540.0 - (float)uVar7;
      lVar5 = **(long **)(*(long *)(*(long *)(param_1 + 8) + 0x80) + lVar6);
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
      }
    }
    lVar6 = lVar6 + 0x40;
  } while (lVar6 != 0x338);
  return;
}

