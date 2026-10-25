// addr:      7103831cd0
// offset:    0x3831cd0
// name:      FUN_7103831cd0
// mangled:   
// signature: undefined __cdecl FUN_7103831cd0(undefined8 * param_1, long * param_2, long * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * param_7, byte * param_8)


void FUN_7103831cd0(undefined8 *param_1,long *param_2,long **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long **param_7,byte *param_8)

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
  long **pplVar10;
  byte ***pppbVar11;
  byte **ppbVar12;
  byte *pbVar13;
  long ***ppplVar14;
  long **pplVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long ****pppplVar21;
  long lVar22;
  long ***ppplVar23;
  long **pplVar24;
  long ***ppplVar25;
  long *plVar26;
  long *plVar27;
  long **pplVar28;
  long lVar29;
  long lVar30;
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
    if (local_90 != (long *)0x0) goto LAB_7103831d5c;
  }
  else {
    local_98 = local_78;
    local_90 = local_70;
    local_a0 = (long **)&PTR_FUN_7105238a98;
    local_88 = *local_70;
LAB_7103831d5c:
    if (*local_90 == local_88) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      goto LAB_7103832240;
    }
  }
  iVar4 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c0,ppppbVar8,pppplVar9,param_6,param_7
                         ,param_8);
  if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_80 = (long ****)0xc0;
    uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80);
    if ((uVar5 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_000000c0,ppppbVar8,pppplVar9,param_6,param_7,
                     param_8);
    }
  }
  pplVar15 = local_a0;
  nu::VirtualAllocHook(0xc0,0x10,local_a0);
  pplVar3 = local_a0;
  if (param_2 == (long *)0x0) {
    plVar26 = (long *)0x0;
    plVar27 = (long *)0x0;
  }
  else {
    plVar26 = (long *)param_2[1];
    plVar27 = (long *)*plVar26;
  }
  FUN_71037c3a70(local_a0);
  *pplVar3 = (long *)&PTR_FUN_710526f088;
  pplVar3[3] = (long *)0x0;
  pplVar3[2] = (long *)(pplVar3 + 3);
  pplVar3[4] = (long *)0x0;
  pplVar3[5] = (long *)&PTR_FUN_710522fea0;
  pplVar3[10] = (long *)0x0;
  pplVar3[0xb] = (long *)0x1000000002;
  pplVar3[6] = param_2;
  pplVar3[7] = plVar26;
  *(undefined1 *)(pplVar3 + 0xc) = 1;
  pplVar3[0xe] = (long *)0x0;
  pplVar3[8] = plVar27;
  pplVar3[9] = (long *)0x0;
  pplVar24 = pplVar3 + 0xd;
  *pplVar24 = (long *)0x0;
  pplVar3[0x11] = (long *)0x0;
  pplVar3[0x12] = (long *)0x0;
  pplVar3[0xf] = (long *)0x0;
  pplVar3[0x10] = (long *)0x0;
  *(undefined1 *)(pplVar3 + 0x10) = 0x1c;
  builtin_strncpy((char *)((long)pplVar3 + 0x87),"faultSRV",8);
  builtin_strncpy((char *)((long)pplVar3 + 0x81),"NUD_Defa",8);
  *(undefined1 *)((long)pplVar3 + 0x8f) = 0;
  *pplVar3 = (long *)&PTR_FUN_710526f388;
  pplVar28 = pplVar3 + 0x14;
  *pplVar28 = (long *)0x0;
  pplVar3[0x13] = (long *)&PTR_FUN_71052690f8;
  *(undefined4 *)(pplVar3 + 0x17) = 0;
  pplVar3[0x15] = (long *)0x0;
  pplVar3[0x16] = (long *)0x0;
  pplVar10 = param_7;
  if (pplVar24 == param_3) {
LAB_7103831eec:
    pppbVar11 = param_4[2];
    param_7 = pplVar10;
joined_r0x007103831ef0:
    if (pppbVar11 == (byte ***)0x0) goto LAB_7103831f64;
LAB_7103831ef4:
    if ((byte ***)*pppbVar11 != param_4[3]) goto LAB_7103831f64;
    pppbVar11 = param_4[1];
    *pplVar28 = (long *)pppbVar11;
    if (pppbVar11 == (byte ***)0x0) goto LAB_7103831f68;
    ppbVar12 = pppbVar11[1];
    pplVar3[0x15] = (long *)ppbVar12;
    pbVar13 = *ppbVar12;
  }
  else {
    pplVar10 = (long **)param_3[1];
    param_8 = (byte *)param_3[2];
    if ((*(byte *)param_3 & 1) == 0) {
      param_8 = (byte *)((long)param_3 + 1);
      pplVar10 = (long **)(ulong)(*(byte *)param_3 >> 1);
    }
    pplVar15 = (long **)((long)pplVar10 + -0x16);
    if (&DAT_00000015 < pplVar10 && pplVar15 != (long **)0x0) {
      ppppbVar8 = (byte ****)0x0;
      pppplVar9 = (long ****)0x0;
      param_6 = 0;
      FUN_71037cfe00((ulong *)pplVar24,0x16,(ulong)pplVar15,(byte ****)0x0,(long ****)0x0,0,
                     (size_t)pplVar10,param_8);
      goto LAB_7103831eec;
    }
    if (pplVar10 != (long **)0x0) {
      pplVar15 = pplVar10;
      memmove((void *)((long)pplVar3 + 0x69),param_8,(size_t)pplVar10);
    }
    *(undefined1 *)((long)pplVar3 + 0x69 + (long)pplVar10) = 0;
    if (((ulong)*pplVar24 & 1) == 0) {
      *(char *)pplVar24 = (char)((int)pplVar10 << 1);
      pppbVar11 = param_4[2];
      goto joined_r0x007103831ef0;
    }
    pplVar3[0xe] = (long *)pplVar10;
    pppbVar11 = param_4[2];
    if (pppbVar11 != (byte ***)0x0) goto LAB_7103831ef4;
LAB_7103831f64:
    *pplVar28 = (long *)0x0;
LAB_7103831f68:
    pbVar13 = (byte *)0x0;
    pplVar3[0x15] = (long *)0x0;
  }
  pplVar3[0x16] = (long *)pbVar13;
  local_80 = (long ****)((ulong)*(uint *)(param_4 + 4) << 0x20 | 4);
  *(uint *)(pplVar3 + 0x17) = *(uint *)(param_4 + 4);
  FUN_710386a1c0((long)pplVar3,(int *)&local_80,pplVar15,ppppbVar8,pppplVar9,param_6,param_7,param_8
                );
  plVar27 = pplVar3[1];
  ppplVar14 = param_5[1];
  lVar29 = *plVar27;
  pplVar15 = pplVar3;
  plVar26 = plVar27;
  lVar30 = lVar29;
  if (ppplVar14 < param_5[2]) {
    ppplVar14[2] = (long **)0x0;
    ppplVar14[3] = (long **)0x0;
    *ppplVar14 = (long **)&PTR_FUN_71052300a0;
    ppplVar14[1] = (long **)0x0;
    if (plVar27 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else if (*plVar27 == lVar29) {
      ppplVar14[1] = pplVar3;
      pplVar15 = (long **)pplVar3[1];
      ppplVar14[2] = pplVar15;
      ppplVar14[3] = (long **)*pplVar15;
      pplVar15 = (long **)0x0;
      plVar26 = (long *)0x0;
      lVar30 = 0;
    }
    param_5[1] = param_5[1] + 4;
  }
  else {
    lVar22 = (long)ppplVar14 - (long)*param_5 >> 5;
    uVar5 = lVar22 + 1;
    if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar16 = (long)param_5[2] - (long)*param_5;
    if ((ulong)(lVar16 >> 5) < 0x3ffffffffffffff) {
      uVar17 = lVar16 >> 4;
      if (uVar5 <= uVar17) {
        uVar5 = uVar17;
      }
      if (uVar5 != 0) goto LAB_7103832034;
      pplVar10 = (long **)0x0;
    }
    else {
      uVar5 = 0x7ffffffffffffff;
LAB_7103832034:
      pppplVar21 = (long ****)(uVar5 << 5);
      iVar4 = FUN_710392e1f0(&local_a0,0x10,pppplVar21,ppppbVar8,pppplVar9,param_6,param_7,param_8);
      if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_80 = pppplVar21,
         uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_80), (uVar17 & 1) != 0
         )) {
        FUN_710392e1f0(&local_a0,0x10,pppplVar21,ppppbVar8,pppplVar9,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar21,0x10,local_a0);
      pplVar10 = local_a0;
    }
    ppplVar14 = (long ***)(pplVar10 + lVar22 * 4);
    ppplVar14[2] = (long **)0x0;
    ppplVar14[3] = (long **)0x0;
    ppplVar14[1] = (long **)0x0;
    *ppplVar14 = (long **)&PTR_FUN_71052300a0;
    if (plVar27 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else if (*plVar27 == lVar29) {
      ppplVar14[1] = pplVar3;
      pplVar15 = (long **)pplVar3[1];
      ppplVar14[2] = pplVar15;
      ppplVar14[3] = (long **)*pplVar15;
      pplVar15 = (long **)0x0;
      plVar26 = (long *)0x0;
      lVar30 = 0;
    }
    ppplVar23 = *param_5;
    ppplVar2 = param_5[1];
    ppplVar1 = ppplVar14 + 4;
    ppplVar25 = ppplVar23;
    if (ppplVar2 != ppplVar23) {
      lVar16 = -0x20 - (long)ppplVar23;
      lVar18 = 0;
      do {
        *(undefined8 *)((long)ppplVar14 + lVar18 + -0x10) = 0;
        *(undefined8 *)((long)ppplVar14 + lVar18 + -8) = 0;
        *(undefined ***)((long)ppplVar14 + lVar18 + -0x20) = &PTR_FUN_71052300a0;
        *(undefined8 *)((long)ppplVar14 + lVar18 + -0x18) = 0;
        plVar6 = *(long **)((long)ppplVar2 + lVar18 + -0x10);
        if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)((long)ppplVar2 + lVar18 + -8))) {
          lVar7 = *(long *)((long)ppplVar2 + lVar18 + -0x18);
          *(undefined8 *)((long)ppplVar2 + lVar18 + -0x10) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar18 + -8) = 0;
          *(undefined8 *)((long)ppplVar2 + lVar18 + -0x18) = 0;
          *(long *)((long)ppplVar14 + lVar18 + -0x18) = lVar7;
          if (lVar7 == 0) {
            uVar20 = 0;
            *(undefined8 *)((long)ppplVar14 + lVar18 + -0x10) = 0;
          }
          else {
            puVar19 = *(undefined8 **)(lVar7 + 8);
            *(undefined8 **)((long)ppplVar14 + lVar18 + -0x10) = puVar19;
            uVar20 = *puVar19;
          }
          *(undefined8 *)((long)ppplVar14 + lVar18 + -8) = uVar20;
        }
        lVar18 = lVar18 + -0x20;
      } while ((long)ppplVar23 - (long)ppplVar2 != lVar18);
      ppplVar23 = *param_5;
      ppplVar14 = (long ***)
                  (pplVar10 +
                  (lVar22 + ((ulong)((long)ppplVar2 + lVar16) >> 5 ^ 0xffffffffffffffff)) * 4);
      ppplVar25 = param_5[1];
    }
    *param_5 = ppplVar14;
    param_5[1] = ppplVar1;
    param_5[2] = (long ***)(pplVar10 + uVar5 * 4);
    while (ppplVar25 != ppplVar23) {
      ppplVar25 = ppplVar25 + -4;
      (*(code *)**ppplVar25)(ppplVar25);
    }
    if (ppplVar23 != (long ***)0x0) {
      nu::VirtualFreeHook(ppplVar23);
      FUN_710392eb40((ulong)ppplVar23);
    }
  }
  if (((plVar26 != (long *)0x0) && (*plVar26 == lVar30)) && (pplVar15 != (long **)0x0)) {
    (*(code *)(*pplVar15)[1])(pplVar15);
  }
  param_1[1] = pplVar3;
  param_1[2] = plVar27;
  param_1[3] = lVar29;
LAB_7103832240:
  *param_1 = &PTR_FUN_7105269188;
  return;
}

