// addr:      7103833810
// offset:    0x3833810
// name:      FUN_7103833810
// mangled:   
// signature: undefined __cdecl FUN_7103833810(undefined8 * param_1, long * param_2, long * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * param_7, byte * param_8)


void FUN_7103833810(undefined8 *param_1,long *param_2,long **param_3,byte ****param_4,
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
  long ***ppplVar10;
  long **pplVar11;
  long lVar12;
  ulong uVar13;
  long **pplVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long ****pppplVar18;
  long lVar19;
  long ***ppplVar20;
  long ***ppplVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
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
    if (local_90 != (long *)0x0) goto LAB_710383389c;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = (long **)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_710383389c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_7103833d10;
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
    plVar22 = (long *)0x0;
    plVar23 = (long *)0x0;
  }
  else {
    plVar22 = (long *)param_2[1];
    plVar23 = (long *)*plVar22;
  }
  FUN_71037c3a70(local_a0);
  *pplVar3 = (long *)&PTR_FUN_710526f088;
  pplVar3[3] = (long *)0x0;
  pplVar3[2] = (long *)(pplVar3 + 3);
  pplVar3[4] = (long *)0x0;
  pplVar3[5] = (long *)&PTR_FUN_710522fea0;
  pplVar3[10] = (long *)0x0;
  pplVar3[0xb] = (long *)&DAT_100000002;
  pplVar3[6] = param_2;
  pplVar3[7] = plVar22;
  *(undefined1 *)(pplVar3 + 0xc) = 1;
  pplVar3[0xe] = (long *)0x0;
  pplVar3[8] = plVar23;
  pplVar3[9] = (long *)0x0;
  pplVar11 = pplVar3 + 0xd;
  *pplVar11 = (long *)0x0;
  pplVar3[0x11] = (long *)0x0;
  pplVar3[0x12] = (long *)0x0;
  pplVar3[0xf] = (long *)0x0;
  pplVar3[0x10] = (long *)0x0;
  *(undefined1 *)(pplVar3 + 0x10) = 0x1c;
  builtin_strncpy((char *)((long)pplVar3 + 0x87),"faultSRV",8);
  *pplVar3 = (long *)&PTR_FUN_710526f298;
  builtin_strncpy((char *)((long)pplVar3 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)pplVar3 + 0x8f) = 0;
  pplVar3[0x15] = (long *)0x0;
  pplVar3[0x16] = (long *)0x0;
  pplVar3[0x13] = (long *)&PTR_FUN_7105231d58;
  pplVar3[0x14] = (long *)0x0;
  if (pplVar11 != param_3) {
    plVar22 = param_3[1];
    param_8 = (byte *)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte *)((long)param_3 + 1);
      plVar22 = (long *)(ulong)(*(byte *)param_3 >> 1);
    }
    if (plVar22 < (long *)0x16 || (long)plVar22 - 0x16U == 0) {
      if (plVar22 != (long *)0x0) {
        memmove((void *)((long)pplVar3 + 0x69),param_8,(size_t)plVar22);
      }
      *(undefined1 *)((long)pplVar3 + 0x69 + (long)plVar22) = 0;
      if (((ulong)*pplVar11 & 1) == 0) {
        *(char *)pplVar11 = (char)((int)plVar22 << 1);
      }
      else {
        pplVar3[0xe] = plVar22;
      }
    }
    else {
      ppppbVar8 = (byte ****)0x0;
      pppplVar9 = (long ****)0x0;
      param_6 = 0;
      FUN_71037cfe00((ulong *)pplVar11,0x16,(long)plVar22 - 0x16U,(byte ****)0x0,(long ****)0x0,0,
                     (size_t)plVar22,param_8);
      param_7 = plVar22;
    }
  }
  FUN_710386adc0((long)pplVar3,(long)param_4);
  plVar23 = pplVar3[1];
  ppplVar10 = param_5[1];
  lVar24 = *plVar23;
  pplVar11 = pplVar3;
  plVar22 = plVar23;
  lVar25 = lVar24;
  if (ppplVar10 < param_5[2]) {
    ppplVar10[2] = (long **)0x0;
    ppplVar10[3] = (long **)0x0;
    *ppplVar10 = (long **)&PTR_FUN_71052300a0;
    ppplVar10[1] = (long **)0x0;
    if (plVar23 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else if (*plVar23 == lVar24) {
      ppplVar10[1] = pplVar3;
      pplVar11 = (long **)pplVar3[1];
      ppplVar10[2] = pplVar11;
      ppplVar10[3] = (long **)*pplVar11;
      pplVar11 = (long **)0x0;
      plVar22 = (long *)0x0;
      lVar25 = 0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar19 = (long)ppplVar10 - (long)*param_5 >> 5;
    uVar5 = lVar19 + 1;
    if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)param_5[2] - (long)*param_5;
    if ((ulong)(lVar12 >> 5) < 0x3ffffffffffffff) {
      uVar13 = lVar12 >> 4;
      if (uVar5 <= uVar13) {
        uVar5 = uVar13;
      }
      if (uVar5 != 0) goto LAB_7103833b04;
      pplVar14 = (long **)0x0;
    }
    else {
      uVar5 = 0x7ffffffffffffff;
LAB_7103833b04:
      pppplVar18 = (long ****)(uVar5 << 5);
      iVar4 = FUN_710392e1f0(&local_a0,0x10,pppplVar18,ppppbVar8,pppplVar9,param_6,param_7,param_8);
      if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar18,
         uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar13 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar18,ppppbVar8,pppplVar9,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar18,0x10,local_a0);
      pplVar14 = local_a0;
    }
    ppplVar10 = (long ***)(pplVar14 + lVar19 * 4);
    ppplVar10[2] = (long **)0x0;
    ppplVar10[3] = (long **)0x0;
    ppplVar10[1] = (long **)0x0;
    *ppplVar10 = (long **)&PTR_FUN_71052300a0;
    if (plVar23 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else if (*plVar23 == lVar24) {
      ppplVar10[1] = pplVar3;
      pplVar11 = (long **)pplVar3[1];
      ppplVar10[2] = pplVar11;
      ppplVar10[3] = (long **)*pplVar11;
      pplVar11 = (long **)0x0;
      plVar22 = (long *)0x0;
      lVar25 = 0;
    }
    ppplVar20 = *param_5;
    ppplVar2 = param_5[1];
    ppplVar1 = ppplVar10 + 4;
    ppplVar21 = ppplVar20;
    if (ppplVar2 != ppplVar20) {
      lVar12 = -0x20 - (long)ppplVar20;
      lVar15 = 0;
      do {
        *(undefined8 *)((long)ppplVar10 + lVar15 + -0x10) = 0;
        *(undefined8 *)((long)ppplVar10 + lVar15 + -8) = 0;
        *(undefined ***)((long)ppplVar10 + lVar15 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppplVar10 + lVar15 + -0x18) = 0;
        plVar6 = *(long **)((long)ppplVar2 + lVar15 + -0x10);
        if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)((long)ppplVar2 + lVar15 + -8))) {
          lVar7 = *(long *)((long)ppplVar2 + lVar15 + -0x18);
          *(undefined8 *)((long)ppplVar2 + lVar15 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar15 + -8) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar15 + -0x18) = 0;
          *(long *)((long)ppplVar10 + lVar15 + -0x18) = lVar7;
          if (lVar7 == 0) {
            uVar17 = 0;
            *(undefined8 *)((long)ppplVar10 + lVar15 + -0x10) = 0;
          }
          else {
            puVar16 = *(undefined8 **)(lVar7 + 8);
            *(undefined8 **)((long)ppplVar10 + lVar15 + -0x10) = puVar16;
            uVar17 = *puVar16;
          }
          *(undefined8 *)((long)ppplVar10 + lVar15 + -8) = uVar17;
        }
        lVar15 = lVar15 + -0x20;
      } while ((long)ppplVar20 - (long)ppplVar2 != lVar15);
      ppplVar20 = *param_5;
      ppplVar10 = (long ***)
                  (pplVar14 +
                  (lVar19 + ((ulong)((long)ppplVar2 + lVar12) >> 5 ^ 0xffffffffffffffff)) * 4);
      ppplVar21 = param_5[1];
    }
    *param_5 = ppplVar10;
    param_5[1] = ppplVar1;
    param_5[2] = (long ***)(pplVar14 + uVar5 * 4);
    while (ppplVar21 != ppplVar20) {
      ppplVar21 = ppplVar21 + -4;
      (*(code *)**ppplVar21)(ppplVar21);
    }
    if (ppplVar20 != (long ***)0x0) {
      nu::VirtualFreeHook(ppplVar20);
      FUN_710392eb40((ulong)ppplVar20);
    }
  }
  if (((plVar22 != (long *)0x0) && (*plVar22 == lVar25)) && (pplVar11 != (long **)0x0)) {
    (*(code *)(*pplVar11)[1])(pplVar11);
  }
  param_1[1] = pplVar3;
  param_1[2] = plVar23;
  param_1[3] = lVar24;
LAB_7103833d10:
  *param_1 = &PTR_FUN_7105238428;
  return;
}

