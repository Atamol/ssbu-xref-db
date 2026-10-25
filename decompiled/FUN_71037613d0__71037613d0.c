// addr:      71037613d0
// offset:    0x37613d0
// name:      FUN_71037613d0
// mangled:   
// signature: void * __cdecl FUN_71037613d0(long param_1, long param_2, long * * * * param_3, undefined8 param_4, undefined8 param_5, ulong param_6, ulong param_7, undefined8 param_8)


void * FUN_71037613d0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                     ulong param_6,ulong param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  void *__dest;
  ulong uVar7;
  void *__src;
  long ****pppplVar8;
  long ****pppplVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long ***__n;
  long ***ppplVar16;
  undefined4 uVar17;
  long ***local_70;
  undefined4 local_64;
  
  pppplVar9 = &local_70;
  uVar1 = *(uint *)param_3;
  if (uVar1 == 0xffffff) {
    return (void *)0x0;
  }
  lVar15 = **(long **)(DAT_7105332f20 + 0x78);
  iVar3 = (int)param_5;
  iVar4 = (int)param_4;
  pppplVar8 = param_3;
  uVar10 = param_6;
  uVar11 = param_7;
  if (uVar1 < *(uint *)(*(long *)(lVar15 + 0x40) + 4)) {
    uVar14 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar15 + 0x60) + (ulong)uVar1 * 0x20) >> 0x20);
    uVar13 = uVar14 >> 8;
    if ((uVar13 == 0xffffff) ||
       (uVar2 = *(uint *)(*(long *)(lVar15 + 0x40) + 8), uVar14 = uVar14 >> 8,
       uVar2 < uVar13 || uVar2 == uVar14)) goto LAB_71037614bc;
    uVar1 = *(uint *)(*(long *)(DAT_7105332f20 + 0x10) +
                      (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar1 * 8) * 0x18 +
                     0x10);
    pppplVar8 = (long ****)(ulong)uVar1;
    lVar6 = FUN_7103541e10(lVar15,*(long *)(lVar15 + 0x90) +
                                  ((ulong)*(uint *)(*(long *)(lVar15 + 0x68) + (ulong)uVar14 * 8 + 4
                                                   ) & 0xffffff) * 0x10,uVar1);
    uVar1 = *(uint *)(*(long *)(lVar15 + 0xa0) + (ulong)*(uint *)(lVar6 + 4) * 0x10 + 8);
    __n = (long ***)(ulong)uVar1;
    ppplVar16 = __n;
    if (uVar1 == 0) goto LAB_71037614bc;
  }
  else {
LAB_71037614bc:
    __n = (long ***)0x0;
    ppplVar16 = (long ***)0x1;
  }
  __dest = (void *)FUN_710392e290(0x1000,ppplVar16,pppplVar8,param_4,param_5,uVar10,uVar11,param_8);
  if (__dest == (void *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = ppplVar16;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (__dest = (void *)FUN_710392e290(0x1000,ppplVar16,pppplVar9,param_4,param_5,uVar10,uVar11,
                                          param_8), __dest != (void *)0x0)) goto LAB_710376151c;
    }
    __dest = (void *)0x0;
  }
LAB_710376151c:
  uVar1 = *(uint *)param_3;
  if (((uVar1 != 0xffffff) && (uVar1 < *(uint *)(DAT_7105332f20 + 0x18))) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar1 * 8 + 4) != '\0')) {
    uVar1 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar1 * 8);
    if (((uVar1 != 0xffffff) && (uVar1 < *(uint *)(DAT_7105332f20 + 0x1c))) &&
       (puVar12 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar1 * 0x18),
       *(char *)((long)puVar12 + 0xc) != '\0' && puVar12 != (undefined8 *)0x0)) {
      __src = (void *)*puVar12;
      goto LAB_7103761590;
    }
  }
  __src = (void *)0x0;
LAB_7103761590:
  memcpy(__dest,__src,(size_t)__n);
  lVar6 = (long)*(int *)(param_1 + 0x1681c);
  *(int *)(param_1 + 0x1681c) = *(int *)(param_1 + 0x1681c) + 1;
  lVar15 = param_1 + lVar6 * 8;
  *(void **)(lVar15 + 0x18) = __dest;
  *(long ****)(lVar15 + 0x1018) = __n;
  *(char *)(param_1 + lVar6 + 0x2818) = (char)*(undefined4 *)(param_2 + 8);
  if ((param_6 & 1) == 0) {
    uVar17 = 0x3f800000;
    *(undefined4 *)(param_1 + lVar6 * 4 + 0x2a18) = 0x3f800000;
  }
  else {
    *(undefined4 *)(param_1 + lVar6 * 4 + 0x2a18) = *(undefined4 *)(param_2 + 0x14);
    uVar17 = *(undefined4 *)(param_2 + 0x14);
  }
  lVar15 = param_1 + lVar6 * 4;
  *(undefined4 *)(lVar15 + 0x3218) = uVar17;
  if (iVar4 != iVar3) {
    lVar6 = param_1 + lVar6 * 0x40 + (long)*(int *)(lVar15 + 0x6018) * 4;
    *(int *)(lVar15 + 0x6018) = *(int *)(lVar15 + 0x6018) + 1;
    *(int *)(lVar6 + 0x6818) = iVar4;
    *(int *)(lVar6 + 0xe818) = iVar3;
  }
  if ((param_7 & 1) == 0) {
    uVar17 = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    uVar17 = 0;
  }
  *(undefined4 *)(lVar15 + 0x5018) = uVar17;
  bVar5 = FUN_710353d910(*(uint *)param_3,"otf");
  if (bVar5) {
    uVar17 = 1;
  }
  else {
    bVar5 = FUN_710353d910(*(uint *)param_3,"ttf");
    if (bVar5) {
      *(undefined4 *)(lVar15 + 0x3a18) = 0;
      return __dest;
    }
    bVar5 = FUN_710353d910(*(uint *)param_3,"bfttf");
    if (bVar5) {
      uVar17 = 2;
    }
    else {
      bVar5 = FUN_710353d910(*(uint *)param_3,"bfotf");
      if (!bVar5) {
        return __dest;
      }
      uVar17 = 3;
    }
  }
  *(undefined4 *)(lVar15 + 0x3a18) = uVar17;
  return __dest;
}

