// addr:      710197b740
// offset:    0x197b740
// name:      FUN_710197b740
// mangled:   
// signature: undefined __cdecl FUN_710197b740(undefined1[16] param_1, undefined4 param_2, float param_3, long * * param_4, undefined8 param_5, undefined8 param_6, byte * * * * param_7, long * * * * param_8, ulong param_9, long * * * param_10, long * * * param_11)


void FUN_710197b740(undefined1 param_1 [16],undefined4 param_2,float param_3,long **param_4,
                   undefined8 param_5,undefined8 param_6,byte ****param_7,long ****param_8,
                   ulong param_9,long ***param_10,long ***param_11)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  char cVar10;
  long lVar11;
  char *pcVar12;
  undefined8 extraout_x1;
  undefined **ppuVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  long lVar17;
  long **pplVar18;
  long *plVar19;
  long ***ppplVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  long ***ppplVar23;
  long **pplVar24;
  long lVar25;
  long ****pppplVar26;
  undefined1 *puVar27;
  long **pplVar28;
  long *********ppppppppplVar29;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 uVar30;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 uVar31;
  long ***local_78;
  long *local_70;
  undefined4 local_64;
  
  lVar25 = *(long *)(DAT_71052c4c58 + 8);
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(param_1._0_4_,&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71053050f0 & 0x7f000000) == 0x7000000 || DAT_71053050f4 != '\0') {
    lVar17 = *(long *)(lVar25 + 0x88);
    lVar11 = *(long *)(lVar17 + 0x9ff8);
    puVar21 = (undefined8 *)(lVar17 + 0xa010);
    if (lVar11 == 0) {
      cVar10 = -1;
    }
    else {
      uVar7 = FUN_71016f6340((long)puVar21,lVar11);
      cVar10 = (char)uVar7;
    }
    uVar7 = FUN_71016ea290(puVar21,cVar10);
    cVar10 = (char)uVar7;
  }
  else {
    cVar10 = -1;
  }
  lVar11 = DAT_710532f8b8;
  pppplVar26 = (long ****)param_4[1][0x10];
  pplVar28 = *pppplVar26[1];
  if (((DAT_710532f4d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710532f4d8), iVar8 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    pplVar24 = (long **)pplVar28[5];
    if (pplVar24 == (long **)0x0) goto LAB_710197b85c;
LAB_710197b818:
    pplVar18 = pplVar28 + 5;
    do {
      bVar6 = ((ulong)pplVar24[4] & 0xffffffffff) < 0xf4415c599;
      if (!bVar6) {
        pplVar18 = pplVar24;
      }
      pplVar24 = (long **)pplVar24[bVar6];
    } while (pplVar24 != (long **)0x0);
    if ((pplVar18 == pplVar28 + 5) || (0xf4415c599 < ((ulong)pplVar18[4] & 0xfffffffffe)))
    goto LAB_710197b85c;
    ppppppppplVar29 = (long *********)(pplVar18 + 5);
  }
  else {
    pplVar24 = (long **)pplVar28[5];
    if (pplVar24 != (long **)0x0) goto LAB_710197b818;
LAB_710197b85c:
    ppppppppplVar29 = (long *********)&DAT_710532f4a4;
  }
  if ((*(int *)ppppppppplVar29 != 0xffffff) &&
     (iVar8 = FUN_710330a8f0(*(long **)(lVar11 + 8),(ulong *)&DAT_7104545df0,(long ****)0x1,param_7,
                             param_8,param_9,param_10,param_11), iVar8 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar8,ppppppppplVar29,param_7,
                   param_8,param_9,param_10,param_11);
  }
  ppppbVar16 = (byte ****)0x3;
  FUN_71032cbf30(pppplVar26,(long)*pppplVar26[1],(ulong *)&DAT_7104545df8,(byte ****)0x3,param_8,
                 param_9,param_10,param_11);
  ppuVar13 = (undefined **)0x10500;
  FUN_7103775dc0((long *)**pppplVar26,1,(long ****)0x10500,ppppbVar16,param_8,param_9,param_10,
                 param_11);
  plVar19 = ***pppplVar26;
  *(undefined4 *)(plVar19[0xc0] + 0x10) = 0x20;
  *(undefined4 *)(plVar19[0xc0] + 0x18) = 0x40000;
  *(undefined4 *)(plVar19[0xc0] + 0x1c) = 0x20;
  *(undefined4 *)(plVar19[0xc0] + 0x20) = 0x80;
  *(undefined4 *)(plVar19[0xc0] + 0x24) = 0x40;
  *(undefined4 *)(plVar19[0xc0] + 0x28) = 0x60;
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar13 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  *(char *)((long)pppplVar26 + 0x2a4) = DAT_71052cc5f0;
  pplVar28 = **pppplVar26;
  if (pppplVar26 + 0x4b != (long ****)(pplVar28 + 1)) {
    *pppplVar26[0x4c] = (long **)*pplVar28[2];
    pppplVar26[0x4c][1] = (long **)pplVar28[2][1];
    ppplVar23 = (long ***)pplVar28[2];
    ppplVar20 = pppplVar26[0x4c];
    if (ppplVar20 != ppplVar23) {
      *ppplVar20[3] = *ppplVar23[3];
      ppplVar20[3][1] = ppplVar23[3][1];
      ppplVar20[3][2] = ppplVar23[3][2];
      ppplVar20[3][3] = ppplVar23[3][3];
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar13 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_710530d560 == 1) {
    ppplVar20 = pppplVar26[0x4c];
    pcVar12 = "count_5vs5";
LAB_710197b9fc:
    FUN_7103778300(0x3f800000,(long)ppplVar20,(long)pcVar12);
  }
  else if (DAT_710530d560 == 0) {
    ppplVar20 = pppplVar26[0x4c];
    pcVar12 = "count_3vs3";
    goto LAB_710197b9fc;
  }
  ppplVar20 = (long ***)
              FUN_710392e290(0x10,0x10,(long ****)ppuVar13,ppppbVar16,param_8,param_9,param_10,
                             param_11);
  if (ppplVar20 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000010;
      pppplVar14 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (ppplVar20 = (long ***)
                      FUN_710392e290(0x10,0x10,pppplVar14,ppppbVar16,param_8,param_9,param_10,
                                     param_11), ppplVar20 != (long ***)0x0)) goto LAB_710197ba68;
    }
    ppplVar20 = (long ***)0x0;
  }
LAB_710197ba68:
  pppplVar14 = pppplVar26;
  FUN_7101f01150(ppplVar20,0,(long ****)0x1,(byte ****)(pppplVar26 + 0x52),pppplVar26,param_9,
                 param_10,param_11);
  ppplVar23 = pppplVar26[0x4e];
  pppplVar26[0x4e] = ppplVar20;
  uVar22 = extraout_s0;
  uVar30 = extraout_var;
  uVar31 = extraout_var_03;
  if (ppplVar23 != (long ***)0x0) {
    (*(code *)(*ppplVar23)[1])();
    ppplVar20 = pppplVar26[0x4e];
    uVar22 = extraout_s0_00;
    uVar30 = extraout_var_00;
    uVar31 = extraout_var_04;
  }
  pppplVar15 = (long ****)(ulong)DAT_710530d560;
  ppppbVar16 = (byte ****)(ulong)(cVar10 < '\x01');
  auVar4._4_4_ = uVar30;
  auVar4._0_4_ = uVar22;
  auVar4._8_8_ = uVar31;
  FUN_7101f018b0(auVar4,param_2,param_3,(uint *)ppplVar20[1],(long *)pppplVar26[1],DAT_710530d560,
                 ppppbVar16,pppplVar14,param_9,param_10,param_11);
  ppplVar20 = (long ***)
              FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,pppplVar14,param_9,param_10,param_11);
  if (ppplVar20 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000008;
      pppplVar15 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (ppplVar20 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,pppplVar14,param_9,param_10,
                                     param_11), ppplVar20 != (long ***)0x0)) goto LAB_710197bb24;
    }
    ppplVar20 = (long ***)0x0;
  }
LAB_710197bb24:
  pplVar28 = (long **)FUN_710392e290(0x10,200,pppplVar15,ppppbVar16,pppplVar14,param_9,param_10,
                                     param_11);
  if (pplVar28 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_000000c8;
      pppplVar15 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (pplVar28 = (long **)FUN_710392e290(0x10,200,pppplVar15,ppppbVar16,pppplVar14,param_9,
                                             param_10,param_11), pplVar28 != (long **)0x0))
      goto LAB_710197bb78;
    }
    pplVar28 = (long **)0x0;
  }
LAB_710197bb78:
  *(undefined4 *)pplVar28 = 0;
  pplVar28[1] = (long *)pppplVar26;
  pplVar28[2] = (long *)pplVar28;
  *(undefined4 *)(pplVar28 + 0x16) = 0xffffffff;
  pplVar28[3] = (long *)0x0;
  pplVar28[4] = (long *)0x0;
  *(undefined1 *)((long)pplVar28 + 0xb4) = 0;
  pplVar28[0x17] = (long *)0x0;
  *(undefined4 *)(pplVar28 + 0x18) = 0;
  pplVar28[5] = (long *)0x0;
  pplVar28[6] = (long *)0x0;
  pplVar28[0x14] = (long *)0x0;
  pplVar28[0x15] = (long *)&DAT_ffffffff;
  pplVar28[0x12] = (long *)0x0;
  pplVar28[0x13] = (long *)0x0;
  pplVar28[0x10] = (long *)0x0;
  pplVar28[0x11] = (long *)0x0;
  pplVar28[0xe] = (long *)0x0;
  pplVar28[0xf] = (long *)0x0;
  pplVar28[0xc] = (long *)0x0;
  pplVar28[0xd] = (long *)0x0;
  pplVar28[10] = (long *)0x0;
  pplVar28[0xb] = (long *)0x0;
  *(undefined4 *)(pplVar28 + 0xb) = 0;
  pplVar28[8] = (long *)0x0;
  pplVar28[9] = (long *)0x0;
  pplVar28[7] = (long *)0x0;
  pplVar28[8] = (long *)0x0;
  pplVar28[7] = (long *)FUN_7101f06740;
  pplVar28[9] = (long *)FUN_7101f06750;
  pplVar28[10] = (long *)0x0;
  *ppplVar20 = pplVar28;
  ppplVar23 = pppplVar26[0x50];
  pppplVar26[0x50] = ppplVar20;
  if (ppplVar23 != (long ***)0x0) {
    pplVar28 = *ppplVar23;
    *ppplVar23 = (long **)0x0;
    if (pplVar28 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar28);
    }
    FUN_710392eb40((ulong)ppplVar23);
  }
  ppplVar20 = (long ***)
              FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar16,pppplVar14,param_9,param_10,param_11);
  if (ppplVar20 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000010;
      pppplVar15 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (ppplVar20 = (long ***)
                      FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar16,pppplVar14,param_9,param_10,
                                     param_11), ppplVar20 != (long ***)0x0)) goto LAB_710197bc5c;
    }
    ppplVar20 = (long ***)0x0;
  }
LAB_710197bc5c:
  pppplVar14 = pppplVar26;
  FUN_7101f01150(ppplVar20,1,(long ****)0x2,(byte ****)(pppplVar26 + 0x52),pppplVar26,param_9,
                 param_10,param_11);
  ppplVar23 = pppplVar26[0x4f];
  pppplVar26[0x4f] = ppplVar20;
  uVar22 = extraout_s0_01;
  uVar30 = extraout_var_01;
  uVar31 = extraout_var_05;
  if (ppplVar23 != (long ***)0x0) {
    (*(code *)(*ppplVar23)[1])();
    ppplVar20 = pppplVar26[0x4f];
    uVar22 = extraout_s0_02;
    uVar30 = extraout_var_02;
    uVar31 = extraout_var_06;
  }
  ppuVar13 = (undefined **)(ulong)DAT_710530d560;
  ppppbVar16 = (byte ****)(ulong)(cVar10 < '\0' || cVar10 == '\x01');
  auVar5._4_4_ = uVar30;
  auVar5._0_4_ = uVar22;
  auVar5._8_8_ = uVar31;
  FUN_7101f018b0(auVar5,param_2,param_3,(uint *)ppplVar20[1],(long *)pppplVar26[1],DAT_710530d560,
                 ppppbVar16,pppplVar14,param_9,param_10,param_11);
  ppplVar20 = (long ***)
              FUN_710392e290(0x10,8,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,param_10,
                             param_11);
  if (ppplVar20 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000008;
      ppuVar13 = (undefined **)&local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (ppplVar20 = (long ***)
                      FUN_710392e290(0x10,8,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,
                                     param_10,param_11), ppplVar20 != (long ***)0x0))
      goto LAB_710197bd14;
    }
    ppplVar20 = (long ***)0x0;
  }
LAB_710197bd14:
  pplVar28 = (long **)FUN_710392e290(0x10,200,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,
                                     param_10,param_11);
  if (pplVar28 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_000000c8;
      ppuVar13 = (undefined **)&local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (pplVar28 = (long **)FUN_710392e290(0x10,200,(long ****)ppuVar13,ppppbVar16,pppplVar14,
                                             param_9,param_10,param_11), pplVar28 != (long **)0x0))
      goto LAB_710197bd68;
    }
    pplVar28 = (long **)0x0;
  }
LAB_710197bd68:
  *(undefined4 *)pplVar28 = 1;
  *(undefined4 *)(pplVar28 + 0x16) = 0xffffffff;
  pplVar28[1] = (long *)pppplVar26;
  pplVar28[2] = (long *)pplVar28;
  *(undefined1 *)((long)pplVar28 + 0xb4) = 0;
  pplVar28[0x17] = (long *)0x0;
  *(undefined4 *)(pplVar28 + 0x18) = 0;
  pplVar28[3] = (long *)0x0;
  pplVar28[4] = (long *)0x0;
  pplVar28[5] = (long *)0x0;
  pplVar28[6] = (long *)0x0;
  pplVar28[0x14] = (long *)0x0;
  pplVar28[0x15] = (long *)&DAT_ffffffff;
  pplVar28[0x12] = (long *)0x0;
  pplVar28[0x13] = (long *)0x0;
  pplVar28[0x10] = (long *)0x0;
  pplVar28[0x11] = (long *)0x0;
  pplVar28[0xe] = (long *)0x0;
  pplVar28[0xf] = (long *)0x0;
  pplVar28[0xc] = (long *)0x0;
  pplVar28[0xd] = (long *)0x0;
  pplVar28[10] = (long *)0x0;
  pplVar28[0xb] = (long *)0x0;
  *(undefined4 *)(pplVar28 + 0xb) = 0;
  pplVar28[8] = (long *)0x0;
  pplVar28[9] = (long *)0x0;
  pplVar28[7] = (long *)0x0;
  pplVar28[8] = (long *)0x0;
  pplVar28[7] = (long *)FUN_7101f06740;
  pplVar28[9] = (long *)FUN_7101f06750;
  pplVar28[10] = (long *)0x0;
  *ppplVar20 = pplVar28;
  ppplVar23 = pppplVar26[0x51];
  pppplVar26[0x51] = ppplVar20;
  if (ppplVar23 != (long ***)0x0) {
    pplVar28 = *ppplVar23;
    *ppplVar23 = (long **)0x0;
    if (pplVar28 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar28);
    }
    FUN_710392eb40((ulong)ppplVar23);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar13 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71052cc5f0 != '\0') {
    ppplVar23 = pppplVar26[1];
    ppplVar20 = (long ***)
                FUN_710392e290(0x10,0x88,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,param_10,
                               param_11);
    if (ppplVar20 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000088;
        ppuVar13 = (undefined **)&local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (ppplVar20 = (long ***)
                        FUN_710392e290(0x10,0x88,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,
                                       param_10,param_11), ppplVar20 != (long ***)0x0))
        goto LAB_710197be5c;
      }
      ppplVar20 = (long ***)0x0;
    }
LAB_710197be5c:
    FUN_7101b8d640(ppplVar20,(long *)ppplVar23,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,
                   param_10,param_11);
    ppplVar20[2] = (long **)&DAT_7105333600;
    uVar22 = DAT_7105333664;
    *(undefined4 *)(ppplVar20 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)ppplVar20 + 0x6c) = uVar22;
    do {
      uVar7 = DAT_7105333650;
      cVar10 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar6) {
        DAT_7105333650 = 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0' || (uVar7 & 1) != 0);
    ppplVar20[9] = (long **)DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = ppplVar20;
    FUN_71032caea0((long)ppplVar20,extraout_x1,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,
                   param_10,param_11);
    ppplVar23 = pppplVar26[0x60];
    pppplVar26[0x60] = ppplVar20;
    if (ppplVar23 != (long ***)0x0) {
      FUN_71032cad20((long)ppplVar23);
      ppplVar20 = pppplVar26[0x60];
    }
    pplVar28 = ppplVar20[0x10];
    *(undefined1 *)(pplVar28 + 0x25) = 0;
    FUN_7103776910(&local_78,(long)(pplVar28 + 1),(long ****)"set_rep_pic_mov",ppuVar13,ppppbVar16,
                   pppplVar14,param_9,param_10,param_11);
    plVar19 = local_70;
    lVar11 = *local_70;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | *(byte *)(pplVar28 + 0x25);
    }
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar19);
    }
    *(undefined1 *)(pppplVar26[0x60] + 0xe) = 1;
  }
  puVar21 = *(undefined8 **)(*DAT_7105328e18 + 0x3b0);
  plVar19 = (long *)puVar21[1];
  *puVar21 = 0;
  puVar21[1] = 0;
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 1;
    do {
      lVar11 = *plVar1;
      cVar10 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((*(int *)(*DAT_7105328e18 + 0x39c) < 1) ||
     (uVar9 = FUN_71023489d0(*DAT_7105328e18), (uVar9 & 1) == 0)) {
    uVar22 = 7;
  }
  else {
    if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
      FUN_7101764000();
      ppuVar13 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar11 = *DAT_7105328e18;
    iVar8 = *(int *)(lVar11 + 0x34);
    iVar2 = *(int *)(lVar11 + 0x1ec);
    uVar7 = FUN_710234cc40(lVar11,(uint)(iVar8 < iVar2));
    if (4 < uVar7) goto LAB_710197c2ec;
    puVar27 = &DAT_710530bdf0;
    if (iVar2 <= iVar8) {
      puVar27 = &DAT_710530a9c8;
    }
    puVar27 = *(undefined1 **)(puVar27 + (ulong)uVar7 * 0x1c8 + 0x40);
    lVar11 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar7 = FUN_71032632a0(lVar11,(ulong)puVar27);
    if ((uVar7 & 1) != 0) {
      puVar27 = FUN_71032631a0(lVar11,0x11b1ccb807);
    }
    uVar7 = FUN_71032638e0(lVar11,(ulong)puVar27);
    uVar22 = 2;
    if ((uVar7 & 1) == 0) {
      uVar22 = 7;
    }
  }
  if (0x12 < *(uint *)((long)param_4 + 0x124)) {
LAB_710197c2ec:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x124) * 4 + 0xd8) = uVar22;
  *(undefined1 *)((long)param_4 + 0x13c) = 1;
  ppplVar20 = (long ***)
              FUN_710392e290(0x10,0x28,(long ****)ppuVar13,ppppbVar16,pppplVar14,param_9,param_10,
                             param_11);
  if (ppplVar20 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      pppplVar26 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (ppplVar20 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar26,ppppbVar16,pppplVar14,param_9,param_10,
                                     param_11), ppplVar20 != (long ***)0x0)) goto LAB_710197c0bc;
    }
    ppplVar20 = (long ***)0x0;
  }
LAB_710197c0bc:
  *ppplVar20 = (long **)&PTR_FUN_71050a6e18;
  *(undefined4 *)(ppplVar20 + 1) = 1;
  ppplVar20[2] = param_4;
  ppplVar20[3] = (long **)FUN_710197c2f0;
  ppplVar20[4] = (long **)0x0;
  local_78 = ppplVar20;
  FUN_710169b270(*(long *)(lVar25 + 0x88) + 0x26980,4,&local_78,ppppbVar16,pppplVar14,param_9,
                 param_10,param_11);
  if ((ppplVar20 != (long ***)0x0) &&
     (sVar3 = *(short *)(ppplVar20 + 1), *(short *)(ppplVar20 + 1) = sVar3 + -1,
     (short)(sVar3 + -1) < 1)) {
    (*(code *)(*ppplVar20)[1])(ppplVar20);
  }
  return;
}

