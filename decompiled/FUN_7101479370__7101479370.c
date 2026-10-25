// addr:      7101479370
// offset:    0x1479370
// name:      FUN_7101479370
// mangled:   
// signature: undefined __cdecl FUN_7101479370(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7101479370(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar12;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined **ppuVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined **local_b8;
  long *local_b0;
  long ********local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_04, iVar3 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_2 = extraout_x1_05;
  }
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_06, iVar3 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_2 = extraout_x1_07;
  }
  puVar11 = DAT_71052cc630;
  lVar25 = *(long *)(DAT_710532f730 + 8);
  if (*(int *)((long)param_1 + 0x17c) == 0) {
    if (DAT_71052cc63a == '\0') {
      lVar19 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar19,(ulong)DAT_71052cc630);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052cc63b;
      bVar2 = FUN_71032648e0(lVar25 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(lVar19,0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar19 = *param_1;
        FUN_710323c4e0(lVar19,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar19 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar19 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    puVar11 = DAT_71052cfe90;
    if (DAT_71052cfe9a == '\0') {
      lVar19 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar19,(ulong)DAT_71052cfe90);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052cfe9b;
      lVar19 = *(long *)(DAT_710532f730 + 8);
      bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar19 = *param_1;
        FUN_710323c4e0(lVar19,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar19 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar19 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    puVar11 = DAT_71052d36f0;
    if (DAT_71052d36fa == '\0') {
      lVar19 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar19,(ulong)DAT_71052d36f0);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052d36fb;
      lVar19 = *(long *)(DAT_710532f730 + 8);
      bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar19 = *param_1;
        FUN_710323c4e0(lVar19,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar19 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar19 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    puVar11 = DAT_71052d6f50;
    if (DAT_71052d6f5a == '\0') {
      lVar19 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar19,(ulong)DAT_71052d6f50);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052d6f5b;
      lVar19 = *(long *)(DAT_710532f730 + 8);
      bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar19 = *param_1;
        FUN_710323c4e0(lVar19,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar19 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar19 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    puVar11 = DAT_71052da7b0;
    if (DAT_71052da7ba == '\0') {
      lVar19 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar19,(ulong)DAT_71052da7b0);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052da7bb;
      lVar19 = *(long *)(DAT_710532f730 + 8);
      bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar19 = *param_1;
        FUN_710323c4e0(lVar19,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar19 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar19 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    puVar11 = DAT_71052de010;
    if (DAT_71052de01a == '\0') {
      lVar19 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar19,(ulong)DAT_71052de010);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052de01b;
      lVar19 = *(long *)(DAT_710532f730 + 8);
      bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar19 = *param_1;
        FUN_710323c4e0(lVar19,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar19 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar19 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    puVar11 = DAT_71052e1870;
    if (DAT_71052e187a == '\0') {
      lVar19 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar19,(ulong)DAT_71052e1870);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052e187b;
      lVar19 = *(long *)(DAT_710532f730 + 8);
      bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar19 = *param_1;
        FUN_710323c4e0(lVar19,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar19 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar19 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    puVar11 = DAT_71052e50d0;
    if (DAT_71052e50da == '\0') {
      lVar25 = *(long *)(lVar25 + 0x168);
      uVar5 = FUN_71032632a0(lVar25,(ulong)DAT_71052e50d0);
      if ((uVar5 & 1) != 0) {
        puVar11 = FUN_71032631a0(lVar25,0x11b1ccb807);
      }
      uVar6 = (ulong)DAT_71052e50db;
      lVar25 = *(long *)(DAT_710532f730 + 8);
      bVar2 = FUN_71032648e0(lVar25 + 0x160,(ulong)puVar11);
      if (bVar2) {
        puVar11 = FUN_71032631a0(*(long *)(lVar25 + 0x168),0x143829f67e);
      }
      local_a8 = (long ********)FUN_7103238a70((ulong)puVar11,uVar6 & 0xffffffff,0);
      if (((ulong)local_a8 & 0xffffffffff) != 0) {
        lVar25 = *param_1;
        FUN_710323c4e0(lVar25,(ulong *)&local_a8,(long *********)(long)*(int *)(lVar25 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar25 + 0x68),param_5,param_6,param_7,param_8);
      }
    }
    lVar25 = *param_1;
    pppplVar15 = (long ****)0x0;
    FUN_710323beb0(lVar25,(ulong *)&DAT_7104544b08,(long)*(int *)(lVar25 + 0x70),
                   (ulong)*(uint *)(lVar25 + 0x68),(long ****)0x0,param_6,param_7,param_8);
    lVar25 = *param_1;
    FUN_710323c1c0(lVar25,(ulong *)&DAT_7104544b10,(long *********)(long)*(int *)(lVar25 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar25 + 0x68),pppplVar15,param_6,param_7,param_8);
    return;
  }
  uVar6 = FUN_710323cb80(*param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,
                         param_8);
  if ((uVar6 & 1) == 0) {
    return;
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&DAT_00000088;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101479428;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101479428:
  *puVar7 = &PTR_FUN_71050ab1d0;
  puVar7[1] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0x1ffffffff;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  puVar7[0xf] = param_1;
  *(undefined1 *)(puVar7 + 0xe) = 1;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x1a0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&DAT_000001a0;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x1a0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_71014794b0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71014794b0:
  puVar21 = puVar8 + 1;
  *puVar8 = param_1;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&DAT_00000008;
      param_3 = (undefined **)&local_a8;
      auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      uVar14 = auVar27._8_8_;
      if (((auVar27._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
         , uVar14 = extraout_x1_00, puVar9 != (undefined8 *)0x0)) goto LAB_7101479514;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479514:
  FUN_7103773200(puVar9,uVar14,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  puVar8[1] = puVar9;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[3] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = &PTR_FUN_710523d9e8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_71014795b8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014795b8:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[4] = &PTR_FUN_710523d9e8;
  puVar8[3] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479628;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479628:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[6] = &PTR_FUN_710523d9e8;
  puVar8[5] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479694;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479694:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[8] = &PTR_FUN_710523d9e8;
  puVar8[7] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479704;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479704:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[10] = &PTR_FUN_710523d9e8;
  puVar8[9] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479770;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479770:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0xc] = &PTR_FUN_710523d9e8;
  puVar8[0xb] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_71014797e0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014797e0:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0xe] = &PTR_FUN_710523d9e8;
  puVar8[0xd] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_710147984c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710147984c:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x10] = &PTR_FUN_710523d9e8;
  puVar8[0xf] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_71014798bc;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014798bc:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x12] = &PTR_FUN_710523d9e8;
  puVar8[0x11] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479928;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479928:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x14] = &PTR_FUN_710523d9e8;
  puVar8[0x13] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479998;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479998:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x16] = &PTR_FUN_710523d9e8;
  puVar8[0x15] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479a04;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479a04:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x18] = &PTR_FUN_710523d9e8;
  puVar8[0x17] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000018;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479a74;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479a74:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x1a] = &PTR_FUN_710523d9a8;
  puVar8[0x19] = puVar9;
  puVar8[0x20] = 0;
  puVar8[0x21] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1d] = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479af4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479af4:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x1c] = &PTR_FUN_710523d9a8;
  puVar8[0x1b] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479b60;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479b60:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x1e] = &PTR_FUN_710523d9a8;
  puVar8[0x1d] = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479bc8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479bc8:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x1f] = puVar9;
  puVar8[0x20] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479c28;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479c28:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x21] = puVar9;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  puVar8[0x26] = 0;
  puVar8[0x27] = 0;
  puVar8[0x24] = 0;
  puVar8[0x25] = 0;
  puVar8[0x22] = &PTR_FUN_710523d9a8;
  puVar8[0x23] = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479c98;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479c98:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x23] = puVar9;
  puVar8[0x24] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479cf8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479cf8:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x25] = puVar9;
  puVar8[0x26] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479d58;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479d58:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x27] = puVar9;
  puVar8[0x28] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479db8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479db8:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x29] = puVar9;
  puVar8[0x2c] = 0;
  puVar8[0x2d] = 0;
  puVar8[0x2a] = &PTR_FUN_710523d9a8;
  puVar8[0x2b] = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479e20;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479e20:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x2b] = puVar9;
  puVar8[0x2c] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479e80;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479e80:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x2d] = puVar9;
  puVar8[0x2e] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479ee0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479ee0:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x2f] = puVar9;
  puVar8[0x30] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      param_3 = (undefined **)&local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101479f40;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479f40:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x31] = puVar9;
  puVar8[0x32] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&SUB_00000020;
      ppppppppplVar16 = &local_a8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar16,param_4,param_5,param_6,
                                  param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_7101479fa4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101479fa4:
  puVar9[2] = 0;
  puVar9[3] = 0;
  ppuVar13 = (undefined **)&DAT_7104544b08;
  *puVar9 = 0;
  puVar9[1] = 0;
  ppppbVar17 = (byte ****)0x1;
  puVar8[0x33] = puVar9;
  puVar7[0x10] = puVar8;
  FUN_71032cbf30(puVar21,*(long *)*puVar8,(ulong *)&DAT_7104544b08,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  lVar19 = DAT_710532f8b8;
  lVar23 = *(long *)*puVar8;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f4d8), iVar3 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar13 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar20 = *(long *)(lVar23 + 0x28);
    if (lVar20 == 0) goto LAB_710147a03c;
LAB_7101479ff8:
    lVar18 = lVar23 + 0x28;
    do {
      bVar2 = (*(ulong *)(lVar20 + 0x20) & 0xfffffffffc) < 0x17564bc894;
      if (!bVar2) {
        lVar18 = lVar20;
      }
      lVar20 = *(long *)(lVar20 + (ulong)bVar2 * 8);
    } while (lVar20 != 0);
    if ((lVar18 == lVar23 + 0x28) || (0x17564bc894 < (*(ulong *)(lVar18 + 0x20) & 0xffffffffff)))
    goto LAB_710147a03c;
    ppppppppplVar16 = (long *********)(lVar18 + 0x28);
  }
  else {
    lVar20 = *(long *)(lVar23 + 0x28);
    if (lVar20 != 0) goto LAB_7101479ff8;
LAB_710147a03c:
    ppppppppplVar16 = (long *********)&DAT_710532f4a4;
  }
  if (*(int *)ppppppppplVar16 != 0xffffff) {
    ppuVar13 = (undefined **)0x6;
    iVar3 = FUN_710330a8f0(*(long **)(lVar19 + 8),(ulong *)&DAT_7104544b10,(long ****)0x6,ppppbVar17
                           ,param_5,param_6,param_7,param_8);
    if (iVar3 != 0) {
      FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar3,ppppppppplVar16,ppppbVar17
                     ,param_5,param_6,param_7,param_8);
      ppuVar13 = (undefined **)ppppppppplVar16;
    }
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)&DAT_7104421055,ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 2)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[3];
    puVar8[3] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)&DAT_710428ff7d,ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 4)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[5];
    puVar8[5] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"result_type",ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 6)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[7];
    puVar8[7] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"highscore_type",ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 8)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[9];
    puVar8[9] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"palyer_count",ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 10)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0xb];
    puVar8[0xb] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)&DAT_71042f866d,ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0xc)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0xd];
    puVar8[0xd] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"gsp_type",ppuVar13,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0xe)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0xf];
    puVar8[0xf] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)&DAT_710431778d,ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x10)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x11];
    puVar8[0x11] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"highscore",ppuVar13,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x12)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x13];
    puVar8[0x13] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"clear",ppuVar13,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x14)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x15];
    puVar8[0x15] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"clear_off",ppuVar13,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x16)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x17];
    puVar8[0x17] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_a8,*(long *)*puVar21 + 8,(long ****)"key_help",ppuVar13,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x18)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x19];
    puVar8[0x19] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9e8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_a8,*(long *)*puVar21 + 8,(long ****)"set_txt_time",ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x1a)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x1b];
    puVar8[0x1b] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_a8,*(long *)*puVar21 + 8,(long ****)"set_txt_enemycount",ppuVar13,ppppbVar17
                 ,param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x1c)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x1d];
    puVar8[0x1d] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_a8,*(long *)*puVar21 + 8,(long ****)"set_txt_gsp_count",ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x1e)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x1f];
    puVar8[0x1f] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_a8,*(long *)*puVar21 + 8,(long ****)"set_txt_gold",ppuVar13,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x20)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x21];
    puVar8[0x21] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  uVar14 = 0;
  FUN_7103776640(&local_b8,*(long *)*puVar21 + 8,(byte ****)"set_parts_playericon_%02d",0,ppppbVar17
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_icon",uVar14,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x22)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x23];
    puVar8[0x23] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  plVar10 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar10 + 0x18);
    *(undefined ***)((long)plVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar10 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  uVar14 = 1;
  FUN_7103776640(&local_b8,*(long *)*puVar21 + 8,(byte ****)"set_parts_playericon_%02d",1,ppppbVar17
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_icon",uVar14,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x24)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x25];
    puVar8[0x25] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  plVar10 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar10 + 0x18);
    *(undefined ***)((long)plVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar10 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  uVar14 = 2;
  FUN_7103776640(&local_b8,*(long *)*puVar21 + 8,(byte ****)"set_parts_playericon_%02d",2,ppppbVar17
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_icon",uVar14,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x26)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x27];
    puVar8[0x27] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  plVar10 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar10 + 0x18);
    *(undefined ***)((long)plVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar10 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  pppplVar15 = (long ****)0x3;
  FUN_7103776640(&local_b8,*(long *)*puVar21 + 8,(byte ****)"set_parts_playericon_%02d",3,ppppbVar17
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_icon",pppplVar15,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x28)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x29];
    puVar8[0x29] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  plVar10 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar10 + 0x18);
    *(undefined ***)((long)plVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar10 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  FUN_7103776640(&local_b8,*(long *)*puVar21 + 8,(byte ****)"set_key_help_02",pppplVar15,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_txt_icon",pppplVar15,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x2a)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x2b];
    puVar8[0x2b] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_txt_help",pppplVar15,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_a0;
  if (&local_a8 != (long *********)(puVar8 + 0x2c)) {
    local_a0 = (undefined8 *)0x0;
    uVar6 = puVar8[0x2d];
    puVar8[0x2d] = puVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  puVar9 = local_a0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  local_a0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  plVar10 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar10 + 0x18);
    *(undefined ***)((long)plVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar10 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  FUN_7103776910(&local_a8,*(long *)*puVar21 + 8,(long ****)"set_fxui_iconflash_00",pppplVar15,
                 ppppbVar17,param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if ((long *)*local_a0 != (long *)0x0) {
    plVar10 = FUN_710377aae0((long *)*local_a0);
    if (plVar10 != (long *)0x0) {
      *(undefined4 *)(plVar10 + 0x24) = 0x2000000;
    }
    plVar10 = FUN_710377aae0((long *)*local_a0);
    if (plVar10 != (long *)0x0) {
      *(undefined1 *)((long)plVar10 + 0x13f) = 1;
    }
    puVar9 = local_a0;
    if (&local_a8 != (long *********)(puVar8 + 0x2e)) {
      *(undefined8 *)puVar8[0x2f] = *local_a0;
      *(undefined8 *)(puVar8[0x2f] + 8) = local_a0[1];
      *(undefined8 *)(puVar8[0x2f] + 0x10) = local_a0[2];
      *(undefined8 *)(puVar8[0x2f] + 0x18) = local_a0[3];
    }
  }
  local_a0 = (undefined8 *)0x0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  if (puVar9 != (undefined8 *)0x0) {
    local_a0 = (undefined8 *)0x0;
    local_a8 = (long ********)&PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_a8,*(long *)*puVar21 + 8,(long ****)"set_fxui_score",pppplVar15,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  if ((long *)*local_a0 != (long *)0x0) {
    plVar10 = FUN_710377aae0((long *)*local_a0);
    if (plVar10 != (long *)0x0) {
      *(undefined4 *)(plVar10 + 0x24) = 0x2000000;
    }
    plVar10 = FUN_710377aae0((long *)*local_a0);
    if (plVar10 != (long *)0x0) {
      *(undefined1 *)((long)plVar10 + 0x13f) = 1;
    }
    puVar9 = local_a0;
    if (&local_a8 != (long *********)(puVar8 + 0x30)) {
      *(undefined8 *)puVar8[0x31] = *local_a0;
      *(undefined8 *)(puVar8[0x31] + 8) = local_a0[1];
      *(undefined8 *)(puVar8[0x31] + 0x10) = local_a0[2];
      *(undefined8 *)(puVar8[0x31] + 0x18) = local_a0[3];
    }
  }
  local_a0 = (undefined8 *)0x0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  if (puVar9 != (undefined8 *)0x0) {
    local_a0 = (undefined8 *)0x0;
    local_a8 = (long ********)&PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_a8,*(long *)*puVar21 + 8,(long ****)"set_fxui_iconflash_01",pppplVar15,
                 ppppbVar17,param_5,param_6,param_7,param_8);
  puVar9 = local_a0;
  uVar14 = extraout_x1_01;
  if ((long *)*local_a0 != (long *)0x0) {
    plVar10 = FUN_710377aae0((long *)*local_a0);
    if (plVar10 != (long *)0x0) {
      *(undefined4 *)(plVar10 + 0x24) = 0x2000000;
    }
    plVar10 = FUN_710377aae0((long *)*local_a0);
    if (plVar10 != (long *)0x0) {
      *(undefined1 *)((long)plVar10 + 0x13f) = 1;
    }
    puVar9 = local_a0;
    uVar14 = extraout_x1_02;
    if (&local_a8 != (long *********)(puVar8 + 0x32)) {
      *(undefined8 *)puVar8[0x33] = *local_a0;
      *(undefined8 *)(puVar8[0x33] + 8) = local_a0[1];
      *(undefined8 *)(puVar8[0x33] + 0x10) = local_a0[2];
      *(undefined8 *)(puVar8[0x33] + 0x18) = local_a0[3];
    }
  }
  local_a0 = (undefined8 *)0x0;
  local_a8 = (long ********)&PTR_FUN_710523d9a8;
  if (puVar9 != (undefined8 *)0x0) {
    local_a0 = (undefined8 *)0x0;
    local_a8 = (long ********)&PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)puVar9);
    uVar14 = extraout_x1_03;
  }
  lVar19 = **(long **)*puVar21;
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x18) = 0x10;
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x20) = 0x40;
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x24) = 0xbfffffff;
  puVar7[2] = &DAT_7105333600;
  *(undefined4 *)(puVar7 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar7 + 0x6c) = DAT_7105333664;
  do {
    uVar5 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar5 & 1) != 0);
  puVar7[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar7;
  FUN_71032caea0((long)puVar7,uVar14,pppplVar15,ppppbVar17,param_5,param_6,param_7,param_8);
  lVar19 = param_1[1];
  param_1[1] = (long)puVar7;
  if (lVar19 != 0) {
    FUN_71032cad20(lVar19);
    puVar7 = (undefined8 *)param_1[1];
  }
  cVar1 = DAT_71052c51e9;
  lVar19 = puVar7[0x10];
  FUN_710377a120(lVar19 + 0x150,"mel_kumite_back_btn",pppplVar15,ppppbVar17,param_5,param_6,param_7,
                 param_8);
  if (cVar1 == '\x06') {
    pcVar12 = "mel_kumite_back_chr";
  }
  else {
    pcVar12 = "mel_kumite_back_stg";
  }
  FUN_710377a120(lVar19 + 0x160,pcVar12,pppplVar15,ppppbVar17,param_5,param_6,param_7,param_8);
  uVar5 = DAT_71052cfde4;
  puVar11 = DAT_71052cc630;
  if (DAT_71052cc63a == '\0') {
    lVar19 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar19,(ulong)DAT_71052cc630);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
    }
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar6 = (ulong)DAT_71052cc63b;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar6 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6,param_7,
                   param_8);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  puVar11 = DAT_71052cfe90;
  if (DAT_71052cfe9a == '\0') {
    lVar19 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar19,(ulong)DAT_71052cfe90);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
    }
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar24 = (ulong)DAT_71052cfe9b;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar24 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[uVar6 * 2 + 0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6
                   ,param_7,param_8);
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  puVar11 = DAT_71052d36f0;
  if (DAT_71052d36fa == '\0') {
    lVar19 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar19,(ulong)DAT_71052d36f0);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
    }
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar24 = (ulong)DAT_71052d36fb;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar24 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[uVar6 * 2 + 0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6
                   ,param_7,param_8);
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  puVar11 = DAT_71052d6f50;
  if (DAT_71052d6f5a == '\0') {
    lVar19 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar19,(ulong)DAT_71052d6f50);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
    }
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar24 = (ulong)DAT_71052d6f5b;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar24 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[uVar6 * 2 + 0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6
                   ,param_7,param_8);
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  puVar11 = DAT_71052da7b0;
  if (DAT_71052da7ba == '\0') {
    lVar19 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar19,(ulong)DAT_71052da7b0);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
    }
    if (3 < (uint)uVar6) goto LAB_710147bba8;
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar24 = (ulong)DAT_71052da7bb;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar24 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[uVar6 * 2 + 0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6
                   ,param_7,param_8);
    uVar6 = (ulong)((uint)uVar6 + 1);
  }
  puVar11 = DAT_71052de010;
  if (DAT_71052de01a == '\0') {
    lVar19 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar19,(ulong)DAT_71052de010);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
    }
    if (3 < (uint)uVar6) goto LAB_710147bba8;
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar24 = (ulong)DAT_71052de01b;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar24 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[uVar6 * 2 + 0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6
                   ,param_7,param_8);
    uVar6 = (ulong)((uint)uVar6 + 1);
  }
  puVar11 = DAT_71052e1870;
  if (DAT_71052e187a == '\0') {
    lVar19 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar19,(ulong)DAT_71052e1870);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar19,0x11b1ccb807);
    }
    if (3 < (uint)uVar6) goto LAB_710147bba8;
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar24 = (ulong)DAT_71052e187b;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar19 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar19 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar24 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[uVar6 * 2 + 0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6
                   ,param_7,param_8);
    uVar6 = (ulong)((uint)uVar6 + 1);
  }
  puVar11 = DAT_71052e50d0;
  if (DAT_71052e50da == '\0') {
    lVar25 = *(long *)(lVar25 + 0x168);
    uVar4 = FUN_71032632a0(lVar25,(ulong)DAT_71052e50d0);
    if ((uVar4 & 1) != 0) {
      puVar11 = FUN_71032631a0(lVar25,0x11b1ccb807);
    }
    if (3 < (uint)uVar6) goto LAB_710147bba8;
    puVar7 = *(undefined8 **)(param_1[1] + 0x80);
    lVar25 = *(long *)(DAT_710532f730 + 8);
    uVar24 = (ulong)DAT_71052e50db;
    plVar10 = (long *)*puVar7;
    bVar2 = FUN_71032648e0(lVar25 + 0x160,(ulong)puVar11);
    if (bVar2) {
      puVar11 = FUN_71032631a0(*(long *)(lVar25 + 0x168),0x143829f67e);
    }
    ppppppppplVar16 = (long *********)(uVar24 & 0xffffffff);
    ppppbVar17 = (byte ****)0x0;
    plVar10 = FUN_710323f330(plVar10,(ulong)puVar11,(ulong)ppppppppplVar16,0,param_5,param_6,param_7
                             ,param_8);
    FUN_7103778b80(puVar7[uVar6 * 2 + 0x23],(long)plVar10,ppppppppplVar16,ppppbVar17,param_5,param_6
                   ,param_7,param_8);
    uVar6 = (ulong)((uint)uVar6 + 1);
  }
  uVar4 = (uint)uVar6 - 1;
  if (uVar4 < 4) {
    FUN_710377b010((ulong)(uint)(float)(int)uVar4,*(long *)(param_1[1] + 0x80) + 0x50);
  }
  FUN_71015435c0((long *)&local_b8,(long *)*DAT_71052c3910,0x10af089a93);
  ppuVar13 = local_b8;
  if (local_b8 != (undefined **)0x0) {
    local_a8 = (long ********)&DAT_15ac30d63f;
    uVar24 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_a8);
    if ((uVar24 & 1) == 0) {
      ppuVar13 = (undefined **)0x0;
    }
  }
  if (((DAT_71052c51e9 == '\x04') && ((DAT_71052c51b0 & 0xfe) == 10)) && (99 < (int)DAT_71052cfde4))
  {
    uVar26 = DAT_71052e8b44;
    if (0x34bbf < (int)DAT_71052e8b44) {
      uVar26 = 0x34bc0;
    }
    uVar5 = DAT_71052e8b44;
    if (0xd2e < DAT_71052e8b44 >> 6) {
      uVar5 = 0x34bc0;
    }
    *(undefined4 *)((long)param_1 + 0x18c) = 2;
    if ((((uint)uVar6 < 2) && (ppuVar13 != (undefined **)0x0)) &&
       (*(char *)((long)ppuVar13 + 0x165) == '\0')) {
      *(undefined4 *)((long)param_1 + 0x18c) = 1;
    }
    lVar25 = *(long *)(param_1[1] + 0x80);
    FUN_710377b010(0x3f800000,lVar25 + 0x30);
    if ((int)uVar26 < 0xe10) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ulong)uVar26 / 0xe10;
      uVar26 = uVar26 % 0xe10;
    }
    if ((int)uVar26 < 0x3c) {
      uVar24 = 0;
    }
    else {
      uVar24 = (ulong)uVar26 / 0x3c;
      uVar26 = uVar26 % 0x3c;
    }
    uVar5 = 0x34c25 - uVar5;
    if ((int)uVar26 < 1) {
      param_5 = (long ****)0x0;
    }
    else {
      param_5 = (long ****)(ulong)(uint)(int)((float)(int)uVar26 * 1.6666666);
    }
    if (0x3e6 < (uint)uVar6) {
      uVar6 = 999;
    }
    if (0x3e6 < (uint)uVar24) {
      uVar24 = 999;
    }
    ppppbVar17 = (byte ****)(uVar24 + uVar6 * 1000);
    FUN_710377a280(lVar25 + 0xd0,(byte *)"mel_kumite_clear_time",2);
    if (ppuVar13 != (undefined **)0x0) goto LAB_710147b7d8;
LAB_710147b8bc:
    uVar22 = 0;
    lVar25 = *(long *)(param_1[1] + 0x80) + 0x40;
LAB_710147b8cc:
    uVar26 = 0x3f800000;
  }
  else {
    lVar25 = *(long *)(param_1[1] + 0x80);
    FUN_710377b010(0,lVar25 + 0x30);
    ppppbVar17 = (byte ****)(ulong)uVar5;
    FUN_710377a280(lVar25 + 0xe0,(byte *)"mel_kumite_defeated_score",1);
    if (ppuVar13 == (undefined **)0x0) goto LAB_710147b8bc;
LAB_710147b7d8:
    uVar22 = *(undefined1 *)((long)ppuVar13 + 0x163);
    lVar25 = *(long *)(param_1[1] + 0x80) + 0x40;
    if (*(char *)((long)ppuVar13 + 0x164) == '\0') goto LAB_710147b8cc;
    uVar26 = 0;
  }
  FUN_710377b010((ulong)uVar26,lVar25);
  *(undefined1 *)((long)param_1 + 0x18a) = uVar22;
  if (DAT_71052c51e9 == '\x06') {
    if (uVar4 < 4) {
      uVar6 = 0xc000b000a0008;
      goto LAB_710147b944;
    }
LAB_710147b98c:
    FUN_710377b010(0,*(long *)(param_1[1] + 0x80) + 0x60);
  }
  else {
    if (DAT_71052c51e9 == '\x05') {
      if (uVar4 < 4) {
        uVar6 = 0x110010000f000d;
        goto LAB_710147b944;
      }
      goto LAB_710147b98c;
    }
    if ((DAT_71052c51e9 != '\x04') || (3 < uVar4)) goto LAB_710147b98c;
    uVar6 = 0x7000600050003;
LAB_710147b944:
    uVar6 = uVar6 >> (((ulong)uVar4 & 3) << 4);
    if (*(int *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + (uVar6 & 0xffff) * 0x1a8 +
                0x20) == 0) goto LAB_710147b98c;
    if (uVar5 == 0) {
      ppppbVar17 = (byte ****)0x1;
    }
    else {
      uVar5 = FUN_71017d1480(**(long **)(*DAT_7105314510 + 0x68),(ushort)uVar6,uVar5);
      ppppbVar17 = (byte ****)(ulong)uVar5;
    }
    lVar25 = *(long *)(param_1[1] + 0x80);
    FUN_710377b010(0x3f800000,lVar25 + 0x60);
    FUN_710377b010(0,lVar25 + 0x70);
    FUN_710377a280(lVar25 + 0xf0,(byte *)"mel_kumite_world_pw_score",1);
  }
  uVar5 = DAT_71052cc5ec;
  lVar25 = *(long *)(param_1[1] + 0x80);
  FUN_710377b010(0x3f800000,lVar25 + 0x80);
  plVar10 = *(long **)(*(long *)(lVar25 + 0x108) + 0x10);
  if (plVar10 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (long ********)0x0;
    local_a0 = (undefined8 *)0x0;
    uVar5 = FUN_71037ad940((long)&local_a8,0x20,0,uVar5,0,0);
    ppppbVar17 = (byte ****)0x0;
    FUN_71037a2270(plVar10,(ushort *)&local_a8,uVar5,0);
  }
  lVar25 = param_1[1];
  FUN_7103775dc0((long *)**(undefined8 **)(*(long *)(lVar25 + 0x80) + 8),0,(long ****)0x9004,
                 ppppbVar17,param_5,param_6,param_7,param_8);
  *(undefined1 *)(lVar25 + 0x70) = 0;
  if (*(uint *)((long)param_1 + 0x174) < 0x13) {
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x174) * 4 + 0x128) = 2;
    if (local_b0 != (long *)0x0) {
      plVar10 = local_b0 + 1;
      do {
        lVar25 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar25 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
        std::__shared_weak_count::__release_weak();
      }
    }
    return;
  }
LAB_710147bba8:
                    /* WARNING: Subroutine does not return */
  abort();
}

