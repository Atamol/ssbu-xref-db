// addr:      71018cde70
// offset:    0x18cde70
// name:      FUN_71018cde70
// mangled:   
// signature: undefined __cdecl FUN_71018cde70(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018cde70(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ********pppppppplVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long ********pppppppplVar6;
  long ********pppppppplVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar15;
  undefined **ppuVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  uint uVar19;
  undefined8 uVar20;
  long lVar21;
  long *******ppppppplVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long ********local_88;
  long ********local_80;
  undefined **local_70;
  ulong local_68;
  
  lVar9 = FUN_710392e290(0x10,0x120,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar9 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_88 = (long ********)&DAT_00000120;
      param_3 = &local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar10 & 1) != 0) &&
         (lVar9 = FUN_710392e290(0x10,0x120,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar9 != 0)) goto LAB_71018cdef4;
    }
    lVar9 = 0;
  }
LAB_71018cdef4:
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined4 *)(lVar9 + 0xe0) = 0xffffffff;
  *(long *)lVar9 = lVar9;
  *(undefined8 *)(lVar9 + 8) = 0;
  *(undefined1 *)(lVar9 + 0xe4) = 0;
  *(undefined8 *)(lVar9 + 0xd0) = 0;
  *(undefined8 *)(lVar9 + 0xd8) = 0xffffffff;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  *(undefined8 *)(lVar9 + 200) = 0;
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(undefined8 *)(lVar9 + 0x78) = 0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined8 *)(lVar9 + 0x68) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_88 = (long ********)&DAT_00000080;
      param_3 = &local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_71018cdf8c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71018cdf8c:
  *puVar11 = &PTR_FUN_7105181b40;
  puVar11[2] = 0;
  puVar11[1] = puVar11 + 2;
  puVar11[5] = 0;
  puVar11[3] = 0;
  puVar11[4] = puVar11 + 5;
  puVar11[8] = 0;
  puVar11[6] = 0;
  puVar11[7] = puVar11 + 8;
  puVar11[0xb] = 0;
  puVar11[9] = 0;
  puVar11[10] = puVar11 + 0xb;
  puVar11[0xc] = 0;
  *(undefined4 *)(puVar11 + 0xd) = 2;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  puVar11[0xe] = 0;
  *(undefined8 **)(lVar9 + 0xe8) = puVar11;
  lVar23 = DAT_710532f840;
  *(undefined8 *)(lVar9 + 0xf0) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar20 = *(undefined8 *)(*(long *)(lVar23 + 8) + 0xc0);
  *(undefined4 *)(lVar9 + 0x110) = 0;
  *(undefined8 *)(lVar9 + 0x100) = 0;
  *(undefined8 *)(lVar9 + 0x108) = 0;
  *(undefined8 *)(lVar9 + 0xf8) = uVar20;
  *(undefined4 *)(lVar9 + 0x114) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(lVar9 + 0x118) = 0;
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar11 != (undefined8 *)0x0) {
    if (((DAT_71053249b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053249b8), iVar8 != 0)) {
      if (((DAT_7105324748 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_7105324748), iVar8 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&DAT_7105324750), iVar8 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_71053249c0 = &DAT_7105324760;
      __cxa_guard_release(&DAT_71053249b8);
    }
    auVar24 = (**(code **)*puVar11)(puVar11);
    uVar20 = auVar24._8_8_;
    for (puVar12 = auVar24._0_8_; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
      if ((undefined8 **)puVar12 == &DAT_71053249c0) {
        iVar8 = *(int *)(puVar11 + 1);
        if ((iVar8 == 4) || (iVar8 == 3)) {
          *(int *)(lVar9 + 0x118) = iVar8;
          goto LAB_71018ce204;
        }
        break;
      }
    }
  }
  *(undefined4 *)(lVar9 + 0x118) = 0;
  puVar11 = *(undefined8 **)(*DAT_7105314510 + 0x78);
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar23 = *(long *)(DAT_710532f730 + 8);
  param_6 = 1;
  param_7 = 1;
  param_3 = (long *********)0x0;
  param_4 = (byte ****)0x0;
  param_5 = (long ****)0x0;
  FUN_710326f6a0(&local_88,0,(long ****)0x0,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,1,param_8);
  pppppppplVar7 = local_80;
  pppppppplVar6 = local_88;
  uVar20 = extraout_x1;
  for (pppppppplVar1 = local_88; pppppppplVar1 != pppppppplVar7; pppppppplVar1 = pppppppplVar1 + 1)
  {
    ppppppplVar22 = *pppppppplVar1;
    uVar10 = FUN_7103264270(*(long *)(lVar23 + 0x168),(undefined1 *)ppppppplVar22);
    uVar19 = (uint)uVar10;
    uVar20 = extraout_x1_00;
    if (uVar19 != 0xffffffff) {
      if ((0x62 < uVar19) ||
         (bVar2 = *(byte *)(*(long *)*puVar11 + (long)(int)uVar19 + 4), uVar19 = (uint)bVar2,
         6 < bVar2)) {
        uVar19 = 0;
      }
      iVar8 = 0;
      if (uVar19 - 1 < 6) {
        iVar8 = (uVar19 - 1 & 0xff) + 1;
      }
      if (((ulong)ppppppplVar22 >> 0x38 == 0xc1) && (((ulong)ppppppplVar22 & 0xffffffffff) != 0)) {
        uVar10 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                (undefined1 *)ppppppplVar22);
        uVar19 = (uint)uVar10;
        uVar20 = extraout_x1_01;
        if (uVar19 != 0xffffffff) {
          if (0x62 < uVar19) goto LAB_71018ceb5c;
          *(int *)(&DAT_7105308138 + (long)(int)uVar19 * 4) = iVar8;
        }
      }
    }
  }
  DAT_7105308134 = *(char *)(*(long *)*puVar11 + 3) != '\0';
  DAT_71053082c4._1_1_ = **(byte **)*puVar11;
  if (1 < DAT_71053082c4._1_1_) {
    DAT_71053082c4._1_1_ = 2;
  }
  DAT_71053082c4._0_1_ = *(char *)(*(long *)*puVar11 + 1) != '\0';
  DAT_71053082c6 = *(byte *)(*(long *)*puVar11 + 2);
  if (1 < DAT_71053082c6) {
    DAT_71053082c6 = 0;
  }
  if (pppppppplVar6 != (long ********)0x0) {
    local_80 = pppppppplVar6;
    FUN_710392eb40((ulong)pppppppplVar6);
    uVar20 = extraout_x1_02;
  }
LAB_71018ce204:
  *(code **)(lVar9 + 0x28) = FUN_71018ccd60;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(code **)(lVar9 + 0x48) = FUN_71018cd210;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(code **)(lVar9 + 0x58) = FUN_71018cd9a0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(code **)(lVar9 + 0x38) = FUN_71018ccec0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(code **)(lVar9 + 0x68) = FUN_71018cdae0;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(code **)(lVar9 + 0x78) = FUN_71018cdb30;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  if (0x12 < *(uint *)(lVar9 + 0xd4)) {
LAB_71018ceb5c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0xd4) * 4 + 0x88) = 0;
  uVar10 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar9;
  if (uVar10 != 0) {
    lVar9 = *(long *)(uVar10 + 0x100);
    *(undefined8 *)(uVar10 + 0x100) = 0;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      uVar20 = extraout_x1_03;
    }
    FUN_710323b9e0(*(long *)(uVar10 + 0xe8),uVar20,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar13 = *(long **)(uVar10 + 0xe8);
    *(undefined8 *)(uVar10 + 0xe8) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    FUN_710392eb40(uVar10);
    lVar9 = *(long *)(param_1 + 0x58);
  }
  plVar13 = (long *)(lVar9 + 0xe8);
  *(undefined8 *)(*plVar13 + 0x70) = 1;
  lVar23 = *plVar13;
  FUN_710323beb0(lVar23,(ulong *)&DAT_7104545628,(long)*(int *)(lVar23 + 0x70),
                 (ulong)*(uint *)(lVar23 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar23 = *plVar13;
  local_88 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar23,(ulong *)&local_88,(long)*(int *)(lVar23 + 0x70),
                 (ulong)*(uint *)(lVar23 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar23 = *plVar13;
  local_88 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar23,(ulong *)&local_88,(long)*(int *)(lVar23 + 0x70),
                 (ulong)*(uint *)(lVar23 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar23 = *plVar13;
  FUN_710323beb0(lVar23,(ulong *)&DAT_7104545630,(long)*(int *)(lVar23 + 0x70),
                 (ulong)*(uint *)(lVar23 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar23 = *plVar13;
  local_88 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar23,(ulong *)&local_88,(long)*(int *)(lVar23 + 0x70),
                 (ulong)*(uint *)(lVar23 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar23 = *plVar13;
  local_88 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar23,(ulong *)&local_88,(long)*(int *)(lVar23 + 0x70),
                 (ulong)*(uint *)(lVar23 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar23 = *plVar13;
  ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar23 + 0x68);
  pppplVar18 = (long ****)0x1;
  FUN_710323beb0(lVar23,(ulong *)&DAT_7104545638,(long)*(int *)(lVar23 + 0x70),(ulong)ppppbVar17,
                 (long ****)0x1,param_6,param_7,param_8);
  local_88 = (long ********)FUN_7103238a70(0xc1ffff0eb70a6c07,0,1);
  if (((ulong)local_88 & 0xffffffffff) != 0) {
    lVar23 = *plVar13;
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar23 + 0x68);
    FUN_710323c4e0(lVar23,(ulong *)&local_88,(long *********)(long)*(int *)(lVar23 + 0x70),
                   ppppbVar17,pppplVar18,param_6,param_7,param_8);
  }
  ppppppppplVar15 = (long *********)0x1;
  local_88 = (long ********)FUN_7103238a70(0xc1ffff0e8369a909,0,1);
  uVar20 = extraout_x1_04;
  if (((ulong)local_88 & 0xffffffffff) != 0) {
    lVar23 = *plVar13;
    ppppppppplVar15 = (long *********)(long)*(int *)(lVar23 + 0x70);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar23 + 0x68);
    FUN_710323c4e0(lVar23,(ulong *)&local_88,ppppppppplVar15,ppppbVar17,pppplVar18,param_6,param_7,
                   param_8);
    uVar20 = extraout_x1_05;
  }
  lVar23 = *plVar13;
  uVar10 = FUN_710323cb80(lVar23,uVar20,ppppppppplVar15,ppppbVar17,pppplVar18,param_6,param_7,
                          param_8);
  while ((uVar10 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar10 = FUN_710323cb80(lVar23,extraout_x1_06,ppppppppplVar15,ppppbVar17,pppplVar18,param_6,
                            param_7,param_8);
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar15,ppppbVar17,pppplVar18,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_88 = (long ********)&DAT_00000088;
      ppppppppplVar15 = &local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar15,ppppbVar17,pppplVar18,
                                   param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_71018ce49c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71018ce49c:
  *puVar11 = &PTR_FUN_71050af1d0;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[0xf] = plVar13;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x58,(long ****)ppppppppplVar15,ppppbVar17,pppplVar18,param_6,
                           param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_88 = (long ********)&DAT_00000058;
      ppppppppplVar15 = &local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar10 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x58,(long ****)ppppppppplVar15,ppppbVar17,pppplVar18,
                                   param_6,param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_71018ce51c;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_71018ce51c:
  *(undefined4 *)(puVar12 + 1) = 0x1000;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[2] = 0;
  ppuVar16 = &PTR_DAT_71050af1b0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  uVar20 = 0x29792f139a;
  pppplVar18 = (long ****)0x1;
  puVar12[6] = 0;
  puVar12[5] = puVar12 + 6;
  *puVar12 = &DAT_71050af208;
  *(undefined4 *)((long)puVar12 + 0x54) = 0;
  *(undefined1 *)(puVar12 + 10) = 0;
  puVar12[9] = 0;
  puVar11[0x10] = puVar12;
  FUN_71032cb040((long)puVar12,plVar13,(long ****)&PTR_DAT_71050af1b0,(byte ****)0x29792f139a,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar23 = puVar11[0x10];
  if (*(undefined8 **)(lVar23 + 0x18) != *(undefined8 **)(lVar23 + 0x10)) {
    puVar12 = *(undefined8 **)**(undefined8 **)(lVar23 + 0x10);
    *(undefined4 *)(*(long *)(*(long *)*puVar12 + 0x600) + 0x18) = 0x800008;
    *(undefined4 *)(*(long *)(*(long *)*puVar12 + 0x600) + 0x1c) = 0x200022;
    if (*(undefined8 **)(lVar23 + 0x18) != *(undefined8 **)(lVar23 + 0x10)) {
      lVar21 = **(long **)**(undefined8 **)(lVar23 + 0x10);
      FUN_7103778630(0,*(long *)(lVar21 + 0x10),0x7104421055);
      FUN_7103776640(&local_88,lVar21 + 8,(byte ****)"set_parts_btn_02",ppuVar16,uVar20,pppplVar18,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_70,(long)&local_88,(long ****)"set_rep_peach",ppuVar16,uVar20,pppplVar18
                     ,param_6,param_7,param_8);
      ppppbVar17 = (byte ****)0x1;
      ppppppppplVar15 = (long *********)0x0;
      plVar14 = FUN_710323f330(plVar13,0xc1ffff0eb70a6c07,0,1,pppplVar18,param_6,param_7,param_8);
      uVar10 = local_68;
      FUN_7103778b80(local_68,(long)plVar14,ppppppppplVar15,ppppbVar17,pppplVar18,param_6,param_7,
                     param_8);
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_7103776910(&local_70,(long)&local_88,(long ****)"set_rep_daisy",ppppppppplVar15,ppppbVar17
                     ,pppplVar18,param_6,param_7,param_8);
      ppppbVar17 = (byte ****)0x1;
      ppppppppplVar15 = (long *********)0x0;
      plVar13 = FUN_710323f330(plVar13,0xc1ffff0e8369a909,0,1,pppplVar18,param_6,param_7,param_8);
      uVar10 = local_68;
      FUN_7103778b80(local_68,(long)plVar13,ppppppppplVar15,ppppbVar17,pppplVar18,param_6,param_7,
                     param_8);
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      if (*(undefined8 **)(lVar23 + 0x40) != (undefined8 *)0x0) {
        plVar13 = (long *)**(undefined8 **)(lVar23 + 0x40);
        if (plVar13 == (long *)0x0) {
          lVar21 = 0;
        }
        else {
          lVar21 = *plVar13;
        }
        if (*(undefined8 **)(lVar23 + 0x18) == *(undefined8 **)(lVar23 + 0x10)) goto LAB_71018ceb60;
        ppppppppplVar15 = *(long **********)**(undefined8 **)(lVar23 + 0x10);
        FUN_71033743c0(lVar21,"layout_root",ppppppppplVar15);
        if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
          ppppppppplVar15 = (long *********)&DAT_71042b2a84;
          ppppbVar17 = (byte ****)0x3;
          FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"SCENE_EXIT_CODE_RULE",
                         &DAT_71042b2a84);
          if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
            ppppppppplVar15 = (long *********)&DAT_71042b2a84;
            ppppbVar17 = (byte ****)&DAT_00000004;
            FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"SCENE_EXIT_CODE_HANDI",
                           &DAT_71042b2a84);
            if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
              ppppppppplVar15 = (long *********)&DAT_71042b2a84;
              ppppbVar17 = (byte ****)0x6;
              FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"BUTTON_EX_LEFT",
                             &DAT_71042b2a84);
              if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                ppppbVar17 = (byte ****)&DAT_00000007;
                FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"BUTTON_EX_RIGHT",
                               &DAT_71042b2a84);
                if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                  ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                  ppppbVar17 = (byte ****)0x0;
                  FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"BUTTON_ID_RULE",
                                 &DAT_71042b2a84);
                  if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                    ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                    ppppbVar17 = (byte ****)0x1;
                    FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"BUTTON_ID_HANDICAP",
                                   &DAT_71042b2a84);
                    if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                      ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                      ppppbVar17 = (byte ****)0x2;
                      FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"BUTTON_ID_RADAR",
                                     &DAT_71042b2a84);
                      if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                        ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                        ppppbVar17 = (byte ****)0x3;
                        FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                       "BUTTON_ID_DASH_FIGHTER",&DAT_71042b2a84);
                        if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                          ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                          ppppbVar17 = (byte ****)&DAT_00000004;
                          FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                         "BUTTON_ID_INVISIBLE",&DAT_71042b2a84);
                          if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                            ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                            ppppbVar17 = (byte ****)0x5;
                            FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"BUTTON_ID_SAVE"
                                           ,&DAT_71042b2a84);
                            if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                              ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                              ppppbVar17 = (byte ****)0x0;
                              FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),"RADAR_NONE",
                                             &DAT_71042b2a84);
                              if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                                ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                                ppppbVar17 = (byte ****)0x1;
                                FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                               "RADAR_SMALL",&DAT_71042b2a84);
                                if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                                  ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                                  ppppbVar17 = (byte ****)0x2;
                                  FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                                 "RADAR_BIG",&DAT_71042b2a84);
                                  if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                                    ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                                    ppppbVar17 = (byte ****)0x3;
                                    FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                                   "RADAR_NUM",&DAT_71042b2a84);
                                    if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                                      ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                                      ppppbVar17 = (byte ****)0x0;
                                      FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                                     "DASH_CLOSE",&DAT_71042b2a84);
                                      if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0) {
                                        ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                                        ppppbVar17 = (byte ****)0x1;
                                        FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                                       "DASH_OPEN",&DAT_71042b2a84);
                                        if ((long *)**(undefined8 **)(lVar23 + 0x40) != (long *)0x0)
                                        {
                                          ppppppppplVar15 = (long *********)&DAT_71042b2a84;
                                          ppppbVar17 = (byte ****)0x2;
                                          FUN_7103375650((long *)**(undefined8 **)(lVar23 + 0x40),
                                                         "DASH_NUM",&DAT_71042b2a84);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pppppppplVar1 = local_80;
      local_88 = (long ********)&PTR_FUN_710523d988;
      local_80 = (long ********)0x0;
      if (pppppppplVar1 != (long ********)0x0) {
        ppppppplVar22 = pppppppplVar1[3];
        pppppppplVar1[2] = (long *******)&PTR_FUN_710523d9a8;
        pppppppplVar1[3] = (long *******)0x0;
        if (ppppppplVar22 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar22);
        }
        FUN_710392eb40((ulong)pppppppplVar1);
      }
      (**(code **)(*(long *)puVar11[0x10] + 8))((long *)puVar11[0x10],0);
      puVar11[2] = &DAT_7105333600;
      uVar5 = DAT_7105333664;
      *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
      *(undefined4 *)((long)puVar11 + 0x6c) = uVar5;
      do {
        uVar19 = DAT_7105333650;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
        if (bVar4) {
          DAT_7105333650 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0' || (uVar19 & 1) != 0);
      puVar11[9] = DAT_7105333648;
      DAT_7105333650 = 0;
      DAT_7105333648 = puVar11;
      FUN_71032caea0((long)puVar11,extraout_x1_07,(long ****)ppppppppplVar15,ppppbVar17,pppplVar18,
                     param_6,param_7,param_8);
      lVar23 = *(long *)(lVar9 + 0x100);
      *(undefined8 **)(lVar9 + 0x100) = puVar11;
      if (lVar23 != 0) {
        FUN_71032cad20(lVar23);
        puVar11 = *(undefined8 **)(lVar9 + 0x100);
      }
      lVar9 = puVar11[0x10];
      if ((*(undefined8 **)(lVar9 + 0x40) != (undefined8 *)0x0) &&
         (plVar13 = (long *)**(undefined8 **)(lVar9 + 0x40), plVar13 != (long *)0x0)) {
        FUN_7103375650(plVar13,"RADAR_INIT",&DAT_71042b2a84);
        if ((long *)**(undefined8 **)(lVar9 + 0x40) != (long *)0x0) {
          FUN_7103375650((long *)**(undefined8 **)(lVar9 + 0x40),"DASH_INIT",&DAT_71042b2a84);
          if ((long *)**(undefined8 **)(lVar9 + 0x40) != (long *)0x0) {
            FUN_7103375650((long *)**(undefined8 **)(lVar9 + 0x40),"INVISIBLE_INIT",&DAT_71042b2a84)
            ;
            return;
          }
        }
      }
      return;
    }
  }
LAB_71018ceb60:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

