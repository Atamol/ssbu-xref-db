// addr:      7101bf5a60
// offset:    0x1bf5a60
// name:      FUN_7101bf5a60
// mangled:   
// signature: undefined __cdecl FUN_7101bf5a60(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101bf5a60(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long ***ppplVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar13;
  long lVar14;
  int *piVar15;
  undefined **ppuVar16;
  long **pplVar17;
  code *pcVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  byte *pbVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  undefined2 *puVar30;
  int iVar31;
  long *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  char local_2c8 [65];
  undefined1 local_287;
  uint auStack_280 [2];
  long ***appplStack_278 [8];
  undefined4 local_238 [2];
  undefined **local_230;
  long local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  undefined2 *local_1f0;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  undefined1 local_1c8 [3];
  undefined4 local_1c5;
  undefined2 local_1c1;
  undefined1 local_1bf;
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
  long ***local_c0 [4];
  long ****local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  
  lVar14 = *(long *)(param_1 + 0x138);
  if (*(char *)(lVar14 + 0x316) != '\0') {
    *(undefined1 *)(param_1 + 0x4e8) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x4e8) != '\0') {
    return;
  }
  lVar21 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x128) + 0x600);
  uVar20 = *(uint *)(lVar14 + 0x2a4);
  uVar26 = (ulong)uVar20;
  if (*(char *)(lVar21 + 0x4aa) == '\0') {
LAB_7101bf5ad0:
    bVar5 = false;
  }
  else {
    if ((*(byte *)(lVar21 + 0x1b0) >> 1 & 1) == 0) {
      if ((*(byte *)(lVar21 + 0x1b4) >> 1 & 1) == 0) goto LAB_7101bf5ad0;
      iVar19 = 1;
      iVar31 = 1;
      cVar3 = *(char *)(param_1 + 0x4e0);
    }
    else {
      iVar19 = -1;
      iVar31 = -1;
      cVar3 = *(char *)(param_1 + 0x4e0);
    }
    if (cVar3 == '\0') {
      *(undefined8 *)(param_1 + 0x4d4) = *(undefined8 *)(*(long *)(param_1 + 0x488) + uVar26 * 8);
      if (uVar20 == 0xffffffff) {
        iVar31 = -1;
      }
      else {
        iVar31 = 0;
        if (*(int *)(lVar14 + 0x28c) != 0) {
          iVar31 = (int)uVar20 / *(int *)(lVar14 + 0x28c);
        }
      }
      *(float *)(param_1 + 0x4dc) =
           *(float *)(lVar14 + 0x274) * (float)iVar31 - *(float *)(lVar14 + 0x260);
      iVar31 = iVar19;
    }
    iVar31 = (*(int *)(param_1 + 0x4d0) + iVar31) % 3;
    *(uint *)(param_1 + 0x4d0) = iVar31 + (iVar31 >> 0x1f & 3U);
    FUN_7101bf69c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    piVar22 = *(int **)(param_1 + 0x488);
    uVar26 = (long)*(int **)(param_1 + 0x490) - (long)piVar22;
    piVar15 = piVar22;
    if (uVar26 != 0) {
      uVar27 = (long)uVar26 >> 3;
      piVar25 = piVar22;
      do {
        uVar28 = uVar27;
        if ((long)uVar27 < 0) {
          uVar28 = uVar27 + 1;
        }
        uVar28 = (long)uVar28 >> 1;
        piVar15 = piVar25 + uVar28 * 2 + 2;
        uVar27 = uVar27 + ~uVar28;
        if (*(int *)(param_1 + 0x4d4) <= piVar25[uVar28 * 2]) {
          piVar15 = piVar25;
          uVar27 = uVar28;
        }
        piVar25 = piVar15;
      } while (uVar27 != 0);
    }
    uVar20 = (int)(uVar26 >> 3) - 1;
    if (piVar15 != *(int **)(param_1 + 0x490)) {
      uVar20 = (uint)((ulong)((long)piVar15 - (long)piVar22) >> 3);
    }
    uVar26 = (ulong)uVar20;
    if (uVar20 == 0xffffffff) {
      iVar31 = -1;
    }
    else {
      iVar19 = *(int *)(*(long *)(param_1 + 0x138) + 0x28c);
      iVar31 = 0;
      if (iVar19 != 0) {
        iVar31 = (int)uVar20 / iVar19;
      }
    }
    lVar14 = *(long *)(param_1 + 0x138);
    fVar33 = *(float *)(lVar14 + 0x274) * (float)iVar31 - *(float *)(param_1 + 0x4dc);
    fVar35 = *(float *)(lVar14 + 0x26c);
    if (fVar33 <= *(float *)(lVar14 + 0x26c)) {
      fVar35 = fVar33;
    }
    fVar34 = *(float *)(lVar14 + 0x268);
    if (*(float *)(lVar14 + 0x268) <= fVar33) {
      fVar34 = fVar35;
    }
    *(undefined8 *)(lVar14 + 0x248) = 0x3f800000;
    *(float *)(lVar14 + 0x264) = fVar34;
    *(float *)(lVar14 + 0x260) = fVar34;
    plVar29 = *(long **)(param_1 + 0x138);
    FUN_7103763c70(&local_1e0,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    (**(code **)(*plVar29 + 0x18))(plVar29,&local_1e0);
    uVar27 = local_1d8;
    local_1e0 = &PTR_FUN_710523d7d8;
    local_1d8 = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    param_4 = (byte ****)0x1;
    FUN_7103783c10((long *)(param_1 + 0x138),uVar20,0,1,param_5,param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 0x138) + 0x70))(*(long **)(param_1 + 0x138),1);
    *(undefined1 *)(param_1 + 0x4e0) = 1;
    lVar14 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3) < 9) {
      uVar27 = 0;
      if (*(char *)(lVar14 + 0x191) == '\0') goto LAB_7101bf5ce0;
LAB_7101bf5d50:
      local_220 = 0x87650000000000;
      local_210 = 0xffffffffffffffff;
      uStack_208 = 0;
      local_238[0] = 0;
      local_200 = 0;
    }
    else {
      uVar27 = *(ulong *)(*(long *)(lVar14 + 0x40) + 0x40);
      if (*(char *)(lVar14 + 0x191) != '\0') goto LAB_7101bf5d50;
LAB_7101bf5ce0:
      uVar28 = FUN_7103313f20(lVar14,uVar27,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                              ,param_8);
      if ((uVar28 & 1) == 0) goto LAB_7101bf5d50;
      FUN_71024076d0(local_238,uVar27);
      if (((local_228 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_220 == DAT_7106dd53ac)) {
        piVar15 = (int *)(local_228 + 0x38);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar5) {
            *piVar15 = *piVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    local_230 = &PTR_FUN_7104f73d50;
    bVar5 = true;
    local_228 = 0;
    local_218 = 0;
  }
  uVar27 = *(ulong *)(*(long *)(param_1 + 0x488) + uVar26 * 8);
  iVar31 = (int)(uVar27 >> 0x20);
  uVar26 = (long)uVar27 >> 0x20;
  if (*(int *)(param_1 + 0x4e4) == iVar31) {
    if (!bVar5) {
      return;
    }
    goto LAB_7101bf63ac;
  }
  lVar14 = *(long *)(DAT_710532f730 + 8);
  uVar28 = 0xf8ffff0000000000;
  if (-1 < (long)uVar27) {
    uVar23 = *(long *)(param_1 + 0x4f8) - *(long *)(param_1 + 0x4f0) >> 3;
    if (iVar31 <= (int)uVar23 + -1) {
      if (uVar23 <= uVar26) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar28 = *(ulong *)(*(long *)(param_1 + 0x4f0) + uVar26 * 8);
    }
  }
  FUN_71032b5d50(auStack_280,*(long *)(lVar14 + 0x3b8),uVar28);
  local_287 = 0;
  local_2c8[0] = '\0';
  FUN_710377a4a0(param_1 + 0x178,"%d",uVar27 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
  pppplVar13 = appplStack_278;
  pppplVar11 = pppplVar13;
  FUN_71014c8900((long)local_2c8,"nam_technique_title_%s",pppplVar13,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_710377a120(param_1 + 0x188,local_2c8,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  puVar8 = FUN_71032b5800(*(long *)(lVar14 + 0x3b8),uVar28);
  lVar14 = 1;
  if (((ulong)puVar8 & 0xffffffffff) != 0 && (ulong)puVar8 >> 0x38 == 0xc1) {
    lVar14 = 2;
  }
  pbVar24 = (byte *)(param_1 + lVar14 * 0x18);
  if ((*pbVar24 & 1) == 0) {
    pbVar24 = pbVar24 + 1;
  }
  else {
    pbVar24 = *(byte **)(param_1 + lVar14 * 0x18 + 0x10);
  }
  FUN_710377a120(param_1 + 0x198,(char *)pbVar24,pppplVar11,param_4,param_5,param_6,param_7,param_8)
  ;
  FUN_7101bf6e80(param_1 + 0x3f8,extraout_x1_00,pppplVar13,param_4,param_5,param_6,param_7,param_8);
  if (0x12 < *(uint *)(param_1 + 0x32c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x32c) * 4 + 0x2e0) = 1;
  *(int *)(param_1 + 0x4e4) = iVar31;
  local_1e0 = (undefined **)0x0;
  local_1d8 = 0x4248000041800000;
  local_1d0 = 0x101013f800000;
  local_1c8 = (undefined1  [3])0x10000;
  plVar29 = (long *)(*(long *)(param_1 + 0x4a0) + uVar26 * 0x18);
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_1bf = 0;
  local_1c1 = 0;
  local_1c5 = 0;
  FUN_710337e790((long)&local_1e0);
  local_1d0 = local_1d0 & 0xffffffff;
  local_1c8._1_2_ = 1;
  local_1c5 = CONCAT31(local_1c5._1_3_,1);
  local_1bf = 1;
  plVar32 = plVar29 + 1;
  local_1f0 = (undefined2 *)0x0;
  local_1e8 = (undefined2 *)0x0;
  local_1e0 = (undefined **)CONCAT44((int)((ulong)(*plVar32 - *plVar29) >> 4) * -0x33333333,1);
  local_1f8 = (undefined2 *)0x0;
  ppplVar6 = (long ***)(*plVar32 - *plVar29);
  if (ppplVar6 != (long ***)0x0) {
    if (0x333333333333333 < (ulong)(((long)ppplVar6 >> 4) * -0x3333333333333333))
    goto LAB_7101bf6574;
    puVar9 = (undefined2 *)
             FUN_710392e290(0x10,ppplVar6,pppplVar13,param_4,param_5,param_6,param_7,param_8);
    if (puVar9 == (undefined2 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_90 = 0;
        pppplVar13 = local_c0;
        local_c0[0] = ppplVar6;
        uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
        if (((uVar27 & 1) != 0) &&
           (puVar9 = (undefined2 *)
                     FUN_710392e290(0x10,ppplVar6,pppplVar13,param_4,param_5,param_6,param_7,param_8
                                   ), puVar9 != (undefined2 *)0x0)) goto LAB_7101bf5fe8;
      }
      puVar9 = (undefined2 *)0x0;
    }
LAB_7101bf5fe8:
    local_1e8 = puVar9 + ((long)ppplVar6 >> 4) * 8;
    lVar21 = *plVar32;
    local_1f0 = puVar9;
    local_1f8 = puVar9;
    for (lVar14 = *plVar29; lVar14 != lVar21; lVar14 = lVar14 + 0x50) {
      FUN_71037a46b0(local_1f0,lVar14,pppplVar13,param_4,param_5,param_6,param_7,param_8);
      local_1f0 = local_1f0 + 0x28;
    }
  }
  puVar7 = local_1f0;
  puVar9 = local_1f8;
  plVar29 = (long *)FUN_710392e290(0x10,0x20,pppplVar13,param_4,param_5,param_6,param_7,param_8);
  if (plVar29 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = 0;
      local_c0[0] = (long ***)&SUB_00000020;
      pppplVar13 = local_c0;
      uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar27 & 1) != 0) &&
         (plVar29 = (long *)FUN_710392e290(0x10,0x20,pppplVar13,param_4,param_5,param_6,param_7,
                                           param_8), plVar29 != (long *)0x0)) goto LAB_7101bf60a4;
    }
    plVar29 = (long *)0x0;
  }
LAB_7101bf60a4:
  ppuVar16 = &PTR_FUN_71050aca70;
  *plVar29 = (long)&PTR_FUN_71050aca70;
  ppplVar6 = (long ***)((long)puVar7 - (long)puVar9);
  plVar29[1] = 0;
  plVar29[2] = 0;
  plVar29[3] = 0;
  if (ppplVar6 != (long ***)0x0) {
    if (0x333333333333333 < (ulong)(((long)ppplVar6 >> 4) * -0x3333333333333333)) {
LAB_7101bf6574:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar10 = (undefined2 *)
              FUN_710392e290(0x10,ppplVar6,pppplVar13,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined2 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_90 = 0;
        pppplVar13 = local_c0;
        local_c0[0] = ppplVar6;
        uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
        if (((uVar27 & 1) != 0) &&
           (puVar10 = (undefined2 *)
                      FUN_710392e290(0x10,ppplVar6,pppplVar13,param_4,param_5,param_6,param_7,
                                     param_8), puVar10 != (undefined2 *)0x0)) goto LAB_7101bf6124;
      }
      puVar10 = (undefined2 *)0x0;
    }
LAB_7101bf6124:
    plVar29[1] = (long)puVar10;
    plVar29[2] = (long)puVar10;
    plVar29[3] = (long)(puVar10 + ((long)ppplVar6 >> 4) * 8);
    if (puVar9 == puVar7) {
      ppuVar16 = &PTR_FUN_71050aca70;
    }
    else {
      do {
        FUN_71037a46b0(puVar10,(long)puVar9,pppplVar13,param_4,param_5,param_6,param_7,param_8);
        puVar9 = puVar9 + 0x28;
        puVar10 = (undefined2 *)(plVar29[2] + 0x50);
        plVar29[2] = (long)puVar10;
      } while (puVar7 != puVar9);
      ppuVar16 = (undefined **)*plVar29;
    }
  }
  pppplVar13 = (long ****)(param_1 + 0x260);
  pppplVar11 = (long ****)(*(code *)ppuVar16[2])(plVar29);
  local_a0 = pppplVar11;
  if (pppplVar13 == local_c0) {
joined_r0x007101bf61c8:
    if (local_c0 != local_a0) goto LAB_7101bf61cc;
LAB_7101bf61b4:
    pplVar17 = (*local_a0)[4];
LAB_7101bf61d8:
    (*(code *)pplVar17)();
  }
  else {
    if (local_c0 != pppplVar11) {
      pppplVar12 = *(long *****)(param_1 + 0x280);
      if (pppplVar13 != pppplVar12) {
        local_a0 = pppplVar12;
        *(long *****)(param_1 + 0x280) = pppplVar11;
        goto joined_r0x007101bf61c8;
      }
      (*(code *)(*pppplVar12)[3])(pppplVar12,local_c0);
      (**(code **)(**(long **)(param_1 + 0x280) + 0x20))();
      *(long *****)(param_1 + 0x280) = local_a0;
      local_a0 = local_c0;
      goto LAB_7101bf61b4;
    }
    if (*(long *****)(param_1 + 0x280) == pppplVar13) {
      (*(code *)local_c0[0][3])(pppplVar11,&local_90);
      (*(code *)(*local_a0)[4])();
      local_a0 = (long ****)0x0;
      (**(code **)(**(long **)(param_1 + 0x280) + 0x18))(*(long **)(param_1 + 0x280),local_c0);
      (**(code **)(**(long **)(param_1 + 0x280) + 0x20))();
      *(undefined8 *)(param_1 + 0x280) = 0;
      local_a0 = local_c0;
      (**(code **)(CONCAT44(uStack_8c,local_90) + 0x18))(&local_90,pppplVar13);
      (**(code **)(CONCAT44(uStack_8c,local_90) + 0x20))(&local_90);
      *(long *****)(param_1 + 0x280) = pppplVar13;
      goto joined_r0x007101bf61c8;
    }
    (*(code *)local_c0[0][3])(pppplVar11,pppplVar13);
    (*(code *)(*local_a0)[4])();
    local_a0 = *(long *****)(param_1 + 0x280);
    *(long *****)(param_1 + 0x280) = pppplVar13;
    if (local_c0 == local_a0) goto LAB_7101bf61b4;
LAB_7101bf61cc:
    if (local_a0 != (long ****)0x0) {
      pplVar17 = (*local_a0)[5];
      goto LAB_7101bf61d8;
    }
  }
  (**(code **)(*plVar29 + 0x28))(plVar29);
  puVar7 = local_1f8;
  puVar9 = local_1f0;
  if (local_1f8 != (undefined2 *)0x0) {
    while (puVar9 != puVar7) {
      puVar10 = *(undefined2 **)(puVar9 + -8);
      puVar30 = puVar9 + -0x28;
      if (puVar30 != puVar10 && puVar10 != (undefined2 *)0x0) {
        FUN_710392eb40((ulong)puVar10);
      }
      puVar9[-0x28] = 0;
      *(undefined2 **)(puVar9 + -8) = puVar30;
      *(undefined4 *)(puVar9 + -4) = 0;
      puVar9 = puVar30;
    }
    local_1f0 = puVar7;
    if (local_1f8 != (undefined2 *)0x0) {
      FUN_710392eb40((ulong)local_1f8);
    }
  }
  param_5 = (long ****)(param_1 + 0x250);
  FUN_7103781a20((long *)(param_1 + 0x140),(undefined8 *)(**(long **)(param_1 + 0x128) + 8),
                 (byte ****)"scroll_00",(byte ****)&local_1e0,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x140) + 0x70))(*(long **)(param_1 + 0x140),1);
  if (alStack_f0 == local_d0) {
    pcVar18 = *(code **)(*local_d0 + 0x20);
LAB_7101bf62a4:
    (*pcVar18)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar18 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101bf62a4;
  }
  if (alStack_120 == local_100) {
    pcVar18 = *(code **)(*local_100 + 0x20);
LAB_7101bf62d4:
    (*pcVar18)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar18 = *(code **)(*local_100 + 0x28);
    goto LAB_7101bf62d4;
  }
  if (alStack_150 == local_130) {
    pcVar18 = *(code **)(*local_130 + 0x20);
LAB_7101bf6304:
    (*pcVar18)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar18 = *(code **)(*local_130 + 0x28);
    goto LAB_7101bf6304;
  }
  if (alStack_180 == local_160) {
    pcVar18 = *(code **)(*local_160 + 0x20);
LAB_7101bf6334:
    (*pcVar18)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar18 = *(code **)(*local_160 + 0x28);
    goto LAB_7101bf6334;
  }
  if (alStack_1b0 == local_190) {
    pcVar18 = *(code **)(*local_190 + 0x20);
LAB_7101bf6364:
    (*pcVar18)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar18 = *(code **)(*local_190 + 0x28);
    goto LAB_7101bf6364;
  }
  bVar4 = *(byte *)(*(long *)(param_1 + 0x140) + 0x315);
  lVar14 = **(long **)(param_1 + 0x160);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe | bVar4;
  }
  lVar14 = **(long **)(param_1 + 0x170);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe | bVar4;
  }
  *(bool *)(param_1 + 0x4e0) = bVar5;
LAB_7101bf63ac:
  local_1bf = 0;
  local_1e0 = (undefined **)((ulong)local_1e0 & 0xffffffffffffff00);
  lVar14 = **(long **)(param_1 + 0x128);
  pcVar1 = "fighter";
  if (*(int *)(*(long *)(param_1 + 0x4b8) + uVar26 * 0x28) < 1) {
    pcVar1 = "com";
  }
  pcVar2 = "_mode_all";
  if (*(int *)(param_1 + 0x4d0) != 0) {
    pcVar2 = "";
  }
  FUN_71014c8530((long)&local_1e0,"cat_%s%s",pcVar1,pcVar2,param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),(long)&local_1e0);
  return;
}

