// addr:      710390d5f0
// offset:    0x390d5f0
// name:      FUN_710390d5f0
// mangled:   
// signature: undefined __cdecl FUN_710390d5f0(uint * param_1, long * param_2)


void FUN_710390d5f0(uint *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long *plVar9;
  float *pfVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long local_78;
  uint local_70;
  undefined8 local_68;
  
  plVar9 = *(long **)(param_1 + 0xc);
  uVar1 = param_1[1];
  if (param_1[4] == 0x124) {
    lVar14 = *(long *)(param_1 + 6);
    param_1[2] = uVar1;
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar6;
      plVar11 = *(long **)(param_1 + 0xc);
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
      plVar11 = plVar9;
    }
    iVar3 = FUN_710390ca30(plVar11,lVar14,(int *)param_2,1);
    if (iVar3 == 0) {
      FUN_710390ca30(plVar11,*(long *)(param_1 + 0x1a),(int *)param_2,1);
      local_70 = *(byte *)(lVar14 + 8) | 0x40;
      local_78 = lVar14;
      uVar6 = FUN_71039133b0(*(long **)(param_1 + 0xc),(float *)&local_78,(float *)&local_78);
      local_68 = 0xffffffffffffffff;
      local_78 = CONCAT44(local_78._4_4_,4);
      local_70 = (uint)uVar6;
      *(char *)((long)param_2 + 10) = (char)(int)param_2[1];
      uVar5 = FUN_71039141b0(plVar11,(int *)&local_78);
      uVar7 = 8;
      if ((int)*param_2 == 9) {
        uVar7 = 9;
      }
      *(undefined1 *)((long)param_2 + 0xb) = uVar7;
      *(short *)(param_2 + 1) = (short)uVar5;
      *(undefined4 *)param_2 = 10;
    }
  }
  else {
    if (param_1[4] != 0x28) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80((long)param_1,"unexpected symbol");
    }
    puVar12 = param_1 + 8;
    param_1[2] = uVar1;
    if (*puVar12 == 0x121) {
      uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar6;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    FUN_710390b770(param_1,param_2,0);
    if (param_1[4] != 0x29) {
      if (param_1[1] != uVar1) {
        uVar8 = *(undefined8 *)(param_1 + 0xe);
        FUN_710390eb20((long)param_1,0x29);
        FUN_710390eb20((long)param_1,0x28);
        uVar8 = FUN_7103908660(uVar8,"%s expected (to close %s at line %d)");
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80((long)param_1,uVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_710390a760((long)param_1,0x29);
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar6;
    }
    else {
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar12;
      param_1[8] = 0x121;
    }
    FUN_7103913650(*(long **)(param_1 + 0xc),(undefined4 *)param_2);
  }
  pfVar10 = (float *)(param_1 + 6);
  puVar13 = param_1 + 8;
  puVar12 = param_1 + 4;
LAB_710390d7d4:
  while (uVar5 = param_1[4], 0x5a < (int)uVar5) {
    if (uVar5 != 0x5b) {
      if ((uVar5 != 0x7b) && (uVar5 != 0x125)) {
        return;
      }
      goto LAB_710390d840;
    }
    if (((int)*param_2 != 9) || ((int)param_2[2] != *(int *)((long)param_2 + 0x14))) {
      FUN_71039140b0(plVar9,(int *)param_2);
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,pfVar10);
      param_1[4] = (uint)uVar6;
    }
    else {
      *(undefined8 *)puVar12 = *(undefined8 *)puVar13;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *puVar13 = 0x121;
    }
    FUN_710390b770(param_1,&local_78,0);
    if ((int)local_68 == local_68._4_4_) {
      FUN_7103913650(*(long **)(param_1 + 0xc),(undefined4 *)&local_78);
    }
    else {
      FUN_71039140b0(*(long **)(param_1 + 0xc),(int *)&local_78);
    }
    if (param_1[4] != 0x5d) {
                    /* WARNING: Subroutine does not return */
      FUN_710390a760((long)param_1,0x5d);
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,pfVar10);
      param_1[4] = (uint)uVar6;
    }
    else {
      *(undefined8 *)puVar12 = *(undefined8 *)puVar13;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *puVar13 = 0x121;
    }
    *(char *)((long)param_2 + 10) = (char)(int)param_2[1];
    uVar5 = FUN_71039141b0(plVar9,(int *)&local_78);
    uVar7 = 8;
    if ((int)*param_2 == 9) {
      uVar7 = 9;
    }
    *(undefined1 *)((long)param_2 + 0xb) = uVar7;
    *(short *)(param_2 + 1) = (short)uVar5;
    *(undefined4 *)param_2 = 10;
  }
  if (uVar5 == 0x28) {
LAB_710390d840:
    FUN_7103913770(plVar9,(int *)param_2);
  }
  else {
    if (uVar5 == 0x2e) {
      FUN_710390cb70(param_1,(int *)param_2);
      goto LAB_710390d7d4;
    }
    if (uVar5 != 0x3a) {
      return;
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,pfVar10);
      uVar5 = (uint)uVar6;
      param_1[4] = uVar5;
    }
    else {
      *(undefined8 *)puVar12 = *(undefined8 *)puVar13;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      uVar5 = param_1[4];
      param_1[8] = 0x121;
    }
    if (uVar5 != 0x124) {
                    /* WARNING: Subroutine does not return */
      FUN_710390a760((long)param_1,0x124);
    }
    lVar14 = *(long *)pfVar10;
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,pfVar10);
      param_1[4] = (uint)uVar6;
    }
    else {
      *(undefined8 *)puVar12 = *(undefined8 *)puVar13;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *puVar13 = 0x121;
    }
    local_70 = *(byte *)(lVar14 + 8) | 0x40;
    local_78 = lVar14;
    uVar6 = FUN_71039133b0(*(long **)(param_1 + 0xc),(float *)&local_78,(float *)&local_78);
    local_68 = 0xffffffffffffffff;
    local_70 = (uint)uVar6;
    local_78 = CONCAT44(local_78._4_4_,4);
    FUN_71039140b0(plVar9,(int *)param_2);
    uVar5 = *(uint *)(param_2 + 1);
    if ((((int)*param_2 == 7) && ((uVar5 >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)plVar9 + 0x3a) <= (int)uVar5)) {
      *(char *)((long)plVar9 + 0x3c) = *(char *)((long)plVar9 + 0x3c) + -1;
    }
    *(uint *)(param_2 + 1) = (uint)*(byte *)((long)plVar9 + 0x3c);
    *(undefined4 *)param_2 = 7;
    bVar2 = *(byte *)((long)plVar9 + 0x3c);
    uVar4 = bVar2 + 2;
    if (*(byte *)(*plVar9 + 0xc) < uVar4) {
      if (0xfe < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80(plVar9[2],"function or expression needs too many registers");
      }
      *(char *)(*plVar9 + 0xc) = (char)uVar4;
      bVar2 = *(byte *)((long)plVar9 + 0x3c);
    }
    *(byte *)((long)plVar9 + 0x3c) = bVar2 + 2;
    lVar14 = param_2[1];
    uVar4 = FUN_71039141b0(plVar9,(int *)&local_78);
    FUN_7103913040(plVar9,uVar5 << 0x17 | (int)lVar14 << 6 | uVar4 << 0xe | 0xc);
    if ((((float)local_78 == 9.80909e-45) && ((local_70 >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)plVar9 + 0x3a) <= (int)local_70)) {
      *(char *)((long)plVar9 + 0x3c) = *(char *)((long)plVar9 + 0x3c) + -1;
    }
  }
  FUN_710390df10(param_1,(undefined4 *)param_2,uVar1);
  goto LAB_710390d7d4;
}

