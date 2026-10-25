// addr:      71038383d0
// offset:    0x38383d0
// name:      FUN_71038383d0
// mangled:   
// signature: undefined __cdecl FUN_71038383d0(undefined8 * param_1, long * param_2, long * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * param_7, byte * * * param_8)


void FUN_71038383d0(undefined8 *param_1,long *param_2,long **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,byte ***param_7,byte ***param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  byte bVar3;
  long **pplVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  byte ***pppbVar13;
  byte ***pppbVar14;
  byte **ppbVar15;
  byte *pbVar16;
  long ***ppplVar17;
  long **pplVar18;
  long lVar19;
  ulong uVar20;
  long **pplVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long ****pppplVar25;
  byte ****ppppbVar26;
  long lVar27;
  long ***ppplVar28;
  long ***ppplVar29;
  long *plVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  long **local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long ****local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  ppppbVar11 = param_4;
  pppplVar12 = param_5;
  FUN_7103856830(&local_80,(long)param_2,(byte *)param_3);
  if (((local_70 == (long *)0x0) || (*local_70 != local_68)) || (local_78 == 0)) {
    FUN_71038566c0(&local_a0,(long)param_2,(byte *)param_3);
    if (local_90 != (long *)0x0) goto LAB_710383845c;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = (long **)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_710383845c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_71038389e4;
    }
  }
  iVar6 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c0,ppppbVar11,pppplVar12,param_6,
                         param_7,param_8);
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)&DAT_000000c0;
    uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar7 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c0,ppppbVar11,pppplVar12,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0xc0,0x10,local_a0);
  pplVar4 = local_a0;
  if (param_2 == (long *)0x0) {
    plVar30 = (long *)0x0;
    plVar31 = (long *)0x0;
  }
  else {
    plVar30 = (long *)param_2[1];
    plVar31 = (long *)*plVar30;
  }
  FUN_71037c3a70(local_a0);
  *pplVar4 = (long *)&PTR_FUN_710526f088;
  pplVar4[3] = (long *)0x0;
  pplVar4[2] = (long *)(pplVar4 + 3);
  pplVar4[4] = (long *)0x0;
  pplVar4[5] = (long *)&PTR_FUN_710522fea0;
  pplVar4[6] = param_2;
  pplVar4[7] = plVar30;
  pplVar4[10] = (long *)0x0;
  pplVar4[0xb] = (long *)0x600000001;
  *(undefined1 *)(pplVar4 + 0xc) = 1;
  pplVar4[8] = plVar31;
  pplVar4[9] = (long *)0x0;
  ppppbVar26 = (byte ****)(pplVar4 + 0x10);
  *ppppbVar26 = (byte ***)0x0;
  pplVar18 = pplVar4 + 0xd;
  *pplVar18 = (long *)0x0;
  pplVar4[0x11] = (long *)0x0;
  pplVar4[0x12] = (long *)0x0;
  pplVar4[0xe] = (long *)0x0;
  pplVar4[0xf] = (long *)0x0;
  *(undefined1 *)ppppbVar26 = 0x1c;
  builtin_strncpy((char *)((long)pplVar4 + 0x87),"faultSRV",8);
  builtin_strncpy((char *)((long)pplVar4 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)pplVar4 + 0x8f) = 0;
  *pplVar4 = (long *)&PTR_FUN_710526f4c8;
  pplVar21 = pplVar4 + 0x14;
  *pplVar21 = (long *)0x0;
  pplVar4[0x13] = (long *)&PTR_FUN_71052696e8;
  *(undefined4 *)(pplVar4 + 0x17) = 0;
  pplVar4[0x15] = (long *)0x0;
  pplVar4[0x16] = (long *)0x0;
  pppbVar14 = param_7;
  if (pplVar18 == param_3) {
LAB_71038385f0:
    pppbVar13 = param_4[2];
    param_7 = pppbVar14;
joined_r0x0071038385f4:
    if (pppbVar13 == (byte ***)0x0) goto LAB_7103838668;
LAB_71038385f8:
    if ((byte ***)*pppbVar13 != param_4[3]) goto LAB_7103838668;
    pppbVar14 = param_4[1];
    *pplVar21 = (long *)pppbVar14;
    if (pppbVar14 == (byte ***)0x0) goto LAB_710383866c;
    ppbVar15 = pppbVar14[1];
    pplVar4[0x15] = (long *)ppbVar15;
    pbVar16 = *ppbVar15;
  }
  else {
    pppbVar14 = (byte ***)param_3[1];
    param_8 = (byte ***)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte ***)((long)param_3 + 1);
      pppbVar14 = (byte ***)(ulong)(*(byte *)param_3 >> 1);
    }
    if (&DAT_00000015 < pppbVar14 && (undefined1 *)((long)pppbVar14 + -0x16) != (undefined1 *)0x0) {
      ppppbVar11 = (byte ****)0x0;
      pppplVar12 = (long ****)0x0;
      param_6 = (byte ****)0x0;
      FUN_71037cfe00((ulong *)pplVar18,0x16,(ulong)((long)pppbVar14 + -0x16),(byte ****)0x0,
                     (long ****)0x0,0,(size_t)pppbVar14,param_8);
      goto LAB_71038385f0;
    }
    if (pppbVar14 != (byte ***)0x0) {
      memmove((void *)((long)pplVar4 + 0x69),param_8,(size_t)pppbVar14);
    }
    *(undefined1 *)((long)pplVar4 + 0x69 + (long)pppbVar14) = 0;
    if (((ulong)*pplVar18 & 1) == 0) {
      *(char *)pplVar18 = (char)((int)pppbVar14 << 1);
      pppbVar13 = param_4[2];
      goto joined_r0x0071038385f4;
    }
    pplVar4[0xe] = (long *)pppbVar14;
    pppbVar13 = param_4[2];
    if (pppbVar13 != (byte ***)0x0) goto LAB_71038385f8;
LAB_7103838668:
    *pplVar21 = (long *)0x0;
LAB_710383866c:
    pbVar16 = (byte *)0x0;
    pplVar4[0x15] = (long *)0x0;
  }
  pplVar4[0x16] = (long *)pbVar16;
  *(undefined4 *)(pplVar4 + 0x17) = *(undefined4 *)(param_4 + 7);
  pppbVar14 = param_7;
  if (param_4 + 4 != ppppbVar26) {
    param_8 = param_4[6];
    bVar5 = (*(byte *)(param_4 + 4) & 1) == 0;
    if (bVar5) {
      param_8 = (byte ***)((long)param_4 + 0x21);
    }
    bVar3 = *(byte *)ppppbVar26;
    pppbVar14 = (byte ***)(ulong)(*(byte *)(param_4 + 4) >> 1);
    if (!bVar5) {
      pppbVar14 = param_4[5];
    }
    if ((bVar3 & 1) == 0) {
      pppbVar13 = (byte ***)0x16;
      puVar10 = (undefined1 *)((long)pppbVar14 + -0x16);
      if (&DAT_00000015 < pppbVar14 && puVar10 != (undefined1 *)0x0) {
LAB_71038386dc:
        if ((bVar3 & 1) == 0) {
          ppppbVar11 = (byte ****)(ulong)(bVar3 >> 1);
        }
        else {
          ppppbVar11 = (byte ****)pplVar4[0x11];
        }
        pppplVar12 = (long ****)0x0;
        param_6 = ppppbVar11;
        FUN_71037cfe00((ulong *)ppppbVar26,(ulong)pppbVar13,(ulong)puVar10,ppppbVar11,(long ****)0x0
                       ,(long)ppppbVar11,(size_t)pppbVar14,param_8);
        goto LAB_7103838738;
      }
    }
    else {
      pppbVar13 = (byte ***)(((ulong)*ppppbVar26 & 0xfffffffffffffffe) - 1);
      puVar10 = (undefined1 *)((long)pppbVar14 - (long)pppbVar13);
      if (pppbVar13 <= pppbVar14 && puVar10 != (undefined1 *)0x0) goto LAB_71038386dc;
    }
    if ((bVar3 & 1) == 0) {
      plVar30 = (long *)((long)pplVar4 + 0x81);
    }
    else {
      plVar30 = pplVar4[0x12];
    }
    if (pppbVar14 != (byte ***)0x0) {
      memmove(plVar30,param_8,(size_t)pppbVar14);
    }
    *(undefined1 *)((long)plVar30 + (long)pppbVar14) = 0;
    if (((ulong)*ppppbVar26 & 1) == 0) {
      *(char *)ppppbVar26 = (char)((int)pppbVar14 << 1);
      pppbVar14 = param_7;
    }
    else {
      pplVar4[0x11] = (long *)pppbVar14;
      pppbVar14 = param_7;
    }
  }
LAB_7103838738:
  plVar31 = pplVar4[1];
  ppplVar17 = param_5[1];
  lVar32 = *plVar31;
  pplVar18 = pplVar4;
  plVar30 = plVar31;
  lVar33 = lVar32;
  if (ppplVar17 < param_5[2]) {
    ppplVar17[2] = (long **)0x0;
    ppplVar17[3] = (long **)0x0;
    *ppplVar17 = (long **)&PTR_FUN_71052300a0;
    ppplVar17[1] = (long **)0x0;
    if (plVar31 == (long *)0x0) {
      plVar30 = (long *)0x0;
    }
    else if (*plVar31 == lVar32) {
      ppplVar17[1] = pplVar4;
      pplVar18 = (long **)pplVar4[1];
      ppplVar17[2] = pplVar18;
      ppplVar17[3] = (long **)*pplVar18;
      pplVar18 = (long **)0x0;
      plVar30 = (long *)0x0;
      lVar33 = 0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar27 = (long)ppplVar17 - (long)*param_5 >> 5;
    uVar7 = lVar27 + 1;
    if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (long)param_5[2] - (long)*param_5;
    if ((ulong)(lVar19 >> 5) < 0x3ffffffffffffff) {
      uVar20 = lVar19 >> 4;
      if (uVar7 <= uVar20) {
        uVar7 = uVar20;
      }
      if (uVar7 != 0) goto LAB_71038387d8;
      pplVar21 = (long **)0x0;
    }
    else {
      uVar7 = 0x7ffffffffffffff;
LAB_71038387d8:
      pppplVar25 = (long ****)(uVar7 << 5);
      iVar6 = FUN_710392e1f0(&local_a0,0x10,pppplVar25,ppppbVar11,pppplVar12,param_6,pppbVar14,
                             param_8);
      if (((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar25,
         uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar20 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar25,ppppbVar11,pppplVar12,param_6,pppbVar14,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar25,0x10,local_a0);
      pplVar21 = local_a0;
    }
    ppplVar17 = (long ***)(pplVar21 + lVar27 * 4);
    ppplVar17[2] = (long **)0x0;
    ppplVar17[3] = (long **)0x0;
    ppplVar17[1] = (long **)0x0;
    *ppplVar17 = (long **)&PTR_FUN_71052300a0;
    if (plVar31 == (long *)0x0) {
      plVar30 = (long *)0x0;
    }
    else if (*plVar31 == lVar32) {
      ppplVar17[1] = pplVar4;
      pplVar18 = (long **)pplVar4[1];
      ppplVar17[2] = pplVar18;
      ppplVar17[3] = (long **)*pplVar18;
      pplVar18 = (long **)0x0;
      plVar30 = (long *)0x0;
      lVar33 = 0;
    }
    ppplVar28 = *param_5;
    ppplVar2 = param_5[1];
    ppplVar1 = ppplVar17 + 4;
    ppplVar29 = ppplVar28;
    if (ppplVar2 != ppplVar28) {
      lVar19 = -0x20 - (long)ppplVar28;
      lVar22 = 0;
      do {
        *(undefined8 *)((long)ppplVar17 + lVar22 + -0x10) = 0;
        *(undefined8 *)((long)ppplVar17 + lVar22 + -8) = 0;
        *(undefined ***)((long)ppplVar17 + lVar22 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppplVar17 + lVar22 + -0x18) = 0;
        plVar8 = *(long **)((long)ppplVar2 + lVar22 + -0x10);
        if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)((long)ppplVar2 + lVar22 + -8))) {
          lVar9 = *(long *)((long)ppplVar2 + lVar22 + -0x18);
          *(undefined8 *)((long)ppplVar2 + lVar22 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar22 + -8) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar22 + -0x18) = 0;
          *(long *)((long)ppplVar17 + lVar22 + -0x18) = lVar9;
          if (lVar9 == 0) {
            uVar24 = 0;
            *(undefined8 *)((long)ppplVar17 + lVar22 + -0x10) = 0;
          }
          else {
            puVar23 = *(undefined8 **)(lVar9 + 8);
            *(undefined8 **)((long)ppplVar17 + lVar22 + -0x10) = puVar23;
            uVar24 = *puVar23;
          }
          *(undefined8 *)((long)ppplVar17 + lVar22 + -8) = uVar24;
        }
        lVar22 = lVar22 + -0x20;
      } while ((long)ppplVar28 - (long)ppplVar2 != lVar22);
      ppplVar28 = *param_5;
      ppplVar17 = (long ***)
                  (pplVar21 +
                  (lVar27 + ((ulong)((long)ppplVar2 + lVar19) >> 5 ^ 0xffffffffffffffff)) * 4);
      ppplVar29 = param_5[1];
    }
    *param_5 = ppplVar17;
    param_5[1] = ppplVar1;
    param_5[2] = (long ***)(pplVar21 + uVar7 * 4);
    while (ppplVar29 != ppplVar28) {
      ppplVar29 = ppplVar29 + -4;
      (*(code *)**ppplVar29)(ppplVar29);
    }
    if (ppplVar28 != (long ***)0x0) {
      nu::VirtualFreeHook(ppplVar28);
      FUN_710392eb40((ulong)ppplVar28);
    }
  }
  if (((plVar30 != (long *)0x0) && (*plVar30 == lVar33)) && (pplVar18 != (long **)0x0)) {
    (*(code *)(*pplVar18)[1])(pplVar18);
  }
  param_1[1] = pplVar4;
  param_1[2] = plVar31;
  param_1[3] = lVar32;
LAB_71038389e4:
  *param_1 = &PTR_FUN_7105269708;
  return;
}

