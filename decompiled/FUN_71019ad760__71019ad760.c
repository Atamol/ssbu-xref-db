// addr:      71019ad760
// offset:    0x19ad760
// name:      FUN_71019ad760
// mangled:   
// signature: undefined __cdecl FUN_71019ad760(long param_1, undefined4 param_2)


void FUN_71019ad760(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  ushort *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  long *plVar14;
  char local_70 [10];
  byte local_66;
  
  *(undefined1 *)(param_1 + 0x56c) = 1;
  switch(param_2) {
  case 0:
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar11 = DAT_710532f7b0;
    iVar3 = DAT_7105307d50;
    lVar13 = *(long *)(DAT_710532f7b0 + 8);
    if (*(char *)(lVar13 + 0x10a4c) != '\0') {
      *(char **)(param_1 + 0x308) = "type_03";
      *(undefined2 *)(param_1 + 800) = 0x100;
      *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_select";
      if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019ae05c;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xc;
      if (*(int *)(param_1 + 0x2cc) < 0x12) {
        uVar7 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar7;
        if (0x12 < uVar7) goto LAB_71019ae05c;
        *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 1;
      }
      uVar12 = *(ushort *)(*(long *)(lVar11 + 8) + 0xa20);
      uVar5 = FUN_710324c970(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),(uint)uVar12);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(char *)*DAT_7105314510 == '\0') {
        lVar11 = *(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x168);
        puVar8 = (ushort *)(lVar11 + 0x58);
        do {
          if (*puVar8 == uVar12) {
            return;
          }
          if (puVar8[1] == uVar12) {
            return;
          }
          if (puVar8[2] == uVar12) {
            return;
          }
          if (puVar8[3] == uVar12) {
            return;
          }
          puVar8 = puVar8 + 4;
        } while (puVar8 != (ushort *)(lVar11 + 0xff8));
      }
      break;
    }
    piVar6 = FUN_71032df050(lVar13,DAT_7105307d50);
    puVar2 = DAT_7105314510;
    if ((*(ushort *)(piVar6 + 4) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x300) = *(ushort *)(piVar6 + 4) >> 6 & 2;
      if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      lVar11 = DAT_710532f7b0;
      pcVar4 = (char *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
      *(bool *)(param_1 + 0x56a) = *pcVar4 == '\0';
      if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019ae05c;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0;
      uVar12 = *(ushort *)(*(long *)(lVar11 + 8) + 0xa20);
      uVar5 = FUN_710324c970(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),(uint)uVar12);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(char *)*DAT_7105314510 == '\0') {
        lVar11 = *(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x168);
        puVar8 = (ushort *)(lVar11 + 0x58);
        do {
          if (*puVar8 == uVar12) {
            return;
          }
          if (puVar8[1] == uVar12) {
            return;
          }
          if (puVar8[2] == uVar12) {
            return;
          }
          if (puVar8[3] == uVar12) {
            return;
          }
          puVar8 = puVar8 + 4;
        } while (puVar8 != (ushort *)(lVar11 + 0xff8));
      }
      break;
    }
    plVar9 = (long *)**(long **)((char *)*DAT_7105314510 + 0x168);
    if (*(char *)*DAT_7105314510 == '\0') {
      plVar14 = (long *)*plVar9;
      if (*(char *)((long)plVar14 + 0x52) != '\0') goto LAB_71019adf80;
LAB_71019adff4:
      uVar7 = *(uint *)(param_1 + 0x2cc);
joined_r0x0071019adffc:
      if (0x12 < uVar7) goto LAB_71019ae05c;
      uVar10 = 9;
    }
    else {
      plVar14 = plVar9 + 1;
      if (*(char *)((long)plVar9 + 0x5a) == '\0') goto LAB_71019adff4;
LAB_71019adf80:
      FUN_71032e2e70((undefined8 *)local_70,lVar13,iVar3);
      bVar1 = *(byte *)((long)plVar14 + 0x3b);
      if (bVar1 != local_66) {
LAB_71019adfe4:
        uVar7 = *(uint *)(param_1 + 0x2cc);
        goto joined_r0x0071019adffc;
      }
      if (bVar1 != 0) {
        uVar5 = 0;
        do {
          if (*(char *)((long)plVar14 + uVar5 + 0x31) != local_70[uVar5]) goto LAB_71019adfe4;
          uVar5 = uVar5 + 1;
        } while (uVar5 < bVar1);
      }
      uVar7 = *(uint *)(param_1 + 0x2cc);
      if (0x12 < uVar7) goto LAB_71019ae05c;
      uVar10 = 10;
    }
    *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = uVar10;
    uVar12 = *(ushort *)(*(long *)(lVar11 + 8) + 0xa20);
    uVar5 = FUN_710324c970(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),(uint)uVar12);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(char *)*puVar2 == '\0') {
      lVar11 = *(long *)**(undefined8 **)((char *)*puVar2 + 0x168);
      puVar8 = (ushort *)(lVar11 + 0x58);
      do {
        if (*puVar8 == uVar12) {
          return;
        }
        if (puVar8[1] == uVar12) {
          return;
        }
        if (puVar8[2] == uVar12) {
          return;
        }
        if (puVar8[3] == uVar12) {
          return;
        }
        puVar8 = puVar8 + 4;
      } while (puVar8 != (ushort *)(lVar11 + 0xff8));
    }
    uVar7 = *(uint *)(param_1 + 0x2cc);
    if (0x11 < (int)uVar7) goto LAB_71019adc5c;
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0x2cc) = uVar7;
    goto joined_r0x0071019ae058;
  default:
    *(char **)(param_1 + 0x308) = "type_00";
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_help_00";
    *(undefined2 *)(param_1 + 800) = 0;
    if (*(uint *)(param_1 + 0x2cc) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 3;
      if (0x11 < *(int *)(param_1 + 0x2cc)) {
        return;
      }
      uVar7 = *(int *)(param_1 + 0x2cc) + 1;
      *(uint *)(param_1 + 0x2cc) = uVar7;
      if (uVar7 < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 1;
        if (0x11 < *(int *)(param_1 + 0x2cc)) {
          return;
        }
        uVar7 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar7;
        if (uVar7 < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 2;
          if (0x11 < *(int *)(param_1 + 0x2cc)) {
            return;
          }
          uVar7 = *(int *)(param_1 + 0x2cc) + 1;
          *(uint *)(param_1 + 0x2cc) = uVar7;
          if (uVar7 < 0x13) {
            lVar11 = param_1 + (long)(int)uVar7 * 4;
            uVar10 = 0x18;
            goto LAB_71019adde4;
          }
        }
      }
    }
    goto LAB_71019ae05c;
  case 5:
    *(char **)(param_1 + 0x308) = "type_00";
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_help_00";
    *(undefined2 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x300) = 2;
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar11 = DAT_710532f7b0;
    pcVar4 = (char *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    *(bool *)(param_1 + 0x56a) = *pcVar4 == '\0';
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 0;
    if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019ae05c;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0;
    uVar12 = *(ushort *)(*(long *)(lVar11 + 8) + 0xa20);
    uVar5 = FUN_710324c970(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),(uint)uVar12);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(char *)*DAT_7105314510 == '\0') {
      lVar11 = *(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x168);
      puVar8 = (ushort *)(lVar11 + 0x58);
      do {
        if (*puVar8 == uVar12) {
          return;
        }
        if (puVar8[1] == uVar12) {
          return;
        }
        if (puVar8[2] == uVar12) {
          return;
        }
        if (puVar8[3] == uVar12) {
          return;
        }
        puVar8 = puVar8 + 4;
      } while (puVar8 != (ushort *)(lVar11 + 0xff8));
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x300) = 2;
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar11 = DAT_710532f7b0;
    pcVar4 = (char *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    *(bool *)(param_1 + 0x56a) = *pcVar4 == '\0';
    if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019ae05c;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0;
    uVar12 = *(ushort *)(*(long *)(lVar11 + 8) + 0xa20);
    uVar5 = FUN_710324c970(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),(uint)uVar12);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(char *)*DAT_7105314510 == '\0') {
      lVar11 = *(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x168);
      puVar8 = (ushort *)(lVar11 + 0x58);
      do {
        if (*puVar8 == uVar12) {
          return;
        }
        if (puVar8[1] == uVar12) {
          return;
        }
        if (puVar8[2] == uVar12) {
          return;
        }
        if (puVar8[3] == uVar12) {
          return;
        }
        puVar8 = puVar8 + 4;
      } while (puVar8 != (ushort *)(lVar11 + 0xff8));
    }
    break;
  case 8:
    *(char **)(param_1 + 0x308) = "type_00";
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_help_00";
    *(undefined2 *)(param_1 + 800) = 0;
    if (*(uint *)(param_1 + 0x2cc) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 3;
      if (0x11 < *(int *)(param_1 + 0x2cc)) {
        return;
      }
      uVar7 = *(int *)(param_1 + 0x2cc) + 1;
      *(uint *)(param_1 + 0x2cc) = uVar7;
      if (uVar7 < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 1;
        if (0x11 < *(int *)(param_1 + 0x2cc)) {
          return;
        }
        uVar7 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar7;
        if (uVar7 < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 2;
          if (0x11 < *(int *)(param_1 + 0x2cc)) {
            return;
          }
          uVar7 = *(int *)(param_1 + 0x2cc) + 1;
          *(uint *)(param_1 + 0x2cc) = uVar7;
          if (uVar7 < 0x13) {
            lVar11 = param_1 + (long)(int)uVar7 * 4;
            uVar10 = 0x14;
            goto LAB_71019adde4;
          }
        }
      }
    }
    goto LAB_71019ae05c;
  case 10:
    *(char **)(param_1 + 0x308) = "type_00";
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_help_00";
    *(undefined2 *)(param_1 + 800) = 0;
    if (*(uint *)(param_1 + 0x2cc) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 3;
      if (0x11 < *(int *)(param_1 + 0x2cc)) {
        return;
      }
      uVar7 = *(int *)(param_1 + 0x2cc) + 1;
      *(uint *)(param_1 + 0x2cc) = uVar7;
      if (uVar7 < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 1;
        if (0x11 < *(int *)(param_1 + 0x2cc)) {
          return;
        }
        uVar7 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar7;
        if (uVar7 < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 2;
          if (0x11 < *(int *)(param_1 + 0x2cc)) {
            return;
          }
          uVar7 = *(int *)(param_1 + 0x2cc) + 1;
          *(uint *)(param_1 + 0x2cc) = uVar7;
          if (uVar7 < 0x13) {
            lVar11 = param_1 + (long)(int)uVar7 * 4;
            uVar10 = 7;
            goto LAB_71019adde4;
          }
        }
      }
    }
    goto LAB_71019ae05c;
  case 0x16:
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 0;
    *(char **)(param_1 + 0x308) = "type_00";
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_help_00";
    *(undefined2 *)(param_1 + 800) = 0;
    if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019ae05c;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 3;
    if (*(int *)(param_1 + 0x2cc) < 0x12) {
      uVar7 = *(int *)(param_1 + 0x2cc) + 1;
      *(uint *)(param_1 + 0x2cc) = uVar7;
      if (0x12 < uVar7) goto LAB_71019ae05c;
      *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 1;
      if (*(int *)(param_1 + 0x2cc) < 0x12) {
        uVar7 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar7;
        if (0x12 < uVar7) goto LAB_71019ae05c;
        *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 2;
      }
    }
    uVar12 = *(ushort *)(*(long *)(DAT_710532f7b0 + 8) + 0xa20);
    uVar5 = FUN_710324c970(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),(uint)uVar12);
    if ((uVar5 & 1) == 0) {
LAB_71019addc0:
      if (0x11 < *(int *)(param_1 + 0x2cc)) {
        return;
      }
      uVar7 = *(int *)(param_1 + 0x2cc) + 1;
      *(uint *)(param_1 + 0x2cc) = uVar7;
      if (uVar7 < 0x13) {
        lVar11 = param_1 + (long)(int)uVar7 * 4;
        uVar10 = 0x1e;
LAB_71019adde4:
        *(undefined4 *)(lVar11 + 0x280) = uVar10;
        return;
      }
      goto LAB_71019ae05c;
    }
    if (*(char *)*DAT_7105314510 == '\0') {
      lVar11 = *(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x168);
      puVar8 = (ushort *)(lVar11 + 0x58);
      do {
        if ((((*puVar8 == uVar12) || (puVar8[1] == uVar12)) || (puVar8[2] == uVar12)) ||
           (puVar8[3] == uVar12)) goto LAB_71019addc0;
        puVar8 = puVar8 + 4;
      } while (puVar8 != (ushort *)(lVar11 + 0xff8));
    }
  }
  if (*(int *)(param_1 + 0x2cc) < 0x12) {
    uVar7 = *(int *)(param_1 + 0x2cc) + 1;
    *(uint *)(param_1 + 0x2cc) = uVar7;
joined_r0x0071019ae058:
    if (0x12 < uVar7) {
LAB_71019ae05c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x280) = 0x1b;
  }
LAB_71019adc5c:
  *(ushort *)(param_1 + 0x304) = uVar12;
  *(undefined1 *)(param_1 + 0x56c) = 0;
  return;
}

