// addr:      7103832a10
// offset:    0x3832a10
// name:      FUN_7103832a10
// mangled:   
// signature: undefined __cdecl FUN_7103832a10(undefined8 * param_1, byte * * param_2, byte * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * param_7, byte * * * param_8)


void FUN_7103832a10(undefined8 *param_1,byte **param_2,byte ***param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,byte ***param_7,byte ***param_8)

{
  long ***ppplVar1;
  byte bVar2;
  byte ***pppbVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte ***pppbVar9;
  byte ***pppbVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  byte ***pppbVar13;
  byte ***pppbVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  byte ****ppppbVar21;
  long lVar22;
  long ***ppplVar23;
  long ***ppplVar24;
  byte **ppbVar25;
  byte **ppbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte ***local_a0;
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
    if (local_90 != (long *)0x0) goto LAB_7103832a9c;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = (byte ***)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_7103832a9c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_7103833044;
    }
  }
  iVar5 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c8,ppppbVar11,pppplVar12,param_6,
                         param_7,param_8);
  if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)0xc8;
    uVar6 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar6 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c8,ppppbVar11,pppplVar12,param_6,param_7,
                     param_8);
    }
  }
  pppbVar10 = local_a0;
  nu::VirtualAllocHook(200,0x10,local_a0);
  pppbVar3 = local_a0;
  if (param_2 == (byte **)0x0) {
    ppbVar25 = (byte **)0x0;
    ppbVar26 = (byte **)0x0;
  }
  else {
    ppbVar25 = (byte **)param_2[1];
    ppbVar26 = (byte **)*ppbVar25;
  }
  FUN_71037c3a70(local_a0);
  *pppbVar3 = &PTR_FUN_710526f088;
  pppbVar3[3] = (byte **)0x0;
  pppbVar3[2] = (byte **)(pppbVar3 + 3);
  pppbVar3[4] = (byte **)0x0;
  pppbVar3[5] = &PTR_FUN_710522fea0;
  pppbVar3[6] = param_2;
  pppbVar3[7] = ppbVar25;
  pppbVar3[10] = (byte **)0x0;
  pppbVar3[0xb] = (byte **)0x700000002;
  pppbVar3[8] = ppbVar26;
  pppbVar3[9] = (byte **)0x0;
  *(undefined1 *)(pppbVar3 + 0xc) = 1;
  ppppbVar21 = (byte ****)(pppbVar3 + 0x10);
  *ppppbVar21 = (byte ***)0x0;
  pppbVar14 = pppbVar3 + 0xd;
  *pppbVar14 = (byte **)0x0;
  pppbVar3[0x11] = (byte **)0x0;
  pppbVar3[0x12] = (byte **)0x0;
  pppbVar3[0xe] = (byte **)0x0;
  pppbVar3[0xf] = (byte **)0x0;
  *(undefined1 *)ppppbVar21 = 0x1c;
  builtin_strncpy((char *)((long)pppbVar3 + 0x87),"faultSRV",8);
  builtin_strncpy((char *)((long)pppbVar3 + 0x81),"NUD_Defa",8);
  *pppbVar3 = &PTR_FUN_710526f5d8;
  *(undefined1 *)((long)pppbVar3 + 0x8f) = 0;
  *(undefined4 *)(pppbVar3 + 0x13) = 6;
  pppbVar9 = pppbVar3 + 0x15;
  *pppbVar9 = (byte **)0x0;
  pppbVar3[0x14] = &PTR_FUN_7105269278;
  *(undefined4 *)(pppbVar3 + 0x18) = 0;
  pppbVar3[0x16] = (byte **)0x0;
  pppbVar3[0x17] = (byte **)0x0;
  if (pppbVar14 != param_3) {
    pppbVar13 = (byte ***)param_3[1];
    param_8 = (byte ***)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte ***)((long)param_3 + 1);
      pppbVar13 = (byte ***)(ulong)(*(byte *)param_3 >> 1);
    }
    pppbVar10 = (byte ***)((long)pppbVar13 + -0x16);
    if (pppbVar13 < (byte ***)0x16 || pppbVar10 == (byte ***)0x0) {
      if (pppbVar13 != (byte ***)0x0) {
        pppbVar10 = pppbVar13;
        memmove((void *)((long)pppbVar3 + 0x69),param_8,(size_t)pppbVar13);
      }
      *(undefined1 *)((long)pppbVar3 + 0x69 + (long)pppbVar13) = 0;
      if (((ulong)*pppbVar14 & 1) == 0) {
        *(char *)pppbVar14 = (char)((int)pppbVar13 << 1);
      }
      else {
        pppbVar3[0xe] = (byte **)pppbVar13;
      }
    }
    else {
      ppppbVar11 = (byte ****)0x0;
      pppplVar12 = (long ****)0x0;
      param_6 = (byte ****)0x0;
      FUN_71037cfe00((ulong *)pppbVar14,0x16,(ulong)pppbVar10,(byte ****)0x0,(long ****)0x0,0,
                     (size_t)pppbVar13,param_8);
      param_7 = pppbVar13;
    }
  }
  *(undefined4 *)(pppbVar3 + 0x13) = *(undefined4 *)(param_4 + 4);
  if ((param_4[2] == (byte ***)0x0) || ((byte ***)*param_4[2] != param_4[3])) {
    *pppbVar9 = (byte **)0x0;
LAB_7103832cb0:
    ppbVar25 = (byte **)0x0;
    pppbVar3[0x16] = (byte **)0x0;
  }
  else {
    pppbVar14 = param_4[1];
    *pppbVar9 = (byte **)pppbVar14;
    if (pppbVar14 == (byte ***)0x0) goto LAB_7103832cb0;
    ppbVar25 = pppbVar14[1];
    pppbVar3[0x16] = ppbVar25;
    ppbVar25 = (byte **)*ppbVar25;
  }
  pppbVar3[0x17] = ppbVar25;
  *(undefined4 *)(pppbVar3 + 0x18) = *(undefined4 *)(param_4 + 0xc);
  pppbVar14 = param_7;
  if (param_4 + 9 != ppppbVar21) {
    param_8 = param_4[0xb];
    bVar4 = (*(byte *)(param_4 + 9) & 1) == 0;
    if (bVar4) {
      param_8 = (byte ***)((long)param_4 + 0x49);
    }
    bVar2 = *(byte *)ppppbVar21;
    pppbVar14 = (byte ***)(ulong)(*(byte *)(param_4 + 9) >> 1);
    if (!bVar4) {
      pppbVar14 = param_4[10];
    }
    if ((bVar2 & 1) == 0) {
      pppbVar9 = (byte ***)0x16;
      pppbVar10 = (byte ***)((long)pppbVar14 + -0x16);
      if (&DAT_00000015 < pppbVar14 && pppbVar10 != (byte ***)0x0) {
LAB_7103832d20:
        if ((bVar2 & 1) == 0) {
          ppppbVar11 = (byte ****)(ulong)(bVar2 >> 1);
        }
        else {
          ppppbVar11 = (byte ****)pppbVar3[0x11];
        }
        pppplVar12 = (long ****)0x0;
        param_6 = ppppbVar11;
        FUN_71037cfe00((ulong *)ppppbVar21,(ulong)pppbVar9,(ulong)pppbVar10,ppppbVar11,
                       (long ****)0x0,(long)ppppbVar11,(size_t)pppbVar14,param_8);
        goto LAB_7103832d7c;
      }
    }
    else {
      pppbVar9 = (byte ***)(((ulong)*ppppbVar21 & 0xfffffffffffffffe) - 1);
      pppbVar10 = (byte ***)((long)pppbVar14 - (long)pppbVar9);
      if (pppbVar9 <= pppbVar14 && pppbVar10 != (byte ***)0x0) goto LAB_7103832d20;
    }
    if ((bVar2 & 1) == 0) {
      ppbVar25 = (byte **)((long)pppbVar3 + 0x81);
    }
    else {
      ppbVar25 = pppbVar3[0x12];
    }
    if (pppbVar14 != (byte ***)0x0) {
      pppbVar10 = pppbVar14;
      memmove(ppbVar25,param_8,(size_t)pppbVar14);
    }
    *(byte *)((long)ppbVar25 + (long)pppbVar14) = 0;
    if (((ulong)*ppppbVar21 & 1) == 0) {
      *(char *)ppppbVar21 = (char)((int)pppbVar14 << 1);
      pppbVar14 = param_7;
    }
    else {
      pppbVar3[0x11] = (byte **)pppbVar14;
      pppbVar14 = param_7;
    }
  }
LAB_7103832d7c:
  local_80 = (long ****)CONCAT44(*(undefined4 *)(pppbVar3 + 0x18),*(undefined4 *)(pppbVar3 + 0x13));
  FUN_710386a1c0((long)pppbVar3,(int *)&local_80,pppbVar10,ppppbVar11,pppplVar12,param_6,pppbVar14,
                 param_8);
  ppbVar26 = pppbVar3[1];
  ppplVar23 = param_5[1];
  pbVar27 = *ppbVar26;
  pppbVar10 = pppbVar3;
  ppbVar25 = ppbVar26;
  pbVar28 = pbVar27;
  if (ppplVar23 < param_5[2]) {
    ppplVar23[2] = (long **)0x0;
    ppplVar23[3] = (long **)0x0;
    *ppplVar23 = (long **)&PTR_FUN_71052300a0;
    ppplVar23[1] = (long **)0x0;
    if (ppbVar26 == (byte **)0x0) {
      ppbVar25 = (byte **)0x0;
    }
    else if (*ppbVar26 == pbVar27) {
      ppplVar23[1] = (long **)pppbVar3;
      ppbVar25 = pppbVar3[1];
      ppplVar23[2] = (long **)ppbVar25;
      ppplVar23[3] = (long **)*ppbVar25;
      pppbVar10 = (byte ***)0x0;
      ppbVar25 = (byte **)0x0;
      pbVar28 = (byte *)0x0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar22 = (long)ppplVar23 - (long)*param_5 >> 5;
    uVar6 = lVar22 + 1;
    if (uVar6 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)param_5[2] - (long)*param_5;
    if ((ulong)(lVar15 >> 5) < 0x3ffffffffffffff) {
      uVar16 = lVar15 >> 4;
      if (uVar6 <= uVar16) {
        uVar6 = uVar16;
      }
      if (uVar6 != 0) goto LAB_7103832e38;
      pppbVar14 = (byte ***)0x0;
    }
    else {
      uVar6 = 0x7ffffffffffffff;
LAB_7103832e38:
      pppplVar20 = (long ****)(uVar6 << 5);
      iVar5 = FUN_710392e1f0(&local_a0,0x10,pppplVar20,ppppbVar11,pppplVar12,param_6,pppbVar14,
                             param_8);
      if (((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar20,
         uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar16 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar20,ppppbVar11,pppplVar12,param_6,pppbVar14,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar20,0x10,local_a0);
      pppbVar14 = local_a0;
    }
    pppbVar9 = pppbVar14 + lVar22 * 4;
    pppbVar9[2] = (byte **)0x0;
    pppbVar9[3] = (byte **)0x0;
    pppbVar9[1] = (byte **)0x0;
    *pppbVar9 = &PTR_FUN_71052300a0;
    if (ppbVar26 == (byte **)0x0) {
      ppbVar25 = (byte **)0x0;
    }
    else if (*ppbVar26 == pbVar27) {
      pppbVar9[1] = (byte **)pppbVar3;
      ppbVar25 = pppbVar3[1];
      pppbVar9[2] = ppbVar25;
      pppbVar9[3] = (byte **)*ppbVar25;
      pppbVar10 = (byte ***)0x0;
      ppbVar25 = (byte **)0x0;
      pbVar28 = (byte *)0x0;
    }
    ppplVar23 = *param_5;
    ppplVar1 = param_5[1];
    pppbVar13 = pppbVar9 + 4;
    ppplVar24 = ppplVar23;
    if (ppplVar1 != ppplVar23) {
      lVar15 = -0x20 - (long)ppplVar23;
      lVar17 = 0;
      do {
        *(undefined8 *)((long)pppbVar9 + lVar17 + -0x10) = 0;
        *(undefined8 *)((long)pppbVar9 + lVar17 + -8) = 0;
        *(undefined ***)((long)pppbVar9 + lVar17 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)pppbVar9 + lVar17 + -0x18) = 0;
        plVar7 = *(long **)((long)ppplVar1 + lVar17 + -0x10);
        if ((plVar7 != (long *)0x0) && (*plVar7 == *(long *)((long)ppplVar1 + lVar17 + -8))) {
          lVar8 = *(long *)((long)ppplVar1 + lVar17 + -0x18);
          *(undefined8 *)((long)ppplVar1 + lVar17 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar1 + lVar17 + -8) = 0;
          *(undefined8 *)((long)ppplVar1 + lVar17 + -0x18) = 0;
          *(long *)((long)pppbVar9 + lVar17 + -0x18) = lVar8;
          if (lVar8 == 0) {
            uVar19 = 0;
            *(undefined8 *)((long)pppbVar9 + lVar17 + -0x10) = 0;
          }
          else {
            puVar18 = *(undefined8 **)(lVar8 + 8);
            *(undefined8 **)((long)pppbVar9 + lVar17 + -0x10) = puVar18;
            uVar19 = *puVar18;
          }
          *(undefined8 *)((long)pppbVar9 + lVar17 + -8) = uVar19;
        }
        lVar17 = lVar17 + -0x20;
      } while ((long)ppplVar23 - (long)ppplVar1 != lVar17);
      ppplVar23 = *param_5;
      pppbVar9 = pppbVar14 +
                 (lVar22 + ((ulong)((long)ppplVar1 + lVar15) >> 5 ^ 0xffffffffffffffff)) * 4;
      ppplVar24 = param_5[1];
    }
    *param_5 = (long ***)pppbVar9;
    param_5[1] = (long ***)pppbVar13;
    param_5[2] = (long ***)(pppbVar14 + uVar6 * 4);
    while (ppplVar24 != ppplVar23) {
      ppplVar24 = ppplVar24 + -4;
      (*(code *)**ppplVar24)(ppplVar24);
    }
    if (ppplVar23 != (long ***)0x0) {
      nu::VirtualFreeHook(ppplVar23);
      FUN_710392eb40((ulong)ppplVar23);
    }
  }
  if (((ppbVar25 != (byte **)0x0) && (*ppbVar25 == pbVar28)) && (pppbVar10 != (byte ***)0x0)) {
    (*(code *)(*pppbVar10)[1])(pppbVar10);
  }
  param_1[1] = pppbVar3;
  param_1[2] = ppbVar26;
  param_1[3] = pbVar27;
LAB_7103833044:
  *param_1 = &PTR_FUN_7105269298;
  return;
}

