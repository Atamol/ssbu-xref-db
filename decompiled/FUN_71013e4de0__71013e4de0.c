// addr:      71013e4de0
// offset:    0x13e4de0
// name:      FUN_71013e4de0
// mangled:   
// signature: undefined __cdecl FUN_71013e4de0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013e4de0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined **local_40;
  long *local_38;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    uVar5 = *(uint *)(param_1 + 0x214);
    if (((uVar5 == 0xffffffff) ||
        (((puVar6 = &DAT_7105339830, uVar5 < 10 && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
         (puVar6 = (undefined8 *)(&DAT_7105339860)[(int)uVar5], puVar6 == (undefined8 *)0x0)))) ||
       (uVar2 = *(int *)(puVar6[2] + 0x9c) - 1, 6 < uVar2)) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(&DAT_7104753de0 + (long)(int)uVar2 * 4);
    }
    FUN_7101bb8b20(*(long *)(*(long *)(param_1 + 8) + 0x80),uVar5);
    iVar1 = *(int *)(param_1 + 0x23c);
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x80);
    *(int *)(lVar11 + 0x30) = iVar13;
    if (iVar13 != 0) {
      *(int *)(*DAT_710593ba90 + 0x3ac) = iVar13;
    }
    if (iVar1 - 2U < 4) {
      lVar12 = lVar11 + 0x68;
    }
    else if (iVar1 == 1) {
      lVar12 = lVar11 + 0x58;
    }
    else {
      lVar12 = lVar11 + 0x48;
    }
    FUN_710377aee0(0x3f800000,lVar12);
    FUN_710377aee0(0x3f800000,lVar11 + 0x78);
    lVar11 = DAT_710532f7f0;
    if (DAT_710532f7f0 != 0) {
      lVar12 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
      if (*(char *)(lVar12 + 0x1f5) == '\0') {
        lVar7 = *(long *)(lVar12 + 0x100);
        lVar9 = *(long *)(lVar12 + 0x108);
        uVar4 = 0;
        if (lVar9 - lVar7 != 0) {
          uVar4 = (lVar9 - lVar7 >> 3) * 0x155 - 1;
        }
        uVar10 = *(long *)(lVar12 + 0x120) + *(long *)(lVar12 + 0x118);
        if (uVar4 == uVar10) {
          FUN_7101afbf30((ulong *)(lVar12 + 0xf8),extraout_x1,param_3,param_4,param_5,param_6,
                         param_7,param_8);
          uVar10 = *(long *)(lVar12 + 0x118) + *(long *)(lVar12 + 0x120);
          lVar7 = *(long *)(lVar12 + 0x100);
          lVar9 = *(long *)(lVar12 + 0x108);
        }
        if (lVar9 == lVar7) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          puVar6 = (undefined8 *)(*(long *)(lVar7 + (uVar10 / 0x155) * 8) + (uVar10 % 0x155) * 0xc);
        }
        *puVar6 = 0x100000007;
        *(undefined4 *)(puVar6 + 1) = 0;
        *(long *)(lVar12 + 0x120) = *(long *)(lVar12 + 0x120) + 1;
        lVar12 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 0x80);
      }
      FUN_7103776910(&local_40,**(long **)(lVar12 + 0x130) + 8,(long ****)"set_txt_key",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      plVar3 = local_38;
      lVar11 = *local_38;
      if (lVar11 != 0) {
        *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
      }
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
      *(undefined1 *)(lVar12 + 0x200) = 1;
    }
  }
  uVar4 = FUN_7101bc2f00(*(long *)(*(long *)(param_1 + 8) + 0x80));
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x22c) = 1;
    switch(*(undefined4 *)(param_1 + 0x23c)) {
    case 1:
      uVar5 = *(uint *)(param_1 + 0x1fc);
      if (0x12 < uVar5) {
LAB_71013e50c4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar8 = 6;
      break;
    case 2:
      uVar5 = *(uint *)(param_1 + 0x1fc);
      if (0x12 < uVar5) goto LAB_71013e50c4;
      uVar8 = 7;
      break;
    case 3:
      uVar5 = *(uint *)(param_1 + 0x1fc);
      if (0x12 < uVar5) goto LAB_71013e50c4;
      uVar8 = 8;
      break;
    case 4:
      uVar5 = *(uint *)(param_1 + 0x1fc);
      if (0x12 < uVar5) goto LAB_71013e50c4;
      uVar8 = 9;
      break;
    case 5:
      uVar5 = *(uint *)(param_1 + 0x1fc);
      if (0x12 < uVar5) goto LAB_71013e50c4;
      uVar8 = 10;
      break;
    default:
      uVar5 = *(uint *)(param_1 + 0x1fc);
      if (0x12 < uVar5) goto LAB_71013e50c4;
      uVar8 = 5;
    }
    *(undefined4 *)(param_1 + (long)(int)uVar5 * 4 + 0x1b0) = uVar8;
  }
  return;
}

