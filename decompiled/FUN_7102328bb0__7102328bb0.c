// addr:      7102328bb0
// offset:    0x2328bb0
// name:      FUN_7102328bb0
// mangled:   
// signature: undefined __cdecl FUN_7102328bb0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102328bb0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s1;
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    FUN_71014cff60(*(uint **)(*(long *)(DAT_71052c36c8 + 8) + 8),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar4 = DAT_710532f870;
    if ((*(byte *)(*(long *)(DAT_710532f870 + 8) + 0x10) >> 1 & 1) == 0) {
      plVar3 = (long *)(*(long *)(DAT_710532f870 + 8) + 8);
      *(undefined8 *)(*plVar3 + 0x70) = 1;
      FUN_7101845ea0(plVar3);
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 0x70) = 0;
    }
    *(undefined1 **)(param_1 + 0x148) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x138) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x170) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x160) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x198) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x188) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x1c0) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x1b0) = &DAT_c1ffff0000000000;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined2 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined2 *)(param_1 + 0x144) = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined2 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined2 *)(param_1 + 0x16c) = 0;
    *(undefined1 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined2 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined2 *)(param_1 + 0x194) = 0;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined2 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined2 *)(param_1 + 0x1bc) = 0;
    *(undefined1 *)(param_1 + 0x1d0) = 0;
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0x69ffff0000000000;
    *(undefined8 *)(param_1 + 0x1e0) = 0x69ffff0000000000;
    FUN_7102329f10(param_1);
    FUN_710232a660(param_1,extraout_x1,(undefined **)param_3,param_4,param_5,param_6,param_7,param_8
                  );
    param_2 = extraout_x1_00;
  }
  uVar1 = **(uint **)(*(long *)(DAT_71052c36c8 + 8) + 8);
  if (((uVar1 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x18) <= uVar1)) ||
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar1 * 8 + 4) == '\0')) goto LAB_7102329008;
  uVar1 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar1 * 8);
  if ((uVar1 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar1)) goto LAB_7102329008;
  plVar3 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar1 * 0x18);
  if ((*(char *)((long)plVar3 + 0xc) == '\0' || plVar3 == (long *)0x0) ||
     ((*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar1 * 0x18 + 0xd) != '\x03' ||
      (*plVar3 == 0)))) goto LAB_7102329008;
  plVar3 = (long *)**(undefined8 **)(DAT_710532f7d0 + 8);
  if (plVar3 != (long *)0x0) {
    auVar6 = (**(code **)(*plVar3 + 0x48))(plVar3);
    param_2 = auVar6._8_8_;
    if ((auVar6._0_8_ & 1) == 0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
      param_2 = extraout_x1_01;
    }
  }
  FUN_71014d00f0(*(uint **)(*(long *)(DAT_71052c36c8 + 8) + 8),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar1 = *(uint *)(param_1 + 0xf0);
  __s1 = (char *)(param_1 + 0xf8);
  if (uVar1 < 0xe33b8f27) {
    if (uVar1 == 0x4b905e5c) {
      iVar2 = strcmp(__s1,"UnlockSequenceScene");
      if (iVar2 != 0) goto LAB_7102328e70;
      if (0x12 < *(uint *)(param_1 + 0xdc)) goto LAB_7102329104;
      uVar5 = 5;
      lVar4 = param_1 + (long)(int)*(uint *)(param_1 + 0xdc) * 4;
    }
    else if ((uVar1 == 0xcf91f1af) && (iVar2 = strcmp(__s1,"IngameCallSequenceScene"), iVar2 == 0))
    {
      if (0x12 < *(uint *)(param_1 + 0xdc)) goto LAB_7102329104;
      uVar5 = 4;
      lVar4 = param_1 + (long)(int)*(uint *)(param_1 + 0xdc) * 4;
    }
    else {
LAB_7102328e70:
      if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (((DAT_71053050f0 & 0x7f000000) != 0x7000000) && (DAT_71053050f4 == '\0')) {
        FUN_710178bb40();
        FUN_710179dd10();
        DAT_7105308760 = 0x400000001;
        if (DAT_7105308768 != 1) {
          DAT_7105308768 = 1;
          lVar4 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          if (*(char *)(lVar4 + 0x26a62) == '\0') {
            *(ulong *)(lVar4 + 0x26a90) = *(ulong *)(lVar4 + 0x26a90) | 1;
          }
        }
        if (DAT_71053050f0 == 0x4020300) {
          if (DAT_710530d7d0 != 2) {
            DAT_710530d7d0 = 2;
            goto LAB_7102328f90;
          }
        }
        else if (DAT_71053050f0 == 0x4020200) {
          if (DAT_710530d7d0 != 1) {
            DAT_710530d7d0 = 1;
            goto LAB_7102328f90;
          }
        }
        else if ((DAT_71053050f0 == 0x4020100) && (DAT_710530d7d0 != 0)) {
          DAT_710530d7d0 = 0;
LAB_7102328f90:
          lVar4 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          if (*(char *)(lVar4 + 0x26a62) == '\0') {
            *(ulong *)(lVar4 + 0x26a90) = *(ulong *)(lVar4 + 0x26a90) | 1;
          }
        }
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar1 = *(uint *)(param_1 + 0xdc);
      if (DAT_710530d7d0 == 2) {
        if (0x12 < uVar1) {
LAB_7102329104:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar4 = param_1 + (long)(int)uVar1 * 4;
        uVar5 = 3;
      }
      else {
        if (0x12 < uVar1) goto LAB_7102329104;
        lVar4 = param_1 + (long)(int)uVar1 * 4;
        uVar5 = 2;
      }
    }
  }
  else if (uVar1 == 0xff126b7a) {
    iVar2 = strcmp(__s1,"CharaSelectScene");
    if (iVar2 != 0) goto LAB_7102328e70;
    if (0x12 < *(uint *)(param_1 + 0xdc)) goto LAB_7102329104;
    uVar5 = 3;
    lVar4 = param_1 + (long)(int)*(uint *)(param_1 + 0xdc) * 4;
  }
  else {
    if ((uVar1 != 0xe33b8f27) || (iVar2 = strcmp(__s1,"StageSelectScene"), iVar2 != 0))
    goto LAB_7102328e70;
    if (0x12 < *(uint *)(param_1 + 0xdc)) goto LAB_7102329104;
    uVar5 = 2;
    lVar4 = param_1 + (long)(int)*(uint *)(param_1 + 0xdc) * 4;
  }
  *(undefined4 *)(lVar4 + 0x90) = uVar5;
LAB_7102329008:
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0x811c9dc5;
  return;
}

