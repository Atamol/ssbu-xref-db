// addr:      71013a9650
// offset:    0x13a9650
// name:      FUN_71013a9650
// mangled:   
// signature: undefined __cdecl FUN_71013a9650(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71013a9650(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar4 = _ConstantZero;
  auVar1._8_8_ = _DAT_7107521008;
  auVar1._0_8_ = _ConstantZero;
  auVar8._8_8_ = _DAT_7107521008;
  auVar8._0_8_ = _ConstantZero;
  auVar8 = NEON_ext(auVar8,auVar1,8,1);
  uVar7 = (ulong)auVar8._0_4_;
  *(ulong *)(param_1 + 0x48) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar3 = uRam0000007107459008;
  uVar2 = _ConstantZero;
  lVar6 = 0x218;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x161) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(ulong *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined1 *)(param_1 + 0x1a1) = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(ulong *)(param_1 + 200) = uVar7;
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  *(ulong *)(param_1 + 0x108) = uVar7;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  *(undefined1 *)(param_1 + 0x1e1) = 0;
  *(undefined8 *)(param_1 + 0x138) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  *(ulong *)(param_1 + 0x148) = uVar7;
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  *(ulong *)(param_1 + 0x188) = uVar7;
  *(undefined8 *)(param_1 + 0x180) = uVar4;
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  *(ulong *)(param_1 + 0x1c8) = uVar7;
  *(undefined8 *)(param_1 + 0x1c0) = uVar4;
  *(undefined8 *)(param_1 + 0x1f8) = uVar3;
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  *(ulong *)(param_1 + 0x208) = uVar7;
  *(undefined8 *)(param_1 + 0x200) = uVar4;
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
  } while (lVar6 != 0x318);
  return;
}

