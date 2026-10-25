// addr:      710382d7d0
// offset:    0x382d7d0
// name:      FUN_710382d7d0
// mangled:   
// signature: undefined __cdecl FUN_710382d7d0(ulong * param_1, ulong * param_2, long * * * * param_3, byte * * * * * * * * * * param_4, long * * * * param_5, byte * * * * * * * * * * param_6, byte * * * * * * * * * * param_7, byte * * * * * * * * * * param_8)


void FUN_710382d7d0(ulong *param_1,ulong *param_2,long ****param_3,byte **********param_4,
                   long ****param_5,byte **********param_6,byte **********param_7,
                   byte **********param_8)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined7 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  size_t sVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  ulong *puVar11;
  byte ************ppppppppppppbVar12;
  size_t sVar13;
  byte ***********pppppppppppbVar14;
  undefined8 *puVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar16;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  byte ************ppppppppppppbVar17;
  byte ***********extraout_x1_11;
  byte ***********extraout_x1_12;
  byte ***********extraout_x1_13;
  byte ***********extraout_x1_14;
  byte ***********pppppppppppbVar18;
  byte ************extraout_x1_15;
  byte ************extraout_x1_16;
  byte ************ppppppppppppbVar19;
  byte ************extraout_x1_17;
  byte ************extraout_x1_18;
  byte ************extraout_x1_19;
  byte ************extraout_x1_20;
  byte ***********extraout_x1_21;
  byte ***********extraout_x1_22;
  byte ***********extraout_x1_23;
  byte ***********extraout_x1_24;
  byte ***********extraout_x1_25;
  byte ***********extraout_x1_26;
  byte ************extraout_x1_27;
  byte ************extraout_x1_28;
  byte ************extraout_x1_29;
  byte ************extraout_x1_30;
  byte ************extraout_x1_31;
  byte ************extraout_x1_32;
  byte ************extraout_x1_33;
  byte ************extraout_x1_34;
  byte ************extraout_x1_35;
  long *****ppppplVar20;
  byte ***********pppppppppppbVar21;
  ulong uVar22;
  ulong uVar23;
  byte ***********pppppppppppbVar24;
  byte **********ppppppppppbVar25;
  byte *********pppppppppbVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  long ***ppplVar30;
  byte ***********pppppppppppbVar31;
  byte ************ppppppppppppbVar32;
  long ****pppplVar33;
  void *pvVar34;
  ulong *puVar35;
  byte ************ppppppppppppbVar36;
  ulong *puVar37;
  ulong *puVar38;
  byte ***********local_190;
  size_t local_188;
  void *local_180;
  byte ***********local_178;
  byte ************local_170;
  byte ************local_168;
  undefined4 local_160;
  byte ***********local_158;
  byte ***********local_150;
  byte ************local_148;
  void *local_140;
  long ****local_138;
  byte ***********local_130;
  byte ***********local_128;
  byte ************local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  byte ***********local_110;
  byte ************local_108;
  byte ************local_100;
  undefined8 local_f8;
  byte ***********local_f0;
  byte ************local_e8;
  byte ************local_e0;
  byte ***********local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  byte ************local_c0;
  byte ************local_b8;
  undefined4 local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  byte ************local_a0;
  undefined7 *local_98;
  long ****local_88;
  byte ************local_80;
  byte ************local_78;
  byte ***********local_70;
  
  switch(param_2[1]) {
  case 0:
    break;
  case 1:
    uVar22 = *param_2;
    puVar11 = (ulong *)((long)param_2 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar11 = (ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    ppplVar30 = param_3[0xd];
    puVar35 = puVar11 + 1;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_e8 = (byte ************)0x0;
    local_e0 = (byte ************)0x0;
    local_f0 = (byte ***********)0x0;
    ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) goto LAB_7103830ddc;
    if (ppppppppppppbVar12 < (byte ************)0x17) {
      local_f0 = (byte ***********)CONCAT71(local_f0._1_7_,(char)((int)ppppppppppppbVar12 << 1));
      local_130 = (byte ***********)((ulong)&local_f0 | 1);
      if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382df90;
    }
    else {
      pppppppppppbVar24 = (byte ***********)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_130,0x10,(long ****)pppppppppppbVar24,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_110 = pppppppppppbVar24,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_110),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_130,0x10,(long ****)pppppppppppbVar24,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppppppppppbVar24,0x10,local_130);
      local_f0 = (byte ***********)((ulong)pppppppppppbVar24 | 1);
      local_e0 = (byte ************)local_130;
      local_e8 = ppppppppppppbVar12;
LAB_710382df90:
      memcpy(local_130,pbVar27,(size_t)ppppppppppppbVar12);
    }
    *(undefined1 *)((long)local_130 + (long)ppppppppppppbVar12) = 0;
    ppppppppppppbVar12 = &local_f0;
    FUN_710385c840(&local_88,(long)ppplVar30,ppppppppppppbVar12);
    ppppppppppppbVar36 = local_e0;
    uVar16 = extraout_x1_05;
    if (((ulong)local_f0 & 1) != 0) {
      nu::VirtualFreeHook(local_e0);
      FUN_710392eb40((ulong)ppppppppppppbVar36);
      uVar16 = extraout_x1_06;
    }
    ppppppppppppbVar17 = local_78;
    ppppppppppppbVar36 = local_80;
    if ((local_78 == (byte ************)0x0) ||
       (pppppppppppbVar24 = *local_78, pppppppppppbVar24 != local_70)) {
      *param_1 = (long)&DAT_710455dba0 - (long)param_1;
      puVar11 = FUN_7103828690(param_1,uVar16,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                               param_5,param_6,param_7,param_8);
      std::string::assign((char *)puVar11);
      goto LAB_710382d840;
    }
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_128 = (byte ***********)0x0;
    local_120 = (byte ************)0x0;
    local_130 = (byte ***********)0x0;
    ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (ppppppppppppbVar12 < (byte ************)0x17) {
      local_130 = (byte ***********)CONCAT71(local_130._1_7_,(char)((int)ppppppppppppbVar12 << 1));
      ppppppppppppbVar32 = (byte ************)((ulong)&local_130 | 1);
      if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382ea94;
    }
    else {
      ppppppppppppbVar32 = (byte ************)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar32,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_178 = (byte ***********)ppppppppppppbVar32,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar32,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar32,0x10,local_158);
      local_130 = (byte ***********)((ulong)ppppppppppppbVar32 | 1);
      local_120 = (byte ************)local_158;
      ppppppppppppbVar32 = (byte ************)local_158;
      local_128 = (byte ***********)ppppppppppppbVar12;
LAB_710382ea94:
      memcpy(ppppppppppppbVar32,pbVar27,(size_t)ppppppppppppbVar12);
    }
    ppppppppppppbVar19 = local_120;
    pppppppppppbVar21 = local_128;
    *(undefined1 *)((long)ppppppppppppbVar32 + (long)ppppppppppppbVar12) = 0;
    local_108 = (byte ************)0x0;
    local_100 = (byte ************)0x0;
    local_110 = (byte ***********)0x0;
    if (((ulong)local_130 & 1) == 0) {
      local_108 = (byte ************)local_128;
      local_100 = local_120;
      local_110 = local_130;
    }
    else {
      if ((byte ************)0xffffffffffffffef < local_128) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (local_128 < (byte ************)0x17) {
        local_110 = (byte ***********)(ulong)(byte)((int)local_128 << 1);
        ppppppppppppbVar12 = (byte ************)((ulong)&local_110 | 1);
        if (local_128 != (byte ***********)0x0) goto LAB_710382ee1c;
      }
      else {
        ppppppppppppbVar12 = (byte ************)((ulong)(local_128 + 2) & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                                param_5,param_6,param_7,param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_178 = (byte ***********)ppppppppppppbVar12,
           uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
           (uVar22 & 1) != 0)) {
          FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                         param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_158);
        local_110 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
        local_108 = (byte ************)pppppppppppbVar21;
        local_100 = (byte ************)local_158;
        ppppppppppppbVar12 = (byte ************)local_158;
LAB_710382ee1c:
        memcpy(ppppppppppppbVar12,ppppppppppppbVar19,(size_t)pppppppppppbVar21);
      }
      *(undefined1 *)((long)ppppppppppppbVar12 + (long)pppppppppppbVar21) = 0;
    }
    ppppppppppppbVar32 = local_100;
    ppppppppppppbVar12 = local_108;
    local_f0 = (byte ***********)&PTR_FUN_7105231d58;
    local_f8 = (byte ***********)((ulong)local_f8._4_4_ << 0x20);
    local_e8 = ppppppppppppbVar36;
    local_e0 = ppppppppppppbVar17;
    local_d0 = (undefined1  [8])0x0;
    local_c8 = (undefined1  [8])0x0;
    local_c0 = (byte ************)0x0;
    local_d8 = pppppppppppbVar24;
    if (((ulong)local_110 & 1) == 0) {
      local_b8 = (byte ************)((ulong)local_b8 & 0xffffffff00000000);
      ppppppppppppbVar12 = local_120;
      local_d0 = (undefined1  [8])local_110;
      local_c8 = (undefined1  [8])local_108;
      local_c0 = local_100;
    }
    else {
      if ((byte ************)0xffffffffffffffef < local_108) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (local_108 < (byte ************)0x17) {
        ppppppppppppbVar36 = (byte ************)(local_d0 + 1);
        local_d0._1_7_ = 0;
        local_d0[0] = (byte)((int)local_108 << 1);
        if (local_108 != (byte ************)0x0) goto LAB_710382f2d4;
      }
      else {
        ppppppppppppbVar36 = (byte ************)((ulong)(local_108 + 2) & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,
                                param_5,param_6,param_7,param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_178 = (byte ***********)ppppppppppppbVar36,
           uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
           (uVar22 & 1) != 0)) {
          FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,param_5,
                         param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)ppppppppppppbVar36,0x10,local_158);
        local_d0 = (undefined1  [8])((ulong)ppppppppppppbVar36 | 1);
        local_c8 = (undefined1  [8])ppppppppppppbVar12;
        local_c0 = (byte ************)local_158;
        ppppppppppppbVar36 = (byte ************)local_158;
LAB_710382f2d4:
        memcpy(ppppppppppppbVar36,ppppppppppppbVar32,(size_t)ppppppppppppbVar12);
      }
      ppppppppppppbVar17 = local_100;
      *(undefined1 *)((long)ppppppppppppbVar36 + (long)ppppppppppppbVar12) = 0;
      local_b8 = (byte ************)CONCAT44(local_b8._4_4_,(undefined4)local_f8);
      ppppppppppppbVar12 = local_120;
      if (((ulong)local_110 & 1) != 0) {
        nu::VirtualFreeHook(local_100);
        FUN_710392eb40((ulong)ppppppppppppbVar17);
        ppppppppppppbVar12 = local_120;
      }
    }
    if (((ulong)local_130 & 1) != 0) {
      local_120 = ppppppppppppbVar12;
      nu::VirtualFreeHook(ppppppppppppbVar12);
      FUN_710392eb40((ulong)ppppppppppppbVar12);
    }
    ppplVar30 = param_3[1];
    uVar22 = *puVar11;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar11 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_128 = (byte ***********)0x0;
    local_120 = (byte ************)0x0;
    local_130 = (byte ***********)0x0;
    sVar13 = strlen((char *)pbVar27);
    if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar13 < 0x17) {
      local_130 = (byte ***********)CONCAT71(local_130._1_7_,(char)((int)sVar13 << 1));
      ppppppppppppbVar12 = (byte ************)((ulong)&local_130 | 1);
      if (sVar13 != 0) goto LAB_710382f920;
    }
    else {
      ppppppppppppbVar12 = (byte ************)(sVar13 + 0x10 & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_178 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_158);
      local_130 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_120 = (byte ************)local_158;
      ppppppppppppbVar12 = (byte ************)local_158;
      local_128 = (byte ***********)sVar13;
LAB_710382f920:
      memcpy(ppppppppppppbVar12,pbVar27,sVar13);
    }
    *(undefined1 *)((long)ppppppppppppbVar12 + sVar13) = 0;
    pppplVar33 = (long ****)(ppplVar30 + 0xf);
    pppppppppppbVar24 = (byte ***********)&local_130;
    pppppppppppbVar21 = (byte ***********)&local_f0;
    FUN_7103833810(&local_110,(long *)ppplVar30,(long **)pppppppppppbVar24,
                   (byte ****)pppppppppppbVar21,pppplVar33,param_6,(long *)param_7,(byte *)param_8);
    ppppppppppppbVar12 = local_120;
    if (((ulong)local_130 & 1) != 0) {
      nu::VirtualFreeHook(local_120);
      FUN_710392eb40((ulong)ppppppppppppbVar12);
    }
    ppppppppppppbVar36 = local_108;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_128 = (byte ***********)0x0;
    local_120 = (byte ************)0x0;
    local_130 = (byte ***********)0x0;
    pppppppppppbVar14 = (byte ***********)strlen((char *)pbVar27);
    if ((byte ***********)0xffffffffffffffef < pppppppppppbVar14) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (pppppppppppbVar14 < (byte ***********)0x17) {
      local_130 = (byte ***********)CONCAT71(local_130._1_7_,(char)((int)pppppppppppbVar14 << 1));
      ppppppppppppbVar12 = (byte ************)((ulong)&local_130 | 1);
      pppppppppppbVar18 = extraout_x1_13;
      if (pppppppppppbVar14 != (byte ***********)0x0) goto LAB_710382fda8;
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)(pppppppppppbVar14 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,
                              (byte ****)pppppppppppbVar21,pppplVar33,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_178 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)pppppppppppbVar21,
                       pppplVar33,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_158);
      local_130 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_120 = (byte ************)local_158;
      ppppppppppppbVar12 = (byte ************)local_158;
      local_128 = pppppppppppbVar14;
LAB_710382fda8:
      pppppppppppbVar24 = pppppppppppbVar14;
      memcpy(ppppppppppppbVar12,pbVar27,(size_t)pppppppppppbVar14);
      pppppppppppbVar18 = extraout_x1_14;
    }
    ppppppppppppbVar17 = ppppppppppppbVar36 + 0x10;
    *(undefined1 *)((long)ppppppppppppbVar12 + (long)pppppppppppbVar14) = 0;
    pppppppppppbVar14 = (byte ***********)param_7;
    ppppppppppppbVar12 = local_120;
    if (ppppppppppppbVar17 != &local_130) {
      bVar9 = ((ulong)local_130 & 1) != 0;
      param_8 = (byte **********)((ulong)&local_130 | 1);
      if (bVar9) {
        param_8 = (byte **********)local_120;
      }
      bVar6 = *(byte *)ppppppppppppbVar17;
      pppppppppppbVar14 = (byte ***********)((ulong)local_130 >> 1 & 0x7f);
      if (bVar9) {
        pppppppppppbVar14 = local_128;
      }
      if ((bVar6 & 1) == 0) {
        pppppppppppbVar18 = (byte ***********)0x16;
        pppppppppppbVar24 = (byte ***********)((long)pppppppppppbVar14 + -0x16);
        if (&DAT_00000015 < pppppppppppbVar14 && pppppppppppbVar24 != (byte ***********)0x0) {
LAB_710382fe14:
          if ((bVar6 & 1) == 0) {
            pppppppppppbVar21 = (byte ***********)(ulong)(bVar6 >> 1);
          }
          else {
            pppppppppppbVar21 = ppppppppppppbVar36[0x11];
          }
          pppplVar33 = (long ****)0x0;
          param_6 = (byte **********)pppppppppppbVar21;
          FUN_71037cfe00((ulong *)ppppppppppppbVar17,(ulong)pppppppppppbVar18,
                         (ulong)pppppppppppbVar24,(byte ****)pppppppppppbVar21,(long ****)0x0,
                         (long)pppppppppppbVar21,(size_t)pppppppppppbVar14,param_8);
          pppppppppppbVar18 = extraout_x1_24;
          ppppppppppppbVar12 = local_120;
          goto joined_r0x00710383085c;
        }
      }
      else {
        pppppppppppbVar18 =
             (byte ***********)(((ulong)*ppppppppppppbVar17 & 0xfffffffffffffffe) - 1);
        pppppppppppbVar24 = (byte ***********)((long)pppppppppppbVar14 - (long)pppppppppppbVar18);
        if (pppppppppppbVar18 <= pppppppppppbVar14 && pppppppppppbVar24 != (byte ***********)0x0)
        goto LAB_710382fe14;
      }
      if ((bVar6 & 1) == 0) {
        pppppppppppbVar31 = (byte ***********)((long)ppppppppppppbVar36 + 0x81);
      }
      else {
        pppppppppppbVar31 = ppppppppppppbVar36[0x12];
      }
      if (pppppppppppbVar14 != (byte ***********)0x0) {
        pppppppppppbVar24 = pppppppppppbVar14;
        memmove(pppppppppppbVar31,param_8,(size_t)pppppppppppbVar14);
        pppppppppppbVar18 = extraout_x1_25;
      }
      *(undefined1 *)((long)pppppppppppbVar31 + (long)pppppppppppbVar14) = 0;
      ppppppppppppbVar12 = local_120;
      if (((ulong)*ppppppppppppbVar17 & 1) == 0) {
        *(char *)ppppppppppppbVar17 = (char)((int)pppppppppppbVar14 << 1);
        pppppppppppbVar14 = (byte ***********)param_7;
      }
      else {
        ppppppppppppbVar36[0x11] = pppppppppppbVar14;
        pppppppppppbVar14 = (byte ***********)param_7;
      }
    }
joined_r0x00710383085c:
    local_120 = ppppppppppppbVar12;
    if (((ulong)local_130 & 1) != 0) {
      nu::VirtualFreeHook(ppppppppppppbVar12);
      FUN_710392eb40((ulong)ppppppppppppbVar12);
      pppppppppppbVar18 = extraout_x1_26;
    }
    pppppppppppbVar31 = local_f8;
    ppppppppppppbVar17 = local_100;
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,pppppppppppbVar18,(long ****)pppppppppppbVar24,
                             (byte ****)pppppppppppbVar21,pppplVar33,param_6,pppppppppppbVar14,
                             param_8);
    std::string::assign((char *)puVar11);
    ppppppppppppbVar12 = local_c0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (ulong)&PTR_FUN_7105238a98;
    if ((ppppppppppppbVar17 != (byte ************)0x0) && (*ppppppppppppbVar17 == pppppppppppbVar31)
       ) {
      param_1[2] = (ulong)ppppppppppppbVar36;
      if (ppppppppppppbVar36 == (byte ************)0x0) {
        ppppppppppbVar25 = (byte **********)0x0;
        param_1[3] = 0;
      }
      else {
        pppppppppppbVar24 = ppppppppppppbVar36[1];
        param_1[3] = (ulong)pppppppppppbVar24;
        ppppppppppbVar25 = *pppppppppppbVar24;
      }
      param_1[4] = (ulong)ppppppppppbVar25;
    }
    if (((ulong)local_d0 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_c0);
    goto LAB_7103830da4;
  case 2:
  case 3:
  case 4:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,param_2,param_3,(byte ****)param_4,param_5,param_6,param_7,
                             param_8);
    std::string::assign((char *)puVar11);
    goto LAB_710382d840;
  case 5:
    uVar22 = *param_2;
    puVar11 = (ulong *)((long)param_2 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar11 = (ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    ppplVar30 = param_3[0xd];
    puVar35 = puVar11 + 1;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_e8 = (byte ************)0x0;
    local_e0 = (byte ************)0x0;
    local_f0 = (byte ***********)0x0;
    ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) goto LAB_7103830ddc;
    if (ppppppppppppbVar12 < (byte ************)0x17) {
      local_f0 = (byte ***********)CONCAT71(local_f0._1_7_,(char)((int)ppppppppppppbVar12 << 1));
      ppppppppppppbVar36 = (byte ************)((ulong)&local_f0 | 1);
      if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382dca4;
    }
    else {
      ppppppppppppbVar36 = (byte ************)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_130 = (byte ***********)ppppppppppppbVar36,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_130),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar36,0x10,local_178);
      local_f0 = (byte ***********)((ulong)ppppppppppppbVar36 | 1);
      local_e0 = (byte ************)local_178;
      ppppppppppppbVar36 = (byte ************)local_178;
      local_e8 = ppppppppppppbVar12;
LAB_710382dca4:
      memcpy(ppppppppppppbVar36,pbVar27,(size_t)ppppppppppppbVar12);
    }
    *(undefined1 *)((long)ppppppppppppbVar36 + (long)ppppppppppppbVar12) = 0;
    ppppppppppppbVar12 = &local_f0;
    FUN_710385c840(&local_88,(long)ppplVar30,ppppppppppppbVar12);
    ppppppppppppbVar36 = local_e0;
    uVar16 = extraout_x1_01;
    if (((ulong)local_f0 & 1) != 0) {
      nu::VirtualFreeHook(local_e0);
      FUN_710392eb40((ulong)ppppppppppppbVar36);
      uVar16 = extraout_x1_02;
    }
    if ((local_78 == (byte ************)0x0) || (local_f8 = *local_78, local_f8 != local_70)) {
      *param_1 = (long)&DAT_710455dba0 - (long)param_1;
      puVar11 = FUN_7103828690(param_1,uVar16,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                               param_5,param_6,param_7,param_8);
      std::string::assign((char *)puVar11);
      goto LAB_710382d840;
    }
    local_108 = local_80;
    local_100 = local_78;
    local_110 = (byte ***********)&PTR_FUN_7105231d58;
    puVar38 = puVar11 + 2;
    uVar22 = *puVar38;
    puVar1 = (undefined4 *)((long)puVar38 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar1 = (undefined4 *)(uVar22 & 0xfffffffffffffffe);
    }
    uVar4 = *puVar1;
    uVar22 = puVar11[1];
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_150 = (byte ***********)0x0;
    local_148 = (byte ************)0x0;
    local_158 = (byte ***********)0x0;
    pppppppppppbVar24 = (byte ***********)strlen((char *)pbVar27);
    if ((byte ***********)0xffffffffffffffef < pppppppppppbVar24) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (pppppppppppbVar24 < (byte ***********)0x17) {
      local_158 = (byte ***********)CONCAT71(local_158._1_7_,(char)((int)pppppppppppbVar24 << 1));
      ppppppppppppbVar12 = (byte ************)((ulong)&local_158 | 1);
      if (pppppppppppbVar24 != (byte ***********)0x0) goto LAB_710382e830;
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)(pppppppppppbVar24 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_178 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
      local_158 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_148 = (byte ************)local_190;
      ppppppppppppbVar12 = (byte ************)local_190;
      local_150 = pppppppppppbVar24;
LAB_710382e830:
      memcpy(ppppppppppppbVar12,pbVar27,(size_t)pppppppppppbVar24);
    }
    ppppppppppppbVar36 = local_148;
    pppppppppppbVar21 = local_150;
    *(undefined1 *)((long)ppppppppppppbVar12 + (long)pppppppppppbVar24) = 0;
    local_128 = (byte ***********)0x0;
    local_120 = (byte ************)0x0;
    local_130 = (byte ***********)0x0;
    if (((ulong)local_158 & 1) == 0) {
      local_128 = local_150;
      local_120 = local_148;
      local_130 = local_158;
    }
    else {
      if ((byte ***********)0xffffffffffffffef < local_150) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (local_150 < (byte ***********)0x17) {
        local_130 = (byte ***********)(ulong)(byte)((int)local_150 << 1);
        local_190 = (byte ***********)((ulong)&local_130 | 1);
        if (local_150 != (byte ***********)0x0) goto LAB_710382ec38;
      }
      else {
        ppppppppppppbVar12 = (byte ************)((ulong)(local_150 + 2) & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                                param_5,param_6,param_7,param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_178 = (byte ***********)ppppppppppppbVar12,
           uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
           (uVar22 & 1) != 0)) {
          FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                         param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
        local_130 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
        local_128 = pppppppppppbVar21;
        local_120 = (byte ************)local_190;
LAB_710382ec38:
        memcpy(local_190,ppppppppppppbVar36,(size_t)pppppppppppbVar21);
      }
      *(undefined1 *)((long)local_190 + (long)pppppppppppbVar21) = 0;
    }
    local_118 = 0;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_188 = 0;
    local_180 = (void *)0x0;
    local_190 = (byte ***********)0x0;
    sVar13 = strlen((char *)pbVar27);
    if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar13 < 0x17) {
      local_190 = (byte ***********)CONCAT71(local_190._1_7_,(char)((int)sVar13 << 1));
      pvVar34 = (void *)((ulong)&local_190 | 1);
      if (sVar13 != 0) goto LAB_710382f0bc;
    }
    else {
      pppplVar33 = (long ****)(sVar13 + 0x10 & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_138 = pppplVar33,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_138),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,param_8
                      );
      }
      nu::VirtualAllocHook((ulong)pppplVar33,0x10,local_140);
      local_190 = (byte ***********)((ulong)pppplVar33 | 1);
      local_180 = local_140;
      pvVar34 = local_140;
      local_188 = sVar13;
LAB_710382f0bc:
      memcpy(pvVar34,pbVar27,sVar13);
    }
    pvVar8 = local_180;
    sVar7 = local_188;
    *(undefined1 *)((long)pvVar34 + sVar13) = 0;
    puVar37 = puVar11 + 4;
    uVar22 = *puVar37;
    puVar1 = (undefined4 *)((long)puVar37 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar1 = (undefined4 *)(uVar22 & 0xfffffffffffffffe);
    }
    uVar5 = *puVar1;
    local_178 = (byte ***********)0x0;
    local_170 = (byte ************)0x0;
    local_168 = (void *)0x0;
    if (((ulong)local_190 & 1) == 0) {
      local_170 = (byte ************)local_188;
      local_168 = local_180;
      local_178 = local_190;
    }
    else {
      if (0xffffffffffffffef < local_188) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (local_188 < 0x17) {
        local_178 = (byte ***********)(ulong)(byte)((int)local_188 << 1);
        local_140 = (void *)((ulong)&local_178 | 1);
        if (local_188 != 0) goto LAB_710382f62c;
      }
      else {
        pppplVar33 = (long ****)(local_188 + 0x10 & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,
                                param_7,param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_138 = pppplVar33,
           uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_138),
           (uVar22 & 1) != 0)) {
          FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,
                         param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar33,0x10,local_140);
        local_178 = (byte ***********)((ulong)pppplVar33 | 1);
        local_170 = (byte ************)sVar7;
        local_168 = local_140;
LAB_710382f62c:
        memcpy(local_140,pvVar8,sVar7);
      }
      *(undefined1 *)((long)local_140 + sVar7) = 0;
    }
    ppppppppppppbVar12 = &local_130;
    ppppppppppppbVar36 = &local_178;
    local_160 = uVar5;
    FUN_710386d680(&local_f0,(long)&local_110,uVar4,(byte ****)ppppppppppppbVar12,
                   (long ****)ppppppppppppbVar36,param_6,param_7,param_8);
    ppppppppppppbVar17 = local_168;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(local_168);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    pvVar34 = local_180;
    if (((ulong)local_190 & 1) != 0) {
      nu::VirtualFreeHook(local_180);
      FUN_710392eb40((ulong)pvVar34);
    }
    ppppppppppppbVar17 = local_120;
    if (((ulong)local_130 & 1) != 0) {
      nu::VirtualFreeHook(local_120);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    ppppppppppppbVar17 = local_148;
    if (((ulong)local_158 & 1) != 0) {
      nu::VirtualFreeHook(local_148);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    ppplVar30 = param_3[1];
    uVar22 = *puVar11;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar11 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_170 = (byte ************)0x0;
    local_168 = (byte ************)0x0;
    local_178 = (byte ***********)0x0;
    sVar13 = strlen((char *)pbVar27);
    if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar13 < 0x17) {
      local_178 = (byte ***********)CONCAT71(local_178._1_7_,(char)((int)sVar13 << 1));
      ppppppppppppbVar12 = (byte ************)((ulong)&local_178 | 1);
      if (sVar13 != 0) goto LAB_710382ffb8;
    }
    else {
      ppppppppppppbVar17 = (byte ************)(sVar13 + 0x10 & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar17,
                              (byte ****)ppppppppppppbVar12,(long ****)ppppppppppppbVar36,param_6,
                              param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_158 = (byte ***********)ppppppppppppbVar17,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_158),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar17,(byte ****)ppppppppppppbVar12,
                       (long ****)ppppppppppppbVar36,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar17,0x10,local_190);
      local_178 = (byte ***********)((ulong)ppppppppppppbVar17 | 1);
      local_168 = (byte ************)local_190;
      ppppppppppppbVar12 = (byte ************)local_190;
      local_170 = (byte ************)sVar13;
LAB_710382ffb8:
      memcpy(ppppppppppppbVar12,pbVar27,sVar13);
    }
    *(undefined1 *)((long)ppppppppppppbVar12 + sVar13) = 0;
    pppplVar33 = (long ****)(ppplVar30 + 0xf);
    ppppppppppppbVar12 = &local_178;
    ppppppppppppbVar36 = &local_f0;
    FUN_7103833120(&local_130,(byte **)ppplVar30,(byte ***)ppppppppppppbVar12,
                   (byte ****)ppppppppppppbVar36,pppplVar33,(byte ****)param_6,(byte ***)param_7,
                   (byte ***)param_8);
    ppppppppppppbVar17 = local_168;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(local_168);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    pppppppppppbVar24 = local_128;
    if (puVar11[3] != 0) {
      uVar22 = 0;
      uVar23 = 1;
      do {
        uVar28 = *puVar38;
        uVar2 = (long)puVar38 + uVar28;
        if ((uVar28 & 1) != 0) {
          uVar2 = uVar28 & 0xfffffffffffffffe;
        }
        uVar29 = *puVar37;
        uVar28 = (long)puVar37 + uVar29;
        if ((uVar29 & 1) != 0) {
          uVar28 = uVar29 & 0xfffffffffffffffe;
        }
        local_178 = (byte ***********)
                    CONCAT44(*(undefined4 *)(uVar28 + uVar22 * 4),
                             *(undefined4 *)(uVar2 + uVar22 * 4));
        FUN_710386a1c0((long)pppppppppppbVar24,(int *)&local_178,ppppppppppppbVar12,
                       (byte ****)ppppppppppppbVar36,pppplVar33,param_6,param_7,param_8);
        bVar9 = uVar23 < puVar11[3];
        uVar22 = uVar23;
        uVar23 = (ulong)((int)uVar23 + 1);
      } while (bVar9);
    }
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_170 = (byte ************)0x0;
    local_168 = (byte ************)0x0;
    local_178 = (byte ***********)0x0;
    ppppppppppppbVar17 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar17) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (ppppppppppppbVar17 < (byte ************)0x17) {
      local_178 = (byte ***********)CONCAT71(local_178._1_7_,(char)((int)ppppppppppppbVar17 << 1));
      ppppppppppppbVar32 = (byte ************)((ulong)&local_178 | 1);
      ppppppppppppbVar19 = extraout_x1_17;
      if (ppppppppppppbVar17 != (byte ************)0x0) goto LAB_7103830520;
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)(ppppppppppppbVar17 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,
                              (byte ****)ppppppppppppbVar36,pppplVar33,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_158 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_158),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)ppppppppppppbVar36,
                       pppplVar33,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
      local_178 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_168 = (byte ************)local_190;
      ppppppppppppbVar32 = (byte ************)local_190;
      local_170 = ppppppppppppbVar17;
LAB_7103830520:
      ppppppppppppbVar12 = ppppppppppppbVar17;
      memcpy(ppppppppppppbVar32,pbVar27,(size_t)ppppppppppppbVar17);
      ppppppppppppbVar19 = extraout_x1_18;
    }
    pppppppppppbVar21 = pppppppppppbVar24 + 0x10;
    *(undefined1 *)((long)ppppppppppppbVar32 + (long)ppppppppppppbVar17) = 0;
    ppppppppppppbVar17 = (byte ************)param_7;
    ppppppppppppbVar32 = local_168;
    if (pppppppppppbVar21 != (byte ***********)&local_178) {
      bVar9 = ((ulong)local_178 & 1) != 0;
      param_8 = (byte **********)((ulong)&local_178 | 1);
      if (bVar9) {
        param_8 = (byte **********)local_168;
      }
      bVar6 = *(byte *)pppppppppppbVar21;
      ppppppppppppbVar17 = (byte ************)((ulong)local_178 >> 1 & 0x7f);
      if (bVar9) {
        ppppppppppppbVar17 = local_170;
      }
      if ((bVar6 & 1) == 0) {
        ppppppppppppbVar19 = (byte ************)0x16;
        ppppppppppppbVar12 = (byte ************)((long)ppppppppppppbVar17 + -0x16);
        if (&DAT_00000015 < ppppppppppppbVar17 && ppppppppppppbVar12 != (byte ************)0x0) {
LAB_710383058c:
          if ((bVar6 & 1) == 0) {
            ppppppppppppbVar36 = (byte ************)(ulong)(bVar6 >> 1);
          }
          else {
            ppppppppppppbVar36 = (byte ************)pppppppppppbVar24[0x11];
          }
          pppplVar33 = (long ****)0x0;
          param_6 = (byte **********)ppppppppppppbVar36;
          FUN_71037cfe00((ulong *)pppppppppppbVar21,(ulong)ppppppppppppbVar19,
                         (ulong)ppppppppppppbVar12,(byte ****)ppppppppppppbVar36,(long ****)0x0,
                         (long)ppppppppppppbVar36,(size_t)ppppppppppppbVar17,param_8);
          ppppppppppppbVar19 = extraout_x1_30;
          ppppppppppppbVar32 = local_168;
          goto joined_r0x007103830a7c;
        }
      }
      else {
        ppppppppppppbVar19 =
             (byte ************)(((ulong)*pppppppppppbVar21 & 0xfffffffffffffffe) - 1);
        ppppppppppppbVar12 =
             (byte ************)((long)ppppppppppppbVar17 - (long)ppppppppppppbVar19);
        if (ppppppppppppbVar19 <= ppppppppppppbVar17 && ppppppppppppbVar12 != (byte ************)0x0
           ) goto LAB_710383058c;
      }
      if ((bVar6 & 1) == 0) {
        ppppppppppbVar25 = (byte **********)((long)pppppppppppbVar24 + 0x81);
      }
      else {
        ppppppppppbVar25 = pppppppppppbVar24[0x12];
      }
      if (ppppppppppppbVar17 != (byte ************)0x0) {
        ppppppppppppbVar12 = ppppppppppppbVar17;
        memmove(ppppppppppbVar25,param_8,(size_t)ppppppppppppbVar17);
        ppppppppppppbVar19 = extraout_x1_31;
      }
      *(undefined1 *)((long)ppppppppppbVar25 + (long)ppppppppppppbVar17) = 0;
      ppppppppppppbVar32 = local_168;
      if (((ulong)*pppppppppppbVar21 & 1) == 0) {
        *(char *)pppppppppppbVar21 = (char)((int)ppppppppppppbVar17 << 1);
        ppppppppppppbVar17 = (byte ************)param_7;
      }
      else {
        pppppppppppbVar24[0x11] = (byte **********)ppppppppppppbVar17;
        ppppppppppppbVar17 = (byte ************)param_7;
      }
    }
joined_r0x007103830a7c:
    local_168 = ppppppppppppbVar32;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(ppppppppppppbVar32);
      FUN_710392eb40((ulong)ppppppppppppbVar32);
      ppppppppppppbVar19 = extraout_x1_32;
    }
    ppppppppppppbVar32 = local_120;
    pppppppppppbVar21 = (byte ***********)CONCAT44(uStack_114,local_118);
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,ppppppppppppbVar19,(long ****)ppppppppppppbVar12,
                             (byte ****)ppppppppppppbVar36,pppplVar33,param_6,ppppppppppppbVar17,
                             param_8);
    std::string::assign((char *)puVar11);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (ulong)&PTR_FUN_7105238a98;
    if ((ppppppppppppbVar32 != (byte ************)0x0) && (*ppppppppppppbVar32 == pppppppppppbVar21)
       ) {
      param_1[2] = (ulong)pppppppppppbVar24;
      if (pppppppppppbVar24 == (byte ***********)0x0) {
        pppppppppbVar26 = (byte *********)0x0;
        param_1[3] = 0;
      }
      else {
        ppppppppppbVar25 = pppppppppppbVar24[1];
        param_1[3] = (ulong)ppppppppppbVar25;
        pppppppppbVar26 = *ppppppppppbVar25;
      }
      param_1[4] = (ulong)pppppppppbVar26;
    }
    if ((local_a8 & 1) != 0) {
      nu::VirtualFreeHook(local_98);
      FUN_710392eb40((ulong)local_98);
    }
    ppppppppppppbVar12 = local_b8;
    if (((ulong)local_c8 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_b8);
    goto LAB_7103830da4;
  case 6:
    uVar22 = *param_2;
    puVar11 = (ulong *)((long)param_2 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar11 = (ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    ppplVar30 = param_3[0xd];
    puVar35 = puVar11 + 1;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_e8 = (byte ************)0x0;
    local_e0 = (byte ************)0x0;
    local_f0 = (byte ***********)0x0;
    ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) goto LAB_7103830ddc;
    if (ppppppppppppbVar12 < (byte ************)0x17) {
      local_f0 = (byte ***********)CONCAT71(local_f0._1_7_,(char)((int)ppppppppppppbVar12 << 1));
      ppppppppppppbVar36 = (byte ************)((ulong)&local_f0 | 1);
      if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382db18;
    }
    else {
      ppppppppppppbVar36 = (byte ************)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_130 = (byte ***********)ppppppppppppbVar36,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_130),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar36,0x10,local_178);
      local_f0 = (byte ***********)((ulong)ppppppppppppbVar36 | 1);
      local_e0 = (byte ************)local_178;
      ppppppppppppbVar36 = (byte ************)local_178;
      local_e8 = ppppppppppppbVar12;
LAB_710382db18:
      memcpy(ppppppppppppbVar36,pbVar27,(size_t)ppppppppppppbVar12);
    }
    *(undefined1 *)((long)ppppppppppppbVar36 + (long)ppppppppppppbVar12) = 0;
    ppppppppppppbVar12 = &local_f0;
    FUN_710385ca30(&local_88,(long)ppplVar30,ppppppppppppbVar12);
    ppppppppppppbVar36 = local_e0;
    uVar16 = extraout_x1;
    if (((ulong)local_f0 & 1) != 0) {
      nu::VirtualFreeHook(local_e0);
      FUN_710392eb40((ulong)ppppppppppppbVar36);
      uVar16 = extraout_x1_00;
    }
    if ((local_78 == (byte ************)0x0) || (local_f8 = *local_78, local_f8 != local_70)) {
      *param_1 = (long)&DAT_710455dba0 - (long)param_1;
      puVar11 = FUN_7103828690(param_1,uVar16,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                               param_5,param_6,param_7,param_8);
      std::string::assign((char *)puVar11);
      goto LAB_710382d840;
    }
    local_108 = local_80;
    local_100 = local_78;
    local_110 = (byte ***********)&PTR_FUN_7105269278;
    puVar38 = puVar11 + 2;
    uVar22 = *puVar38;
    puVar1 = (undefined4 *)((long)puVar38 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar1 = (undefined4 *)(uVar22 & 0xfffffffffffffffe);
    }
    uVar4 = *puVar1;
    uVar22 = puVar11[1];
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_150 = (byte ***********)0x0;
    local_148 = (byte ************)0x0;
    local_158 = (byte ***********)0x0;
    pppppppppppbVar24 = (byte ***********)strlen((char *)pbVar27);
    if ((byte ***********)0xffffffffffffffef < pppppppppppbVar24) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (pppppppppppbVar24 < (byte ***********)0x17) {
      local_158 = (byte ***********)CONCAT71(local_158._1_7_,(char)((int)pppppppppppbVar24 << 1));
      ppppppppppppbVar12 = (byte ************)((ulong)&local_158 | 1);
      if (pppppppppppbVar24 != (byte ***********)0x0) goto LAB_710382e708;
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)(pppppppppppbVar24 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_178 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
      local_158 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_148 = (byte ************)local_190;
      ppppppppppppbVar12 = (byte ************)local_190;
      local_150 = pppppppppppbVar24;
LAB_710382e708:
      memcpy(ppppppppppppbVar12,pbVar27,(size_t)pppppppppppbVar24);
    }
    ppppppppppppbVar36 = local_148;
    pppppppppppbVar21 = local_150;
    *(undefined1 *)((long)ppppppppppppbVar12 + (long)pppppppppppbVar24) = 0;
    local_128 = (byte ***********)0x0;
    local_120 = (byte ************)0x0;
    local_130 = (byte ***********)0x0;
    if (((ulong)local_158 & 1) == 0) {
      local_128 = local_150;
      local_120 = local_148;
      local_130 = local_158;
    }
    else {
      if ((byte ***********)0xffffffffffffffef < local_150) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (local_150 < (byte ***********)0x17) {
        local_130 = (byte ***********)(ulong)(byte)((int)local_150 << 1);
        local_190 = (byte ***********)((ulong)&local_130 | 1);
        if (local_150 != (byte ***********)0x0) goto LAB_710382eb7c;
      }
      else {
        ppppppppppppbVar12 = (byte ************)((ulong)(local_150 + 2) & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                                param_5,param_6,param_7,param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_178 = (byte ***********)ppppppppppppbVar12,
           uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
           (uVar22 & 1) != 0)) {
          FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                         param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
        local_130 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
        local_128 = pppppppppppbVar21;
        local_120 = (byte ************)local_190;
LAB_710382eb7c:
        memcpy(local_190,ppppppppppppbVar36,(size_t)pppppppppppbVar21);
      }
      *(undefined1 *)((long)local_190 + (long)pppppppppppbVar21) = 0;
    }
    local_118 = 0;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_188 = 0;
    local_180 = (void *)0x0;
    local_190 = (byte ***********)0x0;
    sVar13 = strlen((char *)pbVar27);
    if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar13 < 0x17) {
      local_190 = (byte ***********)CONCAT71(local_190._1_7_,(char)((int)sVar13 << 1));
      pvVar34 = (void *)((ulong)&local_190 | 1);
      if (sVar13 != 0) goto LAB_710382ef70;
    }
    else {
      pppplVar33 = (long ****)(sVar13 + 0x10 & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_138 = pppplVar33,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_138),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,param_8
                      );
      }
      nu::VirtualAllocHook((ulong)pppplVar33,0x10,local_140);
      local_190 = (byte ***********)((ulong)pppplVar33 | 1);
      local_180 = local_140;
      pvVar34 = local_140;
      local_188 = sVar13;
LAB_710382ef70:
      memcpy(pvVar34,pbVar27,sVar13);
    }
    pvVar8 = local_180;
    sVar7 = local_188;
    *(undefined1 *)((long)pvVar34 + sVar13) = 0;
    puVar37 = puVar11 + 4;
    uVar22 = *puVar37;
    puVar1 = (undefined4 *)((long)puVar37 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar1 = (undefined4 *)(uVar22 & 0xfffffffffffffffe);
    }
    uVar5 = *puVar1;
    local_178 = (byte ***********)0x0;
    local_170 = (byte ************)0x0;
    local_168 = (void *)0x0;
    if (((ulong)local_190 & 1) == 0) {
      local_170 = (byte ************)local_188;
      local_168 = local_180;
      local_178 = local_190;
    }
    else {
      if (0xffffffffffffffef < local_188) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (local_188 < 0x17) {
        local_178 = (byte ***********)(ulong)(byte)((int)local_188 << 1);
        local_140 = (void *)((ulong)&local_178 | 1);
        if (local_188 != 0) goto LAB_710382f4b4;
      }
      else {
        pppplVar33 = (long ****)(local_188 + 0x10 & 0xfffffffffffffff0);
        iVar10 = FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,
                                param_7,param_8);
        if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_138 = pppplVar33,
           uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_138),
           (uVar22 & 1) != 0)) {
          FUN_710392e1f0(&local_140,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,
                         param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar33,0x10,local_140);
        local_178 = (byte ***********)((ulong)pppplVar33 | 1);
        local_170 = (byte ************)sVar7;
        local_168 = local_140;
LAB_710382f4b4:
        memcpy(local_140,pvVar8,sVar7);
      }
      *(undefined1 *)((long)local_140 + sVar7) = 0;
    }
    ppppppppppppbVar12 = &local_130;
    ppppppppppppbVar36 = &local_178;
    local_160 = uVar5;
    FUN_710386cc20(&local_f0,(long)&local_110,uVar4,(byte ****)ppppppppppppbVar12,
                   (long ****)ppppppppppppbVar36,param_6,param_7,param_8);
    ppppppppppppbVar17 = local_168;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(local_168);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    pvVar34 = local_180;
    if (((ulong)local_190 & 1) != 0) {
      nu::VirtualFreeHook(local_180);
      FUN_710392eb40((ulong)pvVar34);
    }
    ppppppppppppbVar17 = local_120;
    if (((ulong)local_130 & 1) != 0) {
      nu::VirtualFreeHook(local_120);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    ppppppppppppbVar17 = local_148;
    if (((ulong)local_158 & 1) != 0) {
      nu::VirtualFreeHook(local_148);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      ppppppppppppbVar17 = (byte ************)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        ppppppppppppbVar17 = (byte ************)(pbVar27 + 1);
      }
      else {
        ppppppppppppbVar17 = *(byte *************)(pbVar27 + 0x10);
      }
    }
    ppppppppppppbVar32 = (byte ************)strlen((char *)ppppppppppppbVar17);
    if (((ulong)local_c8 & 1) == 0) {
      ppppppppppppbVar19 = (byte ************)0x16;
    }
    else {
      ppppppppppppbVar19 = (byte ************)(((ulong)local_c8 & 0xfffffffffffffffe) - 1);
    }
    if (ppppppppppppbVar32 < ppppppppppppbVar19 ||
        (long)ppppppppppppbVar32 - (long)ppppppppppppbVar19 == 0) {
      ppppppppppppbVar19 = local_b8;
      if (((ulong)local_c8 & 1) == 0) {
        ppppppppppppbVar19 = (byte ************)(local_c8 + 1);
      }
      if (ppppppppppppbVar32 != (byte ************)0x0) {
        memmove(ppppppppppppbVar19,ppppppppppppbVar17,(size_t)ppppppppppppbVar32);
      }
      *(undefined1 *)((long)ppppppppppppbVar19 + (long)ppppppppppppbVar32) = 0;
      if (((ulong)local_c8 & 1) == 0) {
        local_c8[0] = (char)((int)ppppppppppppbVar32 << 1);
        ppppppppppppbVar32 = local_c0;
      }
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)local_c8 >> 1 & 0x7f);
      if (((ulong)local_c8 & 1) != 0) {
        ppppppppppppbVar12 = local_c0;
      }
      ppppppppppppbVar36 = (byte ************)0x0;
      param_6 = (byte **********)ppppppppppppbVar12;
      FUN_71037cfe00((ulong *)local_c8,(ulong)ppppppppppppbVar19,
                     (long)ppppppppppppbVar32 - (long)ppppppppppppbVar19,
                     (byte ****)ppppppppppppbVar12,(long ****)0x0,(long)ppppppppppppbVar12,
                     (size_t)ppppppppppppbVar32,ppppppppppppbVar17);
      param_7 = (byte **********)ppppppppppppbVar32;
      param_8 = (byte **********)ppppppppppppbVar17;
      ppppppppppppbVar32 = local_c0;
    }
    local_c0 = ppppppppppppbVar32;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      ppppppppppppbVar17 = (byte ************)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        ppppppppppppbVar17 = (byte ************)(pbVar27 + 1);
      }
      else {
        ppppppppppppbVar17 = *(byte *************)(pbVar27 + 0x10);
      }
    }
    ppppppppppppbVar32 = (byte ************)strlen((char *)ppppppppppppbVar17);
    if ((local_a8 & 1) == 0) {
      ppppppppppppbVar19 = (byte ************)0x16;
    }
    else {
      ppppppppppppbVar19 =
           (byte ************)((CONCAT71(uStack_a7,local_a8) & 0xfffffffffffffffe) - 1);
    }
    if (ppppppppppppbVar32 < ppppppppppppbVar19 ||
        (long)ppppppppppppbVar32 - (long)ppppppppppppbVar19 == 0) {
      puVar3 = local_98;
      if ((local_a8 & 1) == 0) {
        puVar3 = &uStack_a7;
      }
      if (ppppppppppppbVar32 != (byte ************)0x0) {
        memmove(puVar3,ppppppppppppbVar17,(size_t)ppppppppppppbVar32);
      }
      *(undefined1 *)((long)puVar3 + (long)ppppppppppppbVar32) = 0;
      if ((local_a8 & 1) == 0) {
        local_a8 = (byte)((int)ppppppppppppbVar32 << 1);
        ppppppppppppbVar32 = local_a0;
      }
    }
    else {
      ppppppppppppbVar12 = (byte ************)(ulong)(local_a8 >> 1);
      if ((local_a8 & 1) != 0) {
        ppppppppppppbVar12 = local_a0;
      }
      ppppppppppppbVar36 = (byte ************)0x0;
      param_6 = (byte **********)ppppppppppppbVar12;
      FUN_71037cfe00((ulong *)&local_a8,(ulong)ppppppppppppbVar19,
                     (long)ppppppppppppbVar32 - (long)ppppppppppppbVar19,
                     (byte ****)ppppppppppppbVar12,(long ****)0x0,(long)ppppppppppppbVar12,
                     (size_t)ppppppppppppbVar32,ppppppppppppbVar17);
      param_7 = (byte **********)ppppppppppppbVar32;
      param_8 = (byte **********)ppppppppppppbVar17;
      ppppppppppppbVar32 = local_a0;
    }
    local_a0 = ppppppppppppbVar32;
    ppplVar30 = param_3[1];
    uVar22 = *puVar11;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar11 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_170 = (byte ************)0x0;
    local_168 = (byte ************)0x0;
    local_178 = (byte ***********)0x0;
    sVar13 = strlen((char *)pbVar27);
    if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar13 < 0x17) {
      local_178 = (byte ***********)CONCAT71(local_178._1_7_,(char)((int)sVar13 << 1));
      ppppppppppppbVar12 = (byte ************)((ulong)&local_178 | 1);
      if (sVar13 != 0) goto LAB_7103830374;
    }
    else {
      ppppppppppppbVar17 = (byte ************)(sVar13 + 0x10 & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar17,
                              (byte ****)ppppppppppppbVar12,(long ****)ppppppppppppbVar36,param_6,
                              param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_158 = (byte ***********)ppppppppppppbVar17,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_158),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar17,(byte ****)ppppppppppppbVar12,
                       (long ****)ppppppppppppbVar36,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar17,0x10,local_190);
      local_178 = (byte ***********)((ulong)ppppppppppppbVar17 | 1);
      local_168 = (byte ************)local_190;
      ppppppppppppbVar12 = (byte ************)local_190;
      local_170 = (byte ************)sVar13;
LAB_7103830374:
      memcpy(ppppppppppppbVar12,pbVar27,sVar13);
    }
    *(undefined1 *)((long)ppppppppppppbVar12 + sVar13) = 0;
    pppplVar33 = (long ****)(ppplVar30 + 0xf);
    ppppppppppppbVar12 = &local_178;
    ppppppppppppbVar36 = &local_f0;
    FUN_7103832a10(&local_130,(byte **)ppplVar30,(byte ***)ppppppppppppbVar12,
                   (byte ****)ppppppppppppbVar36,pppplVar33,(byte ****)param_6,(byte ***)param_7,
                   (byte ***)param_8);
    ppppppppppppbVar17 = local_168;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(local_168);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    pppppppppppbVar24 = local_128;
    if (puVar11[3] != 0) {
      uVar22 = 0;
      uVar23 = 1;
      do {
        uVar28 = *puVar38;
        uVar2 = (long)puVar38 + uVar28;
        if ((uVar28 & 1) != 0) {
          uVar2 = uVar28 & 0xfffffffffffffffe;
        }
        uVar29 = *puVar37;
        uVar28 = (long)puVar37 + uVar29;
        if ((uVar29 & 1) != 0) {
          uVar28 = uVar29 & 0xfffffffffffffffe;
        }
        local_178 = (byte ***********)
                    CONCAT44(*(undefined4 *)(uVar28 + uVar22 * 4),
                             *(undefined4 *)(uVar2 + uVar22 * 4));
        FUN_710386a1c0((long)pppppppppppbVar24,(int *)&local_178,ppppppppppppbVar12,
                       (byte ****)ppppppppppppbVar36,pppplVar33,param_6,param_7,param_8);
        bVar9 = uVar23 < puVar11[3];
        uVar22 = uVar23;
        uVar23 = (ulong)((int)uVar23 + 1);
      } while (bVar9);
    }
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_170 = (byte ************)0x0;
    local_168 = (byte ************)0x0;
    local_178 = (byte ***********)0x0;
    ppppppppppppbVar17 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar17) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (ppppppppppppbVar17 < (byte ************)0x17) {
      local_178 = (byte ***********)CONCAT71(local_178._1_7_,(char)((int)ppppppppppppbVar17 << 1));
      ppppppppppppbVar32 = (byte ************)((ulong)&local_178 | 1);
      ppppppppppppbVar19 = extraout_x1_19;
      if (ppppppppppppbVar17 != (byte ************)0x0) goto LAB_7103830668;
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)(ppppppppppppbVar17 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,
                              (byte ****)ppppppppppppbVar36,pppplVar33,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_158 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_158),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)ppppppppppppbVar36,
                       pppplVar33,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
      local_178 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_168 = (byte ************)local_190;
      ppppppppppppbVar32 = (byte ************)local_190;
      local_170 = ppppppppppppbVar17;
LAB_7103830668:
      ppppppppppppbVar12 = ppppppppppppbVar17;
      memcpy(ppppppppppppbVar32,pbVar27,(size_t)ppppppppppppbVar17);
      ppppppppppppbVar19 = extraout_x1_20;
    }
    pppppppppppbVar21 = pppppppppppbVar24 + 0x10;
    *(undefined1 *)((long)ppppppppppppbVar32 + (long)ppppppppppppbVar17) = 0;
    ppppppppppppbVar17 = (byte ************)param_7;
    ppppppppppppbVar32 = local_168;
    if (pppppppppppbVar21 != (byte ***********)&local_178) {
      bVar9 = ((ulong)local_178 & 1) != 0;
      param_8 = (byte **********)((ulong)&local_178 | 1);
      if (bVar9) {
        param_8 = (byte **********)local_168;
      }
      bVar6 = *(byte *)pppppppppppbVar21;
      ppppppppppppbVar17 = (byte ************)((ulong)local_178 >> 1 & 0x7f);
      if (bVar9) {
        ppppppppppppbVar17 = local_170;
      }
      if ((bVar6 & 1) == 0) {
        ppppppppppppbVar19 = (byte ************)0x16;
        ppppppppppppbVar12 = (byte ************)((long)ppppppppppppbVar17 + -0x16);
        if (&DAT_00000015 < ppppppppppppbVar17 && ppppppppppppbVar12 != (byte ************)0x0) {
LAB_71038306d4:
          if ((bVar6 & 1) == 0) {
            ppppppppppppbVar36 = (byte ************)(ulong)(bVar6 >> 1);
          }
          else {
            ppppppppppppbVar36 = (byte ************)pppppppppppbVar24[0x11];
          }
          pppplVar33 = (long ****)0x0;
          param_6 = (byte **********)ppppppppppppbVar36;
          FUN_71037cfe00((ulong *)pppppppppppbVar21,(ulong)ppppppppppppbVar19,
                         (ulong)ppppppppppppbVar12,(byte ****)ppppppppppppbVar36,(long ****)0x0,
                         (long)ppppppppppppbVar36,(size_t)ppppppppppppbVar17,param_8);
          ppppppppppppbVar19 = extraout_x1_33;
          ppppppppppppbVar32 = local_168;
          goto joined_r0x007103830b8c;
        }
      }
      else {
        ppppppppppppbVar19 =
             (byte ************)(((ulong)*pppppppppppbVar21 & 0xfffffffffffffffe) - 1);
        ppppppppppppbVar12 =
             (byte ************)((long)ppppppppppppbVar17 - (long)ppppppppppppbVar19);
        if (ppppppppppppbVar19 <= ppppppppppppbVar17 && ppppppppppppbVar12 != (byte ************)0x0
           ) goto LAB_71038306d4;
      }
      if ((bVar6 & 1) == 0) {
        ppppppppppbVar25 = (byte **********)((long)pppppppppppbVar24 + 0x81);
      }
      else {
        ppppppppppbVar25 = pppppppppppbVar24[0x12];
      }
      if (ppppppppppppbVar17 != (byte ************)0x0) {
        ppppppppppppbVar12 = ppppppppppppbVar17;
        memmove(ppppppppppbVar25,param_8,(size_t)ppppppppppppbVar17);
        ppppppppppppbVar19 = extraout_x1_34;
      }
      *(undefined1 *)((long)ppppppppppbVar25 + (long)ppppppppppppbVar17) = 0;
      ppppppppppppbVar32 = local_168;
      if (((ulong)*pppppppppppbVar21 & 1) == 0) {
        *(char *)pppppppppppbVar21 = (char)((int)ppppppppppppbVar17 << 1);
        ppppppppppppbVar17 = (byte ************)param_7;
      }
      else {
        pppppppppppbVar24[0x11] = (byte **********)ppppppppppppbVar17;
        ppppppppppppbVar17 = (byte ************)param_7;
      }
    }
joined_r0x007103830b8c:
    local_168 = ppppppppppppbVar32;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(ppppppppppppbVar32);
      FUN_710392eb40((ulong)ppppppppppppbVar32);
      ppppppppppppbVar19 = extraout_x1_35;
    }
    ppppppppppppbVar32 = local_120;
    pppppppppppbVar21 = (byte ***********)CONCAT44(uStack_114,local_118);
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,ppppppppppppbVar19,(long ****)ppppppppppppbVar12,
                             (byte ****)ppppppppppppbVar36,pppplVar33,param_6,ppppppppppppbVar17,
                             param_8);
    std::string::assign((char *)puVar11);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (ulong)&PTR_FUN_7105238a98;
    if ((ppppppppppppbVar32 != (byte ************)0x0) && (*ppppppppppppbVar32 == pppppppppppbVar21)
       ) {
      param_1[2] = (ulong)pppppppppppbVar24;
      if (pppppppppppbVar24 == (byte ***********)0x0) {
        pppppppppbVar26 = (byte *********)0x0;
        param_1[3] = 0;
      }
      else {
        ppppppppppbVar25 = pppppppppppbVar24[1];
        param_1[3] = (ulong)ppppppppppbVar25;
        pppppppppbVar26 = *ppppppppppbVar25;
      }
      param_1[4] = (ulong)pppppppppbVar26;
    }
    if ((local_a8 & 1) != 0) {
      nu::VirtualFreeHook(local_98);
      FUN_710392eb40((ulong)local_98);
    }
    ppppppppppppbVar12 = local_b8;
    if (((ulong)local_c8 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_b8);
    goto LAB_7103830da4;
  case 7:
    uVar22 = *param_2;
    puVar11 = (ulong *)((long)param_2 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar11 = (ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    ppplVar30 = param_3[0xd];
    puVar35 = puVar11 + 1;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_e8 = (byte ************)0x0;
    local_e0 = (byte ************)0x0;
    local_f0 = (byte ***********)0x0;
    ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) goto LAB_7103830ddc;
    if (ppppppppppppbVar12 < (byte ************)0x17) {
      local_f0 = (byte ***********)CONCAT71(local_f0._1_7_,(char)((int)ppppppppppppbVar12 << 1));
      local_178 = (byte ***********)((ulong)&local_f0 | 1);
      if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382e0ec;
    }
    else {
      ppppppppppppbVar36 = (byte ************)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_130 = (byte ***********)ppppppppppppbVar36,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_130),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar36,0x10,local_178);
      local_f0 = (byte ***********)((ulong)ppppppppppppbVar36 | 1);
      local_e0 = (byte ************)local_178;
      local_e8 = ppppppppppppbVar12;
LAB_710382e0ec:
      memcpy(local_178,pbVar27,(size_t)ppppppppppppbVar12);
    }
    *(undefined1 *)((long)local_178 + (long)ppppppppppppbVar12) = 0;
    ppppppppppppbVar12 = &local_f0;
    FUN_710385c6d0(&local_88,(long)ppplVar30,(byte *)ppppppppppppbVar12);
    ppppppppppppbVar36 = local_e0;
    uVar16 = extraout_x1_07;
    if (((ulong)local_f0 & 1) != 0) {
      nu::VirtualFreeHook(local_e0);
      FUN_710392eb40((ulong)ppppppppppppbVar36);
      uVar16 = extraout_x1_08;
    }
    if ((local_78 == (byte ************)0x0) || (local_f8 = *local_78, local_f8 != local_70)) {
      *param_1 = (long)&DAT_710455dba0 - (long)param_1;
      puVar11 = FUN_7103828690(param_1,uVar16,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                               param_5,param_6,param_7,param_8);
      std::string::assign((char *)puVar11);
      goto LAB_710382d840;
    }
    local_108 = local_80;
    local_100 = local_78;
    local_110 = (byte ***********)&PTR_FUN_71052691d8;
    uVar22 = puVar11[2];
    puVar1 = (undefined4 *)((long)(puVar11 + 2) + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar1 = (undefined4 *)(uVar22 & 0xfffffffffffffffe);
    }
    FUN_710386d3b0(&local_f0,(long)&local_110,*puVar1);
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      ppppppppppppbVar12 = (byte ************)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        ppppppppppppbVar12 = (byte ************)(pbVar27 + 1);
      }
      else {
        ppppppppppppbVar12 = *(byte *************)(pbVar27 + 0x10);
      }
    }
    ppppppppppppbVar36 = (byte ************)strlen((char *)ppppppppppppbVar12);
    if (((ulong)local_c8 & 1) == 0) {
      ppppppppppppbVar17 = (byte ************)0x16;
    }
    else {
      ppppppppppppbVar17 = (byte ************)(((ulong)local_c8 & 0xfffffffffffffffe) - 1);
    }
    if (ppppppppppppbVar36 < ppppppppppppbVar17 ||
        (long)ppppppppppppbVar36 - (long)ppppppppppppbVar17 == 0) {
      ppppppppppppbVar17 = local_b8;
      if (((ulong)local_c8 & 1) == 0) {
        ppppppppppppbVar17 = (byte ************)(local_c8 + 1);
      }
      if (ppppppppppppbVar36 != (byte ************)0x0) {
        memmove(ppppppppppppbVar17,ppppppppppppbVar12,(size_t)ppppppppppppbVar36);
      }
      *(undefined1 *)((long)ppppppppppppbVar17 + (long)ppppppppppppbVar36) = 0;
      if (((ulong)local_c8 & 1) != 0) goto LAB_710382f410;
      local_c8[0] = (char)((int)ppppppppppppbVar36 << 1);
      uVar22 = *puVar35;
      if ((uVar22 & 1) != 0) goto LAB_710382f420;
LAB_710382f418:
      ppppppppppppbVar12 = (byte ************)((long)puVar35 + uVar22);
    }
    else {
      param_4 = (byte **********)((ulong)local_c8 >> 1 & 0x7f);
      if (((ulong)local_c8 & 1) != 0) {
        param_4 = (byte **********)local_c0;
      }
      param_5 = (long ****)0x0;
      param_6 = param_4;
      FUN_71037cfe00((ulong *)local_c8,(ulong)ppppppppppppbVar17,
                     (long)ppppppppppppbVar36 - (long)ppppppppppppbVar17,(byte ****)param_4,
                     (long ****)0x0,(long)param_4,(size_t)ppppppppppppbVar36,ppppppppppppbVar12);
      param_7 = (byte **********)ppppppppppppbVar36;
      param_8 = (byte **********)ppppppppppppbVar12;
      ppppppppppppbVar36 = local_c0;
LAB_710382f410:
      local_c0 = ppppppppppppbVar36;
      uVar22 = *puVar35;
      if ((uVar22 & 1) == 0) goto LAB_710382f418;
LAB_710382f420:
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        ppppppppppppbVar12 = (byte ************)(pbVar27 + 1);
      }
      else {
        ppppppppppppbVar12 = *(byte *************)(pbVar27 + 0x10);
      }
    }
    ppppppppppppbVar36 = (byte ************)strlen((char *)ppppppppppppbVar12);
    if ((local_a8 & 1) == 0) {
      ppppppppppppbVar17 = (byte ************)0x16;
    }
    else {
      ppppppppppppbVar17 =
           (byte ************)((CONCAT71(uStack_a7,local_a8) & 0xfffffffffffffffe) - 1);
    }
    if (ppppppppppppbVar36 < ppppppppppppbVar17 ||
        (long)ppppppppppppbVar36 - (long)ppppppppppppbVar17 == 0) {
      puVar3 = local_98;
      if ((local_a8 & 1) == 0) {
        puVar3 = &uStack_a7;
      }
      if (ppppppppppppbVar36 != (byte ************)0x0) {
        memmove(puVar3,ppppppppppppbVar12,(size_t)ppppppppppppbVar36);
      }
      *(undefined1 *)((long)puVar3 + (long)ppppppppppppbVar36) = 0;
      if ((local_a8 & 1) == 0) {
        local_a8 = (byte)((int)ppppppppppppbVar36 << 1);
        ppppppppppppbVar36 = local_a0;
      }
    }
    else {
      param_4 = (byte **********)(ulong)(local_a8 >> 1);
      if ((local_a8 & 1) != 0) {
        param_4 = (byte **********)local_a0;
      }
      param_5 = (long ****)0x0;
      param_6 = param_4;
      FUN_71037cfe00((ulong *)&local_a8,(ulong)ppppppppppppbVar17,
                     (long)ppppppppppppbVar36 - (long)ppppppppppppbVar17,(byte ****)param_4,
                     (long ****)0x0,(long)param_4,(size_t)ppppppppppppbVar36,ppppppppppppbVar12);
      param_7 = (byte **********)ppppppppppppbVar36;
      param_8 = (byte **********)ppppppppppppbVar12;
      ppppppppppppbVar36 = local_a0;
    }
    local_a0 = ppppppppppppbVar36;
    ppplVar30 = param_3[1];
    uVar22 = *puVar11;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar11 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_170 = (byte ************)0x0;
    local_168 = (byte ************)0x0;
    local_178 = (byte ***********)0x0;
    sVar13 = strlen((char *)pbVar27);
    if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar13 < 0x17) {
      local_178 = (byte ***********)CONCAT71(local_178._1_7_,(char)((int)sVar13 << 1));
      ppppppppppppbVar12 = (byte ************)((ulong)&local_178 | 1);
      if (sVar13 != 0) goto LAB_710382fc6c;
    }
    else {
      ppppppppppppbVar12 = (byte ************)(sVar13 + 0x10 & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_158 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_158),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
      local_178 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_168 = (byte ************)local_190;
      ppppppppppppbVar12 = (byte ************)local_190;
      local_170 = (byte ************)sVar13;
LAB_710382fc6c:
      memcpy(ppppppppppppbVar12,pbVar27,sVar13);
    }
    *(undefined1 *)((long)ppppppppppppbVar12 + sVar13) = 0;
    pppplVar33 = (long ****)(ppplVar30 + 0xf);
    ppppppppppppbVar12 = &local_178;
    ppppppppppppbVar36 = &local_f0;
    FUN_7103832300(&local_130,(byte **)ppplVar30,(byte ***)ppppppppppppbVar12,
                   (byte ****)ppppppppppppbVar36,pppplVar33,(byte ****)param_6,(byte ***)param_7,
                   (byte ***)param_8);
    ppppppppppppbVar17 = local_168;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(local_168);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
    }
    pppppppppppbVar24 = local_128;
    uVar22 = *puVar35;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar35 + uVar22);
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
      }
      else {
        pbVar27 = *(byte **)(pbVar27 + 0x10);
      }
    }
    local_170 = (byte ************)0x0;
    local_168 = (byte ************)0x0;
    local_178 = (byte ***********)0x0;
    ppppppppppppbVar17 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar17) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (ppppppppppppbVar17 < (byte ************)0x17) {
      local_178 = (byte ***********)CONCAT71(local_178._1_7_,(char)((int)ppppppppppppbVar17 << 1));
      ppppppppppppbVar32 = (byte ************)((ulong)&local_178 | 1);
      ppppppppppppbVar19 = extraout_x1_15;
      if (ppppppppppppbVar17 != (byte ************)0x0) goto LAB_7103830164;
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)(ppppppppppppbVar17 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,
                              (byte ****)ppppppppppppbVar36,pppplVar33,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_158 = (byte ***********)ppppppppppppbVar12,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_158),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_190,0x10,(long ****)ppppppppppppbVar12,(byte ****)ppppppppppppbVar36,
                       pppplVar33,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_190);
      local_178 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_168 = (byte ************)local_190;
      ppppppppppppbVar32 = (byte ************)local_190;
      local_170 = ppppppppppppbVar17;
LAB_7103830164:
      ppppppppppppbVar12 = ppppppppppppbVar17;
      memcpy(ppppppppppppbVar32,pbVar27,(size_t)ppppppppppppbVar17);
      ppppppppppppbVar19 = extraout_x1_16;
    }
    pppppppppppbVar21 = pppppppppppbVar24 + 0x10;
    *(undefined1 *)((long)ppppppppppppbVar32 + (long)ppppppppppppbVar17) = 0;
    ppppppppppppbVar17 = (byte ************)param_7;
    ppppppppppppbVar32 = local_168;
    if (pppppppppppbVar21 != (byte ***********)&local_178) {
      bVar9 = ((ulong)local_178 & 1) != 0;
      param_8 = (byte **********)((ulong)&local_178 | 1);
      if (bVar9) {
        param_8 = (byte **********)local_168;
      }
      bVar6 = *(byte *)pppppppppppbVar21;
      ppppppppppppbVar17 = (byte ************)((ulong)local_178 >> 1 & 0x7f);
      if (bVar9) {
        ppppppppppppbVar17 = local_170;
      }
      if ((bVar6 & 1) == 0) {
        ppppppppppppbVar19 = (byte ************)0x16;
        ppppppppppppbVar12 = (byte ************)((long)ppppppppppppbVar17 + -0x16);
        if (&DAT_00000015 < ppppppppppppbVar17 && ppppppppppppbVar12 != (byte ************)0x0) {
LAB_71038301d0:
          if ((bVar6 & 1) == 0) {
            ppppppppppppbVar36 = (byte ************)(ulong)(bVar6 >> 1);
          }
          else {
            ppppppppppppbVar36 = (byte ************)pppppppppppbVar24[0x11];
          }
          pppplVar33 = (long ****)0x0;
          param_6 = (byte **********)ppppppppppppbVar36;
          FUN_71037cfe00((ulong *)pppppppppppbVar21,(ulong)ppppppppppppbVar19,
                         (ulong)ppppppppppppbVar12,(byte ****)ppppppppppppbVar36,(long ****)0x0,
                         (long)ppppppppppppbVar36,(size_t)ppppppppppppbVar17,param_8);
          ppppppppppppbVar19 = extraout_x1_27;
          ppppppppppppbVar32 = local_168;
          goto joined_r0x00710383096c;
        }
      }
      else {
        ppppppppppppbVar19 =
             (byte ************)(((ulong)*pppppppppppbVar21 & 0xfffffffffffffffe) - 1);
        ppppppppppppbVar12 =
             (byte ************)((long)ppppppppppppbVar17 - (long)ppppppppppppbVar19);
        if (ppppppppppppbVar19 <= ppppppppppppbVar17 && ppppppppppppbVar12 != (byte ************)0x0
           ) goto LAB_71038301d0;
      }
      if ((bVar6 & 1) == 0) {
        ppppppppppbVar25 = (byte **********)((long)pppppppppppbVar24 + 0x81);
      }
      else {
        ppppppppppbVar25 = pppppppppppbVar24[0x12];
      }
      if (ppppppppppppbVar17 != (byte ************)0x0) {
        ppppppppppppbVar12 = ppppppppppppbVar17;
        memmove(ppppppppppbVar25,param_8,(size_t)ppppppppppppbVar17);
        ppppppppppppbVar19 = extraout_x1_28;
      }
      *(undefined1 *)((long)ppppppppppbVar25 + (long)ppppppppppppbVar17) = 0;
      ppppppppppppbVar32 = local_168;
      if (((ulong)*pppppppppppbVar21 & 1) == 0) {
        *(char *)pppppppppppbVar21 = (char)((int)ppppppppppppbVar17 << 1);
        ppppppppppppbVar17 = (byte ************)param_7;
      }
      else {
        pppppppppppbVar24[0x11] = (byte **********)ppppppppppppbVar17;
        ppppppppppppbVar17 = (byte ************)param_7;
      }
    }
joined_r0x00710383096c:
    local_168 = ppppppppppppbVar32;
    if (((ulong)local_178 & 1) != 0) {
      nu::VirtualFreeHook(ppppppppppppbVar32);
      FUN_710392eb40((ulong)ppppppppppppbVar32);
      ppppppppppppbVar19 = extraout_x1_29;
    }
    ppppppppppppbVar32 = local_120;
    pppppppppppbVar21 = (byte ***********)CONCAT44(uStack_114,local_118);
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,ppppppppppppbVar19,(long ****)ppppppppppppbVar12,
                             (byte ****)ppppppppppppbVar36,pppplVar33,param_6,ppppppppppppbVar17,
                             param_8);
    std::string::assign((char *)puVar11);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (ulong)&PTR_FUN_7105238a98;
    if ((ppppppppppppbVar32 != (byte ************)0x0) && (*ppppppppppppbVar32 == pppppppppppbVar21)
       ) {
      param_1[2] = (ulong)pppppppppppbVar24;
      if (pppppppppppbVar24 == (byte ***********)0x0) {
        pppppppppbVar26 = (byte *********)0x0;
        param_1[3] = 0;
      }
      else {
        ppppppppppbVar25 = pppppppppppbVar24[1];
        param_1[3] = (ulong)ppppppppppbVar25;
        pppppppppbVar26 = *ppppppppppbVar25;
      }
      param_1[4] = (ulong)pppppppppbVar26;
    }
    if ((local_a8 & 1) != 0) {
      nu::VirtualFreeHook(local_98);
      FUN_710392eb40((ulong)local_98);
    }
    ppppppppppppbVar12 = local_b8;
    if (((ulong)local_c8 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_b8);
    goto LAB_7103830da4;
  case 0x11:
    uVar22 = *param_2;
    puVar11 = (ulong *)((long)param_2 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar11 = (ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    local_d8 = (byte ***********)param_3[7];
    local_e8 = (byte ************)param_3[5];
    local_e0 = (byte ************)param_3[6];
    local_f0 = (byte ***********)&PTR_FUN_71052690f8;
    local_d0 = (undefined1  [8])((ulong)local_d0 & 0xffffffff00000000);
    uVar22 = *puVar11;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar11 + uVar22);
LAB_710382da28:
      ppplVar30 = param_3[1];
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
        goto LAB_710382da28;
      }
      ppplVar30 = param_3[1];
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
    local_108 = (byte ************)0x0;
    local_100 = (byte ************)0x0;
    local_110 = (byte ***********)0x0;
    ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (ppppppppppppbVar12 < (byte ************)0x17) {
      local_110 = (byte ***********)CONCAT71(local_110._1_7_,(char)((int)ppppppppppppbVar12 << 1));
      ppppppppppppbVar36 = (byte ************)((ulong)&local_110 | 1);
      if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382e290;
    }
    else {
      ppppppppppppbVar36 = (byte ************)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0)
      ;
      iVar10 = FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_130 = (byte ***********)ppppppppppppbVar36,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_130),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_178,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar36,0x10,local_178);
      local_110 = (byte ***********)((ulong)ppppppppppppbVar36 | 1);
      local_100 = (byte ************)local_178;
      ppppppppppppbVar36 = (byte ************)local_178;
      local_108 = ppppppppppppbVar12;
LAB_710382e290:
      memcpy(ppppppppppppbVar36,pbVar27,(size_t)ppppppppppppbVar12);
    }
    *(undefined1 *)((long)ppppppppppppbVar36 + (long)ppppppppppppbVar12) = 0;
    pppplVar33 = (long ****)(ppplVar30 + 0xf);
    ppppppppppppbVar12 = &local_110;
    ppppppppppppbVar36 = &local_f0;
    FUN_7103831cd0(&local_88,(long *)ppplVar30,(long **)ppppppppppppbVar12,
                   (byte ****)ppppppppppppbVar36,pppplVar33,param_6,(long **)param_7,(byte *)param_8
                  );
    pppppppppppbVar24 = local_70;
    ppppppppppppbVar32 = local_78;
    ppppppppppppbVar17 = local_80;
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,extraout_x1_09,(long ****)ppppppppppppbVar12,
                             (byte ****)ppppppppppppbVar36,pppplVar33,param_6,param_7,param_8);
    std::string::assign((char *)puVar11);
    ppppppppppppbVar12 = local_100;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (ulong)&PTR_FUN_7105238a98;
    if ((ppppppppppppbVar32 != (byte ************)0x0) && (*ppppppppppppbVar32 == pppppppppppbVar24)
       ) {
      param_1[2] = (ulong)ppppppppppppbVar17;
      if (ppppppppppppbVar17 == (byte ************)0x0) {
        ppppppppppbVar25 = (byte **********)0x0;
        param_1[3] = 0;
      }
      else {
        pppppppppppbVar24 = ppppppppppppbVar17[1];
        param_1[3] = (ulong)pppppppppppbVar24;
        ppppppppppbVar25 = *pppppppppppbVar24;
      }
      param_1[4] = (ulong)ppppppppppbVar25;
    }
    if (((ulong)local_110 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_100);
    goto LAB_7103830da4;
  case 0x12:
    uVar22 = *param_2;
    puVar11 = (ulong *)((long)param_2 + uVar22);
    if ((uVar22 & 1) != 0) {
      puVar11 = (ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    uVar22 = *puVar11;
    if ((uVar22 & 1) == 0) {
      pbVar27 = (byte *)((long)puVar11 + uVar22);
LAB_710382da48:
      ppplVar30 = param_3[1];
    }
    else {
      pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
      if ((*pbVar27 & 1) == 0) {
        pbVar27 = pbVar27 + 1;
        goto LAB_710382da48;
      }
      ppplVar30 = param_3[1];
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
    local_108 = (byte ************)0x0;
    local_100 = (byte ************)0x0;
    local_110 = (byte ***********)0x0;
    ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
    if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (ppppppppppppbVar12 < (byte ************)0x17) {
      local_110 = (byte ***********)CONCAT71(local_110._1_7_,(char)((int)ppppppppppppbVar12 << 1));
      ppppppppppppbVar36 = (byte ************)((ulong)&local_110 | 1);
      if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382e3f4;
    }
    else {
      pppplVar33 = (long ****)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_130,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,
                              param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_88 = pppplVar33,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88), (uVar22 & 1) != 0
         )) {
        FUN_710392e1f0(&local_130,0x10,pppplVar33,(byte ****)param_4,param_5,param_6,param_7,param_8
                      );
      }
      nu::VirtualAllocHook((ulong)pppplVar33,0x10,local_130);
      local_110 = (byte ***********)((ulong)pppplVar33 | 1);
      local_100 = (byte ************)local_130;
      ppppppppppppbVar36 = (byte ************)local_130;
      local_108 = ppppppppppppbVar12;
LAB_710382e3f4:
      memcpy(ppppppppppppbVar36,pbVar27,(size_t)ppppppppppppbVar12);
    }
    *(undefined1 *)((long)ppppppppppppbVar36 + (long)ppppppppppppbVar12) = 0;
    local_70 = (byte ***********)param_3[0xb];
    local_80 = (byte ************)param_3[9];
    local_78 = (byte ************)param_3[10];
    local_88 = (long ****)&PTR_FUN_7105269118;
    pppplVar33 = (long ****)(ppplVar30 + 0xf);
    ppppppppppppbVar12 = &local_110;
    ppppplVar20 = &local_88;
    FUN_71038316d0(&local_f0,(long *)ppplVar30,(long **)ppppppppppppbVar12,(byte ****)ppppplVar20,
                   pppplVar33,param_6,(long *)param_7,(byte *)param_8);
    pppppppppppbVar24 = local_d8;
    ppppppppppppbVar17 = local_e0;
    ppppppppppppbVar36 = local_e8;
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,extraout_x1_10,(long ****)ppppppppppppbVar12,
                             (byte ****)ppppplVar20,pppplVar33,param_6,param_7,param_8);
    std::string::assign((char *)puVar11);
    ppppppppppppbVar12 = local_100;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (ulong)&PTR_FUN_7105238a98;
    if ((ppppppppppppbVar17 != (byte ************)0x0) && (*ppppppppppppbVar17 == pppppppppppbVar24)
       ) {
      param_1[2] = (ulong)ppppppppppppbVar36;
      if (ppppppppppppbVar36 == (byte ************)0x0) {
        ppppppppppbVar25 = (byte **********)0x0;
        param_1[3] = 0;
      }
      else {
        pppppppppppbVar24 = ppppppppppppbVar36[1];
        param_1[3] = (ulong)pppppppppppbVar24;
        ppppppppppbVar25 = *pppppppppppbVar24;
      }
      param_1[4] = (ulong)ppppppppppbVar25;
    }
    if (((ulong)local_110 & 1) == 0) {
      return;
    }
    nu::VirtualFreeHook(local_100);
    goto LAB_7103830da4;
  default:
    puVar15 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar15 = &DAT_7107b69010;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar15,&std::exception::typeinfo,std::exception::~exception);
  }
  uVar22 = *param_2;
  puVar11 = (ulong *)((long)param_2 + uVar22);
  if ((uVar22 & 1) != 0) {
    puVar11 = (ulong *)(uVar22 & 0xfffffffffffffffe);
  }
  ppplVar30 = param_3[0xd];
  puVar35 = puVar11 + 1;
  uVar22 = *puVar35;
  if ((uVar22 & 1) == 0) {
    pbVar27 = (byte *)((long)puVar35 + uVar22);
  }
  else {
    pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
    if ((*pbVar27 & 1) == 0) {
      pbVar27 = pbVar27 + 1;
    }
    else {
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
  }
  local_e8 = (byte ************)0x0;
  local_e0 = (byte ************)0x0;
  local_f0 = (byte ***********)0x0;
  ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
  if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) {
LAB_7103830ddc:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (ppppppppppppbVar12 < (byte ************)0x17) {
    local_f0 = (byte ***********)CONCAT71(local_f0._1_7_,(char)((int)ppppppppppppbVar12 << 1));
    local_130 = (byte ***********)((ulong)&local_f0 | 1);
    if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382de30;
  }
  else {
    pppppppppppbVar24 = (byte ***********)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0);
    iVar10 = FUN_710392e1f0(&local_130,0x10,(long ****)pppppppppppbVar24,(byte ****)param_4,param_5,
                            param_6,param_7,param_8);
    if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_110 = pppppppppppbVar24,
       uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_110), (uVar22 & 1) != 0)
       ) {
      FUN_710392e1f0(&local_130,0x10,(long ****)pppppppppppbVar24,(byte ****)param_4,param_5,param_6
                     ,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppppppppppbVar24,0x10,local_130);
    local_f0 = (byte ***********)((ulong)pppppppppppbVar24 | 1);
    local_e0 = (byte ************)local_130;
    local_e8 = ppppppppppppbVar12;
LAB_710382de30:
    memcpy(local_130,pbVar27,(size_t)ppppppppppppbVar12);
  }
  *(undefined1 *)((long)local_130 + (long)ppppppppppppbVar12) = 0;
  ppppppppppppbVar12 = &local_f0;
  FUN_710385c840(&local_88,(long)ppplVar30,ppppppppppppbVar12);
  ppppppppppppbVar36 = local_e0;
  uVar16 = extraout_x1_03;
  if (((ulong)local_f0 & 1) != 0) {
    nu::VirtualFreeHook(local_e0);
    FUN_710392eb40((ulong)ppppppppppppbVar36);
    uVar16 = extraout_x1_04;
  }
  ppppppppppppbVar17 = local_78;
  ppppppppppppbVar36 = local_80;
  if ((local_78 == (byte ************)0x0) ||
     (pppppppppppbVar24 = *local_78, pppppppppppbVar24 != local_70)) {
    *param_1 = (long)&DAT_710455dba0 - (long)param_1;
    puVar11 = FUN_7103828690(param_1,uVar16,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5
                             ,param_6,param_7,param_8);
    std::string::assign((char *)puVar11);
LAB_710382d840:
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = (ulong)&PTR_FUN_7105238a98;
    param_1[2] = 0;
    return;
  }
  uVar22 = puVar11[2];
  uVar23 = puVar11[1];
  if ((uVar23 & 1) == 0) {
    pbVar27 = (byte *)((long)puVar35 + uVar23);
  }
  else {
    pbVar27 = (byte *)(uVar23 & 0xfffffffffffffffe);
    if ((*pbVar27 & 1) == 0) {
      pbVar27 = pbVar27 + 1;
    }
    else {
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
  }
  local_128 = (byte ***********)0x0;
  local_120 = (byte ************)0x0;
  local_130 = (byte ***********)0x0;
  ppppppppppppbVar12 = (byte ************)strlen((char *)pbVar27);
  if ((byte ************)0xffffffffffffffef < ppppppppppppbVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (ppppppppppppbVar12 < (byte ************)0x17) {
    local_130 = (byte ***********)CONCAT71(local_130._1_7_,(char)((int)ppppppppppppbVar12 << 1));
    ppppppppppppbVar32 = (byte ************)((ulong)&local_130 | 1);
    if (ppppppppppppbVar12 != (byte ************)0x0) goto LAB_710382e964;
  }
  else {
    ppppppppppppbVar32 = (byte ************)((ulong)(ppppppppppppbVar12 + 2) & 0xfffffffffffffff0);
    iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar32,(byte ****)param_4,param_5
                            ,param_6,param_7,param_8);
    if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_178 = (byte ***********)ppppppppppppbVar32,
       uVar23 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178), (uVar23 & 1) != 0)
       ) {
      FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar32,(byte ****)param_4,param_5,
                     param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)ppppppppppppbVar32,0x10,local_158);
    local_130 = (byte ***********)((ulong)ppppppppppppbVar32 | 1);
    local_120 = (byte ************)local_158;
    ppppppppppppbVar32 = (byte ************)local_158;
    local_128 = (byte ***********)ppppppppppppbVar12;
LAB_710382e964:
    memcpy(ppppppppppppbVar32,pbVar27,(size_t)ppppppppppppbVar12);
  }
  ppppppppppppbVar19 = local_120;
  pppppppppppbVar21 = local_128;
  *(undefined1 *)((long)ppppppppppppbVar32 + (long)ppppppppppppbVar12) = 0;
  local_108 = (byte ************)0x0;
  local_100 = (byte ************)0x0;
  local_110 = (byte ***********)0x0;
  if (((ulong)local_130 & 1) == 0) {
    local_108 = (byte ************)local_128;
    local_100 = local_120;
    local_110 = local_130;
  }
  else {
    if ((byte ************)0xffffffffffffffef < local_128) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_128 < (byte ************)0x17) {
      local_110 = (byte ***********)(ulong)(byte)((int)local_128 << 1);
      ppppppppppppbVar12 = (byte ************)((ulong)&local_110 | 1);
      if (local_128 != (byte ***********)0x0) goto LAB_710382ecfc;
    }
    else {
      ppppppppppppbVar12 = (byte ************)((ulong)(local_128 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_178 = (byte ***********)ppppppppppppbVar12,
         uVar23 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
         (uVar23 & 1) != 0)) {
        FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_158);
      local_110 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
      local_108 = (byte ************)pppppppppppbVar21;
      local_100 = (byte ************)local_158;
      ppppppppppppbVar12 = (byte ************)local_158;
LAB_710382ecfc:
      memcpy(ppppppppppppbVar12,ppppppppppppbVar19,(size_t)pppppppppppbVar21);
    }
    *(undefined1 *)((long)ppppppppppppbVar12 + (long)pppppppppppbVar21) = 0;
  }
  ppppppppppppbVar32 = local_100;
  ppppppppppppbVar12 = local_108;
  local_e8 = ppppppppppppbVar36;
  local_e0 = ppppppppppppbVar17;
  local_f0 = (byte ***********)&PTR_FUN_7105231d58;
  local_f8 = (byte ***********)((ulong)local_f8._4_4_ << 0x20);
  local_d0._0_4_ = (int)uVar22;
  local_c0 = (byte ************)0x0;
  local_b8 = (byte ************)0x0;
  local_c8 = (undefined1  [8])0x0;
  local_d8 = pppppppppppbVar24;
  if (((ulong)local_110 & 1) == 0) {
    local_b0 = 0;
    ppppppppppppbVar12 = local_120;
    local_c8 = (undefined1  [8])local_110;
    local_c0 = local_108;
    local_b8 = local_100;
  }
  else {
    if ((byte ************)0xffffffffffffffef < local_108) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_108 < (byte ************)0x17) {
      ppppppppppppbVar36 = (byte ************)(local_c8 + 1);
      local_c8._1_7_ = 0;
      local_c8[0] = (byte)((int)local_108 << 1);
      if (local_108 != (byte ************)0x0) goto LAB_710382f1c0;
    }
    else {
      ppppppppppppbVar36 = (byte ************)((ulong)(local_108 + 2) & 0xfffffffffffffff0);
      iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,
                              param_5,param_6,param_7,param_8);
      if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_178 = (byte ***********)ppppppppppppbVar36,
         uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178),
         (uVar22 & 1) != 0)) {
        FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar36,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)ppppppppppppbVar36,0x10,local_158);
      local_c8 = (undefined1  [8])((ulong)ppppppppppppbVar36 | 1);
      local_c0 = ppppppppppppbVar12;
      local_b8 = (byte ************)local_158;
      ppppppppppppbVar36 = (byte ************)local_158;
LAB_710382f1c0:
      memcpy(ppppppppppppbVar36,ppppppppppppbVar32,(size_t)ppppppppppppbVar12);
    }
    ppppppppppppbVar17 = local_100;
    *(undefined1 *)((long)ppppppppppppbVar36 + (long)ppppppppppppbVar12) = 0;
    local_b0 = (undefined4)local_f8;
    ppppppppppppbVar12 = local_120;
    if (((ulong)local_110 & 1) != 0) {
      nu::VirtualFreeHook(local_100);
      FUN_710392eb40((ulong)ppppppppppppbVar17);
      ppppppppppppbVar12 = local_120;
    }
  }
  if (((ulong)local_130 & 1) != 0) {
    local_120 = ppppppppppppbVar12;
    nu::VirtualFreeHook(ppppppppppppbVar12);
    FUN_710392eb40((ulong)ppppppppppppbVar12);
  }
  ppplVar30 = param_3[1];
  uVar22 = *puVar11;
  if ((uVar22 & 1) == 0) {
    pbVar27 = (byte *)((long)puVar11 + uVar22);
  }
  else {
    pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
    if ((*pbVar27 & 1) == 0) {
      pbVar27 = pbVar27 + 1;
    }
    else {
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
  }
  local_128 = (byte ***********)0x0;
  local_120 = (byte ************)0x0;
  local_130 = (byte ***********)0x0;
  sVar13 = strlen((char *)pbVar27);
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_130 = (byte ***********)CONCAT71(local_130._1_7_,(char)((int)sVar13 << 1));
    ppppppppppppbVar12 = (byte ************)((ulong)&local_130 | 1);
    if (sVar13 != 0) goto LAB_710382f7e4;
  }
  else {
    ppppppppppppbVar12 = (byte ************)(sVar13 + 0x10 & 0xfffffffffffffff0);
    iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5
                            ,param_6,param_7,param_8);
    if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_178 = (byte ***********)ppppppppppppbVar12,
       uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178), (uVar22 & 1) != 0)
       ) {
      FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)param_4,param_5,
                     param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_158);
    local_130 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
    local_120 = (byte ************)local_158;
    ppppppppppppbVar12 = (byte ************)local_158;
    local_128 = (byte ***********)sVar13;
LAB_710382f7e4:
    memcpy(ppppppppppppbVar12,pbVar27,sVar13);
  }
  pppplVar33 = (long ****)(ppplVar30 + 0xf);
  pppppppppppbVar24 = (byte ***********)&local_130;
  pppppppppppbVar21 = (byte ***********)&local_f0;
  *(undefined1 *)((long)ppppppppppppbVar12 + sVar13) = 0;
  FUN_71036edb30(&local_110,(long *)ppplVar30,(long **)pppppppppppbVar24,
                 (byte ****)pppppppppppbVar21,pppplVar33,(byte ****)param_6,(long **)param_7,
                 (byte *)param_8);
  ppppppppppppbVar12 = local_120;
  if (((ulong)local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)ppppppppppppbVar12);
  }
  ppppppppppppbVar36 = local_108;
  uVar22 = *puVar35;
  if ((uVar22 & 1) == 0) {
    pbVar27 = (byte *)((long)puVar35 + uVar22);
  }
  else {
    pbVar27 = (byte *)(uVar22 & 0xfffffffffffffffe);
    if ((*pbVar27 & 1) == 0) {
      pbVar27 = pbVar27 + 1;
    }
    else {
      pbVar27 = *(byte **)(pbVar27 + 0x10);
    }
  }
  local_128 = (byte ***********)0x0;
  local_120 = (byte ************)0x0;
  local_130 = (byte ***********)0x0;
  pppppppppppbVar14 = (byte ***********)strlen((char *)pbVar27);
  if ((byte ***********)0xffffffffffffffef < pppppppppppbVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (pppppppppppbVar14 < (byte ***********)0x17) {
    local_130 = (byte ***********)CONCAT71(local_130._1_7_,(char)((int)pppppppppppbVar14 << 1));
    ppppppppppppbVar12 = (byte ************)((ulong)&local_130 | 1);
    pppppppppppbVar18 = extraout_x1_11;
    if (pppppppppppbVar14 != (byte ***********)0x0) goto LAB_710382fb24;
  }
  else {
    ppppppppppppbVar12 = (byte ************)((ulong)(pppppppppppbVar14 + 2) & 0xfffffffffffffff0);
    iVar10 = FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,
                            (byte ****)pppppppppppbVar21,pppplVar33,param_6,param_7,param_8);
    if (((iVar10 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_178 = (byte ***********)ppppppppppppbVar12,
       uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_178), (uVar22 & 1) != 0)
       ) {
      FUN_710392e1f0(&local_158,0x10,(long ****)ppppppppppppbVar12,(byte ****)pppppppppppbVar21,
                     pppplVar33,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)ppppppppppppbVar12,0x10,local_158);
    local_130 = (byte ***********)((ulong)ppppppppppppbVar12 | 1);
    local_120 = (byte ************)local_158;
    ppppppppppppbVar12 = (byte ************)local_158;
    local_128 = pppppppppppbVar14;
LAB_710382fb24:
    pppppppppppbVar24 = pppppppppppbVar14;
    memcpy(ppppppppppppbVar12,pbVar27,(size_t)pppppppppppbVar14);
    pppppppppppbVar18 = extraout_x1_12;
  }
  ppppppppppppbVar17 = ppppppppppppbVar36 + 0x10;
  *(undefined1 *)((long)ppppppppppppbVar12 + (long)pppppppppppbVar14) = 0;
  pppppppppppbVar14 = (byte ***********)param_7;
  ppppppppppppbVar12 = local_120;
  if (ppppppppppppbVar17 != &local_130) {
    bVar9 = ((ulong)local_130 & 1) != 0;
    param_8 = (byte **********)((ulong)&local_130 | 1);
    if (bVar9) {
      param_8 = (byte **********)local_120;
    }
    bVar6 = *(byte *)ppppppppppppbVar17;
    pppppppppppbVar14 = (byte ***********)((ulong)local_130 >> 1 & 0x7f);
    if (bVar9) {
      pppppppppppbVar14 = local_128;
    }
    if ((bVar6 & 1) == 0) {
      pppppppppppbVar18 = (byte ***********)0x16;
      pppppppppppbVar24 = (byte ***********)((long)pppppppppppbVar14 + -0x16);
      if (&DAT_00000015 < pppppppppppbVar14 && pppppppppppbVar24 != (byte ***********)0x0) {
LAB_710382fb90:
        if ((bVar6 & 1) == 0) {
          pppppppppppbVar21 = (byte ***********)(ulong)(bVar6 >> 1);
        }
        else {
          pppppppppppbVar21 = ppppppppppppbVar36[0x11];
        }
        pppplVar33 = (long ****)0x0;
        param_6 = (byte **********)pppppppppppbVar21;
        FUN_71037cfe00((ulong *)ppppppppppppbVar17,(ulong)pppppppppppbVar18,(ulong)pppppppppppbVar24
                       ,(byte ****)pppppppppppbVar21,(long ****)0x0,(long)pppppppppppbVar21,
                       (size_t)pppppppppppbVar14,param_8);
        pppppppppppbVar18 = extraout_x1_21;
        ppppppppppppbVar12 = local_120;
        goto joined_r0x00710383074c;
      }
    }
    else {
      pppppppppppbVar18 = (byte ***********)(((ulong)*ppppppppppppbVar17 & 0xfffffffffffffffe) - 1);
      pppppppppppbVar24 = (byte ***********)((long)pppppppppppbVar14 - (long)pppppppppppbVar18);
      if (pppppppppppbVar18 <= pppppppppppbVar14 && pppppppppppbVar24 != (byte ***********)0x0)
      goto LAB_710382fb90;
    }
    if ((bVar6 & 1) == 0) {
      pppppppppppbVar31 = (byte ***********)((long)ppppppppppppbVar36 + 0x81);
    }
    else {
      pppppppppppbVar31 = ppppppppppppbVar36[0x12];
    }
    if (pppppppppppbVar14 != (byte ***********)0x0) {
      pppppppppppbVar24 = pppppppppppbVar14;
      memmove(pppppppppppbVar31,param_8,(size_t)pppppppppppbVar14);
      pppppppppppbVar18 = extraout_x1_22;
    }
    *(undefined1 *)((long)pppppppppppbVar31 + (long)pppppppppppbVar14) = 0;
    ppppppppppppbVar12 = local_120;
    if (((ulong)*ppppppppppppbVar17 & 1) == 0) {
      *(char *)ppppppppppppbVar17 = (char)((int)pppppppppppbVar14 << 1);
      pppppppppppbVar14 = (byte ***********)param_7;
    }
    else {
      ppppppppppppbVar36[0x11] = pppppppppppbVar14;
      pppppppppppbVar14 = (byte ***********)param_7;
    }
  }
joined_r0x00710383074c:
  local_120 = ppppppppppppbVar12;
  if (((ulong)local_130 & 1) != 0) {
    nu::VirtualFreeHook(ppppppppppppbVar12);
    FUN_710392eb40((ulong)ppppppppppppbVar12);
    pppppppppppbVar18 = extraout_x1_23;
  }
  pppppppppppbVar31 = local_f8;
  ppppppppppppbVar17 = local_100;
  *param_1 = (long)&DAT_710455dba0 - (long)param_1;
  puVar11 = FUN_7103828690(param_1,pppppppppppbVar18,(long ****)pppppppppppbVar24,
                           (byte ****)pppppppppppbVar21,pppplVar33,param_6,pppppppppppbVar14,param_8
                          );
  std::string::assign((char *)puVar11);
  ppppppppppppbVar12 = local_b8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (ulong)&PTR_FUN_7105238a98;
  if ((ppppppppppppbVar17 != (byte ************)0x0) && (*ppppppppppppbVar17 == pppppppppppbVar31))
  {
    param_1[2] = (ulong)ppppppppppppbVar36;
    if (ppppppppppppbVar36 == (byte ************)0x0) {
      ppppppppppbVar25 = (byte **********)0x0;
      param_1[3] = 0;
    }
    else {
      pppppppppppbVar24 = ppppppppppppbVar36[1];
      param_1[3] = (ulong)pppppppppppbVar24;
      ppppppppppbVar25 = *pppppppppppbVar24;
    }
    param_1[4] = (ulong)ppppppppppbVar25;
  }
  if (((ulong)local_c8 & 1) == 0) {
    return;
  }
  nu::VirtualFreeHook(local_b8);
LAB_7103830da4:
  FUN_710392eb40((ulong)ppppppppppppbVar12);
  return;
}

