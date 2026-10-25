// addr:      7103835710
// offset:    0x3835710
// name:      FUN_7103835710
// mangled:   
// signature: undefined __cdecl FUN_7103835710(undefined8 * param_1, long * param_2, long * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * param_7, byte * param_8)


void FUN_7103835710(undefined8 *param_1,long *param_2,long **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long **param_7,byte *param_8)

{
  long ***ppplVar1;
  byte ***pppbVar2;
  long ***ppplVar3;
  uint uVar4;
  long **pplVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long **__n;
  long ***ppplVar12;
  long **pplVar13;
  long lVar14;
  ulong uVar15;
  long **pplVar16;
  byte ***pppbVar17;
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
  
  ppppbVar10 = param_4;
  pppplVar11 = param_5;
  FUN_7103856830(&local_80,(long)param_2,(byte *)param_3);
  if (((local_70 == (long *)0x0) || (*local_70 != local_68)) || (local_78 == 0)) {
    FUN_71038566c0(&local_a0,(long)param_2,(byte *)param_3);
    if (local_90 != (long *)0x0) goto LAB_710383579c;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = (long **)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_710383579c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_7103835c7c;
    }
  }
  iVar6 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000f0,ppppbVar10,pppplVar11,param_6,
                         param_7,param_8);
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)0xf0;
    uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar7 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000f0,ppppbVar10,pppplVar11,param_6,param_7,
                     param_8);
    }
  }
  pplVar13 = local_a0;
  nu::VirtualAllocHook(0xf0,0x10,local_a0);
  pplVar5 = local_a0;
  if (param_2 == (long *)0x0) {
    plVar25 = (long *)0x0;
    plVar26 = (long *)0x0;
  }
  else {
    plVar25 = (long *)param_2[1];
    plVar26 = (long *)*plVar25;
  }
  FUN_71037c3a70(local_a0);
  *pplVar5 = (long *)&PTR_FUN_710526f088;
  pplVar5[3] = (long *)0x0;
  pplVar5[2] = (long *)(pplVar5 + 3);
  pplVar5[4] = (long *)0x0;
  pplVar5[5] = (long *)&PTR_FUN_710522fea0;
  pplVar5[10] = (long *)0x0;
  pplVar5[0xb] = (long *)0xd00000001;
  pplVar5[6] = param_2;
  pplVar5[7] = plVar25;
  *(undefined1 *)(pplVar5 + 0xc) = 1;
  pplVar5[0xe] = (long *)0x0;
  pplVar5[8] = plVar26;
  pplVar5[9] = (long *)0x0;
  pplVar16 = pplVar5 + 0xd;
  *pplVar16 = (long *)0x0;
  pplVar5[0x11] = (long *)0x0;
  pplVar5[0x12] = (long *)0x0;
  pplVar5[0xf] = (long *)0x0;
  pplVar5[0x10] = (long *)0x0;
  *(undefined1 *)(pplVar5 + 0x10) = 0x1c;
  builtin_strncpy((char *)((long)pplVar5 + 0x87),"faultSRV",8);
  builtin_strncpy((char *)((long)pplVar5 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)pplVar5 + 0x8f) = 0;
  *pplVar5 = (long *)&PTR_thunk_FUN_710386a0a0_710526f6e8;
  pplVar5[0x13] = (long *)&PTR_FUN_7105231fa8;
  *(undefined4 *)(pplVar5 + 0x19) = 0;
  pplVar5[0x14] = (long *)0x0;
  *(undefined1 *)(pplVar5 + 0x1c) = 0;
  pplVar5[0x17] = (long *)0x0;
  pplVar5[0x18] = (long *)0x0;
  pplVar5[0x15] = (long *)0x0;
  pplVar5[0x16] = (long *)0x0;
  if (pplVar16 != param_3) {
    __n = (long **)param_3[1];
    param_8 = (byte *)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte *)((long)param_3 + 1);
      __n = (long **)(ulong)(*(byte *)param_3 >> 1);
    }
    pplVar13 = (long **)((long)__n - 0x16);
    if (__n < (long **)0x16 || pplVar13 == (long **)0x0) {
      if (__n != (long **)0x0) {
        pplVar13 = __n;
        memmove((void *)((long)pplVar5 + 0x69),param_8,(size_t)__n);
      }
      *(undefined1 *)((long)pplVar5 + 0x69 + (long)__n) = 0;
      if (((ulong)*pplVar16 & 1) == 0) {
        *(char *)pplVar16 = (char)((int)__n << 1);
      }
      else {
        pplVar5[0xe] = (long *)__n;
      }
    }
    else {
      ppppbVar10 = (byte ****)0x0;
      pppplVar11 = (long ****)0x0;
      param_6 = 0;
      FUN_71037cfe00((ulong *)pplVar16,0x16,(ulong)pplVar13,(byte ****)0x0,(long ****)0x0,0,
                     (size_t)__n,param_8);
      param_7 = __n;
    }
  }
  pppbVar2 = param_4[2];
  pppbVar17 = param_4[3];
  pplVar5[0x14] = (long *)param_4[1];
  pplVar5[0x15] = (long *)pppbVar2;
  pplVar5[0x16] = (long *)pppbVar17;
  *(float *)((long)pplVar5 + 0xbc) = *(float *)((long)pplVar5 + 0xa4);
  pplVar5[0x1b] = (long *)0x0;
  pplVar5[0x1a] = (long *)&DAT_3f8000003f800000;
  *(float *)(pplVar5 + 0x17) = *(float *)(pplVar5 + 0x14);
  *(float *)((long)pplVar5 + 0xc4) =
       *(float *)((long)pplVar5 + 0xa4) + *(float *)((long)pplVar5 + 0xac);
  *(float *)(pplVar5 + 0x18) = *(float *)(pplVar5 + 0x14) + *(float *)(pplVar5 + 0x15);
  uVar4 = *(uint *)(param_4 + 4);
  *(uint *)(pplVar5 + 0x19) = uVar4;
  *(undefined1 *)(pplVar5 + 0x1c) = *(undefined1 *)((long)param_4 + 0x24);
  local_80 = (long ****)((ulong)uVar4 << 0x20 | 4);
  FUN_710386a1c0((long)pplVar5,(int *)&local_80,pplVar13,ppppbVar10,pppplVar11,param_6,param_7,
                 param_8);
  plVar26 = pplVar5[1];
  ppplVar12 = param_5[1];
  lVar27 = *plVar26;
  pplVar13 = pplVar5;
  plVar25 = plVar26;
  lVar28 = lVar27;
  if (ppplVar12 < param_5[2]) {
    ppplVar12[2] = (long **)0x0;
    ppplVar12[3] = (long **)0x0;
    *ppplVar12 = (long **)&PTR_FUN_71052300a0;
    ppplVar12[1] = (long **)0x0;
    if (plVar26 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else if (*plVar26 == lVar27) {
      ppplVar12[1] = pplVar5;
      pplVar13 = (long **)pplVar5[1];
      ppplVar12[2] = pplVar13;
      ppplVar12[3] = (long **)*pplVar13;
      pplVar13 = (long **)0x0;
      plVar25 = (long *)0x0;
      lVar28 = 0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar22 = (long)ppplVar12 - (long)*param_5 >> 5;
    uVar7 = lVar22 + 1;
    if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (long)param_5[2] - (long)*param_5;
    if ((ulong)(lVar14 >> 5) < 0x3ffffffffffffff) {
      uVar15 = lVar14 >> 4;
      if (uVar7 <= uVar15) {
        uVar7 = uVar15;
      }
      if (uVar7 != 0) goto LAB_7103835a70;
      pplVar16 = (long **)0x0;
    }
    else {
      uVar7 = 0x7ffffffffffffff;
LAB_7103835a70:
      pppplVar21 = (long ****)(uVar7 << 5);
      iVar6 = FUN_710392e1f0(&local_a0,0x10,pppplVar21,ppppbVar10,pppplVar11,param_6,param_7,param_8
                            );
      if (((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar21,
         uVar15 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar15 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar21,ppppbVar10,pppplVar11,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar21,0x10,local_a0);
      pplVar16 = local_a0;
    }
    ppplVar12 = (long ***)(pplVar16 + lVar22 * 4);
    ppplVar12[2] = (long **)0x0;
    ppplVar12[3] = (long **)0x0;
    ppplVar12[1] = (long **)0x0;
    *ppplVar12 = (long **)&PTR_FUN_71052300a0;
    if (plVar26 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else if (*plVar26 == lVar27) {
      ppplVar12[1] = pplVar5;
      pplVar13 = (long **)pplVar5[1];
      ppplVar12[2] = pplVar13;
      ppplVar12[3] = (long **)*pplVar13;
      pplVar13 = (long **)0x0;
      plVar25 = (long *)0x0;
      lVar28 = 0;
    }
    ppplVar23 = *param_5;
    ppplVar3 = param_5[1];
    ppplVar1 = ppplVar12 + 4;
    ppplVar24 = ppplVar23;
    if (ppplVar3 != ppplVar23) {
      lVar14 = -0x20 - (long)ppplVar23;
      lVar18 = 0;
      do {
        *(undefined8 *)((long)ppplVar12 + lVar18 + -0x10) = 0;
        *(undefined8 *)((long)ppplVar12 + lVar18 + -8) = 0;
        *(undefined ***)((long)ppplVar12 + lVar18 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppplVar12 + lVar18 + -0x18) = 0;
        plVar8 = *(long **)((long)ppplVar3 + lVar18 + -0x10);
        if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)((long)ppplVar3 + lVar18 + -8))) {
          lVar9 = *(long *)((long)ppplVar3 + lVar18 + -0x18);
          *(undefined8 *)((long)ppplVar3 + lVar18 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar3 + lVar18 + -8) = 0;
          *(undefined8 *)((long)ppplVar3 + lVar18 + -0x18) = 0;
          *(long *)((long)ppplVar12 + lVar18 + -0x18) = lVar9;
          if (lVar9 == 0) {
            uVar20 = 0;
            *(undefined8 *)((long)ppplVar12 + lVar18 + -0x10) = 0;
          }
          else {
            puVar19 = *(undefined8 **)(lVar9 + 8);
            *(undefined8 **)((long)ppplVar12 + lVar18 + -0x10) = puVar19;
            uVar20 = *puVar19;
          }
          *(undefined8 *)((long)ppplVar12 + lVar18 + -8) = uVar20;
        }
        lVar18 = lVar18 + -0x20;
      } while ((long)ppplVar23 - (long)ppplVar3 != lVar18);
      ppplVar23 = *param_5;
      ppplVar12 = (long ***)
                  (pplVar16 +
                  (lVar22 + ((ulong)((long)ppplVar3 + lVar14) >> 5 ^ 0xffffffffffffffff)) * 4);
      ppplVar24 = param_5[1];
    }
    *param_5 = ppplVar12;
    param_5[1] = ppplVar1;
    param_5[2] = (long ***)(pplVar16 + uVar7 * 4);
    while (ppplVar24 != ppplVar23) {
      ppplVar24 = ppplVar24 + -4;
      (*(code *)**ppplVar24)(ppplVar24);
    }
    if (ppplVar23 != (long ***)0x0) {
      nu::VirtualFreeHook(ppplVar23);
      FUN_710392eb40((ulong)ppplVar23);
    }
  }
  if (((plVar25 != (long *)0x0) && (*plVar25 == lVar28)) && (pplVar13 != (long **)0x0)) {
    (*(code *)(*pplVar13)[1])(pplVar13);
  }
  param_1[1] = pplVar5;
  param_1[2] = plVar26;
  param_1[3] = lVar27;
LAB_7103835c7c:
  *param_1 = &PTR_FUN_7105231f88;
  return;
}

