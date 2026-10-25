// addr:      71019a7b30
// offset:    0x19a7b30
// name:      FUN_71019a7b30
// mangled:   
// signature: undefined __cdecl FUN_71019a7b30(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019a7b30(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  lVar6 = DAT_710532f820;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff1e66c1c705);
    if (bVar2) {
      FUN_71032edf70(*(uint **)(lVar6 + 0x10),0x58ffff1e66c1c705);
      FUN_71032f1bb0(*(long *)(lVar6 + 8),*(uint **)(lVar6 + 0x10),param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      *(undefined4 *)(*(long *)(lVar6 + 8) + 0x118) = 0;
    }
  }
  else {
    lVar6 = *(long *)(DAT_710532f820 + 8);
    uVar4 = FUN_7101eefe30(*(long *)(*(long *)(lVar6 + 0x110) + 0x80));
    if ((*(int *)(lVar6 + 0xf8) == 0 && (((uint)uVar4 ^ 0xffffffff) & 1) == 0) &&
        *(char *)(lVar6 + 0x142) == '\0') {
      if (*(int *)(*(long *)(DAT_710532f820 + 8) + 0x118) == 2) {
        *(undefined4 *)(param_1 + 0x300) = 5;
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        pcVar5 = (char *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
        *(bool *)(param_1 + 0x56a) = *pcVar5 == '\0';
        if (0x12 < *(uint *)(param_1 + 0x2cc)) {
LAB_71019a7d64:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0;
      }
      else {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        if (DAT_7105307d50 != -1) {
          FUN_71032dae00(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
          DAT_7105307d50 = -1;
        }
        *(char **)(param_1 + 0x308) = "type_00";
        *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_help_00";
        *(undefined2 *)(param_1 + 800) = 0;
        if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019a7d64;
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 3;
        if (*(int *)(param_1 + 0x2cc) < 0x12) {
          uVar1 = *(int *)(param_1 + 0x2cc) + 1;
          *(uint *)(param_1 + 0x2cc) = uVar1;
          if (0x12 < uVar1) goto LAB_71019a7d64;
          *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = 1;
        }
      }
    }
  }
  return;
}

