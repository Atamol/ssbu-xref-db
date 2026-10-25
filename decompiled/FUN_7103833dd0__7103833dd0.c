// addr:      7103833dd0
// offset:    0x3833dd0
// name:      FUN_7103833dd0
// mangled:   
// signature: undefined __cdecl FUN_7103833dd0(undefined8 * param_1, long * param_2, long * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * param_7, byte * param_8)


void FUN_7103833dd0(undefined8 *param_1,long *param_2,long **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long **param_7,byte *param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long **pplVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long **__n;
  long ***ppplVar12;
  byte ***pppbVar13;
  byte **ppbVar14;
  byte *pbVar15;
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
  long **pplVar29;
  long lVar30;
  long lVar31;
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
    if (local_90 != (long *)0x0) goto LAB_7103833e5c;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = (long **)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_7103833e5c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_7103834340;
    }
  }
  iVar6 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c8,ppppbVar10,pppplVar11,param_6,
                         param_7,param_8);
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)0xc8;
    uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar7 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c8,ppppbVar10,pppplVar11,param_6,param_7,
                     param_8);
    }
  }
  pplVar16 = local_a0;
  nu::VirtualAllocHook(200,0x10,local_a0);
  pplVar5 = local_a0;
  if (param_2 == (long *)0x0) {
    plVar27 = (long *)0x0;
    plVar28 = (long *)0x0;
  }
  else {
    plVar27 = (long *)param_2[1];
    plVar28 = (long *)*plVar27;
  }
  FUN_71037c3a70(local_a0);
  *pplVar5 = (long *)&PTR_FUN_710526f088;
  pplVar5[3] = (long *)0x0;
  pplVar5[2] = (long *)(pplVar5 + 3);
  pplVar5[4] = (long *)0x0;
  pplVar5[5] = (long *)&PTR_FUN_710522fea0;
  pplVar5[10] = (long *)0x0;
  pplVar5[0xb] = (long *)0x1200000001;
  pplVar5[6] = param_2;
  pplVar5[7] = plVar27;
  *(undefined1 *)(pplVar5 + 0xc) = 1;
  pplVar5[0xe] = (long *)0x0;
  pplVar5[8] = plVar28;
  pplVar5[9] = (long *)0x0;
  pplVar19 = pplVar5 + 0xd;
  *pplVar19 = (long *)0x0;
  pplVar5[0x11] = (long *)0x0;
  pplVar5[0x12] = (long *)0x0;
  pplVar5[0xf] = (long *)0x0;
  pplVar5[0x10] = (long *)0x0;
  *(undefined1 *)(pplVar5 + 0x10) = 0x1c;
  builtin_strncpy((char *)((long)pplVar5 + 0x87),"faultSRV",8);
  *pplVar5 = (long *)&PTR_thunk_FUN_710386a0a0_7105269b20;
  builtin_strncpy((char *)((long)pplVar5 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)pplVar5 + 0x8f) = 0;
  *(undefined4 *)(pplVar5 + 0x13) = 0;
  pplVar29 = pplVar5 + 0x15;
  *pplVar29 = (long *)0x0;
  pplVar5[0x14] = (long *)&PTR_FUN_71052690f8;
  *(undefined4 *)(pplVar5 + 0x18) = 4;
  pplVar5[0x16] = (long *)0x0;
  pplVar5[0x17] = (long *)0x0;
  if (pplVar19 != param_3) {
    __n = (long **)param_3[1];
    param_8 = (byte *)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte *)((long)param_3 + 1);
      __n = (long **)(ulong)(*(byte *)param_3 >> 1);
    }
    pplVar16 = (long **)((long)__n - 0x16);
    if (__n < (long **)0x16 || pplVar16 == (long **)0x0) {
      if (__n != (long **)0x0) {
        pplVar16 = __n;
        memmove((void *)((long)pplVar5 + 0x69),param_8,(size_t)__n);
      }
      *(undefined1 *)((long)pplVar5 + 0x69 + (long)__n) = 0;
      if (((ulong)*pplVar19 & 1) == 0) {
        *(char *)pplVar19 = (char)((int)__n << 1);
      }
      else {
        pplVar5[0xe] = (long *)__n;
      }
    }
    else {
      ppppbVar10 = (byte ****)0x0;
      pppplVar11 = (long ****)0x0;
      param_6 = 0;
      FUN_71037cfe00((ulong *)pplVar19,0x16,(ulong)pplVar16,(byte ****)0x0,(long ****)0x0,0,
                     (size_t)__n,param_8);
      param_7 = __n;
    }
  }
  uVar3 = *(undefined4 *)param_4;
  *(undefined4 *)(pplVar5 + 0x13) = uVar3;
  if ((param_4[3] == (byte ***)0x0) || ((byte ***)*param_4[3] != param_4[4])) {
    *pplVar29 = (long *)0x0;
LAB_710383406c:
    pbVar15 = (byte *)0x0;
    pplVar5[0x16] = (long *)0x0;
  }
  else {
    pppbVar13 = param_4[2];
    *pplVar29 = (long *)pppbVar13;
    if (pppbVar13 == (byte ***)0x0) goto LAB_710383406c;
    ppbVar14 = pppbVar13[1];
    pplVar5[0x16] = (long *)ppbVar14;
    pbVar15 = *ppbVar14;
  }
  pplVar5[0x17] = (long *)pbVar15;
  uVar4 = *(undefined4 *)(param_4 + 5);
  *(undefined4 *)(pplVar5 + 0x18) = uVar4;
  local_80 = (long ****)CONCAT44(uVar3,uVar4);
  FUN_710386a1c0((long)pplVar5,(int *)&local_80,pplVar16,ppppbVar10,pppplVar11,param_6,param_7,
                 param_8);
  plVar28 = pplVar5[1];
  ppplVar12 = param_5[1];
  lVar30 = *plVar28;
  pplVar16 = pplVar5;
  plVar27 = plVar28;
  lVar31 = lVar30;
  if (ppplVar12 < param_5[2]) {
    ppplVar12[2] = (long **)0x0;
    ppplVar12[3] = (long **)0x0;
    *ppplVar12 = (long **)&PTR_FUN_71052300a0;
    ppplVar12[1] = (long **)0x0;
    if (plVar28 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else if (*plVar28 == lVar30) {
      ppplVar12[1] = pplVar5;
      pplVar16 = (long **)pplVar5[1];
      ppplVar12[2] = pplVar16;
      ppplVar12[3] = (long **)*pplVar16;
      pplVar16 = (long **)0x0;
      plVar27 = (long *)0x0;
      lVar31 = 0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar24 = (long)ppplVar12 - (long)*param_5 >> 5;
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
      if (uVar7 != 0) goto LAB_7103834134;
      pplVar19 = (long **)0x0;
    }
    else {
      uVar7 = 0x7ffffffffffffff;
LAB_7103834134:
      pppplVar23 = (long ****)(uVar7 << 5);
      iVar6 = FUN_710392e1f0(&local_a0,0x10,pppplVar23,ppppbVar10,pppplVar11,param_6,param_7,param_8
                            );
      if (((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar23,
         uVar18 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar18 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar23,ppppbVar10,pppplVar11,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar23,0x10,local_a0);
      pplVar19 = local_a0;
    }
    ppplVar12 = (long ***)(pplVar19 + lVar24 * 4);
    ppplVar12[2] = (long **)0x0;
    ppplVar12[3] = (long **)0x0;
    ppplVar12[1] = (long **)0x0;
    *ppplVar12 = (long **)&PTR_FUN_71052300a0;
    if (plVar28 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else if (*plVar28 == lVar30) {
      ppplVar12[1] = pplVar5;
      pplVar16 = (long **)pplVar5[1];
      ppplVar12[2] = pplVar16;
      ppplVar12[3] = (long **)*pplVar16;
      pplVar16 = (long **)0x0;
      plVar27 = (long *)0x0;
      lVar31 = 0;
    }
    ppplVar25 = *param_5;
    ppplVar2 = param_5[1];
    ppplVar1 = ppplVar12 + 4;
    ppplVar26 = ppplVar25;
    if (ppplVar2 != ppplVar25) {
      lVar17 = -0x20 - (long)ppplVar25;
      lVar20 = 0;
      do {
        *(undefined8 *)((long)ppplVar12 + lVar20 + -0x10) = 0;
        *(undefined8 *)((long)ppplVar12 + lVar20 + -8) = 0;
        *(undefined ***)((long)ppplVar12 + lVar20 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppplVar12 + lVar20 + -0x18) = 0;
        plVar8 = *(long **)((long)ppplVar2 + lVar20 + -0x10);
        if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)((long)ppplVar2 + lVar20 + -8))) {
          lVar9 = *(long *)((long)ppplVar2 + lVar20 + -0x18);
          *(undefined8 *)((long)ppplVar2 + lVar20 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar20 + -8) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar20 + -0x18) = 0;
          *(long *)((long)ppplVar12 + lVar20 + -0x18) = lVar9;
          if (lVar9 == 0) {
            uVar22 = 0;
            *(undefined8 *)((long)ppplVar12 + lVar20 + -0x10) = 0;
          }
          else {
            puVar21 = *(undefined8 **)(lVar9 + 8);
            *(undefined8 **)((long)ppplVar12 + lVar20 + -0x10) = puVar21;
            uVar22 = *puVar21;
          }
          *(undefined8 *)((long)ppplVar12 + lVar20 + -8) = uVar22;
        }
        lVar20 = lVar20 + -0x20;
      } while ((long)ppplVar25 - (long)ppplVar2 != lVar20);
      ppplVar25 = *param_5;
      ppplVar12 = (long ***)
                  (pplVar19 +
                  (lVar24 + ((ulong)((long)ppplVar2 + lVar17) >> 5 ^ 0xffffffffffffffff)) * 4);
      ppplVar26 = param_5[1];
    }
    *param_5 = ppplVar12;
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
  if (((plVar27 != (long *)0x0) && (*plVar27 == lVar31)) && (pplVar16 != (long **)0x0)) {
    (*(code *)(*pplVar16)[1])(pplVar16);
  }
  param_1[1] = pplVar5;
  param_1[2] = plVar28;
  param_1[3] = lVar30;
LAB_7103834340:
  *param_1 = &PTR_FUN_7105269388;
  return;
}

