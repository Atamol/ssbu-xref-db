// addr:      7102a7d870
// offset:    0x2a7d870
// name:      FUN_7102a7d870
// mangled:   
// signature: undefined __cdecl FUN_7102a7d870(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102a7d870(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  long ****pppplVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long ***local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pppplVar6 = &local_a0;
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar7 = (long *)**(long **)(param_1[0x60] + 0x18);
  while ((*(ulong *)(*plVar7 + 0xa0) & 0xffffffffff) != 0x7b569df99) {
    plVar7 = plVar7 + 1;
  }
  puVar14 = *(undefined8 **)(*plVar7 + 0x130);
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  pcVar5 = "IPP0007";
  puVar1 = (undefined8 *)*puVar14;
  puVar14 = (undefined8 *)puVar14[1];
  if (DAT_71052c51ba == '\0') {
    FUN_71025f55b0(puVar1,puVar14,"IPP0007");
  }
  else {
    FUN_71025f5420(puVar1,puVar14,"IPP0007");
  }
  plVar7 = (long *)FUN_710392e290(0x10,0x40,(long ****)pcVar5,(byte ****)param_4,(long ****)param_5,
                                  param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_40 = local_40 & 0xffffffff00000000;
      local_a0 = (long ***)&DAT_00000040;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_40);
      if (((uVar4 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x40,pppplVar6,(byte ****)param_4,(long ****)param_5,
                                          param_6,param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102a7d950;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102a7d950:
  plVar10 = (long *)param_1[0x67];
  *plVar7 = (long)(param_1 + 0xe7);
  lVar11 = lRam0000007107459008;
  lVar8 = _ConstantZero;
  uVar2 = 0xffffffff;
  plVar7[5] = (long)plVar10;
  *(undefined4 *)(plVar7 + 6) = 0xffffffff;
  plVar7[3] = lVar11;
  plVar7[2] = lVar8;
  *(undefined2 *)((long)plVar7 + 0x24) = 0;
  *(undefined4 *)(plVar7 + 4) = 0;
  local_a0 = (long ***)0x0;
  lVar8 = *(long *)(*plVar10 + 8);
  if (lVar8 != 0) {
    uVar2 = FUN_7102405040(lVar8,&local_a0,0,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                           param_8);
  }
  *(undefined4 *)(plVar7 + 6) = uVar2;
  uVar4 = param_1[0x158];
  param_1[0x158] = (long)plVar7;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  lVar11 = param_1[0x61];
  local_30 = *(undefined8 *)(lVar11 + 0x150);
  local_28 = *(undefined8 *)(lVar11 + 0x158);
  local_40 = *(ulong *)(lVar11 + 0x140);
  local_38 = *(undefined8 *)(lVar11 + 0x148);
  uVar19 = *(undefined8 *)(lVar11 + 0x160);
  local_60 = *(undefined8 *)(lVar11 + 0x170);
  local_58 = *(undefined8 *)(lVar11 + 0x178);
  local_50 = *(undefined4 *)(lVar11 + 0x180);
  local_78 = *(undefined8 *)(lVar11 + 0x188);
  local_70 = *(undefined8 *)(lVar11 + 400);
  local_68 = *(undefined8 *)(lVar11 + 0x198);
  uVar22 = *(ulong *)(lVar11 + 0x168) & 0xffffffff;
  local_a0 = *(long ****)(lVar11 + 0x200);
  uVar15 = *(undefined8 *)(lVar11 + 0x1a0);
  uVar16 = *(undefined8 *)(lVar11 + 0x1b0);
  uVar17 = *(undefined8 *)(lVar11 + 0x1c0);
  uVar18 = *(undefined8 *)(lVar11 + 0x1d0);
  uVar23 = *(ulong *)(lVar11 + 0x1a8) & 0xffffffff;
  uVar2 = *(undefined4 *)(lVar11 + 0x1e0);
  uVar24 = *(ulong *)(lVar11 + 0x1b8) & 0xffffffff;
  uVar20 = *(undefined8 *)(lVar11 + 0x1f0);
  local_98 = *(undefined8 *)(lVar11 + 0x208);
  local_80 = *(undefined4 *)(lVar11 + 0x220);
  local_88 = *(undefined8 *)(lVar11 + 0x218);
  local_90 = *(undefined8 *)(lVar11 + 0x210);
  uVar25 = *(ulong *)(lVar11 + 0x1c8) & 0xffffffff;
  lVar8 = param_1[0xf2];
  *(undefined8 *)(lVar11 + 0x268) = local_38;
  *(undefined4 *)(lVar11 + 0x270) = (undefined4)local_30;
  *(ulong *)(lVar11 + 0x260) = local_40;
  uVar21 = *(ulong *)(lVar11 + 0x1f8) & 0xffffffff;
  uVar26 = *(ulong *)(lVar11 + 0x1d8) & 0xffffffff;
  *(ulong *)(lVar11 + 0x288) = uVar22;
  *(undefined8 *)(lVar11 + 0x280) = uVar19;
  *(undefined8 *)(lVar11 + 0x298) = local_58;
  *(undefined4 *)(lVar11 + 0x2a0) = local_50;
  *(undefined8 *)(lVar11 + 0x290) = local_60;
  *(float *)(lVar11 + 0x2a4) = (float)(int)lVar8;
  *(undefined1 *)(lVar11 + 0x2b8) = (undefined1)local_68;
  *(ulong *)(lVar11 + 0x2c8) = uVar23;
  *(undefined8 *)(lVar11 + 0x2c0) = uVar15;
  *(ulong *)(lVar11 + 0x2d8) = uVar24;
  *(undefined8 *)(lVar11 + 0x2d0) = uVar16;
  *(undefined8 *)(lVar11 + 0x2b0) = local_70;
  *(ulong *)(lVar11 + 0x2e8) = uVar25;
  *(undefined8 *)(lVar11 + 0x2e0) = uVar17;
  *(ulong *)(lVar11 + 0x2f8) = uVar26;
  *(undefined8 *)(lVar11 + 0x2f0) = uVar18;
  *(undefined8 *)(lVar11 + 0x2a8) = local_78;
  *(undefined4 *)(lVar11 + 0x300) = uVar2;
  *(ulong *)(lVar11 + 0x318) = uVar21;
  *(undefined8 *)(lVar11 + 0x310) = uVar20;
  *(long ****)(lVar11 + 800) = local_a0;
  *(undefined4 *)(lVar11 + 0x340) = local_80;
  *(undefined8 *)(lVar11 + 0x338) = local_88;
  *(undefined8 *)(lVar11 + 0x330) = local_90;
  *(undefined8 *)(lVar11 + 0x328) = local_98;
  lVar12 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0);
  uVar4 = *(ulong *)(lVar11 + 8);
  plVar7 = (long *)(lVar12 + 0x50);
  plVar10 = plVar7;
  if ((long *)*plVar7 != (long *)0x0) {
    plVar9 = (long *)*plVar7;
    plVar10 = (long *)(lVar12 + 0x50);
    do {
      while (plVar13 = plVar9, uVar4 < (ulong)plVar13[4]) {
        plVar9 = (long *)*plVar13;
        plVar10 = plVar13;
        if ((long *)*plVar13 == (long *)0x0) goto LAB_7102a7db58;
      }
      if (uVar4 <= (ulong)plVar13[4]) break;
      plVar10 = plVar13 + 1;
      plVar9 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
LAB_7102a7db58:
  lVar11 = *(long *)(*plVar10 + 0x28);
  *(undefined4 *)(lVar11 + 0xd0) = (undefined4)local_30;
  *(ulong *)(lVar11 + 0xe8) = uVar22;
  *(undefined8 *)(lVar11 + 0xe0) = uVar19;
  *(ulong *)(lVar11 + 0xc0) = local_40;
  *(undefined8 *)(lVar11 + 200) = local_38;
  *(undefined4 *)(lVar11 + 0x100) = local_50;
  *(undefined8 *)(lVar11 + 0xf0) = local_60;
  *(undefined8 *)(lVar11 + 0xf8) = local_58;
  *(float *)(lVar11 + 0x104) = (float)(int)lVar8;
  *(undefined1 *)(lVar11 + 0x118) = (undefined1)local_68;
  *(undefined8 *)(lVar11 + 0x108) = local_78;
  *(undefined8 *)(lVar11 + 0x110) = local_70;
  *(ulong *)(lVar11 + 0x128) = uVar23;
  *(undefined8 *)(lVar11 + 0x120) = uVar15;
  *(ulong *)(lVar11 + 0x138) = uVar24;
  *(undefined8 *)(lVar11 + 0x130) = uVar16;
  *(undefined4 *)(lVar11 + 0x160) = uVar2;
  *(ulong *)(lVar11 + 0x148) = uVar25;
  *(undefined8 *)(lVar11 + 0x140) = uVar17;
  *(ulong *)(lVar11 + 0x158) = uVar26;
  *(undefined8 *)(lVar11 + 0x150) = uVar18;
  *(ulong *)(lVar11 + 0x178) = uVar21;
  *(undefined8 *)(lVar11 + 0x170) = uVar20;
  *(long ****)(lVar11 + 0x180) = local_a0;
  *(undefined4 *)(lVar11 + 0x1a0) = local_80;
  *(undefined8 *)(lVar11 + 400) = local_90;
  *(undefined8 *)(lVar11 + 0x198) = local_88;
  *(undefined8 *)(lVar11 + 0x188) = local_98;
  if (*(ulong *)(lVar12 + 0x20) == uVar4) {
    if ((long *)*plVar7 != (long *)0x0) {
      plVar10 = (long *)*plVar7;
      plVar7 = (long *)(lVar12 + 0x50);
      do {
        while (plVar9 = plVar10, uVar4 < (ulong)plVar9[4]) {
          plVar10 = (long *)*plVar9;
          plVar7 = plVar9;
          if ((long *)*plVar9 == (long *)0x0) goto LAB_7102a7dc18;
        }
        if (uVar4 <= (ulong)plVar9[4]) break;
        plVar7 = plVar9 + 1;
        plVar10 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
LAB_7102a7dc18:
    plVar10 = *(long **)(*(long *)(*plVar7 + 0x28) + 0x1d0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(*plVar10 + 0x30))(plVar10,*(long *)(*plVar7 + 0x28) + 0xc0);
  }
  return;
}

