// addr:      71017f9650
// offset:    0x17f9650
// name:      FUN_71017f9650
// mangled:   
// signature: undefined __cdecl FUN_71017f9650(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017f9650(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 local_4e;
  undefined2 local_4a;
  undefined1 local_48;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    local_48 = 0;
    uStack_60 = 0x69696d615f756e6d;
    local_58 = 0x69646165725f6f62;
    local_50 = 0x676e;
    local_4e = 0x7469745f;
    uVar1 = 0x811c9dc5;
    uVar6 = 0x6d;
    local_4a = 0x656c;
    lVar4 = 9;
    do {
      uVar1 = uVar1 * 0x89 ^ uVar6;
      uVar6 = (uint)*(byte *)((long)&local_68 + lVar4);
      lVar4 = lVar4 + 1;
    } while (uVar6 != 0);
    local_68 = CONCAT44(0x18,uVar1);
    FUN_71019b7de0(0,(long)&local_68,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(*(long *)(param_1 + 0x168) + 0x70) = 0;
    if (*(int *)(param_1 + 0x2f0) == 1) {
      *(undefined4 *)(param_1 + 0x2f0) = 0;
      lVar4 = *(long *)(*(long *)(param_1 + 0x168) + 0x80);
      if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      iVar2 = DAT_7105307d50;
      *(undefined2 *)(lVar4 + 0x304) = 0xffff;
      if (iVar2 != -1) {
        *(undefined4 *)(lVar4 + 0x300) = 0xffffffff;
        *(undefined1 *)(lVar4 + 0x56a) = 0;
        FUN_71019ad760(lVar4,0);
        return;
      }
      *(char **)(lVar4 + 0x308) = "type_00";
      *(char **)(lVar4 + 0x310) = "mnu_amiibo_reading_help_00";
      *(undefined4 *)(lVar4 + 0x300) = 0xffffffff;
      *(undefined2 *)(lVar4 + 800) = 0;
      *(undefined1 *)(lVar4 + 0x56a) = 0;
      if (*(uint *)(lVar4 + 0x2cc) < 0x13) {
        *(undefined4 *)(lVar4 + (long)(int)*(uint *)(lVar4 + 0x2cc) * 4 + 0x280) = 3;
        if (0x11 < *(int *)(lVar4 + 0x2cc)) {
          return;
        }
        uVar1 = *(int *)(lVar4 + 0x2cc) + 1;
        *(uint *)(lVar4 + 0x2cc) = uVar1;
        if (uVar1 < 0x13) {
          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x280) = 1;
          if (0x11 < *(int *)(lVar4 + 0x2cc)) {
            return;
          }
          uVar1 = *(int *)(lVar4 + 0x2cc) + 1;
          *(uint *)(lVar4 + 0x2cc) = uVar1;
          if (uVar1 < 0x13) {
            lVar4 = lVar4 + (long)(int)uVar1 * 4;
LAB_71017f99e8:
            *(undefined4 *)(lVar4 + 0x280) = 2;
            return;
          }
        }
      }
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x168) + 0x80);
      *(undefined2 *)(lVar4 + 0x304) = 0xffff;
      *(char **)(lVar4 + 0x308) = "type_00";
      *(char **)(lVar4 + 0x310) = "mnu_amiibo_reading_help_00";
      *(undefined4 *)(lVar4 + 0x300) = 0xffffffff;
      *(undefined2 *)(lVar4 + 800) = 0;
      *(undefined1 *)(lVar4 + 0x56a) = 0;
      if (*(uint *)(lVar4 + 0x2cc) < 0x13) {
        *(undefined4 *)(lVar4 + (long)(int)*(uint *)(lVar4 + 0x2cc) * 4 + 0x280) = 3;
        if (0x11 < *(int *)(lVar4 + 0x2cc)) {
          return;
        }
        uVar1 = *(int *)(lVar4 + 0x2cc) + 1;
        *(uint *)(lVar4 + 0x2cc) = uVar1;
        if (uVar1 < 0x13) {
          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x280) = 1;
          if (0x11 < *(int *)(lVar4 + 0x2cc)) {
            return;
          }
          uVar1 = *(int *)(lVar4 + 0x2cc) + 1;
          *(uint *)(lVar4 + 0x2cc) = uVar1;
          if (uVar1 < 0x13) {
            lVar4 = lVar4 + (long)(int)uVar1 * 4;
            goto LAB_71017f99e8;
          }
        }
      }
    }
    goto LAB_71017f9b70;
  }
  lVar4 = (*(long **)(param_1 + 0x168))[0x10];
  if ((*(char *)(lVar4 + 0x56a) == '\0') && (*(char *)(lVar4 + 0x56c) != '\0')) {
    iVar2 = *(int *)(lVar4 + 0x300);
    if (iVar2 == -1) {
      return;
    }
    if (iVar2 != 0 && iVar2 != 2) {
      iVar2 = *(int *)(lVar4 + 0x2d0);
      goto joined_r0x0071017f9868;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x300) == -1) {
      return;
    }
    iVar2 = *(int *)(lVar4 + 0x2d0);
    if (*(char *)(lVar4 + 0x56a) != '\0' && iVar2 == 0) {
      iVar2 = *(int *)(*DAT_71052c50e8 + 0x178);
    }
joined_r0x0071017f9868:
    if (iVar2 != 0) {
      return;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x168) + 0x20))();
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (uVar1 != 0xffffffff) {
    puVar5 = &DAT_7105339830;
    if ((((9 < uVar1) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
        (puVar5 = (undefined8 *)(&DAT_7105339860)[(int)uVar1], puVar5 != (undefined8 *)0x0)) &&
       (uVar6 = *(int *)(puVar5[2] + 0x9c) - 1, uVar6 < 7)) {
      DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar6 * 4);
    }
    DAT_7105307b68._0_4_ = uVar1;
    if (DAT_710593ba90 != (long *)0x0) {
      *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
    }
    if (DAT_710532f7f0 != 0) {
      FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                     DAT_7105307b68._4_4_,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  switch(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x168) + 0x80) + 0x300)) {
  case 0:
    uVar3 = 1;
    break;
  case 1:
    uVar3 = 2;
    goto LAB_71017f9a50;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    uVar3 = 3;
LAB_71017f9a50:
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x114);
    if (0x12 < uVar1) goto LAB_71017f9b70;
    uVar3 = 9;
    goto LAB_71017f9ac0;
  case 4:
    uVar3 = 6;
    goto LAB_71017f9a70;
  case 5:
    uVar3 = 7;
LAB_71017f9a70:
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x114);
    if (0x12 < uVar1) goto LAB_71017f9b70;
    uVar3 = 9;
    goto LAB_71017f9a88;
  default:
    goto switchD_71017f9954_default;
  }
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  if (0x12 < *(uint *)(param_1 + 0x114)) {
LAB_71017f9b70:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x114) * 4 + 200) = 9;
  if (*(int *)(param_1 + 0x114) < 0x12) {
    uVar1 = *(int *)(param_1 + 0x114) + 1;
    *(uint *)(param_1 + 0x114) = uVar1;
    if (0x12 < uVar1) goto LAB_71017f9b70;
    uVar3 = 4;
LAB_71017f9a88:
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 200) = uVar3;
  }
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x168) + 0x80) + 0x56a) != '\0') &&
     (*(int *)(param_1 + 0x114) < 0x12)) {
    uVar1 = *(int *)(param_1 + 0x114) + 1;
    *(uint *)(param_1 + 0x114) = uVar1;
    if (0x12 < uVar1) goto LAB_71017f9b70;
    uVar3 = 2;
LAB_71017f9ac0:
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 200) = uVar3;
  }
switchD_71017f9954_default:
  return;
}

