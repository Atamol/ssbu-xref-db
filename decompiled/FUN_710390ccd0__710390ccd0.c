// addr:      710390ccd0
// offset:    0x390ccd0
// name:      FUN_710390ccd0
// mangled:   
// signature: undefined __cdecl FUN_710390ccd0(uint * param_1, int * param_2, int param_3, uint param_4)


void FUN_710390ccd0(uint *param_1,int *param_2,int param_3,uint param_4)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  uint *puVar18;
  long *plVar19;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  long local_a0;
  undefined8 local_98;
  uint *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  
  plVar19 = *(long **)(param_1 + 0xc);
  lVar10 = *(long *)(param_1 + 0xe);
  lVar16 = *plVar19;
  piVar17 = (int *)(lVar16 + 0x20);
  iVar7 = *piVar17;
  if (iVar7 <= (int)plVar19[6]) {
    lVar9 = FUN_71039059a0(lVar10,*(long *)(lVar16 + 0x40),piVar17,8,0x3ffff);
    *(long *)(lVar16 + 0x40) = lVar9;
    if (iVar7 < *(int *)(lVar16 + 0x20)) {
      *(undefined8 *)(lVar9 + (long)iVar7 * 8) = 0;
      lVar9 = (long)iVar7 + 1;
      if (lVar9 < *piVar17) {
        do {
          *(undefined8 *)(*(long *)(lVar16 + 0x40) + lVar9 * 8) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar16 + 0x20));
      }
    }
  }
  local_a0 = FUN_71038fe0c0(lVar10);
  lVar9 = plVar19[6];
  lVar13 = *(long *)(lVar16 + 0x40);
  *(int *)(plVar19 + 6) = (int)lVar9 + 1;
  *(long *)(lVar13 + (long)(int)lVar9 * 8) = local_a0;
  if (((*(byte *)(lVar16 + 9) >> 2 & 1) != 0) && ((*(byte *)(local_a0 + 9) & 3) != 0)) {
    lVar10 = *(long *)(lVar10 + 0x18);
    if (*(byte *)(lVar10 + 0x55) < 2) {
      FUN_71038fe340(lVar10,local_a0);
    }
    else {
      *(byte *)(lVar16 + 9) = *(byte *)(lVar16 + 9) & 0xf8 | *(byte *)(lVar10 + 0x54) & 3;
    }
  }
  *(uint *)(local_a0 + 0x28) = param_4;
  local_98 = *(undefined8 *)(param_1 + 0xc);
  *(long **)(param_1 + 0xc) = &local_a0;
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0xffffffff;
  local_64 = 0;
  local_68 = 0;
  local_6c = *(undefined4 *)(*(long *)(param_1 + 0x16) + 8);
  *(undefined8 *)(local_a0 + 0x68) = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(local_a0 + 0xc) = 2;
  local_a8 = 0;
  local_a6 = 0;
  local_b0 = *(undefined4 *)(*(long *)(param_1 + 0x16) + 0x28);
  uStack_ac = *(undefined4 *)(*(long *)(param_1 + 0x16) + 0x18);
  local_b8 = 0;
  local_88 = &local_b8;
  local_a7 = 0;
  local_90 = param_1;
  if (param_1[4] != 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_710390a760((long)param_1,0x28);
  }
  puVar18 = param_1 + 8;
  param_1[2] = param_1[1];
  if (*puVar18 == 0x121) {
    uVar11 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
    param_1[4] = (uint)uVar11;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar18;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    param_1[8] = 0x121;
  }
  if (param_3 != 0) {
    puVar12 = FUN_710390eed0((long)param_1,&DAT_71043bd228,4);
    FUN_710390c280((long)param_1,(long)puVar12);
    plVar19 = *(long **)(param_1 + 0xc);
    bVar4 = *(char *)((long)plVar19 + 0x3a) + 1;
    *(byte *)((long)plVar19 + 0x3a) = bVar4;
    *(int *)(*(long *)(*plVar19 + 0x50) +
             (long)*(short *)(**(long **)(plVar19[2] + 0x58) +
                             (long)(int)(*(int *)((long)plVar19 + 0x34) + (uint)bVar4 + -1) * 2) *
             0x10 + 8) = (int)plVar19[4];
  }
  plVar19 = *(long **)(param_1 + 0xc);
  lVar10 = *plVar19;
  *(undefined1 *)(lVar10 + 0xb) = 0;
  uVar8 = param_1[4];
  iVar7 = 0;
  if (uVar8 != 0x29) {
    iVar7 = 0;
    pfVar1 = (float *)(param_1 + 6);
    puVar2 = param_1 + 4;
    while (uVar8 == 0x124) {
      while( true ) {
        param_1[2] = param_1[1];
        lVar16 = *(long *)(param_1 + 6);
        if (param_1[8] == 0x121) {
          uVar11 = FUN_710390efb0(param_1,pfVar1);
          param_1[4] = (uint)uVar11;
        }
        else {
          *(undefined8 *)puVar2 = *(undefined8 *)puVar18;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *puVar18 = 0x121;
        }
        FUN_710390c280((long)param_1,lVar16);
        iVar7 = iVar7 + 1;
        if ((*(char *)(lVar10 + 0xb) != '\0') || (param_1[4] != 0x2c)) goto LAB_710390cf88;
        param_1[2] = param_1[1];
        if (param_1[8] != 0x121) break;
        uVar11 = FUN_710390efb0(param_1,pfVar1);
        uVar8 = (uint)uVar11;
        param_1[4] = uVar8;
        if (uVar8 != 0x124) goto LAB_710390cf40;
      }
      *(undefined8 *)puVar2 = *(undefined8 *)puVar18;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      uVar8 = param_1[4];
      param_1[8] = 0x121;
    }
LAB_710390cf40:
    if (uVar8 != 0x119) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80((long)param_1,"<name> or \'...\' expected");
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar11 = FUN_710390efb0(param_1,pfVar1);
      param_1[4] = (uint)uVar11;
    }
    else {
      *(undefined8 *)puVar2 = *(undefined8 *)puVar18;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *puVar18 = 0x121;
    }
    *(undefined1 *)(lVar10 + 0xb) = 2;
  }
LAB_710390cf88:
  plVar14 = *(long **)(param_1 + 0xc);
  uVar8 = (uint)*(byte *)((long)plVar14 + 0x3a) + iVar7;
  *(char *)((long)plVar14 + 0x3a) = (char)uVar8;
  if ((iVar7 != 0) &&
     (*(int *)(*(long *)(*plVar14 + 0x50) +
               (long)*(short *)(**(long **)(plVar14[2] + 0x58) +
                               (long)(int)(((uVar8 & 0xff) - iVar7) + *(int *)((long)plVar14 + 0x34)
                                          ) * 2) * 0x10 + 8) = (int)plVar14[4], iVar7 != 1)) {
    iVar7 = 1 - iVar7;
    do {
      iVar3 = iVar7 + *(int *)((long)plVar14 + 0x34) + (uint)*(byte *)((long)plVar14 + 0x3a);
      iVar7 = iVar7 + 1;
      *(int *)(*(long *)(*plVar14 + 0x50) +
               (long)*(short *)(**(long **)(plVar14[2] + 0x58) + (long)iVar3 * 2) * 0x10 + 8) =
           (int)plVar14[4];
    } while (iVar7 != 0);
  }
  *(undefined1 *)(lVar10 + 10) = *(undefined1 *)((long)plVar19 + 0x3a);
  bVar4 = *(byte *)((long)plVar19 + 0x3a);
  bVar5 = *(byte *)((long)plVar19 + 0x3c);
  uVar8 = (uint)bVar5 + (uint)bVar4;
  if (*(byte *)(*plVar19 + 0xc) < uVar8) {
    if (0xfe < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80(plVar19[2],"function or expression needs too many registers");
    }
    *(char *)(*plVar19 + 0xc) = (char)uVar8;
    bVar5 = *(byte *)((long)plVar19 + 0x3c);
  }
  *(byte *)((long)plVar19 + 0x3c) = bVar5 + bVar4;
  if (param_1[4] != 0x29) {
                    /* WARNING: Subroutine does not return */
    FUN_710390a760((long)param_1,0x29);
  }
  param_1[2] = param_1[1];
  if (param_1[8] == 0x121) {
    uVar11 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
    param_1[4] = (uint)uVar11;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar18;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    param_1[8] = 0x121;
  }
  do {
    uVar8 = param_1[4];
    uVar6 = uVar8 - 0x104;
    if (uVar6 < 0x1e && (1 << (ulong)(uVar6 & 0x1f) & 0x20020007U) != 0) break;
    FUN_7103908c40(param_1);
  } while (uVar8 != 0x112);
  *(uint *)(local_a0 + 0x2c) = param_1[1];
  if (param_1[4] == 0x106) {
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar11 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar11;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar18;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0xc) + 8);
    iVar7 = FUN_7103913040(plVar19,(int)plVar19[6] * 0x4000 - 0x4000U | 0x2c);
    param_2[4] = -1;
    param_2[5] = -1;
    param_2[2] = iVar7;
    *param_2 = 0xc;
    FUN_7103913770(plVar19,param_2);
    FUN_710390a7a0((long)param_1);
    return;
  }
  if (param_1[1] != param_4) {
    uVar15 = *(undefined8 *)(param_1 + 0xe);
    FUN_710390eb20((long)param_1,0x106);
    FUN_710390eb20((long)param_1,0x109);
    uVar15 = FUN_7103908660(uVar15,"%s expected (to close %s at line %d)");
                    /* WARNING: Subroutine does not return */
    FUN_710390eb80((long)param_1,uVar15);
  }
                    /* WARNING: Subroutine does not return */
  FUN_710390a760((long)param_1,0x106);
}

