// addr:      7101813f90
// offset:    0x1813f90
// name:      FUN_7101813f90
// mangled:   
// signature: undefined __cdecl FUN_7101813f90(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


void FUN_7101813f90(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                   undefined8 param_5,long *********param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  long ****pppplVar2;
  ulong *puVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  undefined8 *puVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 uVar19;
  long *********ppppppppplVar20;
  char *pcVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  ulong *puVar24;
  long *plVar25;
  code *pcVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long ****pppplVar31;
  long **pplVar32;
  undefined1 auVar33 [16];
  undefined1 extraout_q0 [16];
  undefined **local_208;
  undefined8 *local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  undefined **local_1b0;
  undefined8 *local_1a8;
  long ********local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined2 local_188;
  undefined1 local_186;
  undefined4 local_185;
  undefined2 local_181;
  undefined1 local_17f;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  long ***local_80;
  undefined4 local_74 [5];
  
  plVar11 = (long *)FUN_710392e290(0x10,0x120,(long ****)param_6,param_7,param_8,param_9,param_10,
                                   param_11);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000120;
      param_6 = &local_1a0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      if (((uVar12 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x120,(long ****)param_6,param_7,param_8,param_9,
                                           param_10,param_11), plVar11 != (long *)0x0))
      goto LAB_7101814010;
    }
    plVar11 = (long *)0x0;
  }
LAB_7101814010:
  *plVar11 = (long)plVar11;
  plVar11[4] = 0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  *(undefined4 *)(plVar11 + 0x1e) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0xf4) = 0;
  plVar11[5] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0xffffffff;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x10] = 0;
  plVar11[0x11] = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = 0;
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_6,param_7,param_8,param_9,param_10,param_11);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000080;
      param_6 = &local_1a0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_6,param_7,param_8,param_9,param_10,
                                   param_11), puVar13 != (undefined8 *)0x0)) goto LAB_71018140b8;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_71018140b8:
  *puVar13 = &PTR_FUN_7105181b40;
  puVar13[2] = 0;
  puVar13[1] = puVar13 + 2;
  puVar13[5] = 0;
  puVar13[3] = 0;
  puVar13[4] = puVar13 + 5;
  puVar13[8] = 0;
  puVar13[6] = 0;
  puVar13[7] = puVar13 + 8;
  puVar13[0xb] = 0;
  puVar13[9] = 0;
  puVar13[10] = puVar13 + 0xb;
  puVar13[0xc] = 0;
  *(undefined4 *)(puVar13 + 0xd) = 2;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(plVar11 + 0x21) = 0xffffffff;
  plVar11[0x22] = 0;
  *(undefined1 *)(plVar11 + 0x23) = 0;
  plVar11[0x1f] = (long)puVar13;
  plVar11[0x20] = 0;
  if (DAT_710532f498 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)
              FUN_710392e290(0x10,8,(long ****)param_6,param_7,param_8,param_9,param_10,param_11);
    if (puVar14 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
        local_1a0 = (long ********)&DAT_00000008;
        param_6 = &local_1a0;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
        if (((uVar12 & 1) != 0) &&
           (puVar14 = (undefined4 *)
                      FUN_710392e290(0x10,8,(long ****)param_6,param_7,param_8,param_9,param_10,
                                     param_11), puVar14 != (undefined4 *)0x0)) goto LAB_7101814178;
      }
      puVar14 = (undefined4 *)0x0;
    }
LAB_7101814178:
    *puVar14 = 2;
    *(undefined1 *)(puVar14 + 1) = 0;
    DAT_710532f498 = puVar14;
  }
  plVar11[5] = (long)FUN_7101811f10;
  plVar11[6] = 0;
  plVar11[9] = (long)FUN_7101812900;
  plVar11[10] = 0;
  plVar11[0xb] = (long)FUN_7101812c90;
  plVar11[0xc] = 0;
  plVar11[0xf] = (long)FUN_7101813630;
  plVar11[0x10] = 0;
  plVar11[7] = (long)FUN_7101812660;
  plVar11[8] = 0;
  plVar11[0x11] = (long)FUN_7101813bd0;
  plVar11[0x12] = 0;
  plVar11[0xd] = (long)FUN_7101813050;
  plVar11[0xe] = 0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *(undefined8 *)((long)plVar11 + 0xdc) = 0;
  *(undefined8 *)((long)plVar11 + 0xd4) = 0;
  *(undefined8 *)((long)plVar11 + 0xcc) = 0;
  *(undefined8 *)((long)plVar11 + 0xc4) = 0;
  *(undefined8 *)((long)plVar11 + 0xbc) = 0;
  *(undefined8 *)((long)plVar11 + 0xb4) = 0;
  *(undefined8 *)((long)plVar11 + 0xac) = 0;
  *(undefined8 *)((long)plVar11 + 0xa4) = 0;
  *(undefined8 *)((long)plVar11 + 0x9c) = 0;
  *(undefined8 *)((long)plVar11 + 0xe4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar11 + 0xec) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar11 + 0xf4) = 0;
  *(undefined4 *)(plVar11 + 0x13) = 0;
  FUN_7101813c60(plVar11);
  uVar12 = *(ulong *)(param_4 + 0x58);
  *(long **)(param_4 + 0x58) = plVar11;
  if (uVar12 != 0) {
    FUN_7101813d30(uVar12,extraout_x1,(undefined **)param_6,param_7,param_8,param_9,param_10,
                   param_11);
    FUN_710392eb40(uVar12);
    plVar11 = *(long **)(param_4 + 0x58);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  plVar25 = DAT_710593b6a0;
  DAT_7105307d28._0_4_ = 6;
  lVar28 = *DAT_710593b6a0;
  std::mutex::lock();
  iVar10 = nn::mii::Database::GetCount((int)lVar28 + 0x20);
  auVar33 = std::mutex::unlock();
  DAT_7105307d28._4_4_ = iVar10 + 6;
  if ((int)DAT_7105307d28 < 1) {
    uVar12 = 0x1a;
  }
  else {
    uVar30 = 0;
    uVar12 = 0x1a;
    lVar28 = 0x22c0;
    do {
      lVar29 = *plVar25;
      if (uVar30 < 6) {
        std::mutex::lock();
        puVar3 = (ulong *)(lVar29 + lVar28);
        local_208 = (undefined **)*puVar3;
        local_200 = (undefined8 *)puVar3[1];
        uStack_1f8 = puVar3[2];
        local_1f0 = puVar3[3];
        uStack_1e8 = puVar3[4];
        local_1e0 = puVar3[5];
        uStack_1d8 = puVar3[6];
        local_1d0 = puVar3[7];
        uStack_1c8 = puVar3[8];
        local_1c0 = puVar3[9];
        uStack_1b8 = puVar3[10];
        nn::mii::CharInfoAccessor::CharInfoAccessor
                  ((CharInfoAccessor *)&local_1a0,(CharInfo *)&local_208);
        uVar15 = nn::mii::CharInfoAccessor::IsValid();
        if ((uVar15 & 1) != 0) {
          uVar27 = (*(long *)(lVar29 + 0x24d8) - *(long *)(lVar29 + 0x24d0) >> 3) *
                   0x4ec4ec4ec4ec4ec5;
          uVar15 = uVar12 & 0xffff;
          if (uVar27 < uVar15 || uVar27 - uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          puVar24 = (ulong *)(*(long *)(lVar29 + 0x24d0) + uVar15 * 0x68);
          uVar15 = *puVar3;
          uVar27 = puVar3[2];
          puVar24[1] = puVar3[1];
          puVar24[2] = uVar27;
          *puVar24 = uVar15;
          uVar15 = puVar3[3];
          uVar27 = puVar3[4];
          uVar4 = puVar3[6];
          puVar24[5] = puVar3[5];
          puVar24[6] = uVar4;
          puVar24[3] = uVar15;
          puVar24[4] = uVar27;
          uVar15 = puVar3[7];
          uVar27 = puVar3[8];
          uVar4 = puVar3[10];
          puVar24[9] = puVar3[9];
          puVar24[10] = uVar4;
          puVar24[7] = uVar15;
          puVar24[8] = uVar27;
        }
        auVar33 = std::mutex::unlock();
        lVar29 = *plVar25;
      }
      auVar33 = FUN_7103759500(auVar33,param_2,param_3,lVar29,uVar12,(long ****)&DAT_00000008,
                               param_7,param_8,param_9,param_10,param_11);
      uVar30 = uVar30 + 1;
      uVar12 = (ulong)((int)uVar12 + 1);
      lVar28 = lVar28 + 0x58;
    } while ((long)uVar30 < (long)(int)DAT_7105307d28);
  }
  lVar28 = *plVar25;
  std::mutex::lock();
  iVar10 = nn::mii::Database::GetCount((int)lVar28 + 0x20);
  std::mutex::unlock();
  *(int *)((long)plVar11 + 0x104) = iVar10;
  if (0 < iVar10) {
    iVar10 = 0;
    do {
      FUN_71037593d0(*plVar25,uVar12,iVar10);
      FUN_7103759500(extraout_q0,param_2,param_3,*plVar25,uVar12,(long ****)&DAT_00000008,param_7,
                     param_8,param_9,param_10,param_11);
      uVar1 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar1;
      if (0x83 < (uVar1 & 0xffff)) break;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)((long)plVar11 + 0x104));
  }
  plVar25 = plVar11 + 0x1f;
  lVar28 = *plVar25;
  *(undefined1 *)(plVar11 + 0x23) = 1;
  ppppppppplVar20 = (long *********)(long)*(int *)(lVar28 + 0x70);
  ppppbVar22 = (byte ****)(ulong)*(uint *)(lVar28 + 0x68);
  pppplVar23 = (long ****)0x0;
  FUN_710323beb0(lVar28,(ulong *)&DAT_7104543a00,(long)ppppppppplVar20,(ulong)ppppbVar22,
                 (long ****)0x0,param_9,param_10,param_11);
  lVar28 = *plVar25;
  uVar12 = FUN_710323cb80(lVar28,extraout_x1_00,ppppppppplVar20,ppppbVar22,pppplVar23,param_9,
                          param_10,param_11);
  while ((uVar12 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar12 = FUN_710323cb80(lVar28,extraout_x1_01,ppppppppplVar20,ppppbVar22,pppplVar23,param_9,
                            param_10,param_11);
  }
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar20,ppppbVar22,pppplVar23,param_9,
                           param_10,param_11);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000088;
      ppppppppplVar20 = &local_1a0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar20,ppppbVar22,pppplVar23,
                                   param_9,param_10,param_11), puVar13 != (undefined8 *)0x0))
      goto LAB_71018144dc;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_71018144dc:
  uVar7 = (undefined1)DAT_7105307d3c;
  *puVar13 = &PTR_FUN_71050a7788;
  puVar13[1] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0x1ffffffff;
  puVar13[2] = 0;
  puVar13[3] = 0;
  *(undefined1 *)(puVar13 + 0xb) = 0;
  puVar13[0xf] = plVar25;
  *(undefined1 *)(puVar13 + 0xe) = 1;
  puVar13[9] = 0;
  puVar13[10] = 0;
  pppplVar16 = (long ****)
               FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar20,ppppbVar22,pppplVar23,param_9,
                              param_10,param_11);
  if (pppplVar16 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000140;
      ppppppppplVar20 = &local_1a0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      if (((uVar12 & 1) != 0) &&
         (pppplVar16 = (long ****)
                       FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar20,ppppbVar22,pppplVar23,
                                      param_9,param_10,param_11), pppplVar16 != (long ****)0x0))
      goto LAB_710181456c;
    }
    pppplVar16 = (long ****)0x0;
  }
LAB_710181456c:
  pppplVar16[5] = (long ***)0x0;
  *pppplVar16 = (long ***)&PTR_FUN_71050a77c0;
  pppplVar16[1] = (long ***)pppplVar16;
  pppplVar16[2] = (long ***)0x0;
  pppplVar16[3] = (long ***)0x0;
  pppplVar16[4] = (long ***)0x0;
  pppplVar2 = pppplVar16 + 0x1c;
  pppplVar16[0x19] = (long ***)0x0;
  pppplVar16[0x1a] = (long ***)&DAT_ffffffff;
  *(undefined4 *)(pppplVar16 + 0x1b) = 0xffffffff;
  *(undefined1 *)((long)pppplVar16 + 0xdc) = 0;
  pppplVar16[6] = (long ***)0x0;
  pppplVar16[0x17] = (long ***)0x0;
  pppplVar16[0x18] = (long ***)0x0;
  pppplVar16[0x15] = (long ***)0x0;
  pppplVar16[0x16] = (long ***)0x0;
  pppplVar16[0x13] = (long ***)0x0;
  pppplVar16[0x14] = (long ***)0x0;
  pppplVar16[0x11] = (long ***)0x0;
  pppplVar16[0x12] = (long ***)0x0;
  pppplVar16[0xf] = (long ***)0x0;
  pppplVar16[0x10] = (long ***)0x0;
  pppplVar16[0xd] = (long ***)0x0;
  pppplVar16[0xe] = (long ***)0x0;
  pppplVar16[0xb] = (long ***)0x0;
  pppplVar16[0xc] = (long ***)0x0;
  pppplVar16[9] = (long ***)0x0;
  pppplVar16[10] = (long ***)0x0;
  pppplVar16[7] = (long ***)0x0;
  pppplVar16[8] = (long ***)0x0;
  ppplVar17 = (long ***)
              FUN_710392e290(0x10,8,(long ****)ppppppppplVar20,ppppbVar22,pppplVar23,param_9,
                             param_10,param_11);
  uVar19 = extraout_x1_02;
  if (ppplVar17 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208 = (undefined **)((ulong)local_208 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000008;
      ppppppppplVar20 = &local_1a0;
      auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_208);
      uVar19 = auVar33._8_8_;
      if (((auVar33._0_8_ & 1) != 0) &&
         (ppplVar17 = (long ***)
                      FUN_710392e290(0x10,8,(long ****)ppppppppplVar20,ppppbVar22,pppplVar23,param_9
                                     ,param_10,param_11), uVar19 = extraout_x1_03,
         ppplVar17 != (long ***)0x0)) goto LAB_7101814620;
    }
    ppplVar17 = (long ***)0x0;
  }
LAB_7101814620:
  FUN_7103773200(ppplVar17,uVar19,(long ****)ppppppppplVar20,ppppbVar22,pppplVar23,param_9,param_10,
                 param_11);
  pppplVar16[0x1c] = ppplVar17;
  pppplVar31 = pppplVar16 + 0x1d;
  *pppplVar31 = (long ***)0x0;
  pppplVar16[6] = (long ***)FUN_71019bf4e0;
  pppplVar16[7] = (long ***)0x0;
  pppplVar16[8] = (long ***)FUN_71019bf4f0;
  pppplVar16[9] = (long ***)0x0;
  pppplVar16[0xe] = (long ***)FUN_71019bf4e0;
  pppplVar16[0xf] = (long ***)0x0;
  pppplVar16[0x26] = (long ***)0x0;
  pppplVar16[0x27] = (long ***)0x0;
  *(undefined1 *)((long)pppplVar16 + 0x10a) = 0;
  *(undefined2 *)(pppplVar16 + 0x21) = 0;
  pppplVar16[0x1e] = (long ***)0x0;
  pppplVar16[0x24] = (long ***)0x0;
  pppplVar16[0x25] = (long ***)0x0;
  pppplVar16[0x22] = (long ***)0x0;
  pppplVar16[0x23] = (long ***)0x0;
  pppplVar16[0x1f] = (long ***)0x0;
  pppplVar16[0x20] = (long ***)0x0;
  pppplVar16[10] = (long ***)FUN_71019bf720;
  pppplVar16[0xb] = (long ***)0x0;
  pppplVar16[0xc] = (long ***)FUN_71019bf990;
  pppplVar16[0xd] = (long ***)0x0;
  pppplVar16[2] = (long ***)0x0;
  pppplVar16[3] = (long ***)0x0;
  *(undefined8 *)((long)pppplVar16 + 0xc4) = 0;
  *(undefined8 *)((long)pppplVar16 + 0xbc) = 0;
  *(undefined8 *)((long)pppplVar16 + 0xb4) = 0;
  *(undefined8 *)((long)pppplVar16 + 0xac) = 0;
  *(undefined8 *)((long)pppplVar16 + 0xa4) = 0;
  *(undefined8 *)((long)pppplVar16 + 0x9c) = 0;
  *(undefined8 *)((long)pppplVar16 + 0x94) = 0;
  *(undefined8 *)((long)pppplVar16 + 0x8c) = 0;
  *(undefined8 *)((long)pppplVar16 + 0x84) = 0;
  *(undefined8 *)((long)pppplVar16 + 0xcc) = 0xffffffff00000000;
  *(undefined8 *)((long)pppplVar16 + 0xd4) = 0xffffffff00000000;
  *(undefined1 *)((long)pppplVar16 + 0xdc) = 0;
  *(undefined4 *)(pppplVar16 + 0x10) = 0;
  FUN_71019c0300((long *)(pppplVar16 + 1));
  puVar13[0x10] = pppplVar16;
  *(undefined1 *)((long)pppplVar16 + 0x10a) = uVar7;
  FUN_71032cbf30(pppplVar2,*plVar25,(ulong *)&DAT_7104543a00,(byte ****)0x1,pppplVar23,param_9,
                 param_10,param_11);
  plVar25 = **pppplVar16[0x1c];
  *(undefined4 *)(plVar25[0xc0] + 0x10) = 0x20;
  *(undefined4 *)(plVar25[0xc0] + 0x14) = 0x40;
  *(undefined4 *)(plVar25[0xc0] + 0x18) = 0x10;
  pplVar32 = *pppplVar16[0x1c];
  FUN_7103778760((long)pplVar32[2],0x710428ff7d);
  if ((pplVar32[2][1] != 0) && (lVar28 = *(long *)(pplVar32[2][1] + 0x18), lVar28 != 0)) {
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe;
  }
  local_188 = 0;
  local_1a0 = (long ********)0x0;
  uStack_198 = 0x4248000041800000;
  local_190 = 0x101013f800000;
  local_186 = 1;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_17f = 0;
  local_181 = 0;
  local_185 = 0;
  FUN_710337e790((long)&local_1a0);
  pcVar21 = "scroll";
  ppppppppplVar20 = &local_1a0;
  local_1a0 = (long ********)((ulong)local_1a0 & 0xffffffff);
  local_185._0_3_ = CONCAT21(0x101,(undefined1)local_185);
  FUN_7103781a20((long *)pppplVar31,pplVar32 + 1,(byte ****)"scroll",(byte ****)ppppppppplVar20,
                 pppplVar16,param_9,param_10,param_11);
  FUN_7103776640(&local_1b0,(long)(pplVar32 + 1),(byte ****)"set_parts_det_key_00",pcVar21,
                 ppppppppplVar20,pppplVar16,param_9,param_10,param_11);
  FUN_7103776910(&local_208,(long)&local_1b0,(long ****)"set_txt_icon",pcVar21,ppppppppplVar20,
                 pppplVar16,param_9,param_10,param_11);
  puVar18 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (undefined8 *)0x0;
  if (puVar18 != (undefined8 *)0x0) {
    uVar12 = *(ulong *)((long)puVar18 + 0x18);
    *(undefined ***)((long)puVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar18 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar18);
  }
  local_1b0 = &PTR_FUN_710523d9a8;
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pcVar21,(byte ****)ppppppppplVar20,pppplVar16,
                           param_9,param_10,param_11);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74[0] = 0;
      local_80 = (long ***)&SUB_00000020;
      pcVar21 = (char *)&local_80;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
      if (((uVar12 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)pcVar21,(byte ****)ppppppppplVar20,
                                   pppplVar16,param_9,param_10,param_11),
         puVar18 != (undefined8 *)0x0)) goto LAB_710181488c;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_710181488c:
  puVar9 = local_200;
  puVar18[2] = 0;
  puVar18[3] = 0;
  *puVar18 = 0;
  puVar18[1] = 0;
  *puVar18 = *local_200;
  puVar18[1] = local_200[1];
  puVar18[2] = local_200[2];
  puVar18[3] = local_200[3];
  local_1a8 = puVar18;
  FUN_710337cef0(&local_1b0,0x10,(undefined **)pcVar21,(byte ****)ppppppppplVar20,pppplVar16,param_9
                 ,param_10,param_11);
  puVar18 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (undefined8 *)0x0;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar18);
  }
  *(undefined1 *)((***pppplVar2)[0xc0] + 0x4aa) = 0;
  (*(code *)(**pppplVar31)[0xc])(*pppplVar31,0);
  (*(code *)(**pppplVar31)[0xe])(*pppplVar31,0);
  local_208 = &PTR_FUN_710523d9a8;
  local_200 = (undefined8 *)0x0;
  uVar19 = extraout_x1_04;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
    uVar19 = extraout_x1_05;
  }
  if (alStack_b0 == local_90) {
    pcVar26 = *(code **)(*local_90 + 0x20);
LAB_7101814958:
    (*pcVar26)();
    uVar19 = extraout_x1_06;
  }
  else if (local_90 != (long *)0x0) {
    pcVar26 = *(code **)(*local_90 + 0x28);
    goto LAB_7101814958;
  }
  if (alStack_e0 == local_c0) {
    pcVar26 = *(code **)(*local_c0 + 0x20);
LAB_7101814988:
    (*pcVar26)();
    uVar19 = extraout_x1_07;
  }
  else if (local_c0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101814988;
  }
  if (alStack_110 == local_f0) {
    pcVar26 = *(code **)(*local_f0 + 0x20);
LAB_71018149b8:
    (*pcVar26)();
    uVar19 = extraout_x1_08;
  }
  else if (local_f0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_f0 + 0x28);
    goto LAB_71018149b8;
  }
  if (alStack_140 == local_120) {
    pcVar26 = *(code **)(*local_120 + 0x20);
LAB_71018149e8:
    (*pcVar26)();
    uVar19 = extraout_x1_09;
  }
  else if (local_120 != (long *)0x0) {
    pcVar26 = *(code **)(*local_120 + 0x28);
    goto LAB_71018149e8;
  }
  if (alStack_170 == local_150) {
    pcVar26 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101814a1c;
    pcVar26 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar26)();
  uVar19 = extraout_x1_10;
LAB_7101814a1c:
  *(undefined1 *)(puVar13 + 0xe) = 1;
  puVar13[2] = &DAT_7105333600;
  uVar8 = DAT_7105333664;
  *(undefined4 *)(puVar13 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar13 + 0x6c) = uVar8;
  do {
    uVar1 = DAT_7105333650;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar6) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar1 & 1) != 0);
  puVar13[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar13;
  FUN_71032caea0((long)puVar13,uVar19,(long ****)pcVar21,(byte ****)ppppppppplVar20,pppplVar16,
                 param_9,param_10,param_11);
  lVar28 = plVar11[0x22];
  plVar11[0x22] = (long)puVar13;
  if (lVar28 != 0) {
    FUN_71032cad20(lVar28);
    puVar13 = (undefined8 *)plVar11[0x22];
  }
  *(undefined4 *)(puVar13[0x10] + 0xfc) = DAT_7105307d30;
  *(undefined1 *)(plVar11[0x22] + 0x70) = 1;
  return;
}

