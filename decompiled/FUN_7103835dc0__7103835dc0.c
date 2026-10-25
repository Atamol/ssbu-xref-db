// addr:      7103835dc0
// offset:    0x3835dc0
// name:      FUN_7103835dc0
// mangled:   
// signature: undefined __cdecl FUN_7103835dc0(undefined8 * param_1, long * param_2, long * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * param_7, byte * param_8)


void FUN_7103835dc0(undefined8 *param_1,long *param_2,long **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long *param_7,byte *param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  uint uVar3;
  uint uVar4;
  long **pplVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  byte ***pppbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  long ***ppplVar15;
  long **pplVar16;
  long lVar17;
  ulong uVar18;
  long **pplVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long ****pppplVar23;
  long lVar24;
  long ***ppplVar25;
  long ***ppplVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long **local_a0 [2];
  long *local_90;
  long local_88;
  long ****local_80;
  uint local_78;
  undefined4 uStack_74;
  long *local_70;
  long local_68;
  
  ppppbVar10 = param_4;
  pppplVar11 = param_5;
  FUN_7103856830(&local_80,(long)param_2,(byte *)param_3);
  if (((local_70 == (long *)0x0) || (*local_70 != local_68)) || (CONCAT44(uStack_74,local_78) == 0))
  {
    FUN_71038566c0(local_a0,(long)param_2,(byte *)param_3);
    if (local_90 != (long *)0x0) goto LAB_7103835e4c;
  }
  else {
    local_90 = local_70;
    local_a0[0] = (long **)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_7103835e4c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_7103836358;
    }
  }
  iVar6 = FUN_710392e1f0(local_a0,0x10,(long ****)&DAT_000000d0,ppppbVar10,pppplVar11,param_6,
                         param_7,param_8);
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)&DAT_000000d0;
    uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar7 & 1) != 0) {
      FUN_710392e1f0(local_a0,0x10,(long ****)&DAT_000000d0,ppppbVar10,pppplVar11,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0xd0,0x10,local_a0[0]);
  pplVar5 = local_a0[0];
  if (param_2 == (long *)0x0) {
    plVar27 = (long *)0x0;
    plVar28 = (long *)0x0;
  }
  else {
    plVar27 = (long *)param_2[1];
    plVar28 = (long *)*plVar27;
  }
  FUN_71037c3a70(local_a0[0]);
  *pplVar5 = (long *)&PTR_FUN_710526f088;
  pplVar5[3] = (long *)0x0;
  pplVar5[2] = (long *)(pplVar5 + 3);
  pplVar5[4] = (long *)0x0;
  pplVar5[5] = (long *)&PTR_FUN_710522fea0;
  pplVar5[10] = (long *)0x0;
  pplVar5[0xb] = (long *)0x500000001;
  pplVar5[6] = param_2;
  pplVar5[7] = plVar27;
  *(undefined1 *)(pplVar5 + 0xc) = 1;
  pplVar5[0xe] = (long *)0x0;
  pplVar5[8] = plVar28;
  pplVar5[9] = (long *)0x0;
  pplVar16 = pplVar5 + 0xd;
  *pplVar16 = (long *)0x0;
  pplVar5[0x11] = (long *)0x0;
  pplVar5[0x12] = (long *)0x0;
  pplVar5[0xf] = (long *)0x0;
  pplVar5[0x10] = (long *)0x0;
  *(undefined1 *)(pplVar5 + 0x10) = 0x1c;
  builtin_strncpy((char *)((long)pplVar5 + 0x87),"faultSRV",8);
  *pplVar5 = (long *)&PTR_FUN_710526f1f8;
  builtin_strncpy((char *)((long)pplVar5 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)pplVar5 + 0x8f) = 0;
  pplVar19 = pplVar5 + 0x14;
  *pplVar19 = (long *)0x0;
  pplVar5[0x13] = (long *)&PTR_FUN_7105268870;
  *(undefined4 *)(pplVar5 + 0x19) = 0;
  pplVar5[0x18] = (long *)0x0;
  pplVar5[0x15] = (long *)0x0;
  pplVar5[0x16] = (long *)0x0;
  pplVar5[0x17] = (long *)0x0;
  plVar27 = param_7;
  if (pplVar16 == param_3) {
LAB_7103835fe8:
    pppbVar12 = param_4[2];
    param_7 = plVar27;
joined_r0x007103835fec:
    if (pppbVar12 == (byte ***)0x0) goto LAB_7103836060;
LAB_7103835ff0:
    if ((byte ***)*pppbVar12 != param_4[3]) goto LAB_7103836060;
    pppbVar12 = param_4[1];
    *pplVar19 = (long *)pppbVar12;
    if (pppbVar12 == (byte ***)0x0) goto LAB_7103836064;
    ppbVar13 = pppbVar12[1];
    pplVar5[0x15] = (long *)ppbVar13;
    pbVar14 = *ppbVar13;
  }
  else {
    plVar27 = param_3[1];
    param_8 = (byte *)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte *)((long)param_3 + 1);
      plVar27 = (long *)(ulong)(*(byte *)param_3 >> 1);
    }
    if (&DAT_00000015 < plVar27 && (undefined1 *)((long)plVar27 + -0x16) != (undefined1 *)0x0) {
      ppppbVar10 = (byte ****)0x0;
      pppplVar11 = (long ****)0x0;
      param_6 = 0;
      FUN_71037cfe00((ulong *)pplVar16,0x16,(ulong)((long)plVar27 + -0x16),(byte ****)0x0,
                     (long ****)0x0,0,(size_t)plVar27,param_8);
      goto LAB_7103835fe8;
    }
    if (plVar27 != (long *)0x0) {
      memmove((void *)((long)pplVar5 + 0x69),param_8,(size_t)plVar27);
    }
    *(undefined1 *)((long)pplVar5 + 0x69 + (long)plVar27) = 0;
    if (((ulong)*pplVar16 & 1) == 0) {
      *(char *)pplVar16 = (char)((int)plVar27 << 1);
      pppbVar12 = param_4[2];
      goto joined_r0x007103835fec;
    }
    pplVar5[0xe] = plVar27;
    pppbVar12 = param_4[2];
    if (pppbVar12 != (byte ***)0x0) goto LAB_7103835ff0;
LAB_7103836060:
    *pplVar19 = (long *)0x0;
LAB_7103836064:
    pbVar14 = (byte *)0x0;
    pplVar5[0x15] = (long *)0x0;
  }
  pplVar5[0x16] = (long *)pbVar14;
  uVar3 = *(uint *)(pplVar5 + 0x17);
  uVar4 = *(uint *)(param_4 + 4);
  if (uVar3 == uVar4) {
    FUN_7103835d10(uVar3 ^ (int)uVar3 >> 0x1f,(undefined8 *)((long)param_4 + 0x24),
                   (undefined8 *)((long)pplVar5 + 0xbc));
  }
  else {
    local_78 = uVar4 ^ (int)uVar4 >> 0x1f;
    local_80 = (long ****)(pplVar5 + 0x17);
    FUN_7103835d50(local_78,(long *)&local_80,(undefined8 *)((long)param_4 + 0x24));
  }
  plVar28 = pplVar5[1];
  ppplVar15 = param_5[1];
  lVar29 = *plVar28;
  pplVar16 = pplVar5;
  plVar27 = plVar28;
  lVar30 = lVar29;
  if (ppplVar15 < param_5[2]) {
    ppplVar15[2] = (long **)0x0;
    ppplVar15[3] = (long **)0x0;
    *ppplVar15 = (long **)&PTR_FUN_71052300a0;
    ppplVar15[1] = (long **)0x0;
    if (plVar28 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else if (*plVar28 == lVar29) {
      ppplVar15[1] = pplVar5;
      pplVar16 = (long **)pplVar5[1];
      ppplVar15[2] = pplVar16;
      ppplVar15[3] = (long **)*pplVar16;
      pplVar16 = (long **)0x0;
      plVar27 = (long *)0x0;
      lVar30 = 0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar24 = (long)ppplVar15 - (long)*param_5 >> 5;
    uVar7 = lVar24 + 1;
    if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar17 = (long)param_5[2] - (long)*param_5;
    if ((ulong)(lVar17 >> 5) < 0x3ffffffffffffff) {
      uVar18 = lVar17 >> 4;
      if (uVar7 <= uVar18) {
        uVar7 = uVar18;
      }
      if (uVar7 != 0) goto LAB_710383614c;
      pplVar19 = (long **)0x0;
    }
    else {
      uVar7 = 0x7ffffffffffffff;
LAB_710383614c:
      pppplVar23 = (long ****)(uVar7 << 5);
      iVar6 = FUN_710392e1f0(local_a0,0x10,pppplVar23,ppppbVar10,pppplVar11,param_6,param_7,param_8)
      ;
      if (((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar23,
         uVar18 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar18 & 1) != 0
         )) {
        FUN_710392e1f0(local_a0,0x10,pppplVar23,ppppbVar10,pppplVar11,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar23,0x10,local_a0[0]);
      pplVar19 = local_a0[0];
    }
    ppplVar15 = (long ***)(pplVar19 + lVar24 * 4);
    ppplVar15[2] = (long **)0x0;
    ppplVar15[3] = (long **)0x0;
    ppplVar15[1] = (long **)0x0;
    *ppplVar15 = (long **)&PTR_FUN_71052300a0;
    if (plVar28 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else if (*plVar28 == lVar29) {
      ppplVar15[1] = pplVar5;
      pplVar16 = (long **)pplVar5[1];
      ppplVar15[2] = pplVar16;
      ppplVar15[3] = (long **)*pplVar16;
      pplVar16 = (long **)0x0;
      plVar27 = (long *)0x0;
      lVar30 = 0;
    }
    ppplVar25 = *param_5;
    ppplVar2 = param_5[1];
    ppplVar1 = ppplVar15 + 4;
    ppplVar26 = ppplVar25;
    if (ppplVar2 != ppplVar25) {
      lVar17 = -0x20 - (long)ppplVar25;
      lVar20 = 0;
      do {
        *(undefined8 *)((long)ppplVar15 + lVar20 + -0x10) = 0;
        *(undefined8 *)((long)ppplVar15 + lVar20 + -8) = 0;
        *(undefined ***)((long)ppplVar15 + lVar20 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppplVar15 + lVar20 + -0x18) = 0;
        plVar8 = *(long **)((long)ppplVar2 + lVar20 + -0x10);
        if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)((long)ppplVar2 + lVar20 + -8))) {
          lVar9 = *(long *)((long)ppplVar2 + lVar20 + -0x18);
          *(undefined8 *)((long)ppplVar2 + lVar20 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar20 + -8) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar20 + -0x18) = 0;
          *(long *)((long)ppplVar15 + lVar20 + -0x18) = lVar9;
          if (lVar9 == 0) {
            uVar22 = 0;
            *(undefined8 *)((long)ppplVar15 + lVar20 + -0x10) = 0;
          }
          else {
            puVar21 = *(undefined8 **)(lVar9 + 8);
            *(undefined8 **)((long)ppplVar15 + lVar20 + -0x10) = puVar21;
            uVar22 = *puVar21;
          }
          *(undefined8 *)((long)ppplVar15 + lVar20 + -8) = uVar22;
        }
        lVar20 = lVar20 + -0x20;
      } while ((long)ppplVar25 - (long)ppplVar2 != lVar20);
      ppplVar25 = *param_5;
      ppplVar15 = (long ***)
                  (pplVar19 +
                  (lVar24 + ((ulong)((long)ppplVar2 + lVar17) >> 5 ^ 0xffffffffffffffff)) * 4);
      ppplVar26 = param_5[1];
    }
    *param_5 = ppplVar15;
    param_5[1] = ppplVar1;
    param_5[2] = (long ***)(pplVar19 + uVar7 * 4);
    while (ppplVar26 != ppplVar25) {
      ppplVar26 = ppplVar26 + -4;
      (*(code *)**ppplVar26)(ppplVar26);
    }
    if (ppplVar25 != (long ***)0x0) {
      nu::VirtualFreeHook(ppplVar25);
      FUN_710392eb40((ulong)ppplVar25);
    }
  }
  if (((plVar27 != (long *)0x0) && (*plVar27 == lVar30)) && (pplVar16 != (long **)0x0)) {
    (*(code *)(*pplVar16)[1])(pplVar16);
  }
  param_1[1] = pplVar5;
  param_1[2] = plVar28;
  param_1[3] = lVar29;
LAB_7103836358:
  *param_1 = &PTR_FUN_7105269528;
  return;
}

