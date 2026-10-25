// addr:      7101ccdac0
// offset:    0x1ccdac0
// name:      FUN_7101ccdac0
// mangled:   
// signature: undefined __cdecl FUN_7101ccdac0(long param_1, long * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ccdac0(long param_1,long *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  byte ****ppppbVar10;
  ulong uVar11;
  void *__dest;
  int iVar12;
  ulong uVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  undefined4 *puVar16;
  long ********pppppppplVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  void *pvVar25;
  undefined1 *puVar26;
  long *********ppppppppplVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  long ********local_78;
  void *local_70;
  undefined4 local_64;
  
  lVar19 = **(long **)(param_1 + 0xf0);
  lVar1 = lVar19 + 8;
  ppppppppplVar14 = param_3;
  FUN_7103778300(0x3f800000,*(long *)(lVar19 + 0x10),0x710433a322);
  lVar24 = 0;
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x128);
  do {
    if ((*(char *)((long)param_3 + lVar24 + 0x88) != '\0') &&
       (puVar26 = *(undefined1 **)((long)param_3 + lVar24 + 0x78),
       ((ulong)puVar26 & 0xff00000000000000) == 0xc100000000000000 &&
       ((ulong)puVar26 & 0xffffffffff) != 0)) {
      lVar20 = *(long *)(DAT_710532f730 + 8);
      lVar23 = *(long *)(lVar20 + 0x168);
      uVar9 = FUN_71032632a0(lVar23,(ulong)puVar26);
      uVar13 = 0x11b1ccb807;
      if ((uVar9 & 1) == 0) {
        bVar8 = FUN_71032648e0(lVar20 + 0x160,(ulong)puVar26);
        uVar13 = 0x143829f67e;
        if (bVar8) goto LAB_7101ccdbb0;
      }
      else {
LAB_7101ccdbb0:
        puVar26 = FUN_71032631a0(lVar23,uVar13);
      }
      bVar7 = *(byte *)((long)param_3 + lVar24 + 0x8a);
      ppppppppplVar14 = (long *********)0x2;
      plVar21 = *(long **)(param_1 + 0xe8);
      local_78 = (long ********)FUN_7103238a70((ulong)puVar26,(ulong)bVar7,2);
      if (((ulong)local_78 & 0xffffffffff) != 0) {
        lVar20 = *plVar21;
        ppppppppplVar14 = (long *********)(long)*(int *)(lVar20 + 0x70);
        param_4 = (byte ****)(ulong)*(uint *)(lVar20 + 0x68);
        FUN_710323c4e0(lVar20,(ulong *)&local_78,ppppppppplVar14,param_4,param_5,param_6,param_7,
                       param_8);
      }
      puVar16 = *(undefined4 **)(param_1 + 0x118);
      uVar5 = *(undefined4 *)((long)param_3 + lVar24 + 0x90);
      if (puVar16 < *(undefined4 **)(param_1 + 0x120)) {
        *puVar16 = uVar5;
        *(undefined1 **)(puVar16 + 2) = puVar26;
        puVar16[4] = (uint)bVar7;
        *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 0x18;
      }
      else {
        pvVar25 = *(void **)(param_1 + 0x110);
        ppppppppplVar27 = (long *********)((long)puVar16 - (long)pvVar25);
        uVar13 = ((long)ppppppppplVar27 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar13) goto LAB_7101cce220;
        lVar20 = (long)*(undefined4 **)(param_1 + 0x120) - (long)pvVar25 >> 3;
        uVar22 = 0xaaaaaaaaaaaaaaa;
        if ((ulong)(lVar20 * -0x5555555555555555) < 0x555555555555555) {
          uVar11 = lVar20 * 0x5555555555555556;
          uVar22 = uVar13;
          if (uVar13 <= uVar11) {
            uVar22 = uVar11;
          }
          if (uVar22 != 0) goto LAB_7101ccdc80;
LAB_7101ccdcdc:
          lVar20 = 0;
        }
        else {
LAB_7101ccdc80:
          pppppppplVar17 = (long ********)(uVar22 * 0x18);
          if (pppppppplVar17 == (long ********)0x0) {
            pppppppplVar17 = (long ********)0x1;
          }
          lVar20 = FUN_710392e290(0x10,pppppppplVar17,(long ****)ppppppppplVar14,param_4,param_5,
                                  param_6,param_7,param_8);
          if (lVar20 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              ppppppppplVar14 = &local_78;
              local_78 = pppppppplVar17;
              uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar13 & 1) != 0) &&
                 (lVar20 = FUN_710392e290(0x10,pppppppplVar17,(long ****)ppppppppplVar14,param_4,
                                          param_5,param_6,param_7,param_8), lVar20 != 0))
              goto LAB_7101ccdce0;
            }
            goto LAB_7101ccdcdc;
          }
        }
LAB_7101ccdce0:
        lVar23 = SUB168(SEXT816((long)ppppppppplVar27) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        puVar16 = (undefined4 *)(lVar20 + ((long)ppppppppplVar27 >> 3) * 8);
        *puVar16 = uVar5;
        *(undefined1 **)(puVar16 + 2) = puVar26;
        puVar16[4] = (uint)bVar7;
        if (0 < (long)ppppppppplVar27) {
          memcpy(puVar16 + ((lVar23 >> 2) - (lVar23 >> 0x3f)) * 6,pvVar25,(size_t)ppppppppplVar27);
          ppppppppplVar14 = ppppppppplVar27;
        }
        *(ulong *)(param_1 + 0x120) = lVar20 + uVar22 * 0x18;
        *(undefined4 **)(param_1 + 0x110) = puVar16 + ((lVar23 >> 2) - (lVar23 >> 0x3f)) * 6;
        *(undefined4 **)(param_1 + 0x118) = puVar16 + 6;
        if (pvVar25 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar25);
        }
      }
    }
    lVar24 = lVar24 + 0x50;
  } while (lVar24 != 0x280);
  piVar2 = *(int **)(param_1 + 0x110);
  piVar4 = *(int **)(param_1 + 0x118);
  pppplVar28 = (long ****)(((long)piVar4 - (long)piVar2 >> 3) * -0x5555555555555555);
  if (0 < (long)piVar4 - (long)piVar2) {
    pppplVar29 = pppplVar28;
    if (0x555555555555554 < (long)pppplVar28) {
      pppplVar29 = (long ****)0x555555555555555;
    }
    do {
      pppppppplVar17 = (long ********)((long)pppplVar29 * 0x18);
      if (pppppppplVar17 == (long ********)0x0) {
        pppppppplVar17 = (long ********)0x1;
      }
      ppppbVar10 = (byte ****)
                   FUN_710392e290(0x10,pppppppplVar17,(long ****)ppppppppplVar14,param_4,param_5,
                                  param_6,param_7,param_8);
      if (ppppbVar10 != (byte ****)0x0) {
LAB_7101ccde0c:
        ppppbVar15 = ppppbVar10;
        FUN_7101cce230(piVar2,piVar4,(ulong)pppplVar28,(int *)ppppbVar10,(long)pppplVar29);
        FUN_710392eb40((ulong)ppppbVar10);
        goto LAB_7101ccde30;
      }
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        ppppppppplVar14 = &local_78;
        local_78 = pppppppplVar17;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar13 & 1) != 0) &&
           (ppppbVar10 = (byte ****)
                         FUN_710392e290(0x10,pppppppplVar17,(long ****)ppppppppplVar14,param_4,
                                        param_5,param_6,param_7,param_8),
           ppppbVar10 != (byte ****)0x0)) goto LAB_7101ccde0c;
      }
      pppplVar29 = (long ****)((ulong)pppplVar29 >> 1);
    } while (pppplVar29 != (long ****)0x0);
  }
  ppppbVar15 = (byte ****)0x0;
  pppplVar29 = (long ****)0x0;
  FUN_7101cce230(piVar2,piVar4,(ulong)pppplVar28,(int *)0x0,0);
LAB_7101ccde30:
  ppppppppplVar14 =
       (long *********)
       (ulong)(uint)((int)((ulong)(*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110)) >> 3) *
                    -0x55555555);
  FUN_7103778430(lVar1,"stockicon%02d",ppppppppplVar14,ppppbVar15,pppplVar29,param_6,param_7,param_8
                );
  uVar9 = *(uint *)(param_3 + 0x5f);
  lVar20 = *(long *)(DAT_710532f730 + 8);
  lVar24 = lVar20 + 0x170;
  if (uVar9 == 0xffffffff) {
LAB_7101ccdecc:
    uVar9 = *(uint *)((long)param_3 + 0x2fc);
    if (uVar9 == 0xffffffff) goto LAB_7101cce1b4;
    if (uVar9 < 0x16c) {
      iVar12 = (&DAT_710454a7ec)[(long)(int)uVar9 * 0x12];
    }
    else {
      iVar12 = -1;
    }
    uVar13 = FUN_71032b24e0(lVar24,iVar12);
    if (((uVar13 & 0xff00000000000000) != 0x6900000000000000) ||
       (uVar22 = uVar13 & 0xffffffffff, uVar22 == 0)) goto LAB_7101cce1b4;
  }
  else {
    if (uVar9 < 0x16c) {
      iVar12 = (&DAT_710454a7ec)[(long)(int)uVar9 * 0x12];
    }
    else {
      iVar12 = -1;
    }
    uVar13 = FUN_71032b24e0(lVar24,iVar12);
    if (((uVar13 & 0xff00000000000000) != 0x6900000000000000) ||
       (uVar22 = uVar13 & 0xffffffffff, uVar22 == 0)) goto LAB_7101ccdecc;
  }
  uVar11 = FUN_71032b23e0(*(long *)(*(long *)(lVar20 + 0x178) + 8),0xd56784f97);
  if (((uVar13 & 0xff00000000000000) == 0x6900000000000000) &&
     (((uVar22 != 0 && ((uVar11 & 0xff00000000000000) == 0x6900000000000000)) &&
      ((uVar11 & 0xffffffffff) != 0)))) {
    if (((uVar11 ^ uVar13) & 0xffffffffff) == 0) goto LAB_7101ccdfe8;
LAB_7101ccdf6c:
    if (uVar9 < 0x16c) {
      iVar6 = (&DAT_710454a7f0)[(long)(int)uVar9 * 0x12];
      if (iVar6 == 2) {
        plVar21 = *(long **)(param_1 + 0xe8);
        iVar12 = 0x10;
        uVar22 = 1;
      }
      else {
        plVar21 = *(long **)(param_1 + 0xe8);
        uVar22 = (ulong)(iVar6 == 1) << 1;
        iVar12 = 0xe;
        if (iVar6 == 1) {
          iVar12 = 0xf;
        }
      }
    }
    else {
      plVar21 = *(long **)(param_1 + 0xe8);
      uVar22 = 0;
      iVar12 = 0xe;
    }
    local_78 = (long ********)FUN_7103238c50(uVar13,iVar12);
    if (((ulong)local_78 & 0xffffffffff) != 0) {
      lVar24 = *plVar21;
      ppppppppplVar14 = (long *********)(long)*(int *)(lVar24 + 0x70);
      ppppbVar15 = (byte ****)(ulong)*(uint *)(lVar24 + 0x68);
      FUN_710323c4e0(lVar24,(ulong *)&local_78,ppppppppplVar14,ppppbVar15,pppplVar29,param_6,param_7
                     ,param_8);
    }
    puVar3 = *(ulong **)(param_1 + 0x130);
    if (puVar3 < *(ulong **)(param_1 + 0x138)) {
      *puVar3 = uVar13;
      puVar3[1] = uVar22;
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 0x10;
      goto LAB_7101cce1b4;
    }
    pvVar25 = *(void **)(param_1 + 0x128);
    ppppppppplVar27 = (long *********)((long)puVar3 - (long)pvVar25);
    uVar11 = ((long)ppppppppplVar27 >> 4) + 1;
    if (uVar11 >> 0x3c != 0) {
LAB_7101cce220:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar24 = (long)*(ulong **)(param_1 + 0x138) - (long)pvVar25;
    if ((ulong)(lVar24 >> 4) < 0x7ffffffffffffff) {
      uVar18 = lVar24 >> 3;
      if (uVar11 <= uVar18) {
        uVar11 = uVar18;
      }
      if (uVar11 != 0) {
        if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7101cce10c;
      }
LAB_7101cce16c:
      __dest = (void *)0x0;
    }
    else {
      uVar11 = 0xfffffffffffffff;
LAB_7101cce10c:
      pppppppplVar17 = (long ********)(uVar11 * 0x10);
      if (pppppppplVar17 == (long ********)0x0) {
        pppppppplVar17 = (long ********)0x1;
      }
      __dest = (void *)FUN_710392e290(0x10,pppppppplVar17,(long ****)ppppppppplVar14,ppppbVar15,
                                      pppplVar29,param_6,param_7,param_8);
      if (__dest == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          ppppppppplVar14 = &local_78;
          local_78 = pppppppplVar17;
          uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar18 & 1) != 0) &&
             (__dest = (void *)FUN_710392e290(0x10,pppppppplVar17,(long ****)ppppppppplVar14,
                                              ppppbVar15,pppplVar29,param_6,param_7,param_8),
             __dest != (void *)0x0)) goto LAB_7101cce170;
        }
        goto LAB_7101cce16c;
      }
    }
LAB_7101cce170:
    puVar3 = (ulong *)((long)__dest + ((long)ppppppppplVar27 >> 4) * 0x10);
    *puVar3 = uVar13;
    puVar3[1] = uVar22;
    if (0 < (long)ppppppppplVar27) {
      memcpy(__dest,pvVar25,(size_t)ppppppppplVar27);
      ppppppppplVar14 = ppppppppplVar27;
    }
    *(void **)(param_1 + 0x138) = (void *)((long)__dest + uVar11 * 0x10);
    *(void **)(param_1 + 0x128) = __dest;
    *(ulong **)(param_1 + 0x130) = puVar3 + 2;
  }
  else {
    if (((uVar11 & 0xffffffffff) != 0 && (uVar11 & 0xff00000000000000) == 0x6900000000000000) !=
        ((uVar13 & 0xff00000000000000) == 0x6900000000000000 && uVar22 != 0)) goto LAB_7101ccdf6c;
LAB_7101ccdfe8:
    FUN_7103778300(0x3f800000,*(long *)(lVar19 + 0x10),0x71042e73fa);
    FUN_7103776910(&local_78,lVar1,(long ****)"set_rep_bgshot_l",ppppppppplVar14,ppppbVar15,
                   pppplVar29,param_6,param_7,param_8);
    ppppppppplVar14 = &local_78;
    FUN_7101cedc80(*(long *)(DAT_7105325cd0 + 8),*param_2,ppppppppplVar14,ppppbVar15,pppplVar29,
                   param_6,param_7,param_8);
    pvVar25 = local_70;
    local_78 = (long ********)&PTR_FUN_710523d9a8;
    local_70 = (void *)0x0;
  }
  if (pvVar25 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar25);
  }
LAB_7101cce1b4:
  FUN_7103776910(&local_78,lVar1,(long ****)"set_txt_version",ppppppppplVar14,ppppbVar15,pppplVar29,
                 param_6,param_7,param_8);
  FUN_710377a310((long)&local_78,3);
  pvVar25 = local_70;
  local_78 = (long ********)&PTR_FUN_710523d9a8;
  local_70 = (void *)0x0;
  if (pvVar25 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar25);
  }
  return;
}

