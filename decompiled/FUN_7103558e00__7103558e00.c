// addr:      7103558e00
// offset:    0x3558e00
// name:      FUN_7103558e00
// mangled:   
// signature: undefined __cdecl FUN_7103558e00(undefined8 * param_1, undefined * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, long * param_6, undefined * * param_7, byte * param_8)


void FUN_7103558e00(undefined8 *param_1,undefined *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,long *param_6,undefined **param_7,byte *param_8)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  byte ****ppppbVar7;
  long *plVar8;
  undefined **ppuVar9;
  byte ***pppbVar10;
  byte **ppbVar11;
  byte *pbVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  undefined **local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long ****local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  ppppbVar7 = param_4;
  plVar8 = param_6;
  FUN_7103856830(&local_80,(long)param_2,(byte *)param_3);
  if (((local_70 == (long *)0x0) || (*local_70 != local_68)) || (local_78 == 0)) {
    FUN_71038566c0(&local_a0,(long)param_2,(byte *)param_3);
    if (local_90 != (long *)0x0) goto LAB_7103558e8c;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = &PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_7103558e8c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_7103559378;
    }
  }
  iVar3 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c0,ppppbVar7,param_5,plVar8,param_7,
                         param_8);
  if ((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)0xc0;
    uVar4 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar4 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c0,ppppbVar7,param_5,plVar8,param_7,
                     param_8);
    }
  }
  ppuVar6 = local_a0;
  nu::VirtualAllocHook(0xc0,0x10,local_a0);
  ppuVar2 = local_a0;
  if (param_2 == (undefined *)0x0) {
    puVar22 = (undefined8 *)0x0;
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar22 = *(undefined8 **)(param_2 + 8);
    puVar24 = (undefined *)*puVar22;
  }
  FUN_71037c3a70(local_a0);
  *ppuVar2 = (undefined *)&PTR_FUN_710526f088;
  ppuVar2[3] = (undefined *)0x0;
  ppuVar2[2] = (undefined *)(ppuVar2 + 3);
  ppuVar2[4] = (undefined *)0x0;
  ppuVar2[5] = (undefined *)&PTR_FUN_710522fea0;
  ppuVar2[10] = (undefined *)0x0;
  ppuVar2[0xb] = (undefined *)0x800000001;
  ppuVar2[6] = param_2;
  ppuVar2[7] = (undefined *)puVar22;
  *(undefined1 *)(ppuVar2 + 0xc) = 1;
  ppuVar2[0xe] = (undefined *)0x0;
  ppuVar2[8] = puVar24;
  ppuVar2[9] = (undefined *)0x0;
  ppuVar13 = ppuVar2 + 0xd;
  *ppuVar13 = (undefined *)0x0;
  ppuVar2[0x11] = (undefined *)0x0;
  ppuVar2[0x12] = (undefined *)0x0;
  ppuVar2[0xf] = (undefined *)0x0;
  ppuVar2[0x10] = (undefined *)0x0;
  *(undefined1 *)(ppuVar2 + 0x10) = 0x1c;
  builtin_strncpy((char *)((long)ppuVar2 + 0x87),"faultSRV",8);
  *ppuVar2 = (undefined *)&PTR_FUN_710526f248;
  builtin_strncpy((char *)((long)ppuVar2 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)ppuVar2 + 0x8f) = 0;
  ppuVar25 = ppuVar2 + 0x14;
  *ppuVar25 = (undefined *)0x0;
  ppuVar2[0x13] = (undefined *)&PTR_FUN_710522ff60;
  ppuVar2[0x17] = (undefined *)0x6;
  ppuVar2[0x15] = (undefined *)0x0;
  ppuVar2[0x16] = (undefined *)0x0;
  ppuVar9 = param_7;
  if (ppuVar13 == param_3) {
LAB_7103559020:
    pppbVar10 = param_4[2];
    param_7 = ppuVar9;
joined_r0x007103559024:
    if (pppbVar10 == (byte ***)0x0) goto LAB_7103559098;
LAB_7103559028:
    if ((byte ***)*pppbVar10 != param_4[3]) goto LAB_7103559098;
    pppbVar10 = param_4[1];
    *ppuVar25 = (undefined *)pppbVar10;
    if (pppbVar10 == (byte ***)0x0) goto LAB_710355909c;
    ppbVar11 = pppbVar10[1];
    ppuVar2[0x15] = (undefined *)ppbVar11;
    pbVar12 = *ppbVar11;
  }
  else {
    ppuVar9 = (undefined **)param_3[1];
    param_8 = param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte *)((long)param_3 + 1);
      ppuVar9 = (undefined **)(ulong)(*(byte *)param_3 >> 1);
    }
    ppuVar6 = (undefined **)((long)ppuVar9 + -0x16);
    if (&DAT_00000015 < ppuVar9 && ppuVar6 != (undefined **)0x0) {
      ppppbVar7 = (byte ****)0x0;
      param_5 = (long ****)0x0;
      plVar8 = (long *)0x0;
      FUN_71037cfe00((ulong *)ppuVar13,0x16,(ulong)ppuVar6,(byte ****)0x0,(long ****)0x0,0,
                     (size_t)ppuVar9,param_8);
      goto LAB_7103559020;
    }
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar6 = ppuVar9;
      memmove((void *)((long)ppuVar2 + 0x69),param_8,(size_t)ppuVar9);
    }
    *(undefined1 *)((long)ppuVar2 + 0x69 + (long)ppuVar9) = 0;
    if (((ulong)*ppuVar13 & 1) == 0) {
      *(char *)ppuVar13 = (char)((int)ppuVar9 << 1);
      pppbVar10 = param_4[2];
      goto joined_r0x007103559024;
    }
    ppuVar2[0xe] = (undefined *)ppuVar9;
    pppbVar10 = param_4[2];
    if (pppbVar10 != (byte ***)0x0) goto LAB_7103559028;
LAB_7103559098:
    *ppuVar25 = (undefined *)0x0;
LAB_710355909c:
    pbVar12 = (byte *)0x0;
    ppuVar2[0x15] = (undefined *)0x0;
  }
  ppuVar2[0x16] = pbVar12;
  uVar1 = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(ppuVar2 + 0x17) = uVar1;
  local_80 = (long ****)CONCAT44(*(undefined4 *)((long)param_4 + 0x24),uVar1);
  *(undefined4 *)((long)ppuVar2 + 0xbc) = *(undefined4 *)((long)param_4 + 0x24);
  FUN_710386a1c0((long)ppuVar2,(int *)&local_80,ppuVar6,ppppbVar7,param_5,plVar8,param_7,param_8);
  plVar23 = (long *)ppuVar2[1];
  puVar22 = (undefined8 *)param_6[1];
  lVar26 = *plVar23;
  ppuVar6 = ppuVar2;
  plVar27 = plVar23;
  lVar28 = lVar26;
  if (puVar22 < (undefined8 *)param_6[2]) {
    puVar22[2] = 0;
    puVar22[3] = 0;
    *puVar22 = &PTR_FUN_71052300a0;
    puVar22[1] = 0;
    if (plVar23 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else if (*plVar23 == lVar26) {
      puVar22[1] = ppuVar2;
      puVar14 = (undefined8 *)ppuVar2[1];
      puVar22[2] = puVar14;
      puVar22[3] = *puVar14;
      ppuVar6 = (undefined **)0x0;
      plVar27 = (long *)0x0;
      lVar28 = 0;
    }
    param_6[1] = param_6[1] + 0x20;
  }
  else {
    lVar21 = (long)puVar22 - *param_6 >> 5;
    uVar4 = lVar21 + 1;
    if (uVar4 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = param_6[2] - *param_6;
    if ((ulong)(lVar15 >> 5) < 0x3ffffffffffffff) {
      uVar16 = lVar15 >> 4;
      if (uVar4 <= uVar16) {
        uVar4 = uVar16;
      }
      if (uVar4 != 0) goto LAB_710355916c;
      ppuVar9 = (undefined **)0x0;
    }
    else {
      uVar4 = 0x7ffffffffffffff;
LAB_710355916c:
      pppplVar20 = (long ****)(uVar4 << 5);
      iVar3 = FUN_710392e1f0(&local_a0,0x10,pppplVar20,ppppbVar7,param_5,plVar8,param_7,param_8);
      if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar20,
         uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar16 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar20,ppppbVar7,param_5,plVar8,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar20,0x10,local_a0);
      ppuVar9 = local_a0;
    }
    ppuVar13 = ppuVar9 + lVar21 * 4;
    ppuVar13[2] = (undefined *)0x0;
    ppuVar13[3] = (undefined *)0x0;
    ppuVar13[1] = (undefined *)0x0;
    *ppuVar13 = (undefined *)&PTR_FUN_71052300a0;
    if (plVar23 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else if (*plVar23 == lVar26) {
      ppuVar13[1] = (undefined *)ppuVar2;
      puVar22 = (undefined8 *)ppuVar2[1];
      ppuVar13[2] = (undefined *)puVar22;
      ppuVar13[3] = (undefined *)*puVar22;
      ppuVar6 = (undefined **)0x0;
      plVar27 = (long *)0x0;
      lVar28 = 0;
    }
    puVar22 = (undefined8 *)*param_6;
    puVar14 = (undefined8 *)param_6[1];
    ppuVar25 = ppuVar13 + 4;
    puVar18 = puVar22;
    if (puVar14 != puVar22) {
      lVar15 = -0x20 - (long)puVar22;
      lVar17 = 0;
      do {
        *(undefined8 *)((long)ppuVar13 + lVar17 + -0x10) = 0;
        *(undefined8 *)((long)ppuVar13 + lVar17 + -8) = 0;
        *(undefined ***)((long)ppuVar13 + lVar17 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppuVar13 + lVar17 + -0x18) = 0;
        plVar8 = *(long **)((long)puVar14 + lVar17 + -0x10);
        if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)((long)puVar14 + lVar17 + -8))) {
          lVar5 = *(long *)((long)puVar14 + lVar17 + -0x18);
          *(undefined8 *)((long)puVar14 + lVar17 + -0x10) = 0;
          *(undefined8 *)((long)puVar14 + lVar17 + -8) = 0;
          *(undefined8 *)((long)puVar14 + lVar17 + -0x18) = 0;
          *(long *)((long)ppuVar13 + lVar17 + -0x18) = lVar5;
          if (lVar5 == 0) {
            uVar19 = 0;
            *(undefined8 *)((long)ppuVar13 + lVar17 + -0x10) = 0;
          }
          else {
            puVar18 = *(undefined8 **)(lVar5 + 8);
            *(undefined8 **)((long)ppuVar13 + lVar17 + -0x10) = puVar18;
            uVar19 = *puVar18;
          }
          *(undefined8 *)((long)ppuVar13 + lVar17 + -8) = uVar19;
        }
        lVar17 = lVar17 + -0x20;
      } while ((long)puVar22 - (long)puVar14 != lVar17);
      puVar22 = (undefined8 *)*param_6;
      ppuVar13 = ppuVar9 + (lVar21 + ((ulong)((long)puVar14 + lVar15) >> 5 ^ 0xffffffffffffffff)) *
                           4;
      puVar18 = (undefined8 *)param_6[1];
    }
    *param_6 = (long)ppuVar13;
    param_6[1] = (long)ppuVar25;
    param_6[2] = (long)(ppuVar9 + uVar4 * 4);
    while (puVar18 != puVar22) {
      puVar18 = puVar18 + -4;
      (**(code **)*puVar18)(puVar18);
    }
    if (puVar22 != (undefined8 *)0x0) {
      nu::VirtualFreeHook(puVar22);
      FUN_710392eb40((ulong)puVar22);
    }
  }
  if (((plVar27 != (long *)0x0) && (*plVar27 == lVar28)) && (ppuVar6 != (undefined **)0x0)) {
    (**(code **)(*ppuVar6 + 8))(ppuVar6);
  }
  param_1[1] = ppuVar2;
  param_1[2] = plVar23;
  param_1[3] = lVar26;
LAB_7103559378:
  *param_1 = &PTR_FUN_71052300c0;
  return;
}

