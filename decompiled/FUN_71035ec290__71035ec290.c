// addr:      71035ec290
// offset:    0x35ec290
// name:      FUN_71035ec290
// mangled:   
// signature: undefined __cdecl FUN_71035ec290(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, long * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71035ec290(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,long *param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  long *********__n;
  long ****pppplVar7;
  long *plVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong uVar11;
  long ***ppplVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  void *__src;
  long ***local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  
  __n = param_3;
  uVar5 = FUN_71035c25f0(*(uint *)param_3,(byte *)"model.numdlb");
  uVar18 = (uint)uVar5;
  if (uVar18 == 0xffffff) {
    return;
  }
  FUN_7103540a00(DAT_7105332f20,uVar18);
  if ((uVar18 < *(uint *)(DAT_7105332f20 + 0x18)) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (uVar5 & 0xffffffff) * 8 + 4) != '\0')) {
    uVar19 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (uVar5 & 0xffffffff) * 8);
    if ((uVar19 == 0xffffff) ||
       ((*(uint *)(DAT_7105332f20 + 0x1c) <= uVar19 ||
        (plVar8 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar19 * 0x18),
        *(char *)((long)plVar8 + 0xc) == '\0' || plVar8 == (long *)0x0)))) goto LAB_71035ec348;
    puVar9 = (ulong *)(*plVar8 + 0x20);
    uVar5 = *puVar9;
    if ((uVar5 & 1) != 0) goto LAB_71035ec368;
LAB_71035ec354:
    pbVar10 = (byte *)((long)puVar9 + uVar5);
  }
  else {
LAB_71035ec348:
    puVar9 = (ulong *)&SUB_00000020;
    uVar5 = _SUB_00000020;
    if ((_SUB_00000020 & 1) == 0) goto LAB_71035ec354;
LAB_71035ec368:
    pbVar10 = (byte *)(uVar5 & 0xfffffffffffffffe);
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
  }
  uVar5 = FUN_71035c25f0(*(uint *)param_3,pbVar10);
  uVar19 = (uint)uVar5;
  if (uVar19 == 0xffffff) goto LAB_71035ec78c;
  FUN_7103540a00(DAT_7105332f20,uVar19);
  if ((uVar19 < *(uint *)(DAT_7105332f20 + 0x18)) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (uVar5 & 0xffffffff) * 8 + 4) != '\0')) {
    uVar14 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (uVar5 & 0xffffffff) * 8);
    if ((uVar14 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar14)) goto LAB_71035ec40c;
    plVar8 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar14 * 0x18);
    lVar20 = 0;
    if ((*(char *)((long)plVar8 + 0xc) != '\0') && (plVar8 != (long *)0x0)) {
      lVar20 = *plVar8;
    }
  }
  else {
LAB_71035ec40c:
    lVar20 = 0;
  }
  lVar21 = **(long **)(DAT_7105332f20 + 0x78);
  if (uVar19 < *(uint *)(*(long *)(lVar21 + 0x40) + 4)) {
    uVar14 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar21 + 0x60) + (uVar5 & 0xffffffff) * 0x20)
                   >> 0x20);
    uVar13 = uVar14 >> 8;
    if ((uVar13 != 0xffffff) &&
       (uVar3 = *(uint *)(*(long *)(lVar21 + 0x40) + 8), uVar14 = uVar14 >> 8,
       uVar13 <= uVar3 && uVar3 != uVar14)) {
      uVar13 = *(uint *)(*(long *)(DAT_7105332f20 + 0x10) +
                         (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + (uVar5 & 0xffffffff) * 8)
                         * 0x18 + 0x10);
      __n = (long *********)(ulong)uVar13;
      lVar6 = FUN_7103541e10(lVar21,*(long *)(lVar21 + 0x90) +
                                    ((ulong)*(uint *)(*(long *)(lVar21 + 0x68) + (ulong)uVar14 * 8 +
                                                     4) & 0xffffff) * 0x10,uVar13);
      if ((lVar20 != 0) &&
         (*(int *)(*(long *)(lVar21 + 0xa0) + (ulong)*(uint *)(lVar6 + 4) * 0x10 + 8) != 0)) {
        FUN_7103892d30(&local_88,lVar20,__n,param_4,param_5,param_6,param_7,param_8);
        lVar20 = local_80;
        local_78 = 0;
        uStack_70 = 0;
        local_80 = 0;
        if (lVar20 == 0) {
          puVar15 = (undefined8 *)0x0;
          uVar17 = 0;
        }
        else {
          puVar15 = *(undefined8 **)(lVar20 + 8);
          uVar17 = *puVar15;
        }
        plVar8 = *(long **)(param_1 + 0x40);
        plVar2 = *(long **)(param_1 + 0x48);
        *(long *)(param_1 + 0x40) = lVar20;
        *(undefined8 **)(param_1 + 0x48) = puVar15;
        lVar20 = *(long *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x50) = uVar17;
        if (((plVar2 != (long *)0x0) && (plVar8 != (long *)0x0)) && (*plVar2 == lVar20)) {
          (**(code **)(*plVar8 + 8))();
        }
        local_88 = (long ***)&PTR_FUN_7105232d28;
        if (((*(long **)(param_1 + 0x48) == (long *)0x0) ||
            (**(long **)(param_1 + 0x48) != *(long *)(param_1 + 0x50))) ||
           ((lVar20 = *(long *)(param_1 + 0x40), lVar20 == 0 || (*(long *)(lVar20 + 8) == 0)))) {
          uVar17 = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        else {
          *(long *)(param_1 + 0x20) = lVar20;
          puVar15 = *(undefined8 **)(lVar20 + 8);
          *(undefined8 **)(param_1 + 0x28) = puVar15;
          uVar17 = *puVar15;
        }
        *(undefined8 *)(param_1 + 0x30) = uVar17;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1d8) = 4;
        if ((*(long **)(param_1 + 0x48) == (long *)0x0) ||
           (**(long **)(param_1 + 0x48) != *(long *)(param_1 + 0x50))) {
          lVar20 = 0;
        }
        else {
          lVar20 = *(long *)(param_1 + 0x40);
        }
        *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xf0);
        lVar21 = *(long *)(lVar20 + 0x48);
        if (*(long *)(lVar20 + 0x50) != lVar21) {
          lVar6 = 0;
          uVar5 = 0;
          do {
            uVar14 = *(byte *)(*(long *)(lVar20 + 0x120) + uVar5) - 2;
            if ((uVar14 < 7) && ((0x55U >> (ulong)(uVar14 & 0x1f) & 1) != 0)) {
              uVar14 = *(uint *)(&DAT_71046fd920 + (long)(char)uVar14 * 4);
              uVar4 = *(ushort *)(*(long *)(lVar21 + (lVar6 >> 0x1d)) + 0x30);
              puVar1 = *(uint **)(param_1 + 0xf8);
              if (puVar1 < *(uint **)(param_1 + 0x100)) {
                *puVar1 = uVar4 | uVar14;
                *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 4;
              }
              else {
                __src = *(void **)(param_1 + 0xf0);
                __n = (long *********)((long)puVar1 - (long)__src);
                uVar16 = ((long)__n >> 2) + 1;
                if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar21 = (long)*(uint **)(param_1 + 0x100) - (long)__src;
                if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
                  uVar11 = lVar21 >> 1;
                  if (uVar16 <= uVar11) {
                    uVar16 = uVar11;
                  }
                  if (uVar16 != 0) {
                    if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    goto LAB_71035ec698;
                  }
                  __dest = (void *)0x0;
                }
                else {
                  uVar16 = 0x3fffffffffffffff;
LAB_71035ec698:
                  ppplVar12 = (long ***)(uVar16 * 4);
                  if (ppplVar12 == (long ***)0x0) {
                    ppplVar12 = (long ***)0x1;
                  }
                  __dest = (void *)FUN_710392e290(0x10,ppplVar12,(long ****)__n,param_4,param_5,
                                                  param_6,param_7,param_8);
                  if (__dest == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_64 = 0;
                      pppplVar7 = &local_88;
                      local_88 = ppplVar12;
                      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                      if (((uVar11 & 1) != 0) &&
                         (__dest = (void *)FUN_710392e290(0x10,ppplVar12,pppplVar7,param_4,param_5,
                                                          param_6,param_7,param_8),
                         __dest != (void *)0x0)) goto LAB_71035ec710;
                    }
                    __dest = (void *)0x0;
                  }
                }
LAB_71035ec710:
                puVar1 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
                *puVar1 = uVar4 | uVar14;
                if (0 < (long)__n) {
                  memcpy(__dest,__src,(size_t)__n);
                }
                *(void **)(param_1 + 0xf0) = __dest;
                *(uint **)(param_1 + 0xf8) = puVar1 + 1;
                *(void **)(param_1 + 0x100) = (void *)((long)__dest + uVar16 * 4);
                if (__src != (void *)0x0) {
                  FUN_710392eb40((ulong)__src);
                }
              }
            }
            lVar21 = *(long *)(lVar20 + 0x48);
            uVar5 = uVar5 + 1;
            lVar6 = lVar6 + 0x100000000;
          } while (uVar5 < (ulong)(*(long *)(lVar20 + 0x50) - lVar21 >> 3));
          if (uVar19 == 0xffffff) goto LAB_71035ec78c;
        }
      }
    }
  }
  FUN_7103540b10(DAT_7105332f20,uVar19,__n,param_4,param_5,param_6,param_7,param_8);
LAB_71035ec78c:
  FUN_7103540b10(DAT_7105332f20,uVar18,__n,param_4,param_5,param_6,param_7,param_8);
  return;
}

