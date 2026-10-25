// addr:      7101c7ad10
// offset:    0x1c7ad10
// name:      FUN_7101c7ad10
// mangled:   
// signature: undefined __cdecl FUN_7101c7ad10(long * * * * param_1, long * param_2, undefined8 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c7ad10(long ****param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  char *pcVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  long lVar15;
  long ***ppplVar16;
  code *pcVar17;
  byte ***pppbVar18;
  uint uVar19;
  long ***ppplVar20;
  char *pcVar21;
  ulong uVar22;
  byte *pbVar23;
  uint uVar24;
  long ****pppplVar25;
  long ****pppplVar26;
  long ***ppplVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  long ***local_218;
  long ***local_210;
  long ***local_208;
  long ***local_200;
  ulong local_1f8;
  undefined **local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined2 uStack_1c8;
  undefined1 uStack_1c6;
  undefined4 uStack_1c5;
  undefined1 uStack_1c1;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined2 uStack_1be;
  undefined4 uStack_1bc;
  undefined8 *local_1b8;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  uint *local_b0;
  uint *local_a8;
  uint *puStack_a0;
  uint **local_90;
  long ***local_78;
  undefined4 local_6c [3];
  
  lVar15 = *(long *)*param_3;
  if (param_1 + 0x1f != (long ****)(lVar15 + 8)) {
    *param_1[0x20] = (long **)**(undefined8 **)(lVar15 + 0x10);
    param_1[0x20][1] = *(long ***)(*(long *)(lVar15 + 0x10) + 8);
    ppplVar20 = *(long ****)(lVar15 + 0x10);
    ppplVar16 = param_1[0x20];
    if (ppplVar16 != ppplVar20) {
      *ppplVar16[3] = *ppplVar20[3];
      ppplVar16[3][1] = ppplVar20[3][1];
      ppplVar16[3][2] = ppplVar20[3][2];
      ppplVar16[3][3] = ppplVar20[3][3];
    }
  }
  FUN_7103776640(&local_1e0,(long)(param_1 + 0x1f),(byte ****)"set_part_msg_popup",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  ppplVar16 = local_1d8;
  pppplVar12 = param_1 + 0x21;
  if (pppplVar12 != (long ****)&local_1e0) {
    local_1d8 = (long ***)0x0;
    ppplVar20 = param_1[0x22];
    param_1[0x22] = ppplVar16;
    if (ppplVar20 != (long ***)0x0) {
      pplVar9 = ppplVar20[3];
      ppplVar20[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar20[3] = (long **)0x0;
      if (pplVar9 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar9);
      }
      FUN_710392eb40((ulong)ppplVar20);
    }
  }
  ppplVar16 = local_1d8;
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = (long ***)0x0;
  if (ppplVar16 != (long ***)0x0) {
    pplVar9 = ppplVar16[3];
    ppplVar16[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar16[3] = (long **)0x0;
    if (pplVar9 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar9);
    }
    FUN_710392eb40((ulong)ppplVar16);
  }
  local_1d0 = CONCAT17(local_1d0._7_1_,0x1000100000001);
  uStack_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0xf0000000;
  uStack_1c1 = 0x41;
  local_1e0 = (undefined **)0x0;
  local_1d8 = (long ***)0x101;
  uStack_1c0 = 0;
  uStack_1bf = 0;
  uStack_1be = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  local_b0 = (uint *)&DAT_7105186040;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_180);
  if (&local_b0 == local_90) {
    pcVar17 = *(code **)(*local_90 + 8);
LAB_7101c7aedc:
    (*pcVar17)();
  }
  else if (local_90 != (uint **)0x0) {
    pcVar17 = *(code **)(*local_90 + 10);
    goto LAB_7101c7aedc;
  }
  local_b0 = (uint *)&DAT_71051860d0;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_120);
  if (&local_b0 == local_90) {
    pcVar17 = *(code **)(*local_90 + 8);
LAB_7101c7af2c:
    (*pcVar17)();
  }
  else if (local_90 != (uint **)0x0) {
    pcVar17 = *(code **)(*local_90 + 10);
    goto LAB_7101c7af2c;
  }
  pppplVar14 = param_1 + 0x23;
  ppppbVar13 = (byte ****)&local_1e0;
  FUN_7103770b30((long *)pppplVar14,pppplVar12,(long ****)"selector_01",ppppbVar13,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(pppplVar14,0,"set_lct_btn_category_00",ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037717d0(pppplVar14,1,"set_lct_btn_category_01",ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037717d0(pppplVar14,2,"set_lct_btn_category_02",ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037717d0(pppplVar14,3,"set_lct_btn_category_03",ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037717d0(pppplVar14,4,"set_lct_btn_category_04",ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037717d0(pppplVar14,5,"set_lct_btn_category_05",ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_7103771a80((long *)pppplVar14,1,1);
  (*(code *)(*param_1[0x23])[0xe])(param_1[0x23],0);
  (*(code *)(*param_1[0x23])[0xc])(param_1[0x23],1);
  if (alStack_f0 == local_d0) {
    pcVar17 = *(code **)(*local_d0 + 0x20);
LAB_7101c7b02c:
    (*pcVar17)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c7b02c;
  }
  if (alStack_120 == local_100) {
    pcVar17 = *(code **)(*local_100 + 0x20);
LAB_7101c7b05c:
    (*pcVar17)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar17 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c7b05c;
  }
  if (alStack_150 == local_130) {
    pcVar17 = *(code **)(*local_130 + 0x20);
LAB_7101c7b08c:
    (*pcVar17)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar17 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c7b08c;
  }
  if (alStack_180 == local_160) {
    pcVar17 = *(code **)(*local_160 + 0x20);
LAB_7101c7b0bc:
    (*pcVar17)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar17 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c7b0bc;
  }
  if (alStack_1b0 == local_190) {
    pcVar17 = *(code **)(*local_190 + 0x20);
LAB_7101c7b0ec:
    (*pcVar17)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar17 = *(code **)(*local_190 + 0x28);
    goto LAB_7101c7b0ec;
  }
  local_1e0 = (undefined **)0x0;
  local_1d8 = (long ***)0x4248000041800000;
  uStack_1c6 = 1;
  local_1d0 = 0x101013f800000;
  uStack_1c8 = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  uStack_1bf = 0;
  uStack_1c1 = 0;
  uStack_1c0 = 0;
  uStack_1c5 = 0;
  local_b0 = (uint *)&DAT_71051861f0;
  local_90 = &local_b0;
  FUN_71003cb050((long *)&local_b0,alStack_150);
  if (&local_b0 == local_90) {
    pcVar17 = *(code **)(*local_90 + 8);
LAB_7101c7b180:
    (*pcVar17)();
  }
  else if (local_90 != (uint **)0x0) {
    pcVar17 = *(code **)(*local_90 + 10);
    goto LAB_7101c7b180;
  }
  local_b0 = (uint *)&DAT_7105186238;
  local_90 = &local_b0;
  FUN_71003cb050((long *)&local_b0,alStack_120);
  if (&local_b0 == local_90) {
    pcVar17 = *(code **)(*local_90 + 8);
LAB_7101c7b1cc:
    (*pcVar17)();
  }
  else if (local_90 != (uint **)0x0) {
    pcVar17 = *(code **)(*local_90 + 10);
    goto LAB_7101c7b1cc;
  }
  local_b0 = (uint *)&DAT_7105186160;
  local_90 = &local_b0;
  FUN_71003cb050((long *)&local_b0,alStack_1b0);
  if (&local_b0 == local_90) {
    pcVar17 = *(code **)(*local_90 + 8);
LAB_7101c7b218:
    (*pcVar17)();
  }
  else if (local_90 != (uint **)0x0) {
    pcVar17 = *(code **)(*local_90 + 10);
    goto LAB_7101c7b218;
  }
  local_b0 = (uint *)&DAT_71051861a8;
  local_90 = &local_b0;
  FUN_71003cb050((long *)&local_b0,alStack_180);
  if (&local_b0 == local_90) {
    pcVar17 = *(code **)(*local_90 + 8);
LAB_7101c7b264:
    (*pcVar17)();
  }
  else if (local_90 != (uint **)0x0) {
    pcVar17 = *(code **)(*local_90 + 10);
    goto LAB_7101c7b264;
  }
  pcVar11 = "scroll";
  ppppbVar13 = (byte ****)&local_1e0;
  local_1e0 = (undefined **)
              CONCAT44((int)((ulong)((long)param_1[4] - (long)param_1[3]) >> 3),
                       (undefined4)local_1e0);
  pppplVar14 = param_1;
  FUN_7103781a20((long *)(param_1 + 0x24),pppplVar12,(byte ****)"scroll",ppppbVar13,param_1,param_6,
                 param_7,param_8);
  (*(code *)(*param_1[0x24])[0xe])(param_1[0x24],0);
  (*(code *)(*param_1[0x24])[0xc])(param_1[0x24],1);
  if (alStack_f0 == local_d0) {
    pcVar17 = *(code **)(*local_d0 + 0x20);
LAB_7101c7b2e8:
    (*pcVar17)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101c7b2e8;
  }
  if (alStack_120 == local_100) {
    pcVar17 = *(code **)(*local_100 + 0x20);
LAB_7101c7b318:
    (*pcVar17)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar17 = *(code **)(*local_100 + 0x28);
    goto LAB_7101c7b318;
  }
  if (alStack_150 == local_130) {
    pcVar17 = *(code **)(*local_130 + 0x20);
LAB_7101c7b348:
    (*pcVar17)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar17 = *(code **)(*local_130 + 0x28);
    goto LAB_7101c7b348;
  }
  if (alStack_180 == local_160) {
    pcVar17 = *(code **)(*local_160 + 0x20);
LAB_7101c7b378:
    (*pcVar17)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar17 = *(code **)(*local_160 + 0x28);
    goto LAB_7101c7b378;
  }
  if (alStack_1b0 == local_190) {
    pcVar17 = *(code **)(*local_190 + 0x20);
LAB_7101c7b3a8:
    (*pcVar17)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar17 = *(code **)(*local_190 + 0x28);
    goto LAB_7101c7b3a8;
  }
  ppplVar16 = param_1[0x2c];
  pppplVar26 = param_1 + 0x2b;
  if (ppplVar16 < param_1[0x2d]) {
    *(undefined4 *)ppplVar16 = 0;
    ppplVar27 = (long ***)((long)param_1[0x2c] + 4);
    param_1[0x2c] = ppplVar27;
  }
  else {
    ppplVar20 = *pppplVar26;
    pppplVar25 = (long ****)((long)ppplVar16 - (long)ppplVar20);
    uVar22 = ((long)pppplVar25 >> 2) + 1;
    if (uVar22 >> 0x3e != 0) goto LAB_7101c7bfac;
    lVar15 = (long)param_1[0x2d] - (long)ppplVar20;
    if ((ulong)(lVar15 >> 2) < 0x1fffffffffffffff) {
      uVar10 = lVar15 >> 1;
      if (uVar22 <= uVar10) {
        uVar22 = uVar10;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3e != 0) goto LAB_7101c7b974;
        goto LAB_7101c7b420;
      }
LAB_7101c7b480:
      ppplVar16 = (long ***)0x0;
    }
    else {
      uVar22 = 0x3fffffffffffffff;
LAB_7101c7b420:
      pppbVar18 = (byte ***)(uVar22 * 4);
      if (pppbVar18 == (byte ***)0x0) {
        pppbVar18 = (byte ***)0x1;
      }
      ppplVar16 = (long ***)
                  FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,param_6,
                                 param_7,param_8);
      if (ppplVar16 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b0 = (uint *)((ulong)local_b0 & 0xffffffff00000000);
          pcVar11 = (char *)&local_1e0;
          local_1e0 = (undefined **)pppbVar18;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
          if (((uVar10 & 1) != 0) &&
             (ppplVar16 = (long ***)
                          FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,
                                         param_6,param_7,param_8), ppplVar16 != (long ***)0x0))
          goto LAB_7101c7b484;
        }
        goto LAB_7101c7b480;
      }
    }
LAB_7101c7b484:
    puVar2 = (undefined4 *)((long)ppplVar16 + ((long)pppplVar25 >> 2) * 4);
    ppplVar27 = (long ***)(puVar2 + 1);
    *puVar2 = 0;
    if (0 < (long)pppplVar25) {
      memcpy(ppplVar16,ppplVar20,(size_t)pppplVar25);
      pcVar11 = (char *)pppplVar25;
    }
    param_1[0x2b] = ppplVar16;
    param_1[0x2c] = ppplVar27;
    param_1[0x2d] = (long ***)((long)ppplVar16 + uVar22 * 4);
    if (ppplVar20 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar20);
      ppplVar27 = param_1[0x2c];
    }
  }
  if (ppplVar27 < param_1[0x2d]) {
    *(undefined4 *)ppplVar27 = 1;
    ppplVar27 = (long ***)((long)param_1[0x2c] + 4);
    param_1[0x2c] = ppplVar27;
  }
  else {
    ppplVar16 = *pppplVar26;
    pppplVar25 = (long ****)((long)ppplVar27 - (long)ppplVar16);
    uVar22 = ((long)pppplVar25 >> 2) + 1;
    if (uVar22 >> 0x3e != 0) goto LAB_7101c7bfac;
    lVar15 = (long)param_1[0x2d] - (long)ppplVar16;
    if ((ulong)(lVar15 >> 2) < 0x1fffffffffffffff) {
      uVar10 = lVar15 >> 1;
      if (uVar22 <= uVar10) {
        uVar22 = uVar10;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3e != 0) goto LAB_7101c7b974;
        goto LAB_7101c7b530;
      }
LAB_7101c7b590:
      ppplVar20 = (long ***)0x0;
    }
    else {
      uVar22 = 0x3fffffffffffffff;
LAB_7101c7b530:
      pppbVar18 = (byte ***)(uVar22 * 4);
      if (pppbVar18 == (byte ***)0x0) {
        pppbVar18 = (byte ***)0x1;
      }
      ppplVar20 = (long ***)
                  FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,param_6,
                                 param_7,param_8);
      if (ppplVar20 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b0 = (uint *)((ulong)local_b0 & 0xffffffff00000000);
          pcVar11 = (char *)&local_1e0;
          local_1e0 = (undefined **)pppbVar18;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
          if (((uVar10 & 1) != 0) &&
             (ppplVar20 = (long ***)
                          FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,
                                         param_6,param_7,param_8), ppplVar20 != (long ***)0x0))
          goto LAB_7101c7b594;
        }
        goto LAB_7101c7b590;
      }
    }
LAB_7101c7b594:
    puVar2 = (undefined4 *)((long)ppplVar20 + ((long)pppplVar25 >> 2) * 4);
    ppplVar27 = (long ***)(puVar2 + 1);
    *puVar2 = 1;
    if (0 < (long)pppplVar25) {
      memcpy(ppplVar20,ppplVar16,(size_t)pppplVar25);
      pcVar11 = (char *)pppplVar25;
    }
    param_1[0x2b] = ppplVar20;
    param_1[0x2c] = ppplVar27;
    param_1[0x2d] = (long ***)((long)ppplVar20 + uVar22 * 4);
    if (ppplVar16 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar16);
      ppplVar27 = param_1[0x2c];
    }
  }
  if (ppplVar27 < param_1[0x2d]) {
    *(undefined4 *)ppplVar27 = 2;
    ppplVar27 = (long ***)((long)param_1[0x2c] + 4);
    param_1[0x2c] = ppplVar27;
  }
  else {
    ppplVar16 = *pppplVar26;
    pppplVar25 = (long ****)((long)ppplVar27 - (long)ppplVar16);
    uVar22 = ((long)pppplVar25 >> 2) + 1;
    if (uVar22 >> 0x3e != 0) goto LAB_7101c7bfac;
    lVar15 = (long)param_1[0x2d] - (long)ppplVar16;
    if ((ulong)(lVar15 >> 2) < 0x1fffffffffffffff) {
      uVar10 = lVar15 >> 1;
      if (uVar22 <= uVar10) {
        uVar22 = uVar10;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3e != 0) goto LAB_7101c7b974;
        goto LAB_7101c7b644;
      }
LAB_7101c7b6a4:
      ppplVar20 = (long ***)0x0;
    }
    else {
      uVar22 = 0x3fffffffffffffff;
LAB_7101c7b644:
      pppbVar18 = (byte ***)(uVar22 * 4);
      if (pppbVar18 == (byte ***)0x0) {
        pppbVar18 = (byte ***)0x1;
      }
      ppplVar20 = (long ***)
                  FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,param_6,
                                 param_7,param_8);
      if (ppplVar20 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b0 = (uint *)((ulong)local_b0 & 0xffffffff00000000);
          pcVar11 = (char *)&local_1e0;
          local_1e0 = (undefined **)pppbVar18;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
          if (((uVar10 & 1) != 0) &&
             (ppplVar20 = (long ***)
                          FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,
                                         param_6,param_7,param_8), ppplVar20 != (long ***)0x0))
          goto LAB_7101c7b6a8;
        }
        goto LAB_7101c7b6a4;
      }
    }
LAB_7101c7b6a8:
    puVar2 = (undefined4 *)((long)ppplVar20 + ((long)pppplVar25 >> 2) * 4);
    ppplVar27 = (long ***)(puVar2 + 1);
    *puVar2 = 2;
    if (0 < (long)pppplVar25) {
      memcpy(ppplVar20,ppplVar16,(size_t)pppplVar25);
      pcVar11 = (char *)pppplVar25;
    }
    param_1[0x2b] = ppplVar20;
    param_1[0x2c] = ppplVar27;
    param_1[0x2d] = (long ***)((long)ppplVar20 + uVar22 * 4);
    if (ppplVar16 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar16);
      ppplVar27 = param_1[0x2c];
    }
  }
  if (ppplVar27 < param_1[0x2d]) {
    *(undefined4 *)ppplVar27 = 3;
    ppplVar27 = (long ***)((long)param_1[0x2c] + 4);
    param_1[0x2c] = ppplVar27;
  }
  else {
    ppplVar16 = *pppplVar26;
    pppplVar25 = (long ****)((long)ppplVar27 - (long)ppplVar16);
    uVar22 = ((long)pppplVar25 >> 2) + 1;
    if (uVar22 >> 0x3e != 0) goto LAB_7101c7bfac;
    lVar15 = (long)param_1[0x2d] - (long)ppplVar16;
    if ((ulong)(lVar15 >> 2) < 0x1fffffffffffffff) {
      uVar10 = lVar15 >> 1;
      if (uVar22 <= uVar10) {
        uVar22 = uVar10;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3e != 0) goto LAB_7101c7b974;
        goto LAB_7101c7b758;
      }
LAB_7101c7b7b8:
      ppplVar20 = (long ***)0x0;
    }
    else {
      uVar22 = 0x3fffffffffffffff;
LAB_7101c7b758:
      pppbVar18 = (byte ***)(uVar22 * 4);
      if (pppbVar18 == (byte ***)0x0) {
        pppbVar18 = (byte ***)0x1;
      }
      ppplVar20 = (long ***)
                  FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,param_6,
                                 param_7,param_8);
      if (ppplVar20 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b0 = (uint *)((ulong)local_b0 & 0xffffffff00000000);
          pcVar11 = (char *)&local_1e0;
          local_1e0 = (undefined **)pppbVar18;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
          if (((uVar10 & 1) != 0) &&
             (ppplVar20 = (long ***)
                          FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,
                                         param_6,param_7,param_8), ppplVar20 != (long ***)0x0))
          goto LAB_7101c7b7bc;
        }
        goto LAB_7101c7b7b8;
      }
    }
LAB_7101c7b7bc:
    puVar2 = (undefined4 *)((long)ppplVar20 + ((long)pppplVar25 >> 2) * 4);
    ppplVar27 = (long ***)(puVar2 + 1);
    *puVar2 = 3;
    if (0 < (long)pppplVar25) {
      memcpy(ppplVar20,ppplVar16,(size_t)pppplVar25);
      pcVar11 = (char *)pppplVar25;
    }
    param_1[0x2b] = ppplVar20;
    param_1[0x2c] = ppplVar27;
    param_1[0x2d] = (long ***)((long)ppplVar20 + uVar22 * 4);
    if (ppplVar16 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar16);
      ppplVar27 = param_1[0x2c];
    }
  }
  if (ppplVar27 < param_1[0x2d]) {
    *(undefined4 *)ppplVar27 = 4;
    ppplVar27 = (long ***)((long)param_1[0x2c] + 4);
    param_1[0x2c] = ppplVar27;
  }
  else {
    ppplVar16 = *pppplVar26;
    pppplVar25 = (long ****)((long)ppplVar27 - (long)ppplVar16);
    uVar22 = ((long)pppplVar25 >> 2) + 1;
    if (uVar22 >> 0x3e != 0) goto LAB_7101c7bfac;
    lVar15 = (long)param_1[0x2d] - (long)ppplVar16;
    if ((ulong)(lVar15 >> 2) < 0x1fffffffffffffff) {
      uVar10 = lVar15 >> 1;
      if (uVar22 <= uVar10) {
        uVar22 = uVar10;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3e != 0) goto LAB_7101c7b974;
        goto LAB_7101c7b86c;
      }
LAB_7101c7b8cc:
      ppplVar20 = (long ***)0x0;
    }
    else {
      uVar22 = 0x3fffffffffffffff;
LAB_7101c7b86c:
      pppbVar18 = (byte ***)(uVar22 * 4);
      if (pppbVar18 == (byte ***)0x0) {
        pppbVar18 = (byte ***)0x1;
      }
      ppplVar20 = (long ***)
                  FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,param_6,
                                 param_7,param_8);
      if (ppplVar20 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b0 = (uint *)((ulong)local_b0 & 0xffffffff00000000);
          pcVar11 = (char *)&local_1e0;
          local_1e0 = (undefined **)pppbVar18;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
          if (((uVar10 & 1) != 0) &&
             (ppplVar20 = (long ***)
                          FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,
                                         param_6,param_7,param_8), ppplVar20 != (long ***)0x0))
          goto LAB_7101c7b8d0;
        }
        goto LAB_7101c7b8cc;
      }
    }
LAB_7101c7b8d0:
    puVar2 = (undefined4 *)((long)ppplVar20 + ((long)pppplVar25 >> 2) * 4);
    ppplVar27 = (long ***)(puVar2 + 1);
    *puVar2 = 4;
    if (0 < (long)pppplVar25) {
      memcpy(ppplVar20,ppplVar16,(size_t)pppplVar25);
      pcVar11 = (char *)pppplVar25;
    }
    param_1[0x2b] = ppplVar20;
    param_1[0x2c] = ppplVar27;
    param_1[0x2d] = (long ***)((long)ppplVar20 + uVar22 * 4);
    if (ppplVar16 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar16);
      ppplVar27 = param_1[0x2c];
    }
  }
  if (ppplVar27 < param_1[0x2d]) {
    *(undefined4 *)ppplVar27 = 5;
    ppplVar27 = (long ***)((long)param_1[0x2c] + 4);
    param_1[0x2c] = ppplVar27;
  }
  else {
    ppplVar16 = *pppplVar26;
    pppplVar26 = (long ****)((long)ppplVar27 - (long)ppplVar16);
    uVar22 = ((long)pppplVar26 >> 2) + 1;
    if (uVar22 >> 0x3e != 0) {
LAB_7101c7bfac:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)param_1[0x2d] - (long)ppplVar16;
    if ((ulong)(lVar15 >> 2) < 0x1fffffffffffffff) {
      uVar10 = lVar15 >> 1;
      if (uVar22 <= uVar10) {
        uVar22 = uVar10;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3e != 0) {
LAB_7101c7b974:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7101c7b97c;
      }
LAB_7101c7b9dc:
      ppplVar20 = (long ***)0x0;
    }
    else {
      uVar22 = 0x3fffffffffffffff;
LAB_7101c7b97c:
      pppbVar18 = (byte ***)(uVar22 * 4);
      if (pppbVar18 == (byte ***)0x0) {
        pppbVar18 = (byte ***)0x1;
      }
      ppplVar20 = (long ***)
                  FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,param_6,
                                 param_7,param_8);
      if (ppplVar20 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b0 = (uint *)((ulong)local_b0 & 0xffffffff00000000);
          pcVar11 = (char *)&local_1e0;
          local_1e0 = (undefined **)pppbVar18;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
          if (((uVar10 & 1) != 0) &&
             (ppplVar20 = (long ***)
                          FUN_710392e290(0x10,pppbVar18,(long ****)pcVar11,ppppbVar13,pppplVar14,
                                         param_6,param_7,param_8), ppplVar20 != (long ***)0x0))
          goto LAB_7101c7b9e0;
        }
        goto LAB_7101c7b9dc;
      }
    }
LAB_7101c7b9e0:
    puVar2 = (undefined4 *)((long)ppplVar20 + ((long)pppplVar26 >> 2) * 4);
    ppplVar27 = (long ***)(puVar2 + 1);
    *puVar2 = 5;
    if (0 < (long)pppplVar26) {
      memcpy(ppplVar20,ppplVar16,(size_t)pppplVar26);
      pcVar11 = (char *)pppplVar26;
    }
    param_1[0x2b] = ppplVar20;
    param_1[0x2c] = ppplVar27;
    param_1[0x2d] = (long ***)((long)ppplVar20 + uVar22 * 4);
    if (ppplVar16 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar16);
      ppplVar27 = param_1[0x2c];
    }
  }
  local_a8 = (uint *)0x0;
  puStack_a0 = (uint *)0x0;
  uVar6 = 0x811c9dc5;
  local_b0 = (uint *)0x0;
  ppplVar16 = param_1[0x2b];
  if (ppplVar16 != ppplVar27) {
    do {
      pcVar21 = "mnu_online_room_inside_chat_sort_all";
      if (*(int *)ppplVar16 - 1U < 5) {
        pcVar21 = (&PTR_s_mnu_online_room_inside_chat_sort_71050ad8d0)
                  [(int)(*(int *)ppplVar16 - 1U)];
      }
      uVar22 = 0;
      do {
        pcVar3 = pcVar21 + uVar22;
        uVar10 = uVar22;
        if (*pcVar3 == '\0') break;
        *(char *)((long)&local_1d8 + uVar22) = *pcVar3;
        if (pcVar3[1] == '\0') {
          uVar10 = uVar22 + 1;
          break;
        }
        *(char *)((long)&local_1d8 + uVar22 + 1) = pcVar3[1];
        if (pcVar3[2] == '\0') {
          uVar10 = uVar22 + 2;
          break;
        }
        uVar10 = uVar22 + 3;
        *(char *)((long)&local_1d8 + uVar22 + 2) = pcVar3[2];
        uVar22 = uVar10;
      } while ((uint)uVar10 < 0x3f);
      *(undefined1 *)((long)&local_1d8 + (uVar10 & 0xffffffff)) = 0;
      uVar24 = uVar6;
      pbVar23 = (byte *)((long)&local_1d8 + 1);
      bVar4 = (byte)local_1d8;
      while (bVar4 != 0) {
        uVar24 = uVar24 * 0x89 ^ (uint)bVar4;
        bVar4 = *pbVar23;
        pbVar23 = pbVar23 + 1;
      }
      local_1e0 = (undefined **)CONCAT44((int)uVar10,uVar24);
      if (local_a8 < puStack_a0) {
        uVar22 = 0;
        *local_a8 = 0;
        bVar4 = (byte)local_1d8;
        while (bVar4 != 0) {
          *(byte *)((long)local_a8 + uVar22 + 8) = bVar4;
          bVar4 = ((byte *)((long)&local_1d8 + 1))[uVar22];
          if (bVar4 == 0) {
            uVar22 = uVar22 + 1;
            break;
          }
          *(byte *)((long)local_a8 + uVar22 + 9) = bVar4;
          cVar5 = *(char *)((long)&local_1d8 + uVar22 + 2);
          if (cVar5 == '\0') {
            uVar22 = uVar22 + 2;
            break;
          }
          *(char *)((long)local_a8 + uVar22 + 10) = cVar5;
          if (0x3e < (int)uVar22 + 3U) {
            uVar22 = (ulong)((int)uVar22 + 3);
            break;
          }
          lVar15 = uVar22 + 3;
          uVar22 = uVar22 + 3;
          bVar4 = *(byte *)((long)&local_1d8 + lVar15);
        }
        *(undefined1 *)((long)local_a8 + (uVar22 & 0xffffffff) + 8) = 0;
        local_a8[1] = (uint)uVar22;
        uVar19 = (uint)(byte)local_a8[2];
        uVar24 = uVar6;
        if ((byte)local_a8[2] != 0) {
          pbVar23 = (byte *)((long)local_a8 + 9);
          do {
            uVar24 = uVar24 * 0x89 ^ uVar19;
            uVar19 = (uint)*pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (uVar19 != 0);
        }
        *local_a8 = uVar24;
        local_a8 = local_a8 + 0x12;
      }
      else {
        FUN_71019c1c50((ulong *)&local_b0,(long)&local_1e0,(long ****)pcVar11,ppppbVar13,pppplVar14,
                       param_6,param_7,param_8);
      }
      ppplVar16 = (long ***)((long)ppplVar16 + 4);
    } while (ppplVar16 != ppplVar27);
  }
  FUN_7101c79d10((long)param_1,(uint)*(byte *)((long)param_1[2] + 0xd14),(long ****)pcVar11,
                 ppppbVar13,pppplVar14,param_6,param_7,param_8);
  pppplVar26 = (long ****)&DAT_7104545258;
  ppppbVar13 = (byte ****)0x1;
  FUN_71032cbf30(param_1 + 0x25,*param_2,(ulong *)&DAT_7104545258,(byte ****)0x1,pppplVar14,param_6,
                 param_7,param_8);
  FUN_71037760f0((long)**param_1[0x25],0);
  local_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  uStack_1c1 = 0;
  FUN_7103776290((undefined8 *)&uStack_1c0,extraout_x1,pppplVar26,ppppbVar13,pppplVar14,param_6,
                 param_7,param_8);
  local_1d8 = (long ***)((ulong)local_1d8 & 0xffffffff00000000);
  local_1d0 = _ConstantZero;
  uStack_1c8 = (undefined2)uRam0000007107459008;
  uStack_1c6 = (undefined1)((ulong)uRam0000007107459008 >> 0x10);
  uStack_1c5 = (undefined4)((ulong)uRam0000007107459008 >> 0x18);
  uStack_1c1 = (undefined1)((ulong)uRam0000007107459008 >> 0x38);
  local_1b8[1] = 0;
  local_1e0 = (undefined **)0xb;
  FUN_7103776640(&local_1f0,(long)pppplVar12,(byte ****)"set_scr_sort",pppplVar26,ppppbVar13,
                 pppplVar14,param_6,param_7,param_8);
  puVar7 = local_1e8;
  *local_1b8 = *local_1e8;
  local_1b8[1] = local_1e8[1];
  if (local_1b8 != local_1e8) {
    *(undefined8 *)local_1b8[3] = *(undefined8 *)local_1e8[3];
    *(undefined8 *)(local_1b8[3] + 8) = *(undefined8 *)(local_1e8[3] + 8);
    *(undefined8 *)(local_1b8[3] + 0x10) = *(undefined8 *)(local_1e8[3] + 0x10);
    *(undefined8 *)(local_1b8[3] + 0x18) = *(undefined8 *)(local_1e8[3] + 0x18);
  }
  uVar28 = _ConstantZero;
  uVar31 = uRam0000007107459008;
  if (*(long *)local_1e8[3] != 0) {
    uVar28 = *(undefined8 *)(*(long *)local_1e8[3] + 0x30);
    uVar31 = 0;
  }
  FUN_7103776910(&local_218,(long)pppplVar12,(long ****)"offset_lr",pppplVar26,ppppbVar13,pppplVar14
                 ,param_6,param_7,param_8);
  ppplVar16 = local_210;
  uVar29 = _ConstantZero;
  uVar32 = uRam0000007107459008;
  if (*local_210 != (long **)0x0) {
    uVar29 = *(undefined8 *)((long)*local_210 + 0x30);
    uVar32 = 0;
  }
  local_1d0 = CONCAT44((float)((ulong)uVar28 >> 0x20) + (float)((ulong)uVar29 >> 0x20),
                       (float)uVar28 + (float)uVar29);
  fVar30 = (float)uVar31 + (float)uVar32;
  fVar33 = (float)((ulong)uVar31 >> 0x20) + (float)((ulong)uVar32 >> 0x20);
  local_218 = (long ***)&PTR_FUN_710523d9a8;
  local_210 = (long ***)0x0;
  uStack_1c8 = SUB42(fVar30,0);
  uStack_1c6 = (undefined1)((uint)fVar30 >> 0x10);
  uStack_1c5 = (undefined4)(CONCAT44(fVar33,fVar30) >> 0x18);
  uStack_1c1 = (undefined1)((uint)fVar33 >> 0x18);
  if (ppplVar16 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar16);
  }
  FUN_7103776640(&local_200,(long)pppplVar12,(byte ****)"blinder",pppplVar26,ppppbVar13,pppplVar14,
                 param_6,param_7,param_8);
  puVar8 = local_a8;
  puVar1 = local_b0;
  local_218 = (long ***)0x0;
  local_210 = (long ***)0x0;
  local_208 = (long ***)0x0;
  ppplVar16 = (long ***)((long)local_a8 - (long)local_b0);
  if (ppplVar16 == (long ***)0x0) goto LAB_7101c7bec8;
  if (0x38e38e38e38e38e < (ulong)(((long)ppplVar16 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  ppplVar20 = (long ***)
              FUN_710392e290(0x10,ppplVar16,pppplVar26,ppppbVar13,pppplVar14,param_6,param_7,param_8
                            );
  if (ppplVar20 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      pppplVar12 = &local_78;
      local_78 = ppplVar16;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar22 & 1) != 0) &&
         (ppplVar20 = (long ***)
                      FUN_710392e290(0x10,ppplVar16,pppplVar12,ppppbVar13,pppplVar14,param_6,param_7
                                     ,param_8), ppplVar20 != (long ***)0x0)) goto LAB_7101c7be0c;
    }
    ppplVar20 = (long ***)0x0;
  }
LAB_7101c7be0c:
  local_208 = ppplVar20 + ((long)ppplVar16 >> 3);
  local_210 = ppplVar20;
  for (; local_218 = ppplVar20, puVar1 != puVar8; puVar1 = puVar1 + 0x12) {
    *(uint *)local_210 = 0;
    uVar22 = 0;
    do {
      cVar5 = *(char *)((long)puVar1 + uVar22 + 8);
      uVar10 = uVar22;
      if (cVar5 == '\0') break;
      *(char *)((long)local_210 + uVar22 + 8) = cVar5;
      cVar5 = *(char *)((long)puVar1 + uVar22 + 9);
      if (cVar5 == '\0') {
        uVar10 = uVar22 + 1;
        break;
      }
      *(char *)((long)local_210 + uVar22 + 9) = cVar5;
      cVar5 = *(char *)((long)puVar1 + uVar22 + 10);
      if (cVar5 == '\0') {
        uVar10 = uVar22 + 2;
        break;
      }
      uVar10 = uVar22 + 3;
      *(char *)((long)local_210 + uVar22 + 10) = cVar5;
      uVar22 = uVar10;
    } while ((uint)uVar10 < 0x3f);
    *(undefined1 *)((long)local_210 + (uVar10 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_210 + 4) = (uint)uVar10;
    uVar19 = (uint)*(byte *)(local_210 + 1);
    uVar24 = uVar6;
    if (*(byte *)(local_210 + 1) != 0) {
      pbVar23 = (byte *)((long)local_210 + 9);
      do {
        uVar24 = uVar24 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar19 != 0);
    }
    *(uint *)local_210 = uVar24;
    local_210 = local_210 + 9;
  }
LAB_7101c7bec8:
  FUN_71032ccb70((long)(param_1 + 0x26),param_1 + 0x25,&local_218,(byte ****)&local_1e0,&local_200,
                 param_6,param_7,param_8);
  if (local_218 != (long ***)0x0) {
    local_210 = local_218;
    FUN_710392eb40((ulong)local_218);
  }
  uVar22 = local_1f8;
  *(undefined4 *)(*(long *)(**(long **)*param_3 + 0x600) + 0x68) = 0xa00;
  local_200 = (long ***)&PTR_FUN_710523d988;
  local_1f8 = 0;
  if (uVar22 != 0) {
    uVar10 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar22);
  }
  local_1f0 = &PTR_FUN_710523d988;
  local_1e8 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    uVar22 = puVar7[3];
    puVar7[2] = &PTR_FUN_710523d9a8;
    puVar7[3] = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40((ulong)puVar7);
  }
  puVar7 = local_1b8;
  uStack_1c0 = 0x88;
  uStack_1bf = 0xd9;
  uStack_1be = 0x523;
  uStack_1bc = 0x71;
  local_1b8 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    uVar22 = puVar7[3];
    puVar7[2] = &PTR_FUN_710523d9a8;
    puVar7[3] = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40((ulong)puVar7);
  }
  if (local_b0 != (uint *)0x0) {
    local_a8 = local_b0;
    FUN_710392eb40((ulong)local_b0);
  }
  return;
}

