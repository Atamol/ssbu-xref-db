// addr:      7101dd2be0
// offset:    0x1dd2be0
// name:      FUN_7101dd2be0
// mangled:   
// signature: undefined __cdecl FUN_7101dd2be0(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dd2be0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *__dest;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long **pplVar14;
  char *pcVar15;
  ulong uVar16;
  long ***ppplVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  void *__src;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  byte ***local_1e0;
  undefined2 local_1d8;
  undefined4 local_1d6;
  undefined2 local_1d2;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  long ***local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  long local_98;
  long ****local_90;
  long ***local_78;
  undefined4 local_6c [3];
  
  lVar31 = *(long *)(param_1 + 8);
  local_1d0 = 1;
  local_1cc = 1;
  local_1ca = 1;
  local_1c8 = &DAT_41f0000000000000;
  local_1d8 = 0x101;
  local_b0 = (long ***)&PTR_FUN_71050b0a50;
  local_1d6 = 0;
  local_1d2 = 0;
  local_1c0 = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  local_1e0 = (byte ***)0x0;
  local_a8 = FUN_7101dd4170;
  uStack_a0 = 0;
  local_98 = lVar31;
  local_90 = &local_b0;
  FUN_7101a7ed70((long *)&local_b0,alStack_1b0);
  if (&local_b0 == local_90) {
    pplVar14 = (*local_90)[4];
LAB_7101dd2ca4:
    (*(code *)pplVar14)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar14 = (*local_90)[5];
    goto LAB_7101dd2ca4;
  }
  local_b0 = (long ***)&DAT_71051860d0;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_120);
  if (&local_b0 == local_90) {
    pplVar14 = (*local_90)[4];
LAB_7101dd2cf0:
    (*(code *)pplVar14)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar14 = (*local_90)[5];
    goto LAB_7101dd2cf0;
  }
  plVar2 = (long *)(lVar31 + 8);
  ppppbVar13 = &local_1e0;
  FUN_7103770b30(plVar2,param_2,(long ****)"selector_3",ppppbVar13,param_5,param_6,param_7,param_8);
  plVar27 = *(long **)(lVar31 + 8);
  uVar20 = plVar27[0x31] - plVar27[0x30];
  if (0 < (int)(uVar20 >> 3)) {
    uVar20 = uVar20 >> 3 & 0xffffffff;
    FUN_710376e070(plVar27,0,*(long *****)plVar27[0x30],ppppbVar13,param_5,param_6,param_7,param_8);
    if (uVar20 != 1) {
      uVar28 = 1;
      do {
        FUN_710376e070(plVar27,(int)uVar28,*(long *****)(plVar27[0x30] + uVar28 * 8),ppppbVar13,
                       param_5,param_6,param_7,param_8);
        uVar28 = uVar28 + 1;
      } while (uVar20 != uVar28);
    }
  }
  lVar30 = *(long *)(DAT_710532f730 + 8);
  lVar21 = *(long *)(*(long *)(lVar30 + 0x318) + 8);
  pcVar15 = *(char **)(lVar21 + 0x20);
  if ((*pcVar15 == '\f') && (iVar23 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    iVar25 = 0;
    uVar20 = *(ulong *)(lVar21 + 0x48) & 0xffffffffff;
    pbVar22 = &DAT_7104742dbb;
    do {
      iVar3 = iVar23 + iVar25;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar21 + 0x18) + 0x28) + (long)*(int *)(pcVar15 + 5) +
                       (long)iVar3 * 8);
      uVar28 = *(ulong *)(*(long *)(*(long *)(lVar21 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar28 == uVar20) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7101dd2e10;
        pbVar22 = (byte *)(pcVar15 + (int)uVar29);
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar28 <= uVar20) {
        iVar25 = iVar3 + 1;
        iVar6 = iVar23;
      }
      iVar23 = iVar6;
    } while (iVar25 <= iVar23);
  }
  else {
LAB_7101dd2e10:
    pbVar22 = &DAT_7104742dbb;
  }
  if (*pbVar22 - 0xb < 2) {
    bVar4 = pbVar22[1];
    puVar9 = *(ulong **)(lVar31 + 0x90);
    *(ulong **)(lVar31 + 0x98) = puVar9;
    puVar10 = puVar9;
    if (bVar4 != 0) {
      uVar29 = 0;
      do {
        uVar20 = FUN_710327d830(*(long *)(lVar30 + 0x318),uVar29);
        uVar7 = FUN_710327de70(lVar30 + 0x310,uVar20);
        uVar7 = uVar7 & 0xff;
        if (((uVar7 != 0 && uVar7 != 6) && uVar7 < 0x11) &&
           (uVar7 = FUN_710327de70(*(long *)(DAT_710532f730 + 8) + 0x310,uVar20),
           (uVar7 & 0xff) != 0)) {
          uVar5 = uVar7 - 1;
          if ((uVar5 & 0xff) < 0x10) {
            if ((uVar7 & 0xff) < 0xe) {
              if (0xc < (uVar5 & 0xff)) goto LAB_7101dd33c8;
              if (*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                           ((ulong)uVar5 & 0xff)) != '\0') {
LAB_7101dd2edc:
                puVar9 = *(ulong **)(lVar31 + 0x98);
                if (puVar9 == *(ulong **)(lVar31 + 0xa0)) {
                  __src = *(void **)(lVar31 + 0x90);
                  pppplVar12 = (long ****)((long)puVar9 - (long)__src);
                  uVar28 = ((long)pppplVar12 >> 3) + 1;
                  if (uVar28 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar21 = (long)*(ulong **)(lVar31 + 0xa0) - (long)__src;
                  if ((ulong)(lVar21 >> 3) < 0xfffffffffffffff) {
                    uVar16 = lVar21 >> 2;
                    if (uVar28 <= uVar16) {
                      uVar28 = uVar16;
                    }
                    if (uVar28 != 0) {
                      if (uVar28 >> 0x3d != 0) {
LAB_7101dd33c8:
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      goto LAB_7101dd2f5c;
                    }
                    uVar28 = 0;
                    __dest = (void *)0x0;
                  }
                  else {
                    uVar28 = 0x1fffffffffffffff;
LAB_7101dd2f5c:
                    ppplVar17 = (long ***)(uVar28 * 8);
                    if (ppplVar17 == (long ***)0x0) {
                      ppplVar17 = (long ***)0x1;
                    }
                    __dest = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar12,ppppbVar13,param_5,
                                                    param_6,param_7,param_8);
                    if (__dest == (void *)0x0) {
                      if (DAT_7105332f00 != (long *)0x0) {
                        local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
                        pppplVar11 = &local_b0;
                        local_b0 = ppplVar17;
                        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
                        if (((uVar16 & 1) != 0) &&
                           (__dest = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar11,ppppbVar13,
                                                            param_5,param_6,param_7,param_8),
                           __dest != (void *)0x0)) goto LAB_7101dd2fcc;
                      }
                      __dest = (void *)0x0;
                    }
                  }
LAB_7101dd2fcc:
                  puVar9 = (ulong *)((long)__dest + ((long)pppplVar12 >> 3) * 8);
                  *puVar9 = uVar20;
                  if (0 < (long)pppplVar12) {
                    memcpy(__dest,__src,(size_t)pppplVar12);
                  }
                  *(void **)(lVar31 + 0x90) = __dest;
                  *(ulong **)(lVar31 + 0x98) = puVar9 + 1;
                  *(void **)(lVar31 + 0xa0) = (void *)((long)__dest + uVar28 * 8);
                  if (__src != (void *)0x0) {
                    FUN_710392eb40((ulong)__src);
                  }
                }
                else {
                  *puVar9 = uVar20;
                  *(long *)(lVar31 + 0x98) = *(long *)(lVar31 + 0x98) + 8;
                }
              }
            }
            else {
              uVar7 = uVar7 - 0xe;
              if ((~uVar7 & 0xff) != 0) {
                if (2 < (uVar7 & 0xff)) goto LAB_7101dd33c8;
                if (*(short *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                               (ulong)(byte)uVar7 * 2 + 0xe) != 0) goto LAB_7101dd2edc;
              }
            }
          }
        }
        uVar29 = uVar29 + 1 & 0xff;
      } while (uVar29 <= bVar4 && bVar4 != uVar29);
      puVar9 = *(ulong **)(lVar31 + 0x90);
      puVar10 = *(ulong **)(lVar31 + 0x98);
    }
  }
  else {
    puVar9 = *(ulong **)(lVar31 + 0x90);
    *(ulong **)(lVar31 + 0x98) = puVar9;
    puVar10 = puVar9;
  }
  local_b0 = (long ***)(lVar30 + 0x310);
  FUN_7101dd43a0(puVar9,puVar10,(long *)&local_b0);
  uVar20 = 0;
  do {
    lVar21 = *plVar2;
    lVar30 = *(long *)(lVar21 + 0x1b8);
    iVar23 = (int)uVar20;
    if (lVar30 != 0) {
      lVar18 = lVar21 + 0x1b8;
      lVar24 = lVar18;
      lVar26 = lVar30;
      do {
        if (iVar23 <= *(int *)(lVar26 + 0x20)) {
          lVar24 = lVar26;
        }
        lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < iVar23) * 8);
      } while (lVar26 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) <= iVar23)) &&
         (plVar27 = *(long **)(lVar24 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
        lVar21 = *plVar2;
        lVar30 = *(long *)(lVar21 + 0x1b8);
        lVar18 = lVar21 + 0x1b8;
      }
      lVar24 = lVar18;
      if (lVar30 != 0) {
        do {
          if (iVar23 <= *(int *)(lVar30 + 0x20)) {
            lVar24 = lVar30;
          }
          lVar30 = *(long *)(lVar30 + (ulong)(*(int *)(lVar30 + 0x20) < iVar23) * 8);
        } while (lVar30 != 0);
        if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) <= iVar23)) &&
           (plVar27 = *(long **)(lVar24 + 0x28), plVar27 != (long *)0x0)) {
          (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
          (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
          lVar21 = *plVar2;
        }
      }
    }
    pppplVar12 = (long ****)(uVar20 & 0xffffffff);
    FUN_7103771d60(&local_b0,lVar21,pppplVar12,ppppbVar13,param_5,param_6,param_7,param_8);
    plVar27 = *(long **)local_a8;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x280))(plVar27,0);
    }
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x30,pppplVar12,ppppbVar13,param_5,param_6,param_7,param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_78 = (long ***)&DAT_00000030;
        pppplVar12 = &local_78;
        uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar28 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0x30,pppplVar12,ppppbVar13,param_5,param_6,param_7,param_8)
           , puVar8 != (undefined8 *)0x0)) goto LAB_7101dd3220;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_7101dd3220:
    uVar28 = uVar20 & 0xffffffff;
    *puVar8 = &PTR_FUN_71050b0a98;
    FUN_7103776640(puVar8 + 1,(long)param_2,(byte ****)"set_parts_btn_support_%02d",uVar28,
                   ppppbVar13,param_5,param_6,param_7,param_8);
    FUN_7103776910(puVar8 + 3,(long)(puVar8 + 1),(long ****)"set_txt_num_base",uVar28,ppppbVar13,
                   param_5,param_6,param_7,param_8);
    lVar21 = lVar31 + uVar20 * 8;
    *(char *)(puVar8 + 5) = (char)uVar20;
    plVar27 = *(long **)(lVar21 + 0x10);
    *(undefined8 **)(lVar21 + 0x10) = puVar8;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 8))();
    }
    pcVar19 = local_a8;
    local_b0 = (long ***)&PTR_FUN_710523d9c8;
    local_a8 = (code *)0x0;
    if (pcVar19 != (code *)0x0) {
      FUN_710392eb40((ulong)pcVar19);
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 != 0x10);
  (**(code **)(*(long *)*plVar2 + 0x60))((long *)*plVar2,0);
  (**(code **)(*(long *)*plVar2 + 0x70))((long *)*plVar2,0);
  if (alStack_f0 == local_d0) {
    pcVar19 = *(code **)(*local_d0 + 0x20);
LAB_7101dd32dc:
    (*pcVar19)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101dd32dc;
  }
  if (alStack_120 == local_100) {
    pcVar19 = *(code **)(*local_100 + 0x20);
LAB_7101dd330c:
    (*pcVar19)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar19 = *(code **)(*local_100 + 0x28);
    goto LAB_7101dd330c;
  }
  if (alStack_150 == local_130) {
    pcVar19 = *(code **)(*local_130 + 0x20);
LAB_7101dd333c:
    (*pcVar19)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar19 = *(code **)(*local_130 + 0x28);
    goto LAB_7101dd333c;
  }
  if (alStack_180 == local_160) {
    pcVar19 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) goto LAB_7101dd3370;
    pcVar19 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar19)();
LAB_7101dd3370:
  if (alStack_1b0 == local_190) {
    pcVar19 = *(code **)(*local_190 + 0x20);
  }
  else {
    if (local_190 == (long *)0x0) {
      return;
    }
    pcVar19 = *(code **)(*local_190 + 0x28);
  }
  (*pcVar19)();
  return;
}

