// addr:      7103653080
// offset:    0x3653080
// name:      FUN_7103653080
// mangled:   
// signature: undefined __cdecl FUN_7103653080(long * * * * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103653080(long *****param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t __n;
  long lVar4;
  long *****ppppplVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  char *pcVar17;
  long lVar18;
  void *pvVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  byte local_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined2 uStack_ff;
  undefined5 uStack_fd;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined2 uStack_e7;
  undefined5 uStack_e5;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined5 uStack_cf;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  void *local_c8;
  long ****local_b8;
  long ***local_b0;
  long ***local_a8;
  long ***local_a0;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined6 uStack_8f;
  undefined1 local_89;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  *param_1 = (long ****)&PTR_FUN_7105238848;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[4] = (long ****)0x0;
  param_1[5] = (long ****)&PTR_FUN_71052388b0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = (long ****)0x0;
  param_1[3] = (long ****)0x0;
  ppppplVar5 = param_1 + 0xc;
  *ppppplVar5 = (long ****)0x0;
  param_1[0x10] = (long ****)0x0;
  param_1[0xf] = (long ****)&PTR_FUN_71052388c8;
  param_1[0x11] = (long ****)0x0;
  param_1[0x12] = (long ****)0x0;
  param_1[0xd] = (long ****)0x0;
  param_1[0xe] = (long ****)0x0;
  param_1[10] = (long ****)0x0;
  param_1[0xb] = (long ****)0x0;
  param_1[8] = (long ****)0x0;
  param_1[9] = (long ****)0x0;
  param_1[0x14] = (long ****)0x0;
  param_1[0x13] = (long ****)&PTR_FUN_71052388c8;
  param_1[0x15] = (long ****)0x0;
  param_1[0x16] = (long ****)0x0;
  local_98._0_1_ = 0x1c;
  uStack_8f = 0x65636e617473;
  local_88 = (void *)0x0;
  local_98._1_6_ = 0x536572616c47;
  local_98._7_1_ = 0x75;
  uStack_90 = 0x62;
  local_89 = 0;
  FUN_710361f020(DAT_7105338018,(long *****)&local_98,param_1,param_4,param_5,param_6,param_7,
                 param_8);
  pcVar17 = local_88;
  if (((byte)local_98 & 1) != 0) {
    nu::VirtualFreeHook(local_88);
    FUN_710392eb40((ulong)pcVar17);
  }
  pppplVar9 = param_1[0xc];
  pppplVar15 = param_1[0xd];
  param_1[6] = (long ****)&DAT_3f800000;
  while (pppplVar15 != pppplVar9) {
    pppplVar15 = pppplVar15 + -4;
    (*(code *)**pppplVar15)(pppplVar15);
  }
  auVar21 = NEON_fmov(0x3f800000,4);
  param_1[0xd] = pppplVar9;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = (long ****)0x0;
  param_1[9] = (long ****)0x0;
  param_1[0xb] = auVar21._8_8_;
  param_1[10] = auVar21._0_8_;
  local_98._0_1_ = 0x52;
  local_98._1_6_ = 0x710426e7;
  local_98._7_1_ = 0;
  uStack_90 = 0xd7;
  uStack_8f = 0x710427f4;
  local_89 = 0;
  local_88 = "GL_PS_NM_COPY16";
  pcStack_80 = "GL_PS_NM_COPY32";
  local_78 = "GL_PS_NM_COPY64";
  pcStack_70 = "GL_PS_NM_MERGE";
  lVar6 = *(long *)(DAT_7105335480 + 0x68);
  if ((*(long **)(lVar6 + 0x20) == (long *)0x0) ||
     (**(long **)(lVar6 + 0x20) != *(long *)(lVar6 + 0x28))) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x18);
  }
  pppplVar15 = *ppppplVar5;
  while (pppplVar9 != pppplVar15) {
    pppplVar9 = pppplVar9 + -4;
    (*(code *)**pppplVar9)(pppplVar9);
  }
  puVar20 = &local_98;
  param_1[0xd] = pppplVar15;
  do {
    pcVar17 = (char *)*puVar20;
    local_c8 = (void *)0x0;
    local_d8._0_1_ = 0;
    local_d8._1_5_ = 0;
    local_d8._6_2_ = 0;
    local_d0 = 0;
    uStack_cf = 0;
    uStack_ca = 0;
    uStack_c9 = 0;
    __n = strlen(pcVar17);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_d8._0_1_ = (byte)((int)__n << 1);
      pvVar19 = (void *)((ulong)&local_d8 | 1);
      if (__n != 0) goto LAB_7103653340;
    }
    else {
      pppplVar9 = (long ****)(__n + 0x10 & 0xfffffffffffffff0);
      iVar3 = FUN_710392e1f0(&local_f8,0x10,pppplVar9,param_4,param_5,param_6,param_7,param_8);
      if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_b8 = pppplVar9,
         uVar12 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8), (uVar12 & 1) != 0
         )) {
        FUN_710392e1f0(&local_f8,0x10,pppplVar9,param_4,param_5,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook
                ((ulong)pppplVar9,0x10,(void *)CONCAT44(local_f8._4_4_,(undefined4)local_f8));
      pvVar19 = (void *)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
      local_d8._0_1_ = (byte)pppplVar9 | 1;
      local_d8._1_5_ = (undefined5)((ulong)pppplVar9 >> 8);
      local_d8._6_2_ = (undefined2)((ulong)pppplVar9 >> 0x30);
      local_d0 = (undefined1)__n;
      uStack_cf = (undefined5)(__n >> 8);
      uStack_ca = (undefined1)(__n >> 0x30);
      uStack_c9 = (undefined1)(__n >> 0x38);
      local_c8 = pvVar19;
LAB_7103653340:
      memcpy(pvVar19,pcVar17,__n);
    }
    pppplVar9 = (long ****)&local_d8;
    *(undefined1 *)((long)pvVar19 + __n) = 0;
    FUN_7103864d90(&local_b8,lVar6,(byte *)pppplVar9);
    pvVar19 = local_c8;
    if (((byte)local_d8 & 1) != 0) {
      nu::VirtualFreeHook(local_c8);
      FUN_710392eb40((ulong)pvVar19);
    }
    pppplVar15 = param_1[0xd];
    if (pppplVar15 < param_1[0xe]) {
      pppplVar15[1] = local_b0;
      pppplVar15[2] = local_a8;
      pppplVar15[3] = local_a0;
      *pppplVar15 = (long ***)&PTR_FUN_710522fea0;
      param_1[0xd] = param_1[0xd] + 4;
    }
    else {
      pppplVar16 = *ppppplVar5;
      lVar18 = (long)pppplVar15 - (long)pppplVar16 >> 5;
      uVar12 = lVar18 + 1;
      if (uVar12 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = (long)param_1[0xe] - (long)pppplVar16;
      if ((ulong)(lVar7 >> 5) < 0x3ffffffffffffff) {
        uVar8 = lVar7 >> 4;
        if (uVar12 <= uVar8) {
          uVar12 = uVar8;
        }
        if (uVar12 != 0) {
          if (uVar12 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_7103653414;
        }
LAB_710365346c:
        lVar4 = 0;
      }
      else {
        uVar12 = 0x7ffffffffffffff;
LAB_7103653414:
        lVar7 = uVar12 * 0x20;
        if (lVar7 == 0) {
          lVar7 = 1;
        }
        lVar4 = FUN_710392e290(0x10,lVar7,pppplVar9,param_4,param_5,param_6,param_7,param_8);
        if (lVar4 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_f8._0_4_ = 0;
            local_d8._0_1_ = (byte)lVar7;
            local_d8._1_5_ = (undefined5)((ulong)lVar7 >> 8);
            local_d8._6_2_ = (undefined2)((ulong)lVar7 >> 0x30);
            pppplVar9 = (long ****)&local_d8;
            uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f8);
            if (((uVar8 & 1) != 0) &&
               (lVar4 = FUN_710392e290(0x10,lVar7,pppplVar9,param_4,param_5,param_6,param_7,param_8)
               , lVar4 != 0)) goto LAB_7103653470;
          }
          goto LAB_710365346c;
        }
      }
LAB_7103653470:
      pppplVar9 = (long ****)(lVar4 + lVar18 * 0x20);
      pppplVar1 = (long ****)(lVar4 + uVar12 * 0x20);
      *pppplVar9 = (long ***)&PTR_FUN_710522fea0;
      pppplVar9[1] = local_b0;
      pppplVar9[2] = local_a8;
      pppplVar9[3] = local_a0;
      if ((long)pppplVar15 - (long)pppplVar16 == 0) {
        param_1[0xc] = pppplVar9;
        param_1[0xd] = pppplVar9 + 4;
        param_1[0xe] = pppplVar1;
      }
      else {
        uVar12 = ((long)pppplVar15 - (long)pppplVar16) - 0x20;
        pppplVar10 = pppplVar9;
        if (((uint)uVar12 >> 5 & 1) == 0) {
          pppplVar10 = pppplVar9 + -4;
          *pppplVar10 = (long ***)&PTR_FUN_7105230080;
          pppplVar9[-3] = pppplVar15[-3];
          pppplVar9[-2] = pppplVar15[-2];
          ppplVar11 = pppplVar15[-1];
          pppplVar15 = pppplVar15 + -4;
          *pppplVar10 = (long ***)&PTR_FUN_710522fea0;
          pppplVar9[-1] = ppplVar11;
        }
        if (0x1f < uVar12) {
          lVar7 = 0;
          do {
            puVar2 = (undefined8 *)((long)pppplVar15 + lVar7 + -0x38);
            lVar13 = lVar7 + -0x40;
            *(undefined ***)((long)pppplVar10 + lVar7 + -0x20) = &PTR_FUN_7105230080;
            *(undefined8 *)((long)pppplVar10 + lVar7 + -0x18) = puVar2[4];
            *(undefined8 *)((long)pppplVar10 + lVar7 + -0x10) = puVar2[5];
            uVar14 = puVar2[6];
            *(undefined ***)((long)pppplVar10 + lVar7 + -0x20) = &PTR_FUN_710522fea0;
            *(undefined ***)((long)pppplVar10 + lVar7 + -0x40) = &PTR_FUN_7105230080;
            *(undefined8 *)((long)pppplVar10 + lVar7 + -8) = uVar14;
            *(undefined8 *)((long)pppplVar10 + lVar7 + -0x38) = *puVar2;
            *(undefined8 *)((long)pppplVar10 + lVar7 + -0x30) = puVar2[1];
            uVar14 = puVar2[2];
            *(undefined ***)((long)pppplVar10 + lVar7 + -0x40) = &PTR_FUN_710522fea0;
            *(undefined8 *)((long)pppplVar10 + lVar7 + -0x28) = uVar14;
            lVar7 = lVar13;
          } while ((long)pppplVar16 - (long)pppplVar15 != lVar13);
        }
        pppplVar16 = param_1[0xc];
        pppplVar15 = param_1[0xd];
        param_1[0xc] = (long ****)(lVar4 + (lVar18 + (uVar12 >> 5 ^ 0xffffffffffffffff)) * 0x20);
        param_1[0xd] = pppplVar9 + 4;
        param_1[0xe] = pppplVar1;
        while (pppplVar15 != pppplVar16) {
          pppplVar15 = pppplVar15 + -4;
          (*(code *)**pppplVar15)(pppplVar15);
        }
      }
      if (pppplVar16 != (long ****)0x0) {
        FUN_710392eb40((ulong)pppplVar16);
      }
    }
    puVar20 = puVar20 + 1;
    if (puVar20 == &uStack_68) {
      uStack_c9 = 0;
      local_d8._0_1_ = 0x1a;
      local_c8 = (void *)0x0;
      uStack_ca = 0;
      uStack_cf = 0x455341425f;
      local_d8._1_5_ = 0x53505f4c47;
      local_d8._6_2_ = 0x4e5f;
      local_d0 = 0x4d;
      FUN_7103864d90(&local_b8,lVar6,(byte *)&local_d8);
      if ((local_a8 != (long ***)0x0) && ((long ***)*local_a8 == local_a0)) {
        uStack_e5 = 0;
        uStack_ef = 0x756c5065746174;
        local_e8 = 0x67;
        local_f8._0_4_ = 0x42756e22;
        local_f8._4_4_ = 0x646e656c;
        local_f0 = 0x53;
        uStack_e7 = 0x30;
        FUN_7103856830(&local_d8,(long)local_b0,(byte *)&local_f8);
        uStack_fd = 0;
        local_110 = 0x22;
        uStack_107 = 0x756c5065746174;
        local_100 = 0x67;
        uStack_10f = 0x646e656c42756e;
        uStack_108 = 0x53;
        uStack_ff = 0x31;
        FUN_7103856830(&local_f8,(long)local_b0,&local_110);
        pppplVar9 = (long ****)CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(uStack_cf,local_d0)));
        if ((pppplVar9 == (long ****)0x0) || (pppplVar9[1] == (long ***)0x0)) {
          pppplVar9 = (long ****)0x0;
          param_1[0x10] = (long ****)0x0;
          param_1[0x11] = (long ****)0x0;
        }
        else {
          param_1[0x10] = pppplVar9;
          pppplVar9 = (long ****)pppplVar9[1];
          param_1[0x11] = pppplVar9;
          pppplVar9 = (long ****)*pppplVar9;
        }
        param_1[0x12] = pppplVar9;
        pppplVar9 = (long ****)CONCAT71(uStack_ef,local_f0);
        if ((pppplVar9 == (long ****)0x0) || (pppplVar9[1] == (long ***)0x0)) {
          pppplVar9 = (long ****)0x0;
          param_1[0x14] = (long ****)0x0;
          param_1[0x15] = (long ****)0x0;
        }
        else {
          param_1[0x14] = pppplVar9;
          pppplVar9 = (long ****)pppplVar9[1];
          param_1[0x15] = pppplVar9;
          pppplVar9 = (long ****)*pppplVar9;
        }
        param_1[0x16] = pppplVar9;
      }
      (*(code *)(*param_1)[10])(param_1,0);
      (*(code *)(*param_1)[2])(param_1,1);
      return;
    }
  } while( true );
}

