// addr:      71019a8970
// offset:    0x19a8970
// name:      FUN_71019a8970
// mangled:   
// signature: undefined __cdecl FUN_71019a8970(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019a8970(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = DAT_710532f820;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff15c7cc81eb);
    if (bVar2) {
      FUN_71032edf70(*(uint **)(lVar5 + 0x10),0x58ffff15c7cc81eb);
      FUN_71032f1bb0(*(long *)(lVar5 + 8),*(uint **)(lVar5 + 0x10),param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      *(undefined4 *)(*(long *)(lVar5 + 8) + 0x118) = 0;
    }
  }
  else {
    lVar5 = *(long *)(DAT_710532f820 + 8);
    uVar3 = FUN_7101eefe30(*(long *)(*(long *)(lVar5 + 0x110) + 0x80));
    if ((*(int *)(lVar5 + 0xf8) == 0 && (((uint)uVar3 ^ 0xffffffff) & 1) == 0) &&
        *(char *)(lVar5 + 0x142) == '\0') {
      if (*(int *)(*(long *)(DAT_710532f820 + 8) + 0x118) == 2) {
        *(char **)(param_1 + 0x308) = "type_06";
        *(undefined2 *)(param_1 + 800) = 0x100;
        *(char **)(param_1 + 0x310) = "mnu_amiibo_reset_fp_level";
        if (0x12 < *(uint *)(param_1 + 0x2cc)) {
LAB_71019a8b20:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0x12;
        if (0x11 < *(int *)(param_1 + 0x2cc)) {
          return;
        }
        uVar1 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar1;
        if (0x12 < uVar1) goto LAB_71019a8b20;
        *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = 1;
        if (0x11 < *(int *)(param_1 + 0x2cc)) {
          return;
        }
        uVar1 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar1;
        if (0x12 < uVar1) goto LAB_71019a8b20;
        uVar4 = 2;
      }
      else {
        *(char **)(param_1 + 0x308) = "type_05";
        *(undefined2 *)(param_1 + 800) = 0x100;
        *(char **)(param_1 + 0x310) = "mnu_amiibo_reset_fp_level_confirm";
        if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019a8b20;
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xe;
        if (0x11 < *(int *)(param_1 + 0x2cc)) {
          return;
        }
        uVar1 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar1;
        if (0x12 < uVar1) goto LAB_71019a8b20;
        uVar4 = 1;
      }
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = uVar4;
    }
  }
  return;
}

