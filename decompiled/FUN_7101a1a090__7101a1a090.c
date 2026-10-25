// addr:      7101a1a090
// offset:    0x1a1a090
// name:      FUN_7101a1a090
// mangled:   
// signature: undefined __cdecl FUN_7101a1a090(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1a090(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int *piVar2;
  byte **ppbVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  long **pplVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ***ppplVar12;
  long ***ppplVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  char *pcVar18;
  byte ****ppppbVar19;
  byte *pbVar20;
  byte ***pppbVar21;
  byte ***pppbVar22;
  byte ***pppbVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  long ***ppplVar31;
  undefined8 *puVar32;
  long lVar33;
  long ***ppplVar34;
  long lVar35;
  byte ****ppppbVar36;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_166;
  undefined4 local_15e;
  undefined2 local_15a;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined **local_138;
  ulong local_130;
  undefined **local_128;
  ulong local_120;
  byte ***local_118;
  undefined8 local_110;
  byte ***local_108;
  byte ***local_d0;
  byte ***local_c8;
  byte ***local_c0;
  undefined8 local_b8;
  int *local_b0;
  int *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  if (*(int *)(param_1 + 0x16c) != 0x1b) {
    return;
  }
  if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppplVar34 = *(long ****)(*(long *)(*(long *)(param_1 + 0x250) + (long)param_2 * 0x10 + 8) + 0x200)
  ;
  lVar33 = *(long *)(DAT_710532f730 + 8);
  lVar29 = **(long **)(param_1 + 0x198);
  lVar1 = lVar29 + 8;
  FUN_7103776910(&local_128,lVar1,(long ****)"set_txt_tips_chara",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_138,lVar1,(long ****)"set_txt_tips_list",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (((ulong)ppplVar34 & 0xff00000000000000) != 0xc100000000000000 ||
      ((ulong)ppplVar34 & 0xffffffffff) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(lVar29 + 0x10),0x71044122e8);
    if (*(long **)(local_120 + 0x10) != (long *)0x0) {
      param_4 = (byte ****)0x0;
      local_118 = (byte ***)((ulong)local_118 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_120 + 0x10),(ushort *)&local_118,0,0);
    }
    if (*(long **)(local_130 + 0x10) != (long *)0x0) {
      param_4 = (byte ****)0x0;
      local_118 = (byte ***)((ulong)local_118 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_130 + 0x10),(ushort *)&local_118,0,0);
    }
    FUN_7103776910(&local_118,lVar1,(long ****)"set_txt_tips_%02d",0,param_4,param_5,param_6,param_7
                   ,param_8);
    pppbVar21 = local_110;
    if (local_110[2] != (byte **)0x0) {
      param_4 = (byte ****)0x0;
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270((long *)local_110[2],(ushort *)&local_180,0,0);
    }
    local_118 = (byte ***)&PTR_FUN_710523d9a8;
    local_110 = (byte ***)0x0;
    if (pppbVar21 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar21);
    }
    FUN_7103776910(&local_118,lVar1,(long ****)"set_txt_tips_%02d",1,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar11 = (ulong)local_110;
    if (*(long **)((long)local_110 + 0x10) != (long *)0x0) {
      param_4 = (byte ****)0x0;
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)((long)local_110 + 0x10),(ushort *)&local_180,0,0);
    }
    local_118 = (byte ***)&PTR_FUN_710523d9a8;
    local_110 = (byte ***)0x0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_7103776910(&local_118,lVar1,(long ****)"set_txt_tips_%02d",2,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar30 = (ulong)local_110;
    if (*(long **)((long)local_110 + 0x10) != (long *)0x0) {
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)((long)local_110 + 0x10),(ushort *)&local_180,0,0);
    }
    local_118 = (byte ***)&PTR_FUN_710523d9a8;
    local_110 = (byte ***)0x0;
    uVar11 = local_130;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    goto LAB_7101a1b424;
  }
  lVar35 = *(long *)(lVar33 + 0x168);
  uVar7 = 0x811c9dc5;
  puVar8 = FUN_71032631a0(lVar35,0x14ca4126b0);
  if ((((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000) &&
     (((ulong)puVar8 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar8 ^ (ulong)ppplVar34) & 0xffffffffff) != 0) goto LAB_7101a1a394;
LAB_7101a1a2d4:
    local_178 = 0x726168635f6c656d;
    local_170 = 0x7463656c65735f61;
    local_168 = 0x735f;
    local_166 = 0x656c776f6e6b616d;
    local_15e = 0x5f656764;
    local_15a = 0x7270;
    local_14c = 0;
    local_158 = 0x656c7469745f7665;
    local_150 = 0x6c6c615f;
    uVar26 = 0x6d;
    pbVar20 = (byte *)((long)&local_178 + 1);
    do {
      uVar7 = uVar7 * 0x89 ^ uVar26;
      uVar26 = (uint)*pbVar20;
      pbVar20 = pbVar20 + 1;
    } while (uVar26 != 0);
    local_180 = CONCAT44(0x2c,uVar7);
    bVar5 = true;
  }
  else {
    if ((((ulong)puVar8 & 0xffffffffff) != 0) &&
       (((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000)) goto LAB_7101a1a2d4;
LAB_7101a1a394:
    uVar7 = FUN_7103263540(lVar35,(ulong)ppplVar34,0,param_4,param_5,param_6,param_7,param_8);
    FUN_7103262310((uint *)&local_118,*(long *)(lVar33 + 0x168),(ulong)ppplVar34);
    FUN_71003a4ca0((uint *)&local_180,"nam_chr1_%02d_%s",(ulong)uVar7,&local_110,param_4,param_5,
                   param_6,param_7,param_8);
    bVar5 = false;
  }
  FUN_710377a310((long)&local_128,1);
  if (DAT_710532f8e0 == 0) {
    ppppbVar19 = (byte ****)0x0;
    FUN_710377a310((long)&local_138,1);
LAB_7101a1a480:
    lVar29 = *(long *)(lVar29 + 0x10);
    pcVar18 = "tips_list_3";
  }
  else {
    param_4 = &local_118;
    param_5 = &local_88;
    local_118 = (byte ***)0x0;
    local_110 = (byte ***)0x0;
    local_108 = (byte ***)0x0;
    FUN_710333dea0(DAT_710532f8e0,ppplVar34,(long ****)(ulong)*(byte *)(param_1 + 0xf83),param_4,
                   param_5,param_6,param_7,param_8);
    uVar7 = (int)((ulong)((long)local_110 - (long)local_118) >> 4) * -0x55555555;
    if (local_118 != (byte ***)0x0) {
      local_110 = local_118;
      FUN_710392eb40((ulong)local_118);
    }
    ppppbVar19 = (byte ****)(ulong)uVar7;
    FUN_710377a310((long)&local_138,1);
    if ((int)uVar7 < 4) goto LAB_7101a1a480;
    lVar29 = *(long *)(lVar29 + 0x10);
    pcVar18 = "tips_list_4";
  }
  FUN_7103778300(0x3f800000,lVar29,(long)pcVar18);
  lVar35 = *(long *)(DAT_710532f730 + 8);
  local_80 = (long ***)0x0;
  local_78 = (long ***)0x0;
  local_88 = (long ***)0x0;
  lVar29 = *(long *)(lVar35 + 0x168);
  puVar8 = FUN_71032631a0(lVar29,0x11b1ccb807);
  ppplVar13 = ppplVar34;
  if (((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000 &&
      ((ulong)puVar8 & 0xffffffffff) != 0) {
    if ((((ulong)puVar8 ^ (ulong)ppplVar34) & 0xffffffffff) == 0) goto LAB_7101a1a4ec;
LAB_7101a1a668:
    puVar8 = FUN_71032631a0(lVar29,0xfd03198f0);
    if (((((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000) &&
        (((ulong)puVar8 & 0xffffffffff) != 0)) &&
       ((((ulong)puVar8 ^ (ulong)ppplVar34) & 0xffffffffff) == 0)) {
      ppplVar13 = (long ***)FUN_71032631a0(lVar29,0x13fdfdfb2b);
      pplVar9 = (long **)FUN_71032631a0(lVar29,0x15d7061f77);
      ppplVar10 = (long ***)
                  FUN_710392e290(0x10,8,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                                 param_8);
      if (ppplVar10 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
          local_118 = (byte ***)&DAT_00000008;
          ppppbVar19 = &local_118;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar11 & 1) != 0) &&
             (ppplVar10 = (long ***)
                          FUN_710392e290(0x10,8,(long ****)ppppbVar19,param_4,param_5,param_6,
                                         param_7,param_8), ppplVar10 != (long ***)0x0))
          goto LAB_7101a1ae10;
        }
        ppplVar10 = (long ***)0x0;
      }
LAB_7101a1ae10:
      local_80 = ppplVar10 + 1;
      *ppplVar10 = pplVar9;
      local_88 = ppplVar10;
      local_78 = local_80;
      pplVar9 = (long **)FUN_71032631a0(*(long *)(lVar35 + 0x168),0x1257ab1d87);
      ppplVar12 = (long ***)
                  FUN_710392e290(0x10,0x10,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                                 param_8);
      if (ppplVar12 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
          local_118 = (byte ***)&DAT_00000010;
          ppppbVar19 = &local_118;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar11 & 1) != 0) &&
             (ppplVar12 = (long ***)
                          FUN_710392e290(0x10,0x10,(long ****)ppppbVar19,param_4,param_5,param_6,
                                         param_7,param_8), ppplVar12 != (long ***)0x0))
          goto LAB_7101a1ae8c;
        }
        ppplVar12 = (long ***)0x0;
      }
LAB_7101a1ae8c:
      local_80 = ppplVar12 + 2;
      *ppplVar12 = *ppplVar10;
      ppplVar12[1] = pplVar9;
      local_88 = ppplVar12;
      local_78 = local_80;
      if (ppplVar10 != (long ***)0x0) goto LAB_7101a1a87c;
      goto LAB_7101a1a880;
    }
    bVar6 = FUN_71032648e0(lVar35 + 0x160,(ulong)ppplVar34);
    if (!bVar6) goto LAB_7101a1a880;
    ppplVar13 = (long ***)FUN_71032631a0(lVar29,0x143829f67e);
    pplVar9 = (long **)FUN_71032631a0(lVar29,0x13b28d453e);
    ppplVar10 = (long ***)
                FUN_710392e290(0x10,8,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar10 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
        local_118 = (byte ***)&DAT_00000008;
        ppppbVar19 = &local_118;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar11 & 1) != 0) &&
           (ppplVar10 = (long ***)
                        FUN_710392e290(0x10,8,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                                       param_8), ppplVar10 != (long ***)0x0)) goto LAB_7101a1a73c;
      }
      ppplVar10 = (long ***)0x0;
    }
LAB_7101a1a73c:
    local_80 = ppplVar10 + 1;
    *ppplVar10 = pplVar9;
    local_88 = ppplVar10;
    local_78 = local_80;
    pplVar9 = (long **)FUN_71032631a0(*(long *)(lVar35 + 0x168),0x13b3e567a6);
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x10,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                               param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
        local_118 = (byte ***)&DAT_00000010;
        ppppbVar19 = &local_118;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar11 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x10,(long ****)ppppbVar19,param_4,param_5,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_7101a1a7b8;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_7101a1a7b8:
    local_80 = ppplVar12 + 2;
    *ppplVar12 = *ppplVar10;
    ppplVar12[1] = pplVar9;
    local_88 = ppplVar12;
    local_78 = local_80;
    if (ppplVar10 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar10);
    }
    bVar6 = false;
  }
  else {
    if ((((ulong)puVar8 & 0xffffffffff) == 0) ||
       (((ulong)puVar8 & 0xff00000000000000) != 0xc100000000000000)) goto LAB_7101a1a668;
LAB_7101a1a4ec:
    pplVar9 = (long **)FUN_71032631a0(lVar29,0x1280f1c82e);
    ppplVar10 = (long ***)
                FUN_710392e290(0x10,8,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar10 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
        local_118 = (byte ***)&DAT_00000008;
        ppppbVar19 = &local_118;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar11 & 1) != 0) &&
           (ppplVar10 = (long ***)
                        FUN_710392e290(0x10,8,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                                       param_8), ppplVar10 != (long ***)0x0)) goto LAB_7101a1a560;
      }
      ppplVar10 = (long ***)0x0;
    }
LAB_7101a1a560:
    local_80 = ppplVar10 + 1;
    *ppplVar10 = pplVar9;
    local_88 = ppplVar10;
    local_78 = local_80;
    pplVar9 = (long **)FUN_71032631a0(*(long *)(lVar35 + 0x168),0x14ef73f367);
    ppplVar12 = (long ***)
                FUN_710392e290(0x10,0x10,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                               param_8);
    if (ppplVar12 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
        local_118 = (byte ***)&DAT_00000010;
        ppppbVar19 = &local_118;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar11 & 1) != 0) &&
           (ppplVar12 = (long ***)
                        FUN_710392e290(0x10,0x10,(long ****)ppppbVar19,param_4,param_5,param_6,
                                       param_7,param_8), ppplVar12 != (long ***)0x0))
        goto LAB_7101a1a5e4;
      }
      ppplVar12 = (long ***)0x0;
    }
LAB_7101a1a5e4:
    ppplVar31 = ppplVar12 + 2;
    *ppplVar12 = *ppplVar10;
    ppplVar12[1] = pplVar9;
    local_88 = ppplVar12;
    local_80 = ppplVar31;
    local_78 = ppplVar31;
    if (ppplVar10 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar10);
    }
    ppplVar10 = local_88;
    pplVar9 = (long **)FUN_71032631a0(*(long *)(lVar35 + 0x168),0x12915a4ff6);
    ppppbVar36 = (byte ****)((long)ppplVar31 - (long)ppplVar10);
    uVar30 = (long)ppppbVar36 >> 3;
    uVar11 = uVar30 + 1;
    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar30 < 0xfffffffffffffff) {
      if (uVar11 <= (ulong)((long)ppppbVar36 >> 2)) {
        uVar11 = (long)ppppbVar36 >> 2;
      }
      if (uVar11 != 0) {
        if (uVar11 >> 0x3d != 0) goto LAB_7101a1aef0;
        goto LAB_7101a1a7e4;
      }
LAB_7101a1a844:
      ppplVar12 = (long ***)0x0;
    }
    else {
      uVar11 = 0x1fffffffffffffff;
LAB_7101a1a7e4:
      pppbVar21 = (byte ***)(uVar11 * 8);
      if (pppbVar21 == (byte ***)0x0) {
        pppbVar21 = (byte ***)0x1;
      }
      ppplVar12 = (long ***)
                  FUN_710392e290(0x10,pppbVar21,(long ****)ppppbVar19,param_4,param_5,param_6,
                                 param_7,param_8);
      if (ppplVar12 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
          ppppbVar19 = &local_118;
          local_118 = pppbVar21;
          uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if ((uVar14 & 1) != 0) {
            ppplVar12 = (long ***)
                        FUN_710392e290(0x10,pppbVar21,(long ****)ppppbVar19,param_4,param_5,param_6,
                                       param_7,param_8);
            if (ppplVar12 != (long ***)0x0) goto LAB_7101a1a848;
          }
        }
        goto LAB_7101a1a844;
      }
    }
LAB_7101a1a848:
    ppplVar31 = ppplVar12 + uVar30;
    *ppplVar31 = pplVar9;
    if (0 < (long)ppppbVar36) {
      memcpy(ppplVar12,ppplVar10,(size_t)ppppbVar36);
      ppppbVar19 = ppppbVar36;
    }
    local_88 = ppplVar12;
    local_80 = ppplVar31 + 1;
    local_78 = ppplVar12 + uVar11;
    if (ppplVar10 == (long ***)0x0) goto LAB_7101a1a880;
LAB_7101a1a87c:
    FUN_710392eb40((ulong)ppplVar10);
LAB_7101a1a880:
    bVar6 = true;
  }
  FUN_7101a10950(&local_a0,(ulong)ppplVar13,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                 param_8);
  piVar15 = (int *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                                  param_8);
  if (piVar15 == (int *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (int *)((ulong)local_b8._4_4_ << 0x20);
      local_118 = (byte ***)&DAT_00000030;
      ppppbVar19 = &local_118;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar11 & 1) != 0) &&
         (piVar15 = (int *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar19,param_4,param_5,param_6,
                                          param_7,param_8), piVar15 != (int *)0x0))
      goto LAB_7101a1a8e4;
    }
    piVar15 = (int *)0x0;
  }
LAB_7101a1a8e4:
  local_a8 = piVar15 + 0xc;
  local_b0 = piVar15;
  if (local_a0 != local_98) {
    uVar27 = local_98[-1];
    *(undefined8 *)piVar15 = local_98[-2];
    *(undefined8 *)(piVar15 + 2) = uVar27;
    local_b0 = piVar15 + 4;
    local_98 = local_98 + -2;
  }
  puVar25 = local_98;
  ppplVar13 = local_88;
  ppplVar10 = local_80;
  if (((bVar6) && (8 < (long)local_80 - (long)local_88)) &&
     (ppplVar12 = local_80 + -1, local_88 < ppplVar12)) {
    pppbVar21 = (byte ***)((ulong)((long)local_80 - (long)local_88) >> 3);
    ppplVar31 = local_88;
    local_b8 = piVar15;
    do {
      pppbVar21 = (byte ***)((long)pppbVar21 + -1);
      local_118 = (byte ***)0x0;
      local_110 = pppbVar21;
      lVar29 = FUN_710137bc30(&DAT_71052391c0,(long *)&local_118);
      if (lVar29 != 0) {
        pplVar9 = *ppplVar31;
        *ppplVar31 = ppplVar31[lVar29];
        ppplVar31[lVar29] = pplVar9;
      }
      ppplVar31 = ppplVar31 + 1;
      piVar15 = local_b8;
      puVar25 = local_98;
      ppplVar13 = local_88;
      ppplVar10 = local_80;
    } while (ppplVar31 < ppplVar12);
  }
  for (; ppplVar12 = local_80, local_b8 = piVar15, local_98 = puVar25, ppplVar13 != local_80;
      ppplVar13 = ppplVar13 + 1) {
    local_80 = ppplVar10;
    FUN_7101a10950(&local_118,(ulong)*ppplVar13,(long ****)ppppbVar19,param_4,param_5,param_6,
                   param_7,param_8);
    piVar15 = local_b8;
    pppbVar21 = local_110;
    if (local_118 == local_110) {
LAB_7101a1ac18:
      pppbVar23 = local_118;
      if (local_118 != (byte ***)0x0) goto LAB_7101a1ac28;
    }
    else {
      pppbVar23 = local_110 + -2;
      if (local_b0 == local_a8) {
        ppppbVar36 = (byte ****)((long)local_b0 - (long)local_b8);
        uVar11 = ((long)ppppbVar36 >> 4) + 1;
        if (uVar11 >> 0x3c != 0) goto LAB_7101a1b474;
        if ((ulong)((long)local_a8 - (long)local_b8 >> 4) < 0x7ffffffffffffff) {
          uVar30 = (long)local_a8 - (long)local_b8 >> 3;
          if (uVar11 <= uVar30) {
            uVar11 = uVar30;
          }
          if (uVar11 != 0) {
            if (uVar11 >> 0x3c == 0) goto LAB_7101a1aa34;
            goto LAB_7101a1aef0;
          }
LAB_7101a1aa94:
          piVar17 = (int *)0x0;
        }
        else {
          uVar11 = 0xfffffffffffffff;
LAB_7101a1aa34:
          pppbVar22 = (byte ***)(uVar11 * 0x10);
          if (pppbVar22 == (byte ***)0x0) {
            pppbVar22 = (byte ***)0x1;
          }
          piVar17 = (int *)FUN_710392e290(0x10,pppbVar22,(long ****)ppppbVar19,param_4,param_5,
                                          param_6,param_7,param_8);
          if (piVar17 == (int *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              ppppbVar19 = &local_d0;
              local_d0 = pppbVar22;
              uVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar30 & 1) != 0) &&
                 (piVar17 = (int *)FUN_710392e290(0x10,pppbVar22,(long ****)ppppbVar19,param_4,
                                                  param_5,param_6,param_7,param_8),
                 piVar17 != (int *)0x0)) goto LAB_7101a1aa98;
            }
            goto LAB_7101a1aa94;
          }
        }
LAB_7101a1aa98:
        ppbVar3 = pppbVar21[-1];
        piVar2 = piVar17 + ((long)ppppbVar36 >> 4) * 4;
        *(byte ***)piVar2 = *pppbVar23;
        *(byte ***)(piVar2 + 2) = ppbVar3;
        if (0 < (long)ppppbVar36) {
          memcpy(piVar17,piVar15,(size_t)ppppbVar36);
          ppppbVar19 = ppppbVar36;
        }
        local_b8 = piVar17;
        local_b0 = piVar2 + 4;
        local_a8 = piVar17 + uVar11 * 4;
        if (piVar15 != (int *)0x0) {
          FUN_710392eb40((ulong)piVar15);
        }
      }
      else {
        ppbVar3 = local_110[-1];
        *(byte ***)local_b0 = *pppbVar23;
        *(byte ***)(local_b0 + 2) = ppbVar3;
        local_b0 = local_b0 + 4;
      }
      pppbVar21 = local_110;
      pppbVar23 = local_110 + -2;
      if (local_118 != pppbVar23) {
        pppbVar22 = local_118 + 2;
        local_110 = pppbVar23;
        do {
          puVar25 = local_a0;
          if (local_98 == local_90) {
            ppppbVar36 = (byte ****)((long)local_98 - (long)local_a0);
            uVar11 = ((long)ppppbVar36 >> 4) + 1;
            if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_90 - (long)local_a0 >> 4) < 0x7ffffffffffffff) {
              uVar30 = (long)local_90 - (long)local_a0 >> 3;
              if (uVar11 <= uVar30) {
                uVar11 = uVar30;
              }
              if (uVar11 != 0) {
                if (uVar11 >> 0x3c == 0) goto LAB_7101a1ab5c;
                goto LAB_7101a1aef0;
              }
LAB_7101a1abbc:
              puVar16 = (undefined8 *)0x0;
            }
            else {
              uVar11 = 0xfffffffffffffff;
LAB_7101a1ab5c:
              pppbVar23 = (byte ***)(uVar11 * 0x10);
              if (pppbVar23 == (byte ***)0x0) {
                pppbVar23 = (byte ***)0x1;
              }
              puVar16 = (undefined8 *)
                        FUN_710392e290(0x10,pppbVar23,(long ****)ppppbVar19,param_4,param_5,param_6,
                                       param_7,param_8);
              if (puVar16 == (undefined8 *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_6c[0] = 0;
                  ppppbVar19 = &local_d0;
                  local_d0 = pppbVar23;
                  uVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                  if (((uVar30 & 1) != 0) &&
                     (puVar16 = (undefined8 *)
                                FUN_710392e290(0x10,pppbVar23,(long ****)ppppbVar19,param_4,param_5,
                                               param_6,param_7,param_8),
                     puVar16 != (undefined8 *)0x0)) goto LAB_7101a1abc0;
                }
                goto LAB_7101a1abbc;
              }
            }
LAB_7101a1abc0:
            ppbVar3 = pppbVar22[-1];
            puVar32 = puVar16 + ((long)ppppbVar36 >> 4) * 2;
            *puVar32 = pppbVar22[-2];
            puVar32[1] = ppbVar3;
            if (0 < (long)ppppbVar36) {
              memcpy(puVar16,puVar25,(size_t)ppppbVar36);
              ppppbVar19 = ppppbVar36;
            }
            local_a0 = puVar16;
            local_98 = puVar32 + 2;
            local_90 = puVar16 + uVar11 * 2;
            if (puVar25 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar25);
            }
          }
          else {
            ppbVar3 = pppbVar22[-1];
            *local_98 = pppbVar22[-2];
            local_98[1] = ppbVar3;
            local_98 = local_98 + 2;
          }
          pppbVar22 = pppbVar22 + 2;
        } while (pppbVar21 != pppbVar22);
        goto LAB_7101a1ac18;
      }
LAB_7101a1ac28:
      local_110 = pppbVar23;
      FUN_710392eb40((ulong)pppbVar23);
    }
    piVar15 = local_b8;
    puVar25 = local_98;
    ppplVar10 = local_80;
    local_80 = ppplVar12;
  }
  uVar7 = 0x811c9dc5;
  ppppbVar36 = (byte ****)((long)local_b0 - (long)piVar15);
  uVar11 = (long)ppppbVar36 >> 4;
  local_80 = ppplVar10;
  if ((uVar11 < 3) && (local_a0 != puVar25)) {
    if (local_a8 == local_b0) {
      uVar30 = (long)ppppbVar36 >> 3;
      if (uVar30 < uVar11 + 1) {
        uVar30 = uVar11 + 1;
      }
      if (uVar30 == 0) goto LAB_7101a1ad04;
      if (uVar30 >> 0x3c != 0) goto LAB_7101a1aef0;
      pppbVar21 = (byte ***)(uVar30 * 0x10);
      if (pppbVar21 == (byte ***)0x0) {
        pppbVar21 = (byte ***)0x1;
      }
      piVar17 = (int *)FUN_710392e290(0x10,pppbVar21,(long ****)ppppbVar19,param_4,param_5,param_6,
                                      param_7,param_8);
      if (piVar17 == (int *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
          ppppbVar19 = &local_118;
          local_118 = pppbVar21;
          uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar14 & 1) != 0) &&
             (piVar17 = (int *)FUN_710392e290(0x10,pppbVar21,(long ****)ppppbVar19,param_4,param_5,
                                              param_6,param_7,param_8), piVar17 != (int *)0x0))
          goto LAB_7101a1ad08;
        }
LAB_7101a1ad04:
        piVar17 = (int *)0x0;
      }
LAB_7101a1ad08:
      uVar27 = puVar25[-1];
      piVar2 = piVar17 + uVar11 * 4;
      *(undefined8 *)piVar2 = puVar25[-2];
      *(undefined8 *)(piVar2 + 2) = uVar27;
      if (0 < (long)ppppbVar36) {
        memcpy(piVar17,piVar15,(size_t)ppppbVar36);
        ppppbVar19 = ppppbVar36;
      }
      local_b8 = piVar17;
      local_b0 = piVar2 + 4;
      local_a8 = piVar17 + uVar30 * 4;
      if (piVar15 != (int *)0x0) {
        FUN_710392eb40((ulong)piVar15);
      }
    }
    else {
      uVar27 = puVar25[-1];
      *(undefined8 *)local_b0 = puVar25[-2];
      *(undefined8 *)(local_b0 + 2) = uVar27;
      local_b0 = local_b0 + 4;
    }
    puVar16 = local_98;
    piVar15 = local_b8;
    puVar25 = local_98 + -2;
    if (local_a0 != puVar25) {
      puVar32 = local_98 + -4;
      if (local_b0 == local_a8) {
        ppppbVar36 = (byte ****)((long)local_b0 - (long)local_b8);
        uVar11 = ((long)ppppbVar36 >> 4) + 1;
        local_98 = puVar25;
        if (uVar11 >> 0x3c != 0) {
LAB_7101a1b474:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_a8 - (long)local_b8 >> 4) < 0x7ffffffffffffff) {
          uVar30 = (long)local_a8 - (long)local_b8 >> 3;
          if (uVar11 <= uVar30) {
            uVar11 = uVar30;
          }
          if (uVar11 != 0) {
            if (uVar11 >> 0x3c != 0) {
LAB_7101a1aef0:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_7101a1aef8;
          }
LAB_7101a1af58:
          piVar17 = (int *)0x0;
        }
        else {
          uVar11 = 0xfffffffffffffff;
LAB_7101a1aef8:
          pppbVar21 = (byte ***)(uVar11 * 0x10);
          if (pppbVar21 == (byte ***)0x0) {
            pppbVar21 = (byte ***)0x1;
          }
          piVar17 = (int *)FUN_710392e290(0x10,pppbVar21,(long ****)ppppbVar19,param_4,param_5,
                                          param_6,param_7,param_8);
          if (piVar17 == (int *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
              ppppbVar19 = &local_118;
              local_118 = pppbVar21;
              uVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
              if (((uVar30 & 1) != 0) &&
                 (piVar17 = (int *)FUN_710392e290(0x10,pppbVar21,(long ****)ppppbVar19,param_4,
                                                  param_5,param_6,param_7,param_8),
                 piVar17 != (int *)0x0)) goto LAB_7101a1af5c;
            }
            goto LAB_7101a1af58;
          }
        }
LAB_7101a1af5c:
        uVar27 = puVar16[-3];
        piVar2 = piVar17 + ((long)ppppbVar36 >> 4) * 4;
        *(undefined8 *)piVar2 = *puVar32;
        *(undefined8 *)(piVar2 + 2) = uVar27;
        if (0 < (long)ppppbVar36) {
          memcpy(piVar17,piVar15,(size_t)ppppbVar36);
          ppppbVar19 = ppppbVar36;
        }
        local_b8 = piVar17;
        local_b0 = piVar2 + 4;
        local_a8 = piVar17 + uVar11 * 4;
        if (piVar15 != (int *)0x0) {
          FUN_710392eb40((ulong)piVar15);
        }
      }
      else {
        uVar27 = local_98[-3];
        *(undefined8 *)local_b0 = *puVar32;
        *(undefined8 *)(local_b0 + 2) = uVar27;
        local_b0 = local_b0 + 4;
        local_98 = puVar25;
      }
      puVar25 = local_98 + -2;
    }
  }
  local_98 = puVar25;
  FUN_7101a10eb0(local_b8,local_b0);
  local_c8 = (byte ***)
             FUN_710392e290(0x10,0xd8,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,param_8)
  ;
  if (local_c8 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
      local_118 = (byte ***)&DAT_000000d8;
      ppppbVar19 = &local_118;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar11 & 1) != 0) &&
         (local_c8 = (byte ***)
                     FUN_710392e290(0x10,0xd8,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                                    param_8), local_c8 != (byte ***)0x0)) goto LAB_7101a1b010;
    }
    local_c8 = (byte ***)0x0;
  }
LAB_7101a1b010:
  piVar15 = local_b0;
  local_d0 = local_c8;
  local_c0 = local_c8 + 0x1b;
  if (local_b8 != local_b0) {
    lVar29 = *(long *)(DAT_710532f730 + 8);
    piVar17 = local_b8;
    do {
      uVar11 = FUN_71032b6c10(*(long *)(lVar29 + 0x1b8),*(ulong *)(piVar17 + 2));
      if ((int)uVar11 == -1) {
        local_110 = (byte ***)((ulong)local_110 & 0xffffffffffffff00);
        local_118 = (byte ***)0x0;
      }
      else {
        FUN_71003a4ca0((uint *)&local_118,"tip_title_%04d",uVar11 & 0xffffffff,ppppbVar19,param_4,
                       param_5,param_6,param_7,param_8);
      }
      if (local_c8 < local_c0) {
        *(uint *)local_c8 = 0;
        uVar11 = 0;
        do {
          uVar30 = uVar11;
          if (*(char *)((long)&local_110 + uVar11) == '\0') break;
          *(char *)((long)local_c8 + uVar11 + 8) = *(char *)((long)&local_110 + uVar11);
          cVar4 = *(char *)((long)&local_110 + uVar11 + 1);
          if (cVar4 == '\0') {
            uVar30 = uVar11 + 1;
            break;
          }
          *(char *)((long)local_c8 + uVar11 + 9) = cVar4;
          cVar4 = *(char *)((long)&local_110 + uVar11 + 2);
          if (cVar4 == '\0') {
            uVar30 = uVar11 + 2;
            break;
          }
          uVar30 = uVar11 + 3;
          *(char *)((long)local_c8 + uVar11 + 10) = cVar4;
          uVar11 = uVar30;
        } while ((uint)uVar30 < 0x3f);
        *(undefined1 *)((long)local_c8 + (uVar30 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_c8 + 4) = (uint)uVar30;
        uVar24 = (uint)*(byte *)(local_c8 + 1);
        uVar26 = uVar7;
        if (*(byte *)(local_c8 + 1) != 0) {
          pbVar20 = (byte *)((long)local_c8 + 9);
          do {
            uVar26 = uVar26 * 0x89 ^ uVar24;
            uVar24 = (uint)*pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (uVar24 != 0);
        }
        *(uint *)local_c8 = uVar26;
        local_c8 = local_c8 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_d0,(long)&local_118,(long ****)ppppbVar19,param_4,param_5,
                       param_6,param_7,param_8);
      }
      piVar17 = piVar17 + 4;
    } while (piVar17 != piVar15);
  }
  iVar28 = (int)((ulong)((long)local_c8 - (long)local_d0) >> 3) * 0x38e38e39;
  if (iVar28 < 3) {
    do {
      local_110 = (byte ***)((ulong)local_110 & 0xffffffffffffff00);
      local_118 = (byte ***)0x0;
      if (local_c8 < local_c0) {
        *(uint *)local_c8 = 0;
        uVar11 = 0;
        do {
          uVar30 = uVar11;
          if (*(char *)((long)&local_110 + uVar11) == '\0') break;
          *(char *)((long)local_c8 + uVar11 + 8) = *(char *)((long)&local_110 + uVar11);
          cVar4 = *(char *)((long)&local_110 + uVar11 + 1);
          if (cVar4 == '\0') {
            uVar30 = uVar11 + 1;
            break;
          }
          *(char *)((long)local_c8 + uVar11 + 9) = cVar4;
          cVar4 = *(char *)((long)&local_110 + uVar11 + 2);
          if (cVar4 == '\0') {
            uVar30 = uVar11 + 2;
            break;
          }
          uVar30 = uVar11 + 3;
          *(char *)((long)local_c8 + uVar11 + 10) = cVar4;
          uVar11 = uVar30;
        } while ((uint)uVar30 < 0x3f);
        *(undefined1 *)((long)local_c8 + (uVar30 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_c8 + 4) = (uint)uVar30;
        uVar24 = (uint)*(byte *)(local_c8 + 1);
        uVar26 = uVar7;
        if (*(byte *)(local_c8 + 1) != 0) {
          pbVar20 = (byte *)((long)local_c8 + 9);
          do {
            uVar26 = uVar26 * 0x89 ^ uVar24;
            uVar24 = (uint)*pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (uVar24 != 0);
        }
        *(uint *)local_c8 = uVar26;
        local_c8 = local_c8 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_d0,(long)&local_118,(long ****)ppppbVar19,param_4,param_5,
                       param_6,param_7,param_8);
      }
      if (1 < iVar28) break;
      iVar28 = iVar28 + 1;
    } while( true );
  }
  local_108 = local_c0;
  local_118 = local_d0;
  local_110 = local_c8;
  if (local_b8 != (int *)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  if (local_a0 != (undefined8 *)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_88 != (long ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  puVar8 = FUN_71032631a0(*(long *)(lVar33 + 0x168),0x11b1ccb807);
  if ((((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000) &&
     (((ulong)puVar8 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar8 ^ (ulong)ppplVar34) & 0xffffffffff) == 0) goto LAB_7101a1b2e4;
LAB_7101a1b2d4:
    if (*(char *)(param_1 + 0xf83) == '\0') {
      bVar6 = FUN_7103265e70(lVar33 + 0x160,(ulong)ppplVar34);
      if (bVar5 || bVar6) goto LAB_7101a1b2e4;
    }
    else if (bVar5) goto LAB_7101a1b2e4;
    uVar7 = 0;
  }
  else {
    if ((((ulong)puVar8 & 0xffffffffff) == 0) ||
       (((ulong)puVar8 & 0xff00000000000000) != 0xc100000000000000)) goto LAB_7101a1b2d4;
LAB_7101a1b2e4:
    uVar7 = 1;
  }
  FUN_7103776910(&local_88,lVar1,(long ****)"set_txt_tips_%02d",0,param_4,param_5,param_6,param_7,
                 param_8);
  if (local_110 != local_118) {
    uVar11 = (ulong)uVar7;
    FUN_710377a280((long)&local_88,(byte *)(local_118 + 1),1);
    ppplVar34 = local_80;
    local_88 = (long ***)&PTR_FUN_710523d9a8;
    local_80 = (long ***)0x0;
    if (ppplVar34 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar34);
    }
    FUN_7103776910(&local_88,lVar1,(long ****)"set_txt_tips_%02d",1,uVar11,param_5,param_6,param_7,
                   param_8);
    if (1 < (ulong)(((long)local_110 - (long)local_118 >> 3) * -0x71c71c71c71c71c7)) {
      uVar11 = (ulong)uVar7;
      FUN_710377a280((long)&local_88,(byte *)(local_118 + 10),1);
      ppplVar34 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = (long ***)0x0;
      if (ppplVar34 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar34);
      }
      FUN_7103776910(&local_88,lVar1,(long ****)"set_txt_tips_%02d",2,uVar11,param_5,param_6,param_7
                     ,param_8);
      if (2 < (ulong)(((long)local_110 - (long)local_118 >> 3) * -0x71c71c71c71c71c7)) {
        FUN_710377a280((long)&local_88,(byte *)(local_118 + 0x13),1);
        ppplVar34 = local_80;
        local_88 = (long ***)&PTR_FUN_710523d9a8;
        local_80 = (long ***)0x0;
        if (ppplVar34 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar34);
        }
        uVar11 = local_130;
        if (local_118 != (byte ***)0x0) {
          local_110 = local_118;
          FUN_710392eb40((ulong)local_118);
          uVar11 = local_130;
        }
LAB_7101a1b424:
        local_138 = &PTR_FUN_710523d9a8;
        local_130 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        uVar11 = local_120;
        local_128 = &PTR_FUN_710523d9a8;
        local_120 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

