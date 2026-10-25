// addr:      710196d980
// offset:    0x196d980
// name:      FUN_710196d980
// mangled:   
// signature: undefined __cdecl FUN_710196d980(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710196d980(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
  if (*(char *)(lVar9 + 0x11c) != '\0') {
    *(undefined1 *)(lVar9 + 0x11c) = 0;
    lVar12 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
    lVar9 = *(long *)(DAT_7105329d78 + 8);
    if (*(int *)(lVar12 + 0x110) == 1) {
      *(undefined4 *)(lVar9 + 0x708) = *(undefined4 *)(*(long *)(lVar12 + 0x108) + 0x254);
    }
    else if (*(int *)(lVar12 + 0x110) == 0) {
      *(undefined4 *)(lVar9 + 0x750) = *(undefined4 *)(*(long *)(lVar12 + 0x100) + 0x254);
    }
    if ((*(int *)(param_1 + 0xd0) == 3) &&
       (plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0xf0) + 0x80) + 0x40),
       plVar13 != (long *)0x0)) {
      iVar4 = *(int *)(lVar9 + 0x708);
      plVar10 = (long *)*plVar13;
      *(undefined4 *)(plVar10 + 2) = 0;
      lVar14 = *plVar10;
      plVar10 = *(long **)(lVar14 + 0x10);
      *plVar10 = lVar14;
      *(undefined4 *)(plVar10 + 1) = 0x48;
      lVar9 = *(long *)(lVar14 + 0x10);
      *(long *)(lVar14 + 0x10) = lVar9 + 0x10;
      lVar12 = *(long *)(*(long *)(lVar14 + 0x18) + 200);
      *(long *)(lVar14 + 0x10) = lVar9;
      if (lVar12 == lVar14) {
        lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
        if (*(uint *)(lVar9 + 0xc) < 2) {
          plVar10 = (long *)(*(long *)(lVar9 + 0x18) +
                            ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar9 + 0xb) & 0x3f)) &
                            2) * 0x20);
          do {
            if (((int)plVar10[3] == 0x13) && (plVar6 = plVar10, plVar10[2] == 2)) break;
            piVar1 = (int *)((long)plVar10 + 0x1c);
            plVar10 = plVar10 + (long)*piVar1 * 4;
            plVar6 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
        }
        param_3 = "update_bg";
        FUN_71038f4d40(lVar14,plVar6,"update_bg");
      }
      else {
        FUN_71038f4b20(lVar14,"update_bg");
        FUN_71038f4fc0(lVar14,-2);
      }
      puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x10) + -0x10);
      if ((puVar11 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar14 + 0x10) + -8) & 0xf) != 6)) {
        *(undefined8 **)(lVar14 + 0x10) = puVar11;
      }
      else {
        lVar9 = *(long *)*plVar13;
        plVar10 = *(long **)(lVar9 + 0x10);
        *(undefined4 *)(plVar10 + 1) = 0x13;
        *plVar10 = (long)iVar4;
        *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 0x10;
        *(int *)(*plVar13 + 0x10) = *(int *)(*plVar13 + 0x10) + 1;
        FUN_7103377130(plVar13,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0xf8) + 0x80) + 0x28))();
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    ppuVar8 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_3 = (char *)ppuVar8;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))();
  uVar7 = extraout_x1;
  if (uVar3 == 0xffffffff) goto LAB_710196dc2c;
  if (uVar3 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0') {
    puVar11 = (undefined8 *)(&DAT_7105339860)[(int)uVar3];
    if (puVar11 != (undefined8 *)0x0) goto LAB_710196dbc4;
  }
  else {
    puVar11 = &DAT_7105339830;
LAB_710196dbc4:
    uVar2 = *(int *)(puVar11[2] + 0x9c) - 1;
    if (uVar2 < 7) {
      DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar2 * 4);
    }
  }
  DAT_7105307b68._0_4_ = uVar3;
  if (DAT_710593ba90 != (long *)0x0) {
    *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
  }
  if (DAT_710532f7f0 != 0) {
    FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                   DAT_7105307b68._4_4_,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar7 = extraout_x1_00;
  }
LAB_710196dc2c:
  lVar9 = *(long *)(param_1 + 0xf8);
  lVar12 = *(long *)(lVar9 + 0x80);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar12 + 0xf8),uVar7,(long ****)param_3,param_4,param_5,
                 param_6,param_7,param_8);
  **(uint **)(DAT_710593b988 + 8) =
       **(uint **)(DAT_710593b988 + 8) &
       (1 << (ulong)(*(uint *)(lVar12 + 0x14) & 0x1f) ^ 0xffffffffU);
  *(undefined4 *)(lVar12 + 0xe4) = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(undefined8 *)(lVar12 + 0xdc) = 0;
  *(undefined8 *)(lVar12 + 0xd4) = 0;
  *(undefined8 *)(lVar12 + 0xcc) = 0;
  *(undefined8 *)(lVar12 + 0xc4) = 0;
  *(undefined8 *)(lVar12 + 0xbc) = 0;
  *(undefined8 *)(lVar12 + 0xb4) = 0;
  *(undefined8 *)(lVar12 + 0xac) = 0;
  *(undefined8 *)(lVar12 + 0xa4) = 0;
  *(undefined8 *)(lVar12 + 0x9c) = 0;
  *(undefined1 *)(lVar12 + 0xf4) = 0;
  *(undefined4 *)(lVar12 + 0x98) = 0;
  *(undefined8 *)(lVar12 + 0xe8) = 0xffffffff;
  *(undefined4 *)(lVar12 + 0xf0) = 0xffffffff;
  FUN_7101ebb640((long *)(lVar12 + 0x20));
  *(undefined1 *)(lVar9 + 0x70) = 1;
  if (0 < *(int *)(param_1 + 0xc4)) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
  }
  return;
}

