// addr:      7103349a50
// offset:    0x3349a50
// name:      FUN_7103349a50
// mangled:   
// signature: undefined __cdecl FUN_7103349a50(long param_1, ulong param_2)


/* WARNING: Removing unreachable block (ram,0x007103349cc0) */

void FUN_7103349a50(long param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  byte ****ppppbVar8;
  undefined8 extraout_x1;
  long *********ppppppppplVar9;
  long ****pppplVar10;
  byte ****in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  lVar16 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar16 + 0x128) = 0;
  lVar5 = nn::os::GetSystemTick();
  uVar6 = nn::os::ConvertToTimeSpan(lVar5 - DAT_71074470e8);
  *(undefined2 *)(lVar16 + 0x178) = 0;
  *(undefined8 *)(lVar16 + 0x168) = 0;
  *(undefined8 *)(lVar16 + 0x170) = 0;
  uVar1 = ((long)uVar6 >> 0x20) * 0xe353f7cf + ((uVar6 & 0xffffffff) * 0xe353f7cf >> 0x20);
  lVar12 = (((long)(((long)uVar6 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                   ((uVar6 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
           ((long)uVar6 >> 0x3f)) * 1000;
  lVar5 = *(long *)(lVar16 + 0x130);
  *(long *)(lVar16 + 0x130) = lVar12;
  *(long *)(lVar16 + 0x138) = (lVar12 - lVar5) + *(long *)(lVar16 + 0x138);
  *(undefined1 *)(lVar16 + 0x140) = 1;
  lVar5 = DAT_710532f7f0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar3 = DAT_7105306988._4_4_;
  lVar12 = (long)(int)DAT_7105306988._4_4_;
  *(uint *)(lVar16 + 0x148) = DAT_7105306988._4_4_;
  if (uVar3 < 10) {
    uVar11 = *(undefined4 *)(*(long *)((&DAT_7105339860)[lVar12] + 0x10) + 0x9c);
  }
  else {
    uVar11 = 0;
  }
  *(undefined4 *)(lVar16 + 0x14c) = uVar11;
  *(undefined4 *)(lVar16 + 0x150) = DAT_7105306990._4_4_;
  *(undefined4 *)(lVar16 + 0x154) = (undefined4)DAT_7105306990;
  uVar3 = DAT_71053069a0._4_4_;
  lVar12 = (long)(int)DAT_71053069a0._4_4_;
  *(uint *)(lVar16 + 0x158) = DAT_71053069a0._4_4_;
  if (uVar3 < 10) {
    uVar11 = *(undefined4 *)(*(long *)((&DAT_7105339860)[lVar12] + 0x10) + 0x9c);
  }
  else {
    uVar11 = 0;
  }
  *(undefined4 *)(lVar16 + 0x15c) = uVar11;
  *(undefined4 *)(lVar16 + 0x160) = DAT_71053069a8._4_4_;
  *(undefined4 *)(lVar16 + 0x164) = (undefined4)DAT_71053069a8;
  puVar7 = DAT_7105306980;
  cVar2 = DAT_7105306978._2_1_;
  lVar12 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar3 = FUN_71032632a0(lVar12,(ulong)DAT_7105306980);
  if (cVar2 == '\x02') {
    if ((uVar3 & 1) != 0) {
      puVar7 = FUN_71032631a0(lVar12,0x11b1ccb807);
    }
    ppppbVar8 = DAT_7105306998;
    uVar3 = FUN_71032632a0(lVar12,(ulong)DAT_7105306998);
    if ((uVar3 & 1) != 0) {
      ppppbVar8 = (byte ****)FUN_71032631a0(lVar12,0x11b1ccb807);
    }
    pppplVar10 = (long ****)(ulong)(byte)DAT_71053069a0;
    lVar12 = *(long *)(lVar5 + 8);
  }
  else {
    if ((uVar3 & 1) != 0) {
      puVar7 = FUN_71032631a0(lVar12,0x11b1ccb807);
    }
    lVar12 = *(long *)(lVar5 + 8);
    ppppbVar8 = (byte ****)&DAT_c1ffff0000000000;
    pppplVar10 = (long ****)0x0;
  }
  ppppppppplVar9 = (long *********)(ulong)(byte)DAT_7105306988;
  FUN_71032ebcc0(lVar12,(ulong)puVar7,ppppppppplVar9,ppppbVar8,(ulong)pppplVar10,in_x5,in_x6,in_x7);
  plVar14 = (long *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 0x80);
  lVar15 = *plVar14;
  lVar12 = **(long **)(lVar15 + 0x1b8);
  if (lVar12 != 0) {
    fVar17 = *(float *)(lVar16 + 0x128) * 102.001 + 3.0;
    fVar18 = 3.0;
    if (3.0 <= fVar17) {
      fVar18 = fVar17;
    }
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
    *(float *)(lVar12 + 0x50) = fVar18;
    *(float *)(lVar12 + 0x54) = ABS(*(float *)(lVar12 + 0x54));
    plVar14 = (long *)(*(long *)(*(long *)(lVar5 + 8) + 8) + 0x80);
    lVar15 = *plVar14;
  }
  if (*(char *)(lVar15 + 500) == '\0') {
    uVar3 = 1;
  }
  else {
    uVar3 = *(byte *)(lVar15 + 0x1f6) ^ 1;
  }
  lVar5 = *(long *)(lVar15 + 0x100);
  lVar12 = *(long *)(lVar15 + 0x108);
  uVar1 = 0;
  if (lVar12 - lVar5 != 0) {
    uVar1 = (lVar12 - lVar5 >> 3) * 0x155 - 1;
  }
  uVar6 = *(long *)(lVar15 + 0x120) + *(long *)(lVar15 + 0x118);
  if (uVar1 == uVar6) {
    FUN_7101afbf30((ulong *)(lVar15 + 0xf8),extraout_x1,(long ****)ppppppppplVar9,ppppbVar8,
                   pppplVar10,in_x5,in_x6,in_x7);
    uVar6 = *(long *)(lVar15 + 0x118) + *(long *)(lVar15 + 0x120);
    lVar5 = *(long *)(lVar15 + 0x100);
    lVar12 = *(long *)(lVar15 + 0x108);
  }
  if (lVar12 == lVar5) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar13 = (undefined4 *)(*(long *)(lVar5 + (uVar6 / 0x155) * 8) + (uVar6 % 0x155) * 0xc);
  }
  *puVar13 = 5;
  puVar13[1] = uVar3;
  puVar13[2] = 0;
  *(long *)(lVar15 + 0x120) = *(long *)(lVar15 + 0x120) + 1;
  lVar5 = *plVar14;
  *(undefined4 *)(lVar5 + 0x1ec) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x168),0x71043f05c9);
  **(undefined8 **)(lVar5 + 0x188) = 0;
  *(undefined8 *)(*(long *)(lVar5 + 0x188) + 8) = 0;
  auVar19 = FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x178),0x7104349e99);
  *(undefined4 *)(lVar5 + 0x1e4) = 1;
  if ((param_2 & 1) != 0) {
    FUN_7101791c60(auVar19._0_8_,auVar19._8_8_,(undefined **)ppppppppplVar9,ppppbVar8,pppplVar10,
                   in_x5,in_x6,in_x7);
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar5 = DAT_71052c4c58;
    DAT_7105308760 = 0x400000004;
    if (DAT_7105308768 != 4) {
      DAT_7105308768 = 4;
      lVar12 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      if (*(char *)(lVar12 + 0x26a62) == '\0') {
        *(ulong *)(lVar12 + 0x26a90) = *(ulong *)(lVar12 + 0x26a90) | 1;
      }
    }
    FUN_71016d9c70((undefined8 *)(*(long *)(*(long *)(lVar5 + 8) + 0x88) + 0xa010),4,4);
  }
  if (0x12 < *(uint *)(lVar16 + 0x114)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar16 + 0x114) * 4 + 200) = 1;
  *(undefined8 *)(lVar16 + 0x138) = 0;
  lVar5 = nn::os::GetSystemTick();
  uVar6 = nn::os::ConvertToTimeSpan(lVar5 - DAT_71074470e8);
  *(undefined1 *)(lVar16 + 0x140) = 0;
  uVar1 = ((long)uVar6 >> 0x20) * 0xe353f7cf + ((uVar6 & 0xffffffff) * 0xe353f7cf >> 0x20);
  *(long *)(lVar16 + 0x130) =
       (((long)(((long)uVar6 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
               ((uVar6 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
       ((long)uVar6 >> 0x3f)) * 1000;
  return;
}

