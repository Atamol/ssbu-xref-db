// addr:      710390c400
// offset:    0x390c400
// name:      FUN_710390c400
// mangled:   
// signature: undefined __cdecl FUN_710390c400(uint * param_1, int param_2, undefined4 param_3, int param_4, int param_5)


void FUN_710390c400(uint *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  long local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  
  plVar11 = *(long **)(param_1 + 0xc);
  bVar2 = *(char *)((long)plVar11 + 0x3a) + 3;
  *(byte *)((long)plVar11 + 0x3a) = bVar2;
  *(int *)(*(long *)(*plVar11 + 0x50) +
           (long)*(short *)(**(long **)(plVar11[2] + 0x58) +
                           (long)(int)(*(int *)((long)plVar11 + 0x34) + (uint)bVar2 + -3) * 2) *
           0x10 + 8) = (int)plVar11[4];
  *(int *)(*(long *)(*plVar11 + 0x50) +
           (long)*(short *)(**(long **)(plVar11[2] + 0x58) +
                           (long)(int)((uint)*(byte *)((long)plVar11 + 0x3a) +
                                       *(int *)((long)plVar11 + 0x34) + -2) * 2) * 0x10 + 8) =
       (int)plVar11[4];
  *(int *)(*(long *)(*plVar11 + 0x50) +
           (long)*(short *)(**(long **)(plVar11[2] + 0x58) +
                           (long)(int)((uint)*(byte *)((long)plVar11 + 0x3a) +
                                       *(int *)((long)plVar11 + 0x34) + -1) * 2) * 0x10 + 8) =
       (int)plVar11[4];
  if (param_1[4] != 0x103) {
                    /* WARNING: Subroutine does not return */
    FUN_710390a760((long)param_1,0x103);
  }
  param_1[2] = param_1[1];
  if (param_1[8] == 0x121) {
    uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
    param_1[4] = (uint)uVar6;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    param_1[8] = 0x121;
  }
  if (param_5 == 0) {
    uVar5 = *(uint *)(plVar11 + 5);
    *(undefined4 *)(plVar11 + 5) = 0xffffffff;
    uVar4 = FUN_7103913040(plVar11,0x7fff801e);
    uVar3 = uVar4;
    if ((uVar5 != 0xffffffff) && (uVar3 = uVar5, uVar4 != 0xffffffff)) {
      uVar3 = uVar4;
      do {
        uVar10 = uVar3;
        uVar9 = *(uint *)(*(long *)(*plVar11 + 0x38) + (long)(int)uVar10 * 4);
        iVar8 = (uVar9 >> 0xe) - 0x1ffff;
        uVar3 = 0xffffffff;
        if (iVar8 != -1) {
          uVar3 = uVar10 + iVar8 + 1;
        }
      } while (uVar3 != 0xffffffff);
      iVar8 = uVar5 + ~uVar10;
      iVar1 = -iVar8;
      if (-1 < iVar8) {
        iVar1 = iVar8;
      }
      if (0x1ffff < iVar1) goto LAB_710390c894;
      *(uint *)(*(long *)(*plVar11 + 0x38) + (long)(int)uVar10 * 4) =
           iVar8 * 0x4000 + 0x7fffc000U | uVar9 & 0x3fff;
      uVar3 = uVar4;
    }
  }
  else {
    uVar3 = FUN_7103913040(plVar11,param_2 << 6 | 0x7fff8028);
  }
  local_7e = 0;
  local_80 = *(undefined1 *)((long)plVar11 + 0x3a);
  local_88 = *(undefined4 *)(*(long *)(plVar11[2] + 0x58) + 0x28);
  uStack_84 = *(undefined4 *)(*(long *)(plVar11[2] + 0x58) + 0x18);
  local_7f = 0;
  local_90 = plVar11[3];
  plVar11[3] = (long)&local_90;
  plVar7 = *(long **)(param_1 + 0xc);
  uVar5 = (uint)*(byte *)((long)plVar7 + 0x3a) + param_4;
  *(char *)((long)plVar7 + 0x3a) = (char)uVar5;
  if ((param_4 != 0) &&
     (*(int *)(*(long *)(*plVar7 + 0x50) +
               (long)*(short *)(**(long **)(plVar7[2] + 0x58) +
                               (long)(int)(((uVar5 & 0xff) - param_4) +
                                          *(int *)((long)plVar7 + 0x34)) * 2) * 0x10 + 8) =
           (int)plVar7[4], param_4 != 1)) {
    iVar8 = 1 - param_4;
    do {
      iVar1 = iVar8 + *(int *)((long)plVar7 + 0x34) + (uint)*(byte *)((long)plVar7 + 0x3a);
      iVar8 = iVar8 + 1;
      *(int *)(*(long *)(*plVar7 + 0x50) +
               (long)*(short *)(**(long **)(plVar7[2] + 0x58) + (long)iVar1 * 2) * 0x10 + 8) =
           (int)plVar7[4];
    } while (iVar8 != 0);
  }
  bVar2 = *(byte *)((long)plVar11 + 0x3c);
  iVar8 = (uint)bVar2 + param_4;
  if ((int)(uint)*(byte *)(*plVar11 + 0xc) < iVar8) {
    if (0xfe < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80(plVar11[2],"function or expression needs too many registers");
    }
    *(char *)(*plVar11 + 0xc) = (char)iVar8;
    bVar2 = *(byte *)((long)plVar11 + 0x3c);
  }
  *(byte *)((long)plVar11 + 0x3c) = bVar2 + (char)param_4;
  plVar7 = *(long **)(param_1 + 0xc);
  local_66 = 0;
  local_68 = *(undefined1 *)((long)plVar7 + 0x3a);
  local_70 = *(undefined4 *)(*(long *)(plVar7[2] + 0x58) + 0x28);
  local_6c = *(undefined4 *)(*(long *)(plVar7[2] + 0x58) + 0x18);
  local_67 = 0;
  local_78 = plVar7[3];
  plVar7[3] = (long)&local_78;
  do {
    uVar5 = param_1[4];
    uVar4 = uVar5 - 0x104;
    if (uVar4 < 0x1e && (1 << (ulong)(uVar4 & 0x1f) & 0x20020007U) != 0) break;
    FUN_7103908c40(param_1);
  } while (uVar5 != 0x112);
  FUN_710390ab60(plVar7);
  FUN_710390ab60(plVar11);
  *(int *)((long)plVar11 + 0x24) = (int)plVar11[4];
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(plVar11 + 5) == 0xffffffff) {
      *(uint *)(plVar11 + 5) = uVar3;
    }
    else {
      uVar5 = *(uint *)(plVar11 + 5);
      do {
        uVar9 = uVar5;
        uVar4 = *(uint *)(*(long *)(*plVar11 + 0x38) + (long)(int)uVar9 * 4);
        iVar8 = (uVar4 >> 0xe) - 0x1ffff;
        uVar5 = 0xffffffff;
        if (iVar8 != -1) {
          uVar5 = uVar9 + iVar8 + 1;
        }
      } while (uVar5 != 0xffffffff);
      iVar8 = uVar3 + ~uVar9;
      iVar1 = -iVar8;
      if (-1 < iVar8) {
        iVar1 = iVar8;
      }
      if (0x1ffff < iVar1) {
LAB_710390c894:
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80(plVar11[2],"control structure too long");
      }
      *(uint *)(*(long *)(*plVar11 + 0x38) + (long)(int)uVar9 * 4) =
           iVar8 * 0x4000 + 0x7fffc000U | uVar4 & 0x3fff;
    }
  }
  uVar5 = param_2 * 0x40;
  if (param_5 == 0) {
    FUN_7103913040(plVar11,uVar5 | param_4 << 0xe | 0x29);
    *(undefined4 *)(*(long *)(*plVar11 + 0x48) + (long)(int)plVar11[4] * 4 + -4) = param_3;
    uVar5 = uVar5 + 0x80 | 0x7fff802a;
  }
  else {
    uVar5 = uVar5 | 0x7fff8027;
  }
  uVar5 = FUN_7103913040(plVar11,uVar5);
  FUN_7103913220(plVar11,uVar5,uVar3 + 1);
  *(undefined4 *)(*(long *)(*plVar11 + 0x48) + (long)(int)plVar11[4] * 4 + -4) = param_3;
  return;
}

