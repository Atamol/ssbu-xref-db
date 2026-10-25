// addr:      71036d3eb0
// offset:    0x36d3eb0
// name:      FUN_71036d3eb0
// mangled:   
// signature: undefined __cdecl FUN_71036d3eb0(long param_1)


void FUN_71036d3eb0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  void *__dest;
  void *__src;
  long *plVar11;
  byte local_80 [9];
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined2 uStack_72;
  long *local_70;
  long local_68;
  
  plVar10 = (long *)**(undefined8 **)(param_1 + 8);
  lVar3 = (**(code **)(*plVar10 + 0x38))(plVar10);
  local_80[0] = 0xc;
  local_80[8] = 0;
  uStack_77 = 0;
  uStack_73 = 0;
  uStack_72 = 0;
  local_70 = (long *)0x0;
  uVar6 = 0;
  local_80[5] = 0x72;
  local_80[6] = 99;
  local_80[1] = 0x74;
  local_80[2] = 0x72;
  local_80[3] = 0x5f;
  local_80[4] = 0x73;
  uVar9 = 0x74;
  lVar7 = 2;
  local_80[7] = 0;
  while( true ) {
    uVar9 = (uVar9 * -0x395b586ca42e166b ^ uVar9 * -0x395b586ca42e166b >> 0x2f) *
            -0x395b586ca42e166b ^ uVar6;
    uVar6 = uVar9 * -0x395b586ca42e166b + 0xe6546b64;
    if (lVar7 == 7) break;
    uVar9 = (ulong)local_80[lVar7];
    lVar7 = lVar7 + 1;
  }
  uVar6 = uVar9 * 0x395b586ca42e166b + -0xe6546b65 + uVar6 * 0x200000;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  plVar4 = FUN_7103682860(lVar3 + 0x80,(uVar6 ^ uVar6 >> 0x1c) * 0x80000001,local_80);
  if (plVar4 == (long *)0x0) {
    lVar3 = 0;
    plVar11 = (long *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = plVar4[6];
    plVar11 = (long *)plVar4[7];
    lVar3 = plVar4[8];
  }
  lVar5 = (**(code **)(*plVar10 + 0x38))(plVar10);
  uStack_72 = 0;
  local_80[0] = 0x18;
  uStack_77 = 0x746c7573;
  uVar6 = 0;
  local_80[1] = 0x62;
  local_80[2] = 0x6c;
  local_80[3] = 0x65;
  local_80[4] = 0x6e;
  local_80[5] = 100;
  local_80[6] = 0x5f;
  local_80[7] = 0x72;
  local_80[8] = 0x65;
  uVar9 = 0x62;
  lVar8 = 2;
  local_70 = (long *)0x0;
  uStack_73 = 0;
  while( true ) {
    uVar9 = (uVar9 * -0x395b586ca42e166b ^ uVar9 * -0x395b586ca42e166b >> 0x2f) *
            -0x395b586ca42e166b ^ uVar6;
    uVar6 = uVar9 * -0x395b586ca42e166b + 0xe6546b64;
    if (lVar8 == 0xd) break;
    uVar9 = (ulong)local_80[lVar8];
    lVar8 = lVar8 + 1;
  }
  uVar6 = uVar9 * 0x395b586ca42e166b + -0xe6546b65 + uVar6 * 0x200000;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  plVar10 = FUN_7103682860(lVar5 + 0x80,(uVar6 ^ uVar6 >> 0x1c) * 0x80000001,local_80);
  if (((plVar10 == (long *)0x0) || ((long *)plVar10[7] == (long *)0x0)) ||
     (*(long *)plVar10[7] != plVar10[8])) {
    plVar10 = (long *)0x0;
    lVar8 = 0;
    lVar5 = 0;
  }
  else {
    lVar8 = plVar10[6];
    if (lVar8 == 0) {
      plVar10 = (long *)0x0;
      lVar5 = 0;
    }
    else {
      plVar10 = *(long **)(lVar8 + 8);
      lVar5 = *plVar10;
    }
  }
  if (((plVar11 != (long *)0x0) && (plVar10 != (long *)0x0)) &&
     ((*plVar11 == lVar3 && (lVar3 = lVar7, *plVar10 == lVar5)))) {
    while( true ) {
      lVar5 = lVar8;
      if ((*(int *)(lVar3 + 0x130) != 1) &&
         ((*(int *)(lVar3 + 0x130) != 2 || (*(int *)(lVar3 + 0x134) != 1)))) {
        __dest = *(void **)(lVar3 + 0x108);
        goto LAB_71036d4178;
      }
      if (*(ulong *)(lVar3 + 0x78) <= (ulong)*(uint *)(lVar3 + 0x138)) break;
      lVar3 = *(long *)(lVar3 + 0x70) + (ulong)*(uint *)(lVar3 + 0x138) * 0x20;
      if ((*(long **)(lVar3 + 0x10) == (long *)0x0) ||
         (**(long **)(lVar3 + 0x10) != *(long *)(lVar3 + 0x18))) break;
      lVar5 = *(long *)(lVar3 + 8);
      lVar3 = 0;
      if ((lVar5 != 0) && (lVar3 = 0, *(long *)(lVar5 + 8) != 0)) {
        lVar3 = lVar5;
      }
    }
    __dest = (void *)0x0;
LAB_71036d4178:
    if ((*(int *)(lVar5 + 0x130) != 1) &&
       ((*(int *)(lVar5 + 0x130) != 2 || (*(int *)(lVar5 + 0x134) != 1)))) {
      __src = *(void **)(lVar5 + 0x108);
      goto LAB_71036d41e4;
    }
    if ((ulong)*(uint *)(lVar5 + 0x138) < *(ulong *)(lVar5 + 0x78)) {
      lVar3 = *(long *)(lVar5 + 0x70) + (ulong)*(uint *)(lVar5 + 0x138) * 0x20;
      if ((*(long **)(lVar3 + 0x10) == (long *)0x0) ||
         (**(long **)(lVar3 + 0x10) != *(long *)(lVar3 + 0x18))) goto LAB_71036d41d8;
      lVar3 = *(long *)(lVar3 + 8);
      lVar5 = 0;
      if ((lVar3 != 0) && (lVar5 = 0, *(long *)(lVar3 + 8) != 0)) {
        lVar5 = lVar3;
      }
      goto LAB_71036d4178;
    }
LAB_71036d41d8:
    __src = (void *)0x0;
LAB_71036d41e4:
    uVar1 = *(uint *)(*(long *)(lVar7 + 0x30) + 0x78);
    FUN_71038d8140((undefined8 *)local_80,uVar1 ^ (int)uVar1 >> 0x1f,*(long *)(lVar7 + 0x30) + 0x80)
    ;
    lVar7 = 0;
    if (local_70 != (long *)0x0) {
      if (*local_70 == local_68) {
        lVar7 = CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT41(uStack_77,local_80[8])));
      }
      else {
        lVar7 = 0;
      }
    }
    lVar3 = *(long *)(lVar7 + 0x48);
    FUN_71038cf200((undefined8 *)local_80,
                   *(uint *)(lVar7 + 0x10) ^ (int)*(uint *)(lVar7 + 0x10) >> 0x1f,lVar7 + 0x18);
    uVar6 = lVar3 * (ulong)*(uint *)(CONCAT26(uStack_72,
                                              CONCAT15(uStack_73,CONCAT41(uStack_77,local_80[8]))) +
                                    0x10);
    uVar1 = *(uint *)(*(long *)(lVar8 + 0x30) + 0x78);
    FUN_71038d8140((undefined8 *)local_80,uVar1 ^ (int)uVar1 >> 0x1f,*(long *)(lVar8 + 0x30) + 0x80)
    ;
    lVar7 = 0;
    if (local_70 != (long *)0x0) {
      if (*local_70 == local_68) {
        lVar7 = CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT41(uStack_77,local_80[8])));
      }
      else {
        lVar7 = 0;
      }
    }
    iVar2 = *(int *)(lVar7 + 0x48);
    FUN_71038cf200((undefined8 *)local_80,
                   *(uint *)(lVar7 + 0x10) ^ (int)*(uint *)(lVar7 + 0x10) >> 0x1f,lVar7 + 0x18);
    if (*(int *)(CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT41(uStack_77,local_80[8]))) + 0x10) *
        iVar2 == (int)uVar6) {
      memcpy(__dest,__src,uVar6 & 0xffffffff);
    }
  }
  return;
}

