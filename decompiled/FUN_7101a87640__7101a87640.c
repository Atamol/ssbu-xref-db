// addr:      7101a87640
// offset:    0x1a87640
// name:      FUN_7101a87640
// mangled:   
// signature: undefined __cdecl FUN_7101a87640(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a87640(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte ****ppppbVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long ****pppplVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *********ppppppppplVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long ***ppplVar21;
  long ***ppplVar22;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  long *plVar28;
  long lVar29;
  int iVar30;
  byte ****ppppbVar31;
  long *plVar32;
  int iVar33;
  void *pvVar34;
  ulong uVar35;
  long ****pppplVar36;
  void *__dest;
  uint local_120 [18];
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  long ***local_b8;
  long ***local_b0;
  undefined1 auStack_a8 [72];
  
  lVar16 = *(long *)(param_1 + 0x120);
  uVar20 = (*(long *)(param_1 + 0x128) - lVar16 >> 3) * -0x5555555555555555;
  uVar26 = (ulong)*(int *)(param_1 + 0x138);
  if (uVar20 < uVar26 || uVar20 - uVar26 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppplVar21 = *(long ****)(lVar16 + uVar26 * 0x18);
  lVar6 = *(long *)(param_1 + 0x140);
  lVar7 = *(long *)(param_1 + 0x148);
  plVar32 = *(long **)(DAT_7105324ee0 + 8);
  *(long *)(param_1 + 0x148) = lVar6;
  uVar13 = *(uint *)(param_1 + 0x11c);
  ppppbVar31 = (byte ****)(ulong)uVar13;
  local_b8 = ppplVar21;
  if (*(char *)*DAT_7105314510 != '\0') goto LAB_7101a87b50;
  puVar2 = (uint *)(param_1 + 0xf8);
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)(**(long **)((char *)*DAT_7105314510 + 0x58) + 8);
  puVar5 = puVar3 + uVar9;
  if (0x3c < uVar9) {
    puVar5 = puVar3;
  }
  if (uVar9 == 0xffffffff) {
    puVar5 = puVar3;
  }
  plVar28 = (long *)*puVar5;
  uVar14 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(undefined1 *)ppplVar21);
  uVar20 = uVar14 & 0xffffffff;
  if (0x61 < (uint)uVar14) {
    uVar20 = 0x62;
  }
  ppppbVar4 = ppppbVar31;
  if ((byte ****)0x2 < ppppbVar31) {
    ppppbVar4 = (byte ****)0x3;
  }
  iVar10 = *(int *)(*(long *)**(undefined8 **)
                               (**(long **)(*plVar28 + uVar20 * 8) + (long)ppppbVar4 * 8) + 0x30);
  pvVar34 = *(void **)(param_1 + 0x140);
  if ((ulong)((*(long *)(param_1 + 0x150) - (long)pvVar34 >> 2) * -0x3333333333333333) < 0x28) {
    pppplVar36 = (long ****)(*(long *)(param_1 + 0x148) - (long)pvVar34);
    lVar15 = FUN_710392e290(0x10,800,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar15 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_120[0] = 0;
        local_b0 = (long ***)0x320;
        param_3 = &local_b0;
        uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_120);
        if (((uVar20 & 1) != 0) &&
           (lVar15 = FUN_710392e290(0x10,800,param_3,param_4,param_5,param_6,param_7,param_8),
           lVar15 != 0)) goto LAB_7101a877ec;
      }
      lVar15 = 0;
    }
LAB_7101a877ec:
    lVar24 = SUB168(SEXT816((long)pppplVar36) * SEXT816(-0x6666666666666667),8);
    lVar29 = lVar15 + ((long)pppplVar36 >> 2) * 4;
    __dest = (void *)(lVar29 + ((lVar24 >> 3) - (lVar24 >> 0x3f)) * 0x14);
    if (0 < (long)pppplVar36) {
      memcpy(__dest,pvVar34,(size_t)pppplVar36);
      param_3 = pppplVar36;
    }
    *(void **)(param_1 + 0x140) = __dest;
    *(long *)(param_1 + 0x148) = lVar29;
    *(long *)(param_1 + 0x150) = lVar15 + 800;
    if (pvVar34 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar34);
    }
  }
  uVar20 = 0;
  ppppbVar4 = ppppbVar31;
  if (2 < uVar13) {
    ppppbVar4 = (byte ****)0x3;
  }
  do {
    if ((uVar13 != 3) && (uVar20 == 0x27)) break;
    param_3 = &local_b8;
    param_5 = (long ****)(uVar20 & 0xffffffff);
    uVar18 = (uint)uVar20;
    param_4 = ppppbVar31;
    uVar14 = FUN_7101a89b20((long)plVar32,puVar2,param_3,uVar13,uVar18);
    pppplVar36 = (long ****)*plVar32;
    pppplVar8 = (long ****)plVar32[1];
    uVar9 = (uint)uVar14;
    if (pppplVar36 == pppplVar8) {
      iVar33 = 0;
      iVar30 = 0;
      uVar27 = 1;
      if (uVar9 == 0) goto LAB_7101a8799c;
LAB_7101a879b0:
      if (iVar30 < 3) {
        uVar19 = 0;
      }
      else {
        uVar19 = 1;
        if (iVar33 < 3) {
          uVar19 = 2;
        }
      }
    }
    else {
      iVar30 = 0;
      iVar33 = 0;
      do {
        param_5 = (long ****)(uVar20 & 0xffffffff);
        param_3 = pppplVar36;
        param_4 = ppppbVar31;
        uVar14 = FUN_7101a89b20((long)plVar32,puVar2,pppplVar36,uVar13,uVar18);
        iVar12 = (int)uVar14;
        if (*(char *)*DAT_7105314510 == '\0') {
          uVar27 = *puVar2;
          puVar3 = (undefined8 *)(**(long **)((char *)*DAT_7105314510 + 0x58) + 8);
          puVar5 = puVar3 + uVar27;
          if (0x3c < uVar27) {
            puVar5 = puVar3;
          }
          if (uVar27 == 0xffffffff) {
            puVar5 = puVar3;
          }
          plVar28 = (long *)*puVar5;
          uVar35 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                  (undefined1 *)*pppplVar36);
          uVar14 = uVar35 & 0xffffffff;
          if (0x61 < (uint)uVar35) {
            uVar14 = 0x62;
          }
          bVar1 = 0 < *(int *)(*(long *)**(undefined8 **)
                                          (**(long **)(*plVar28 + uVar14 * 8) + (long)ppppbVar4 * 8)
                              + 0x30);
          if (iVar12 == 0) goto LAB_7101a878dc;
LAB_7101a87960:
          if ((int)uVar9 < iVar12) {
            iVar30 = iVar30 + 1;
          }
          else if (iVar12 < (int)uVar9) {
            iVar33 = iVar33 + 1;
          }
        }
        else {
          bVar1 = false;
          if (iVar12 != 0) goto LAB_7101a87960;
LAB_7101a878dc:
          if (bVar1) goto LAB_7101a87960;
        }
        pppplVar36 = pppplVar36 + 1;
      } while (pppplVar8 != pppplVar36);
      uVar27 = iVar30 + 1;
      if (uVar9 != 0) goto LAB_7101a879b0;
LAB_7101a8799c:
      uVar19 = 0xffffffff;
      if (0 < iVar10) goto LAB_7101a879b0;
    }
    uVar11 = (&DAT_7104544420)[uVar20];
    puVar23 = *(uint **)(param_1 + 0x148);
    if (puVar23 == *(uint **)(param_1 + 0x150)) {
      pvVar34 = *(void **)(param_1 + 0x140);
      pppplVar36 = (long ****)((long)puVar23 - (long)pvVar34);
      uVar35 = 0xccccccccccccccc;
      uVar14 = ((long)pppplVar36 >> 2) * -0x3333333333333333 + 1;
      if (0xccccccccccccccc < uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = (long)*(uint **)(param_1 + 0x150) - (long)pvVar34 >> 2;
      if ((ulong)(lVar15 * -0x3333333333333333) < 0x666666666666666) {
        uVar25 = lVar15 * -0x6666666666666666;
        uVar35 = uVar14;
        if (uVar14 <= uVar25) {
          uVar35 = uVar25;
        }
        if (uVar35 != 0) goto LAB_7101a87a64;
        lVar15 = 0;
      }
      else {
LAB_7101a87a64:
        ppplVar22 = (long ***)(uVar35 * 0x14);
        if (ppplVar22 == (long ***)0x0) {
          ppplVar22 = (long ***)0x1;
        }
        lVar15 = FUN_710392e290(0x10,ppplVar22,param_3,param_4,param_5,param_6,param_7,param_8);
        if (lVar15 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_120[0] = 0;
            param_3 = &local_b0;
            local_b0 = ppplVar22;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_120);
            if (((uVar14 & 1) != 0) &&
               (lVar15 = FUN_710392e290(0x10,ppplVar22,param_3,param_4,param_5,param_6,param_7,
                                        param_8), lVar15 != 0)) goto LAB_7101a87ad0;
          }
          lVar15 = 0;
        }
      }
LAB_7101a87ad0:
      lVar24 = SUB168(SEXT816((long)pppplVar36) * SEXT816(-0x6666666666666667),8);
      puVar23 = (uint *)(lVar15 + ((long)pppplVar36 >> 2) * 4);
      *puVar23 = uVar18;
      puVar23[1] = uVar11;
      puVar23[2] = uVar9;
      puVar23[3] = uVar27;
      puVar23[4] = uVar19;
      if (0 < (long)pppplVar36) {
        memcpy(puVar23 + ((lVar24 >> 3) - (lVar24 >> 0x3f)) * 5,pvVar34,(size_t)pppplVar36);
        param_3 = pppplVar36;
      }
      *(uint **)(param_1 + 0x140) = puVar23 + ((lVar24 >> 3) - (lVar24 >> 0x3f)) * 5;
      *(uint **)(param_1 + 0x148) = puVar23 + 5;
      *(ulong *)(param_1 + 0x150) = lVar15 + uVar35 * 0x14;
      if (pvVar34 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar34);
      }
    }
    else {
      *puVar23 = uVar18;
      puVar23[1] = uVar11;
      puVar23[2] = uVar9;
      puVar23[3] = uVar27;
      puVar23[4] = uVar19;
      *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 0x14;
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 < 0x28);
LAB_7101a87b50:
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(lVar16 + uVar26 * 0x18 + 0x10);
  lVar16 = *(long *)**(undefined8 **)(param_1 + 0xd0) + 8;
  lVar15 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776910(&local_c8,lVar16,(long ****)"set_rep_chara0",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  ppppppppplVar17 = (long *********)0x0;
  ppppbVar31 = (byte ****)0x0;
  plVar32 = FUN_710323f330(*(long **)(param_1 + 200),(ulong)ppplVar21,0,0,param_5,param_6,param_7,
                           param_8);
  uVar20 = local_c0;
  FUN_7103778b80(local_c0,(long)plVar32,ppppppppplVar17,ppppbVar31,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_d8,lVar16,(long ****)"set_txt_chara",ppppppppplVar17,ppppbVar31,param_5,
                 param_6,param_7,param_8);
  uVar13 = FUN_7103263540(*(long *)(lVar15 + 0x168),(ulong)ppplVar21,0,ppppbVar31,param_5,param_6,
                          param_7,param_8);
  FUN_7103262310((uint *)&local_b0,*(long *)(lVar15 + 0x168),(ulong)ppplVar21);
  FUN_71003a4ca0(local_120,"nam_chr1_%02d_%s",(ulong)uVar13,auStack_a8,ppppbVar31,param_5,param_6,
                 param_7,param_8);
  FUN_710377a280((long)&local_d8,(byte *)"mnu_record_fighters_fighter_nam",1);
  lVar16 = (*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 2) * -0x3333333333333333;
  if (lVar16 + (lVar7 - lVar6 >> 2) * 0x3333333333333333 != 0) {
    FUN_7103783690((long *)(param_1 + 0xd8),(int)lVar16);
  }
  FUN_710377cc80(*(long *)(param_1 + 0xd8),1);
  uVar26 = local_d0;
  local_d8 = &PTR_FUN_710523d9a8;
  local_d0 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar20 != 0) {
    FUN_710392eb40(uVar20);
  }
  return;
}

