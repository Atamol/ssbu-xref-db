// addr:      7101417cc0
// offset:    0x1417cc0
// name:      FUN_7101417cc0
// mangled:   
// signature: undefined __cdecl FUN_7101417cc0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101417cc0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1, iVar4 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_2 = extraout_x1_00;
  }
  if (DAT_71052c51b0 == ' ') {
    FUN_7101416c50(lVar7,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if (*(uint *)(lVar7 + 0xe4) < 0x13) {
    uVar3 = *(uint *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xe4) * 4 + 0x98);
    if (*(uint *)(lVar7 + 0xe8) != uVar3) {
      *(uint *)(lVar7 + 0xf0) = *(uint *)(lVar7 + 0xe8);
      *(uint *)(lVar7 + 0xe8) = uVar3;
      if (4 < uVar3) goto LAB_7101417e78;
      lVar1 = lVar7 + (long)(int)uVar3 * 0x10;
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(lVar7 + 0x30) = uVar2;
      pcVar5 = *(code **)(lVar7 + 0x38);
      uVar6 = *(ulong *)(lVar7 + 0x40) & 1;
      if (uVar6 != 0 || pcVar5 != (code *)0x0) {
        if (uVar6 != 0) {
          pcVar5 = *(code **)(pcVar5 + *(long *)(*(long *)(lVar7 + 0x20) +
                                                ((long)*(ulong *)(lVar7 + 0x40) >> 1)));
        }
        (*pcVar5)();
      }
      *(undefined4 *)(lVar7 + 0xec) = 0;
    }
    if (*(char *)(lVar7 + 0xf4) != '\0') {
      pcVar5 = *(code **)(lVar7 + 0x38);
      uVar6 = *(ulong *)(lVar7 + 0x40) & 1;
      if (uVar6 != 0 || pcVar5 != (code *)0x0) {
        if (uVar6 != 0) {
          pcVar5 = *(code **)(pcVar5 + *(long *)(*(long *)(lVar7 + 0x20) +
                                                ((long)*(ulong *)(lVar7 + 0x40) >> 1)));
        }
        (*pcVar5)();
      }
      *(undefined4 *)(lVar7 + 0xec) = 0;
      *(undefined1 *)(lVar7 + 0xf4) = 0;
    }
    if (*(long *)(lVar7 + 0x20) != 0) {
      pcVar5 = *(code **)(lVar7 + 0x28);
      uVar6 = *(ulong *)(lVar7 + 0x30) & 1;
      if (uVar6 != 0 || pcVar5 != (code *)0x0) {
        if (uVar6 != 0) {
          pcVar5 = *(code **)(pcVar5 + *(long *)(*(long *)(lVar7 + 0x20) +
                                                ((long)*(ulong *)(lVar7 + 0x30) >> 1)));
        }
        (*pcVar5)();
      }
    }
    *(int *)(lVar7 + 0xec) = *(int *)(lVar7 + 0xec) + 1;
    if ((*(char *)(lVar7 + 0x106) != '\0') && (*(char *)(lVar7 + 0x1d0) != '\0')) {
      FUN_710377a280(*(long *)(*(long *)(lVar7 + 8) + 0x80) + 0x68,(byte *)"mel_info_time",2);
      *(undefined1 *)(lVar7 + 0x106) = 0;
    }
    return;
  }
LAB_7101417e78:
                    /* WARNING: Subroutine does not return */
  abort();
}

