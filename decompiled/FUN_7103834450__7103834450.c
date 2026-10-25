// addr:      7103834450
// offset:    0x3834450
// name:      FUN_7103834450
// mangled:   
// signature: undefined __cdecl FUN_7103834450(undefined8 * param_1, long * param_2, long * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * param_7, byte * param_8)


void FUN_7103834450(undefined8 *param_1,long *param_2,long **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long *param_7,byte *param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long **pplVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  byte ***pppbVar10;
  byte **ppbVar11;
  byte *pbVar12;
  long ***ppplVar13;
  long **pplVar14;
  long lVar15;
  ulong uVar16;
  long **pplVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long ****pppplVar21;
  long lVar22;
  long ***ppplVar23;
  long ***ppplVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long **local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long ****local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  ppppbVar8 = param_4;
  pppplVar9 = param_5;
  FUN_7103856830(&local_80,(long)param_2,(byte *)param_3);
  if (((local_70 == (long *)0x0) || (*local_70 != local_68)) || (local_78 == 0)) {
    FUN_71038566c0(&local_a0,(long)param_2,(byte *)param_3);
    if (local_90 != (long *)0x0) goto LAB_71038344dc;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = (long **)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_71038344dc:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_710383499c;
    }
  }
  iVar4 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000b8,ppppbVar8,pppplVar9,param_6,param_7
                         ,param_8);
  if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)&DAT_000000b8;
    uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar5 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000b8,ppppbVar8,pppplVar9,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0xb8,0x10,local_a0);
  pplVar3 = local_a0;
  if (param_2 == (long *)0x0) {
    plVar25 = (long *)0x0;
    plVar26 = (long *)0x0;
  }
  else {
    plVar25 = (long *)param_2[1];
    plVar26 = (long *)*plVar25;
  }
  FUN_71037c3a70(local_a0);
  *pplVar3 = (long *)&PTR_FUN_710526f088;
  pplVar3[3] = (long *)0x0;
  pplVar3[2] = (long *)(pplVar3 + 3);
  pplVar3[4] = (long *)0x0;
  pplVar3[5] = (long *)&PTR_FUN_710522fea0;
  pplVar3[10] = (long *)0x0;
  pplVar3[0xb] = (long *)0xb00000001;
  pplVar3[6] = param_2;
  pplVar3[7] = plVar25;
  *(undefined1 *)(pplVar3 + 0xc) = 1;
  pplVar3[0xe] = (long *)0x0;
  pplVar3[8] = plVar26;
  pplVar3[9] = (long *)0x0;
  pplVar14 = pplVar3 + 0xd;
  *pplVar14 = (long *)0x0;
  pplVar3[0x11] = (long *)0x0;
  pplVar3[0x12] = (long *)0x0;
  pplVar3[0xf] = (long *)0x0;
  pplVar3[0x10] = (long *)0x0;
  *(undefined1 *)(pplVar3 + 0x10) = 0x1c;
  builtin_strncpy((char *)((long)pplVar3 + 0x87),"faultSRV",8);
  builtin_strncpy((char *)((long)pplVar3 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)pplVar3 + 0x8f) = 0;
  *pplVar3 = (long *)&PTR_FUN_710526f2e8;
  pplVar17 = pplVar3 + 0x14;
  *pplVar17 = (long *)0x0;
  pplVar3[0x13] = (long *)&PTR_FUN_7105231690;
  pplVar3[0x15] = (long *)0x0;
  pplVar3[0x16] = (long *)0x0;
  plVar25 = param_7;
  if (pplVar14 == param_3) {
LAB_7103834668:
    pppbVar10 = param_4[2];
    param_7 = plVar25;
joined_r0x00710383466c:
    if (pppbVar10 == (byte ***)0x0) goto LAB_71038346e0;
LAB_7103834670:
    if ((byte ***)*pppbVar10 != param_4[3]) goto LAB_71038346e0;
    pppbVar10 = param_4[1];
    *pplVar17 = (long *)pppbVar10;
    if (pppbVar10 == (byte ***)0x0) goto LAB_71038346e4;
    ppbVar11 = pppbVar10[1];
    pplVar3[0x15] = (long *)ppbVar11;
    pbVar12 = *ppbVar11;
  }
  else {
    plVar25 = param_3[1];
    param_8 = (byte *)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte *)((long)param_3 + 1);
      plVar25 = (long *)(ulong)(*(byte *)param_3 >> 1);
    }
    if (&DAT_00000015 < plVar25 && (undefined1 *)((long)plVar25 + -0x16) != (undefined1 *)0x0) {
      ppppbVar8 = (byte ****)0x0;
      pppplVar9 = (long ****)0x0;
      param_6 = 0;
      FUN_71037cfe00((ulong *)pplVar14,0x16,(ulong)((long)plVar25 + -0x16),(byte ****)0x0,
                     (long ****)0x0,0,(size_t)plVar25,param_8);
      goto LAB_7103834668;
    }
    if (plVar25 != (long *)0x0) {
      memmove((void *)((long)pplVar3 + 0x69),param_8,(size_t)plVar25);
    }
    *(undefined1 *)((long)pplVar3 + 0x69 + (long)plVar25) = 0;
    if (((ulong)*pplVar14 & 1) == 0) {
      *(char *)pplVar14 = (char)((int)plVar25 << 1);
      pppbVar10 = param_4[2];
      goto joined_r0x00710383466c;
    }
    pplVar3[0xe] = plVar25;
    pppbVar10 = param_4[2];
    if (pppbVar10 != (byte ***)0x0) goto LAB_7103834670;
LAB_71038346e0:
    *pplVar17 = (long *)0x0;
LAB_71038346e4:
    pbVar12 = (byte *)0x0;
    pplVar3[0x15] = (long *)0x0;
  }
  plVar26 = pplVar3[1];
  pplVar3[0x16] = (long *)pbVar12;
  lVar27 = *plVar26;
  ppplVar13 = param_5[1];
  pplVar14 = pplVar3;
  plVar25 = plVar26;
  lVar28 = lVar27;
  if (ppplVar13 < param_5[2]) {
    ppplVar13[2] = (long **)0x0;
    ppplVar13[3] = (long **)0x0;
    *ppplVar13 = (long **)&PTR_FUN_71052300a0;
    ppplVar13[1] = (long **)0x0;
    if (plVar26 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else if (*plVar26 == lVar27) {
      ppplVar13[1] = pplVar3;
      pplVar14 = (long **)pplVar3[1];
      ppplVar13[2] = pplVar14;
      ppplVar13[3] = (long **)*pplVar14;
      pplVar14 = (long **)0x0;
      plVar25 = (long *)0x0;
      lVar28 = 0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar22 = (long)ppplVar13 - (long)*param_5 >> 5;
    uVar5 = lVar22 + 1;
    if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)param_5[2] - (long)*param_5;
    if ((ulong)(lVar15 >> 5) < 0x3ffffffffffffff) {
      uVar16 = lVar15 >> 4;
      if (uVar5 <= uVar16) {
        uVar5 = uVar16;
      }
      if (uVar5 != 0) goto LAB_7103834790;
      pplVar17 = (long **)0x0;
    }
    else {
      uVar5 = 0x7ffffffffffffff;
LAB_7103834790:
      pppplVar21 = (long ****)(uVar5 << 5);
      iVar4 = FUN_710392e1f0(&local_a0,0x10,pppplVar21,ppppbVar8,pppplVar9,param_6,param_7,param_8);
      if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar21,
         uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar16 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar21,ppppbVar8,pppplVar9,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar21,0x10,local_a0);
      pplVar17 = local_a0;
    }
    ppplVar13 = (long ***)(pplVar17 + lVar22 * 4);
    ppplVar13[2] = (long **)0x0;
    ppplVar13[3] = (long **)0x0;
    ppplVar13[1] = (long **)0x0;
    *ppplVar13 = (long **)&PTR_FUN_71052300a0;
    if (plVar26 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else if (*plVar26 == lVar27) {
      ppplVar13[1] = pplVar3;
      pplVar14 = (long **)pplVar3[1];
      ppplVar13[2] = pplVar14;
      ppplVar13[3] = (long **)*pplVar14;
      pplVar14 = (long **)0x0;
      plVar25 = (long *)0x0;
      lVar28 = 0;
    }
    ppplVar23 = *param_5;
    ppplVar2 = param_5[1];
    ppplVar1 = ppplVar13 + 4;
    ppplVar24 = ppplVar23;
    if (ppplVar2 != ppplVar23) {
      lVar15 = -0x20 - (long)ppplVar23;
      lVar18 = 0;
      do {
        *(undefined8 *)((long)ppplVar13 + lVar18 + -0x10) = 0;
        *(undefined8 *)((long)ppplVar13 + lVar18 + -8) = 0;
        *(undefined ***)((long)ppplVar13 + lVar18 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppplVar13 + lVar18 + -0x18) = 0;
        plVar6 = *(long **)((long)ppplVar2 + lVar18 + -0x10);
        if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)((long)ppplVar2 + lVar18 + -8))) {
          lVar7 = *(long *)((long)ppplVar2 + lVar18 + -0x18);
          *(undefined8 *)((long)ppplVar2 + lVar18 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar18 + -8) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar18 + -0x18) = 0;
          *(long *)((long)ppplVar13 + lVar18 + -0x18) = lVar7;
          if (lVar7 == 0) {
            uVar20 = 0;
            *(undefined8 *)((long)ppplVar13 + lVar18 + -0x10) = 0;
          }
          else {
            puVar19 = *(undefined8 **)(lVar7 + 8);
            *(undefined8 **)((long)ppplVar13 + lVar18 + -0x10) = puVar19;
            uVar20 = *puVar19;
          }
          *(undefined8 *)((long)ppplVar13 + lVar18 + -8) = uVar20;
        }
        lVar18 = lVar18 + -0x20;
      } while ((long)ppplVar23 - (long)ppplVar2 != lVar18);
      ppplVar23 = *param_5;
      ppplVar13 = (long ***)
                  (pplVar17 +
                  (lVar22 + ((ulong)((long)ppplVar2 + lVar15) >> 5 ^ 0xffffffffffffffff)) * 4);
      ppplVar24 = param_5[1];
    }
    *param_5 = ppplVar13;
    param_5[1] = ppplVar1;
    param_5[2] = (long ***)(pplVar17 + uVar5 * 4);
    while (ppplVar24 != ppplVar23) {
      ppplVar24 = ppplVar24 + -4;
      (*(code *)**ppplVar24)(ppplVar24);
    }
    if (ppplVar23 != (long ***)0x0) {
      nu::VirtualFreeHook(ppplVar23);
      FUN_710392eb40((ulong)ppplVar23);
    }
  }
  if (((plVar25 != (long *)0x0) && (*plVar25 == lVar28)) && (pplVar14 != (long **)0x0)) {
    (*(code *)(*pplVar14)[1])(pplVar14);
  }
  param_1[1] = pplVar3;
  param_1[2] = plVar26;
  param_1[3] = lVar27;
LAB_710383499c:
  *param_1 = &PTR_FUN_71052693d8;
  return;
}

