// addr:      710185c5d0
// offset:    0x185c5d0
// name:      FUN_710185c5d0
// mangled:   
// signature: undefined __cdecl FUN_710185c5d0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710185c5d0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
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
  undefined8 extraout_x1_11;
  undefined8 uVar11;
  long *********ppppppppplVar12;
  long *********ppppppppplVar13;
  long *********ppppppppplVar14;
  long *********ppppppppplVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  long *********ppppppppplVar19;
  long ****pppplVar20;
  undefined4 uVar21;
  long **pplVar22;
  code *pcVar23;
  long *plVar24;
  undefined1 auVar25 [16];
  long ********local_1b0;
  undefined2 local_1a8;
  undefined4 local_1a6;
  undefined2 local_1a2;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 *local_198;
  undefined4 local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  long ***local_80;
  code *pcStack_78;
  undefined8 local_70;
  long lStack_68;
  long ****local_60;
  
  ppppppppplVar13 = &local_1b0;
  ppppppppplVar12 = &local_1b0;
  ppppppppplVar14 = &local_1b0;
  ppppppppplVar15 = &local_1b0;
  ppppppppplVar16 = &local_1b0;
  ppppppppplVar19 = &local_1b0;
  lVar5 = FUN_710392e290(0x10,0xf8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar5 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
      local_1b0 = (long ********)&DAT_000000f8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      param_3 = ppppppppplVar13;
      if (((uVar6 & 1) != 0) &&
         (lVar5 = FUN_710392e290(0x10,0xf8,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                 param_7,param_8), param_3 = ppppppppplVar13, lVar5 != 0))
      goto LAB_710185c650;
    }
    lVar5 = 0;
  }
LAB_710185c650:
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(long *)lVar5 = lVar5;
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0xc0) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0xc4) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0xffffffff;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  lVar10 = DAT_710532f840;
  *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(*(long *)(lVar10 + 8) + 0xc0);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar11 = extraout_x1;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
      local_1b0 = (long ********)&DAT_00000080;
      auVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar11 = auVar25._8_8_;
      param_3 = ppppppppplVar12;
      if (((auVar25._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar12,param_4,param_5,param_6,
                                  param_7,param_8), uVar11 = extraout_x1_00,
         param_3 = ppppppppplVar12, puVar7 != (undefined8 *)0x0)) goto LAB_710185c700;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710185c700:
  *puVar7 = &PTR_FUN_7105181b40;
  puVar7[2] = 0;
  puVar7[1] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[3] = 0;
  puVar7[4] = puVar7 + 5;
  puVar7[8] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar7 + 8;
  puVar7[0xb] = 0;
  puVar7[9] = 0;
  puVar7[10] = puVar7 + 0xb;
  *(undefined4 *)(puVar7 + 0xd) = 2;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  puVar7[0xe] = 0;
  *(code **)(lVar5 + 0x28) = FUN_710185b6f0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(code **)(lVar5 + 0x48) = FUN_710185bdc0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0xe8) = 0;
  *(undefined8 *)(lVar5 + 0xf0) = 0;
  *(undefined8 **)(lVar5 + 0xd8) = puVar7;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(code **)(lVar5 + 0x38) = FUN_710185baf0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(code **)(lVar5 + 0x58) = FUN_710185bff0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  puVar7 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar7 != (undefined8 *)0x0) {
    if (((DAT_7105324768 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105324768), iVar4 != 0)) {
      if (((DAT_7105324748 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105324748), iVar4 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&DAT_7105324750), iVar4 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_7105324770 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324768);
    }
    auVar25 = (**(code **)*puVar7)(puVar7);
    uVar11 = auVar25._8_8_;
    for (puVar8 = auVar25._0_8_; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      if ((undefined8 **)puVar8 == &DAT_7105324770) {
        iVar4 = *(int *)(puVar7 + 1);
        if (iVar4 == 5) {
          uVar21 = 6;
        }
        else if (iVar4 == 4) {
          uVar21 = 5;
        }
        else {
          if (iVar4 != 3) break;
          uVar21 = 4;
        }
        *(undefined4 *)(lVar5 + 0xec) = uVar21;
        break;
      }
    }
  }
  *(undefined4 *)(lVar5 + 0xf0) = *(undefined4 *)(lVar5 + 0xec);
  if (0x12 < *(uint *)(lVar5 + 0xb4)) goto LAB_710185ce2c;
  *(undefined4 *)(lVar5 + (long)(int)*(uint *)(lVar5 + 0xb4) * 4 + 0x68) = 0;
  uVar6 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar5;
  if (uVar6 != 0) {
    lVar5 = *(long *)(uVar6 + 0xe0);
    *(undefined8 *)(uVar6 + 0xe0) = 0;
    if (lVar5 != 0) {
      FUN_71032cad20(lVar5);
      uVar11 = extraout_x1_01;
    }
    FUN_710323b9e0(*(long *)(uVar6 + 0xd8),uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar9 = *(long **)(uVar6 + 0xd8);
    *(undefined8 *)(uVar6 + 0xd8) = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_710392eb40(uVar6);
    lVar5 = *(long *)(param_1 + 0x58);
  }
  plVar9 = (long *)(lVar5 + 0xd8);
  lVar10 = *plVar9;
  ppppppppplVar13 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar20 = (long ****)0x0;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104544e70,(long)ppppppppplVar13,(ulong)ppppbVar18,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar10 = *plVar9;
  uVar6 = FUN_710323cb80(lVar10,extraout_x1_02,ppppppppplVar13,ppppbVar18,pppplVar20,param_6,param_7
                         ,param_8);
  while ((uVar6 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar6 = FUN_710323cb80(lVar10,extraout_x1_03,ppppppppplVar13,ppppbVar18,pppplVar20,param_6,
                           param_7,param_8);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar13,ppppbVar18,pppplVar20,param_6,param_7
                          ,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
      local_1b0 = (long ********)&DAT_00000088;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      ppppppppplVar13 = ppppppppplVar14;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar14,ppppbVar18,pppplVar20,param_6
                                  ,param_7,param_8), ppppppppplVar13 = ppppppppplVar14,
         puVar7 != (undefined8 *)0x0)) goto LAB_710185c910;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710185c910:
  *puVar7 = &PTR_FUN_71050ac578;
  puVar7[1] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0x1ffffffff;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  puVar7[0xf] = plVar9;
  *(undefined1 *)(puVar7 + 0xe) = 1;
  puVar7[9] = 0;
  puVar7[10] = 0;
  lVar10 = FUN_710392e290(0x10,0xf0,(long ****)ppppppppplVar13,ppppbVar18,pppplVar20,param_6,param_7
                          ,param_8);
  if (lVar10 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
      local_1b0 = (long ********)&DAT_000000f0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      ppppppppplVar13 = ppppppppplVar15;
      if (((uVar6 & 1) != 0) &&
         (lVar10 = FUN_710392e290(0x10,0xf0,(long ****)ppppppppplVar15,ppppbVar18,pppplVar20,param_6
                                  ,param_7,param_8), ppppppppplVar13 = ppppppppplVar15, lVar10 != 0)
         ) goto LAB_710185c998;
    }
    lVar10 = 0;
  }
LAB_710185c998:
  *(undefined4 *)(lVar10 + 0xd0) = 0xffffffff;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined1 *)(lVar10 + 0xd4) = 0;
  *(long *)lVar10 = lVar10;
  *(undefined8 *)(lVar10 + 8) = 0;
  *(undefined8 *)(lVar10 + 0xc0) = 0;
  *(undefined8 *)(lVar10 + 200) = 0xffffffff;
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  *(undefined8 *)(lVar10 + 0xb8) = 0;
  *(undefined8 *)(lVar10 + 0xa0) = 0;
  *(undefined8 *)(lVar10 + 0xa8) = 0;
  *(undefined8 *)(lVar10 + 0x90) = 0;
  *(undefined8 *)(lVar10 + 0x98) = 0;
  *(undefined8 *)(lVar10 + 0x80) = 0;
  *(undefined8 *)(lVar10 + 0x88) = 0;
  *(undefined8 *)(lVar10 + 0x70) = 0;
  *(undefined8 *)(lVar10 + 0x78) = 0;
  *(undefined8 *)(lVar10 + 0x60) = 0;
  *(undefined8 *)(lVar10 + 0x68) = 0;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  *(undefined8 *)(lVar10 + 0x58) = 0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)ppppppppplVar13,ppppbVar18,pppplVar20,param_6,param_7,
                          param_8);
  uVar11 = extraout_x1_04;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
      local_1b0 = (long ********)&DAT_00000008;
      auVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar11 = auVar25._8_8_;
      ppppppppplVar13 = ppppppppplVar16;
      if (((auVar25._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppppppppplVar16,ppppbVar18,pppplVar20,param_6,
                                  param_7,param_8), uVar11 = extraout_x1_05,
         ppppppppplVar13 = ppppppppplVar16, puVar8 != (undefined8 *)0x0)) goto LAB_710185ca30;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710185ca30:
  FUN_7103773200(puVar8,uVar11,(long ****)ppppppppplVar13,ppppbVar18,pppplVar20,param_6,param_7,
                 param_8);
  plVar24 = (long *)(lVar10 + 0xe0);
  *plVar24 = 0;
  *(code **)(lVar10 + 0x38) = FUN_7101bdece0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(code **)(lVar10 + 0x48) = FUN_7101bded80;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  *(code **)(lVar10 + 0x58) = FUN_7101bdef70;
  *(undefined8 *)(lVar10 + 0x60) = 0;
  *(undefined8 **)(lVar10 + 0xd8) = puVar8;
  *(undefined8 *)(lVar10 + 0xe8) = 0;
  *(code **)(lVar10 + 0x28) = FUN_7101bdecd0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(code **)(lVar10 + 0x68) = FUN_7101bdecd0;
  *(undefined8 *)(lVar10 + 0x70) = 0;
  if (0x12 < *(uint *)(lVar10 + 0xc4)) {
LAB_710185ce2c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar10 + (long)(int)*(uint *)(lVar10 + 0xc4) * 4 + 0x78) = 0;
  puVar7[0x10] = lVar10;
  puVar8 = (undefined8 *)(lVar10 + 0xd8);
  FUN_71032cbf30(puVar8,*plVar9,(ulong *)&DAT_7104544e70,(byte ****)0x1,pppplVar20,param_6,param_7,
                 param_8);
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar10 + 0xd8),0);
  local_1a8 = 0x101;
  local_198 = &DAT_41f0000000000000;
  local_1b0 = (long ********)0x0;
  local_1a2 = 0;
  local_1a6 = 0;
  local_1a0 = 1;
  local_19c = 1;
  local_19a = 1;
  local_190 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  FUN_710337df20((long)&local_1b0);
  local_70 = 0;
  local_80 = (long ***)&PTR_FUN_71050ac530;
  pcStack_78 = FUN_7101bdf030;
  lStack_68 = lVar10;
  local_60 = &local_80;
  FUN_7101a7ed70((long *)&local_80,alStack_180);
  if (&local_80 == local_60) {
    pplVar22 = (*local_60)[4];
LAB_710185cb6c:
    (*(code *)pplVar22)();
  }
  else if (local_60 != (long ****)0x0) {
    pplVar22 = (*local_60)[5];
    goto LAB_710185cb6c;
  }
  FUN_7103770b30(plVar24,(undefined8 *)(*(long *)*puVar8 + 8),(long ****)"selector_mode00",
                 (byte ****)&local_1b0,pppplVar20,param_6,param_7,param_8);
  FUN_71037717d0(plVar24,0,"set_parts_btn00",ppppppppplVar19,pppplVar20,param_6,param_7,param_8);
  FUN_71037717d0(plVar24,1,"set_parts_btn01",ppppppppplVar19,pppplVar20,param_6,param_7,param_8);
  FUN_71037717d0(plVar24,2,"set_parts_btn02",ppppppppplVar19,pppplVar20,param_6,param_7,param_8);
  FUN_71037717d0(plVar24,3,"set_parts_btn03",ppppppppplVar19,pppplVar20,param_6,param_7,param_8);
  FUN_71037717d0(plVar24,4,"set_parts_btn04",ppppppppplVar19,pppplVar20,param_6,param_7,param_8);
  local_80 = (long ***)0x7fc420ce8;
  FUN_7103772070(*plVar24,0,&local_80,(byte ****)ppppppppplVar19,pppplVar20,param_6,param_7,param_8)
  ;
  local_80 = (long ***)0x7fc420ce8;
  FUN_7103772070(*plVar24,1,&local_80,(byte ****)ppppppppplVar19,pppplVar20,param_6,param_7,param_8)
  ;
  (**(code **)(*(long *)*plVar24 + 0x70))((long *)*plVar24,1);
  FUN_7103771a80(plVar24,0,1);
  pppplVar17 = (long ****)&DAT_00001000;
  FUN_7103775dc0(*(long **)*puVar8,0,(long ****)&DAT_00001000,(byte ****)ppppppppplVar19,pppplVar20,
                 param_6,param_7,param_8);
  if (alStack_c0 == local_a0) {
    pcVar23 = *(code **)(*local_a0 + 0x20);
LAB_710185cc8c:
    (*pcVar23)();
    uVar11 = extraout_x1_07;
  }
  else {
    uVar11 = extraout_x1_06;
    if (local_a0 != (long *)0x0) {
      pcVar23 = *(code **)(*local_a0 + 0x28);
      goto LAB_710185cc8c;
    }
  }
  if (alStack_f0 == local_d0) {
    pcVar23 = *(code **)(*local_d0 + 0x20);
LAB_710185ccbc:
    (*pcVar23)();
    uVar11 = extraout_x1_08;
  }
  else if (local_d0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_d0 + 0x28);
    goto LAB_710185ccbc;
  }
  if (alStack_120 == local_100) {
    pcVar23 = *(code **)(*local_100 + 0x20);
LAB_710185ccec:
    (*pcVar23)();
    uVar11 = extraout_x1_09;
  }
  else if (local_100 != (long *)0x0) {
    pcVar23 = *(code **)(*local_100 + 0x28);
    goto LAB_710185ccec;
  }
  if (alStack_150 == local_130) {
    pcVar23 = *(code **)(*local_130 + 0x20);
LAB_710185cd1c:
    (*pcVar23)();
    uVar11 = extraout_x1_10;
  }
  else if (local_130 != (long *)0x0) {
    pcVar23 = *(code **)(*local_130 + 0x28);
    goto LAB_710185cd1c;
  }
  if (alStack_180 == local_160) {
    pcVar23 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) goto LAB_710185cd50;
    pcVar23 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar23)();
  uVar11 = extraout_x1_11;
LAB_710185cd50:
  puVar7[2] = &DAT_7105333600;
  uVar21 = DAT_7105333664;
  *(undefined4 *)(puVar7 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar7 + 0x6c) = uVar21;
  do {
    uVar3 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar3 & 1) != 0);
  puVar7[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar7;
  FUN_71032caea0((long)puVar7,uVar11,pppplVar17,(byte ****)ppppppppplVar19,pppplVar20,param_6,
                 param_7,param_8);
  lVar10 = *(long *)(lVar5 + 0xe0);
  *(undefined8 **)(lVar5 + 0xe0) = puVar7;
  if (lVar10 != 0) {
    FUN_71032cad20(lVar10);
    return;
  }
  return;
}

