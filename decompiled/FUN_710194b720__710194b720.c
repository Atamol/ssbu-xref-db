// addr:      710194b720
// offset:    0x194b720
// name:      FUN_710194b720
// mangled:   
// signature: undefined __cdecl FUN_710194b720(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_710194b720(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  byte ***pppbVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte **ppbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ushort uVar18;
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
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  long *********ppppppppplVar19;
  long ****pppplVar20;
  undefined *puVar21;
  byte ****ppppbVar22;
  char *pcVar23;
  undefined8 uVar24;
  long ****pppplVar25;
  code *pcVar26;
  byte ****ppppbVar27;
  long *plVar28;
  ulong *puVar29;
  long lVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  long ********pppppppplVar35;
  long lVar36;
  long lVar37;
  byte ****ppppbVar38;
  long *plVar39;
  byte ***pppbVar40;
  long ****pppplVar41;
  undefined1 auVar42 [16];
  undefined **local_220;
  ulong local_218;
  byte ***local_210;
  byte ***local_208;
  undefined **local_200;
  byte ***local_1f8 [3];
  undefined ***local_1e0;
  undefined8 local_1b0;
  ulong local_1a8;
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
  ulong *puVar30;
  
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    if (DAT_710532a860 == (long *)0x0) {
      if (*(uint *)(param_1 + 0x154) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x154) * 4 + 0x108) = 0xb;
        return;
      }
      goto LAB_710194d73c;
    }
    *(long *)(param_1 + 0x198) = *DAT_710532a860 + 0x5f390;
  }
  lVar36 = *(long *)(*(long *)(*DAT_7105329f98 + 0x20) + 8);
  uVar10 = FUN_710323cb80(lVar36,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  while ((uVar10 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar10 = FUN_710323cb80(lVar36,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  lVar36 = *(long *)(*DAT_7105329fa0 + 0x8d0);
  plVar1 = (long *)(param_1 + 0x168);
  if ((ulong)*(byte *)(param_1 + 0x1a0) < (ulong)(*(long *)(*DAT_7105329fa0 + 0x8d8) - lVar36 >> 4))
  {
    lVar37 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar8 = FUN_71032a7800(lVar37,*(ulong *)(lVar36 + (ulong)*(byte *)(param_1 + 0x1a0) * 0x10));
    if ((uint)((int)((ulong)(*(long *)(lVar37 + 0x28) - *(long *)(lVar37 + 0x20)) >> 6) *
              -0x33333333) <= uVar8) goto LAB_710194b838;
    uVar18 = *(ushort *)(*(long *)(lVar37 + 0x20) + (ulong)uVar8 * 0x140);
  }
  else {
    lVar37 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
LAB_710194b838:
    uVar18 = 0xffff;
  }
  uVar10 = FUN_71032a9470(lVar37,uVar18);
  FUN_710323d580(plVar1,uVar10,(byte ****)&DAT_0000001a,param_4,param_5,param_6,param_7,param_8);
  lVar36 = *plVar1;
  pppplVar25 = (long ****)0x0;
  FUN_710323beb0(lVar36,(ulong *)&DAT_7104545bf0,(long)*(int *)(lVar36 + 0x70),
                 (ulong)*(uint *)(lVar36 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff146fb788a7,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff161abeda7f,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff17aa490e0b,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff149f929ac1,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff166cbc8009,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff1429a1c171,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff13c26d485c,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff16a40aee0d,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff164cb6a328,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff1713945e8e,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff132797909b,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff1872c0169a,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff14a182eb21,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff136e70f986,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff1ef8a9e952,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff1d7837f9cd,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  local_1b0 = (undefined **)FUN_7103238e70(0x71ffff172bf1ded9,0x13);
  if (((ulong)local_1b0 & 0xffffffffff) != 0) {
    lVar36 = *plVar1;
    FUN_710323c4e0(lVar36,&local_1b0,(long *********)(long)*(int *)(lVar36 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  }
  lVar36 = *(long *)(param_1 + 0x168);
  FUN_710323c1c0(lVar36,(ulong *)&DAT_7104545be8,(long *********)(long)*(int *)(lVar36 + 0x70),
                 (byte ****)(ulong)*(uint *)(lVar36 + 0x68),pppplVar25,param_6,param_7,param_8);
  lVar36 = *(long *)(param_1 + 0x168);
  ppppbVar38 = (byte ****)(ulong)*(byte *)(param_1 + 0x1a0);
  pppplVar25 = (long ****)0x0;
  FUN_710323beb0(lVar36,(ulong *)&DAT_7104545c70,(long)*(int *)(lVar36 + 0x70),
                 (ulong)*(uint *)(lVar36 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1b0,0x1b,0);
  ppppppppplVar19 = (long *********)&DAT_7104359935;
  FUN_7103239d20((uint *)&local_1b0,"%s_%02d.bntx");
  if (local_1b0._4_4_ == 0) {
    uVar10 = 0;
  }
  else {
    uVar8 = 0xffffffff;
    puVar30 = &local_1a8;
    do {
      puVar29 = (ulong *)((long)puVar30 + 1);
      bVar3 = (byte)*puVar30;
      uVar34 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar34 = (uint)bVar3;
      }
      uVar8 = (&DAT_7104754084)[(uVar34 ^ uVar8) & 0xff] ^ uVar8 >> 8;
      puVar30 = puVar29;
    } while (puVar29 < (ulong *)((long)&local_1a8 + (ulong)local_1b0._4_4_));
    uVar10 = (ulong)~uVar8;
  }
  local_1b0 = (undefined **)(uVar10 | ((long)(int)local_1b0._4_4_ & 0xffU) << 0x20);
  uVar24 = extraout_x1_00;
  if ((long ********)local_1b0 != (long ********)0x0) {
    lVar36 = *plVar1;
    ppppppppplVar19 = (long *********)(long)*(int *)(lVar36 + 0x70);
    ppppbVar38 = (byte ****)(ulong)*(uint *)(lVar36 + 0x68);
    FUN_710323c4e0(lVar36,&local_1b0,ppppppppplVar19,ppppbVar38,pppplVar25,param_6,param_7,param_8);
    uVar24 = extraout_x1_01;
  }
  lVar36 = *plVar1;
  uVar10 = FUN_710323cb80(lVar36,uVar24,ppppppppplVar19,ppppbVar38,pppplVar25,param_6,param_7,
                          param_8);
  while ((uVar10 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar10 = FUN_710323cb80(lVar36,extraout_x1_02,ppppppppplVar19,ppppbVar38,pppplVar25,param_6,
                            param_7,param_8);
  }
  pppppppplVar35 = *(long *********)(param_1 + 0x198);
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar38,pppplVar25,param_6,
                           param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200 = (undefined **)((ulong)local_200 & 0xffffffff00000000);
      local_1b0 = (undefined **)&DAT_00000088;
      ppppppppplVar19 = (long *********)&local_1b0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar38,pppplVar25,
                                   param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_710194bd94;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710194bd94:
  bVar3 = *(byte *)(param_1 + 0x1a0);
  pppplVar41 = (long ****)(ulong)bVar3;
  *puVar11 = &PTR_FUN_71050b1ec0;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[0xf] = plVar1;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  if (pppppppplVar35 == (long ********)0x0) {
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x2e8,(long ****)ppppppppplVar19,ppppbVar38,pppplVar25,param_6,
                             param_7,param_8);
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_200 = (undefined **)((ulong)local_200 & 0xffffffff00000000);
        local_1b0 = (undefined **)0x2e8;
        pppplVar20 = (long ****)&local_1b0;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
        if (((uVar10 & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x2e8,pppplVar20,ppppbVar38,pppplVar25,param_6,param_7,
                                     param_8), puVar12 != (undefined8 *)0x0)) goto LAB_710194bed0;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_710194bed0:
    ppppbVar38 = (byte ****)&local_1b0;
    local_1b0 = (undefined **)0x0;
    FUN_7101e6c410(puVar12,plVar1,bVar3,ppppbVar38,pppplVar25,param_6,param_7,param_8);
    puVar11[0x10] = puVar12;
    puVar11[2] = &DAT_7105333600;
    uVar5 = DAT_7105333664;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = uVar5;
    do {
      uVar8 = DAT_7105333650;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar7) {
        DAT_7105333650 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      uVar24 = extraout_x1_04;
    } while (cVar4 != '\0' || (uVar8 & 1) != 0);
  }
  else {
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x2e8,(long ****)ppppppppplVar19,ppppbVar38,pppplVar25,param_6,
                             param_7,param_8);
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_200 = (undefined **)((ulong)local_200 & 0xffffffff00000000);
        local_1b0 = (undefined **)0x2e8;
        pppplVar20 = (long ****)&local_1b0;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
        if (((uVar10 & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x2e8,pppplVar20,ppppbVar38,pppplVar25,param_6,param_7,
                                     param_8), puVar12 != (undefined8 *)0x0)) goto LAB_710194be24;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_710194be24:
    ppppbVar38 = (byte ****)&local_1b0;
    local_1b0 = (undefined **)pppppppplVar35;
    FUN_7101e6c410(puVar12,plVar1,bVar3,ppppbVar38,pppplVar25,param_6,param_7,param_8);
    puVar11[0x10] = puVar12;
    puVar11[2] = &DAT_7105333600;
    uVar5 = DAT_7105333664;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = uVar5;
    do {
      uVar8 = DAT_7105333650;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar7) {
        DAT_7105333650 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      uVar24 = extraout_x1_03;
    } while (cVar4 != '\0' || (uVar8 & 1) != 0);
  }
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,uVar24,pppplVar41,ppppbVar38,pppplVar25,param_6,param_7,param_8);
  lVar36 = *(long *)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 0x170) = puVar11;
  if (lVar36 != 0) {
    FUN_71032cad20(lVar36);
  }
  uVar18 = *(ushort *)(**(long **)(*(long *)(param_1 + 400) + 0x10) + 0xf1);
  uVar2 = 0;
  if ((uVar18 & 0xff) != 0) {
    uVar2 = (char)(uVar18 >> 8);
  }
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x170) + 0x80);
  *(undefined1 *)((long)puVar11 + 0x2da) = uVar2;
  *(undefined1 *)((long)puVar11 + 0x2d9) = 1;
  lVar36 = DAT_710532f8b8;
  lVar37 = *(long *)*puVar11;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_710532f4d8), iVar9 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar31 = *(long *)(lVar37 + 0x28);
    if (lVar31 == 0) goto LAB_710194bff4;
LAB_710194bfb0:
    lVar32 = lVar37 + 0x28;
    do {
      bVar7 = (*(ulong *)(lVar31 + 0x20) & 0xfffffffffc) < 0x10e908f41c;
      if (!bVar7) {
        lVar32 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar7 * 8);
    } while (lVar31 != 0);
    if ((lVar32 == lVar37 + 0x28) || (0x10e908f41c < (*(ulong *)(lVar32 + 0x20) & 0xffffffffff)))
    goto LAB_710194bff4;
    ppppppppplVar19 = (long *********)(lVar32 + 0x28);
  }
  else {
    lVar31 = *(long *)(lVar37 + 0x28);
    if (lVar31 != 0) goto LAB_710194bfb0;
LAB_710194bff4:
    ppppppppplVar19 = (long *********)&DAT_710532f4a4;
  }
  if ((*(int *)ppppppppplVar19 != 0xffffff) &&
     (iVar9 = FUN_710330a8f0(*(long **)(lVar36 + 8),(ulong *)&DAT_7104545be8,(long ****)0x6,
                             ppppbVar38,pppplVar25,param_6,param_7,param_8), iVar9 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar9,ppppppppplVar19,ppppbVar38,
                   pppplVar25,param_6,param_7,param_8);
  }
  puVar21 = &DAT_7104545bf0;
  uVar24 = 1;
  FUN_71032cbf30(puVar11 + 0x34,*(long *)*puVar11,(ulong *)&DAT_7104545bf0,(byte ****)0x1,pppplVar25
                 ,param_6,param_7,param_8);
  lVar36 = *(long *)puVar11[0x34];
  puVar12 = puVar11 + 0x35;
  if (puVar12 != (undefined8 *)(lVar36 + 8)) {
    *(undefined8 *)puVar11[0x36] = **(undefined8 **)(lVar36 + 0x10);
    *(undefined8 *)(puVar11[0x36] + 8) = *(undefined8 *)(*(long *)(lVar36 + 0x10) + 8);
    lVar37 = *(long *)(lVar36 + 0x10);
    lVar36 = puVar11[0x36];
    if (lVar36 != lVar37) {
      **(undefined8 **)(lVar36 + 0x18) = **(undefined8 **)(lVar37 + 0x18);
      *(undefined8 *)(*(long *)(lVar36 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar37 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar36 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x18);
    }
  }
  lVar36 = **(long **)puVar11[0x34];
  *(undefined4 *)(*(long *)(lVar36 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar36 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar36 + 0x600) + 0x18) = 0xff0000f;
  FUN_7103776640(&local_210,(long)puVar12,(byte ****)"header_band",puVar21,uVar24,pppplVar25,param_6
                 ,param_7,param_8);
  bVar3 = *(byte *)(puVar11 + 0x5c);
  FUN_7103776910(&local_200,(long)&local_210,(long ****)"set_txt_title",puVar21,uVar24,pppplVar25,
                 param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1b0,"cam_shop%d_shop_name",(ulong)bVar3,puVar21,uVar24,pppplVar25,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_200,(char *)&local_1a8,puVar21,uVar24,pppplVar25,param_6,param_7,
                 param_8);
  pppbVar6 = local_1f8[0];
  local_200 = &PTR_FUN_710523d9a8;
  local_1f8[0] = (byte ***)0x0;
  if (pppbVar6 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar6);
  }
  pppbVar6 = local_208;
  local_210 = (byte ***)&PTR_FUN_710523d988;
  local_208 = (byte ***)0x0;
  if (pppbVar6 != (byte ***)0x0) {
    ppbVar13 = pppbVar6[3];
    pppbVar6[2] = &PTR_FUN_710523d9a8;
    pppbVar6[3] = (byte **)0x0;
    if (ppbVar13 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar13);
    }
    FUN_710392eb40((ulong)pppbVar6);
  }
  FUN_7101e965f0((long)(puVar11 + 0x37),puVar12,(long ****)"selector_menu","set_parts_menu_%02d",
                 pppplVar25,param_6,param_7,param_8);
  *(undefined1 *)(puVar11[0x38] + 8) = 1;
  *(undefined1 *)(puVar11[0x38] + 0x50) = 0;
  pppplVar25 = (long ****)(ulong)*(byte *)(puVar11 + 0x5c);
  ppppbVar38 = (byte ****)0x3;
  FUN_7101e945c0(puVar11 + 0x39,(long)puVar12,(byte ****)"set_parts_talk",3,pppplVar25,param_6,
                 param_7,param_8);
  lVar36 = *(long *)(*DAT_7105329fa0 + 0x8d0);
  if ((ulong)*(byte *)(puVar11 + 0x5c) < (ulong)(*(long *)(*DAT_7105329fa0 + 0x8d8) - lVar36 >> 4))
  {
    lVar37 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar8 = FUN_71032a7800(lVar37,*(ulong *)(lVar36 + (ulong)*(byte *)(puVar11 + 0x5c) * 0x10));
    if ((uint)((int)((ulong)(*(long *)(lVar37 + 0x28) - *(long *)(lVar37 + 0x20)) >> 6) *
              -0x33333333) <= uVar8) goto LAB_710194c27c;
    uVar18 = *(ushort *)(*(long *)(lVar37 + 0x20) + (ulong)uVar8 * 0x140);
  }
  else {
LAB_710194c27c:
    uVar18 = 0xffff;
  }
  FUN_7101e95dd0(puVar11 + 0x39,uVar18,(long *)*puVar11,ppppbVar38,pppplVar25,param_6,param_7,
                 param_8);
  FUN_7101e941f0(puVar11 + 0x3d,(long)puVar12,(byte ****)"set_parts_sp",ppppbVar38,pppplVar25,
                 param_6,param_7,param_8);
  iVar9 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
  lVar36 = *(long *)(puVar11[0x3d] + 0x10);
  if (*(int *)(lVar36 + 0x94) != iVar9) {
    *(int *)(lVar36 + 0x94) = iVar9;
    FUN_710377a280(lVar36,(byte *)(lVar36 + 0x18),1);
  }
  FUN_7101e95110(puVar11 + 0x3f,puVar12,(long ****)"selector_return",(byte ****)"set_btn_return",
                 pppplVar25,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(puVar11[0x3f] + 0x10),0x710445516c);
  (**(code **)(**(long **)puVar11[0x3f] + 0x60))(*(long **)puVar11[0x3f],0);
  local_1a0 = 1;
  local_19c = 1;
  local_19a = 1;
  local_198 = &DAT_41f0000000000000;
  local_1b0 = (undefined **)0x0;
  local_1a8 = 0x101;
  local_190 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_200 = (undefined **)&DAT_7105186040;
  local_1e0 = &local_200;
  FUN_7101989a30((long *)&local_200,alStack_150);
  if (&local_200 == local_1e0) {
    pcVar26 = (code *)(*local_1e0)[4];
LAB_710194c3bc:
    (*pcVar26)();
  }
  else if (local_1e0 != (undefined ***)0x0) {
    pcVar26 = (code *)(*local_1e0)[5];
    goto LAB_710194c3bc;
  }
  plVar28 = puVar11 + 0x41;
  local_200 = (undefined **)&DAT_71051860d0;
  local_1e0 = &local_200;
  FUN_7101989a30((long *)&local_200,alStack_f0);
  if (&local_200 == local_1e0) {
    pcVar26 = (code *)(*local_1e0)[4];
LAB_710194c410:
    (*pcVar26)();
  }
  else if (local_1e0 != (undefined ***)0x0) {
    pcVar26 = (code *)(*local_1e0)[5];
    goto LAB_710194c410;
  }
  pcVar23 = "selector_slot";
  ppppbVar38 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar28,puVar12,(long ****)"selector_slot",ppppbVar38,pppplVar25,param_6,param_7,
                 param_8);
  uVar10 = 0;
  do {
    FUN_71003a4ca0((uint *)&local_200,"set_parts_slot_%02d",uVar10 & 0xffffffff,pcVar23,ppppbVar38,
                   pppplVar25,param_6,param_7,param_8);
    iVar9 = (int)uVar10;
    ppppbVar22 = local_1f8;
    FUN_71037717d0(plVar28,iVar9,(char *)local_1f8,ppppbVar38,pppplVar25,param_6,param_7,param_8);
    lVar36 = *(long *)(*plVar28 + 0x1b8);
    if (lVar36 != 0) {
      lVar37 = *plVar28 + 0x1b8;
      lVar31 = lVar37;
      lVar32 = lVar36;
      do {
        if (iVar9 <= *(int *)(lVar32 + 0x20)) {
          lVar31 = lVar32;
        }
        lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < iVar9) * 8);
      } while (lVar32 != 0);
      if (((lVar31 != lVar37) && (*(int *)(lVar31 + 0x20) <= iVar9)) &&
         (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
        ppppbVar22 = (byte ****)0x0;
        (**(code **)(*plVar39 + 0x388))(plVar39,0);
        lVar37 = *plVar28 + 0x1b8;
        lVar36 = *(long *)(*plVar28 + 0x1b8);
      }
      lVar31 = lVar37;
      if (lVar36 != 0) {
        do {
          if (iVar9 <= *(int *)(lVar36 + 0x20)) {
            lVar31 = lVar36;
          }
          lVar36 = *(long *)(lVar36 + (ulong)(*(int *)(lVar36 + 0x20) < iVar9) * 8);
        } while (lVar36 != 0);
        if (((lVar31 != lVar37) && (*(int *)(lVar31 + 0x20) <= iVar9)) &&
           (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
          (**(code **)(*plVar39 + 0x208))(plVar39,1);
          ppppbVar22 = (byte ****)0x0;
          (**(code **)(*plVar39 + 0x388))(plVar39,0);
        }
      }
    }
    puVar14 = (undefined8 *)
              FUN_710392e290(0x10,0x100,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    uVar24 = extraout_x1_05;
    if (puVar14 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&DAT_00000100;
        ppppbVar22 = &local_210;
        auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        uVar24 = auVar42._8_8_;
        if (((auVar42._0_8_ & 1) != 0) &&
           (puVar14 = (undefined8 *)
                      FUN_710392e290(0x10,0x100,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), uVar24 = extraout_x1_06,
           puVar14 != (undefined8 *)0x0)) goto LAB_710194c5ac;
      }
      puVar14 = (undefined8 *)0x0;
    }
LAB_710194c5ac:
    FUN_7103776290(puVar14,uVar24,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                   param_8);
    FUN_7103776290(puVar14 + 2,extraout_x1_07,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                   param_7,param_8);
    FUN_7103776290(puVar14 + 4,extraout_x1_08,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                   param_7,param_8);
    FUN_7103776290(puVar14 + 6,extraout_x1_09,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                   param_7,param_8);
    puVar14[8] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&SUB_00000020;
        ppppbVar22 = &local_210;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), puVar15 != (undefined8 *)0x0))
        goto LAB_710194c620;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_710194c620:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar14[9] = puVar15;
    puVar14[10] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&SUB_00000020;
        ppppbVar22 = &local_210;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), puVar15 != (undefined8 *)0x0))
        goto LAB_710194c67c;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_710194c67c:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar14[0xb] = puVar15;
    puVar14[0xc] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&SUB_00000020;
        ppppbVar22 = &local_210;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), puVar15 != (undefined8 *)0x0))
        goto LAB_710194c6d8;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_710194c6d8:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar14[0xd] = puVar15;
    puVar14[0xe] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&SUB_00000020;
        ppppbVar22 = &local_210;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), puVar15 != (undefined8 *)0x0))
        goto LAB_710194c734;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_710194c734:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar14[0xf] = puVar15;
    puVar14[0x10] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    uVar24 = extraout_x1_10;
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&SUB_00000020;
        ppppbVar22 = &local_210;
        auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        uVar24 = auVar42._8_8_;
        if (((auVar42._0_8_ & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), uVar24 = extraout_x1_11,
           puVar15 != (undefined8 *)0x0)) goto LAB_710194c790;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_710194c790:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar14[0x11] = puVar15;
    FUN_7103776290(puVar14 + 0x12,uVar24,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7
                   ,param_8);
    FUN_7103776290(puVar14 + 0x14,extraout_x1_12,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6
                   ,param_7,param_8);
    FUN_7103776290(puVar14 + 0x16,extraout_x1_13,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6
                   ,param_7,param_8);
    FUN_7103776290(puVar14 + 0x18,extraout_x1_14,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6
                   ,param_7,param_8);
    puVar14[0x1a] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&SUB_00000020;
        ppppbVar22 = &local_210;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), puVar15 != (undefined8 *)0x0))
        goto LAB_710194c818;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_710194c818:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    plVar39 = puVar11 + uVar10 + 0x42;
    puVar14[0x1b] = puVar15;
    puVar14[0x1c] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,param_7,
                             param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_210 = (byte ***)&SUB_00000020;
        ppppbVar22 = &local_210;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,ppppbVar38,pppplVar25,param_6,
                                     param_7,param_8), puVar15 != (undefined8 *)0x0))
        goto LAB_710194c878;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_710194c878:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined8 *)((long)puVar14 + 0xf5) = 0;
    puVar14[0x1d] = puVar15;
    puVar14[0x1e] = 0;
    puVar15 = (undefined8 *)*plVar39;
    *plVar39 = (long)puVar14;
    if (puVar15 != (undefined8 *)0x0) {
      uVar16 = puVar15[0x1d];
      puVar15[0x1c] = &PTR_FUN_710523d9a8;
      puVar15[0x1d] = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0x1b];
      puVar15[0x1a] = &PTR_FUN_710523d9a8;
      puVar15[0x1b] = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0x19];
      puVar15[0x18] = &PTR_FUN_710523d988;
      puVar15[0x19] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0x17];
      puVar15[0x16] = &PTR_FUN_710523d988;
      puVar15[0x17] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0x15];
      puVar15[0x14] = &PTR_FUN_710523d988;
      puVar15[0x15] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0x13];
      puVar15[0x12] = &PTR_FUN_710523d988;
      puVar15[0x13] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0x11];
      puVar15[0x10] = &PTR_FUN_710523d9a8;
      puVar15[0x11] = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0xf];
      puVar15[0xe] = &PTR_FUN_710523d9a8;
      puVar15[0xf] = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0xd];
      puVar15[0xc] = &PTR_FUN_710523d9a8;
      puVar15[0xd] = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[0xb];
      puVar15[10] = &PTR_FUN_710523d9a8;
      puVar15[0xb] = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[9];
      puVar15[8] = &PTR_FUN_710523d9a8;
      puVar15[9] = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[7];
      puVar15[6] = &PTR_FUN_710523d988;
      puVar15[7] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[5];
      puVar15[4] = &PTR_FUN_710523d988;
      puVar15[5] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[3];
      puVar15[2] = &PTR_FUN_710523d988;
      puVar15[3] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      uVar16 = puVar15[1];
      *puVar15 = &PTR_FUN_710523d988;
      puVar15[1] = 0;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)puVar15);
    }
    FUN_7103776640(&local_210,(long)puVar12,local_1f8,ppppbVar22,ppppbVar38,pppplVar25,param_6,
                   param_7,param_8);
    pppbVar6 = local_208;
    ppppbVar27 = (byte ****)*plVar39;
    if (ppppbVar27 != &local_210) {
      local_208 = (byte ***)0x0;
      pppbVar40 = ppppbVar27[1];
      ppppbVar27[1] = pppbVar6;
      if (pppbVar40 != (byte ***)0x0) {
        ppbVar13 = pppbVar40[3];
        pppbVar40[2] = &PTR_FUN_710523d9a8;
        pppbVar40[3] = (byte **)0x0;
        if (ppbVar13 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar13);
        }
        FUN_710392eb40((ulong)pppbVar40);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      ppbVar13 = pppbVar6[3];
      pppbVar6[2] = &PTR_FUN_710523d9a8;
      pppbVar6[3] = (byte **)0x0;
      if (ppbVar13 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar13);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    lVar37 = *plVar39;
    FUN_7103776640(&local_210,lVar37,(byte ****)"set_parts_supportitem",ppppbVar22,ppppbVar38,
                   pppplVar25,param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0x90) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0x98);
      *(byte ****)(lVar36 + 0x98) = pppbVar6;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      uVar16 = *(ulong *)((long)pppbVar6 + 0x18);
      *(undefined ***)((long)pppbVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppbVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776640(&local_210,lVar37,(byte ****)"set_parts_energy",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0xa0) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0xa8);
      *(byte ****)(lVar36 + 0xa8) = pppbVar6;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      uVar16 = *(ulong *)((long)pppbVar6 + 0x18);
      *(undefined ***)((long)pppbVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppbVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776640(&local_210,lVar37,(byte ****)"set_parts_skillpiece",ppppbVar22,ppppbVar38,
                   pppplVar25,param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0xb0) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0xb8);
      *(byte ****)(lVar36 + 0xb8) = pppbVar6;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      uVar16 = *(ulong *)((long)pppbVar6 + 0x18);
      *(undefined ***)((long)pppbVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppbVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776640(&local_210,lVar37,(byte ****)"set_parts_excl",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0xc0) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 200);
      *(byte ****)(lVar36 + 200) = pppbVar6;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      uVar16 = *(ulong *)((long)pppbVar6 + 0x18);
      *(undefined ***)((long)pppbVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppbVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776910(&local_210,lVar37,(long ****)"set_rep_spirit",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0xd0) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0xd8);
      *(byte ****)(lVar36 + 0xd8) = pppbVar6;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d9a8;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776910(&local_210,lVar37,(long ****)"set_rep_shadow",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0xe0) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0xe8);
      *(byte ****)(lVar36 + 0xe8) = pppbVar6;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d9a8;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776910(&local_210,lVar37,(long ****)"set_txt_category",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0x40) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0x48);
      *(byte ****)(lVar36 + 0x48) = pppbVar6;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d9a8;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776910(&local_210,lVar37,(long ****)"set_txt_price_sp",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0x70) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0x78);
      *(byte ****)(lVar36 + 0x78) = pppbVar6;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d9a8;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776640(&local_220,lVar37,(byte ****)"set_parts_discount",ppppbVar22,ppppbVar38,
                   pppplVar25,param_6,param_7,param_8);
    FUN_7103776910(&local_210,(long)&local_220,(long ****)"set_txt_value",ppppbVar22,ppppbVar38,
                   pppplVar25,param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0x80) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0x88);
      *(byte ****)(lVar36 + 0x88) = pppbVar6;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d9a8;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar6);
    }
    uVar16 = local_218;
    local_220 = &PTR_FUN_710523d988;
    local_218 = 0;
    if (uVar16 != 0) {
      uVar17 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar16);
    }
    FUN_7103776640(&local_210,lVar37,(byte ****)"set_parts_new",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0x30) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0x38);
      *(byte ****)(lVar36 + 0x38) = pppbVar6;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      uVar16 = *(ulong *)((long)pppbVar6 + 0x18);
      *(undefined ***)((long)pppbVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppbVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776640(&local_210,lVar37,(byte ****)"set_parts_atr_bg",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0x10) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0x18);
      *(byte ****)(lVar36 + 0x18) = pppbVar6;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      uVar16 = *(ulong *)((long)pppbVar6 + 0x18);
      *(undefined ***)((long)pppbVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppbVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103776640(&local_210,lVar37,(byte ****)"set_parts_class",ppppbVar22,ppppbVar38,pppplVar25,
                   param_6,param_7,param_8);
    pppbVar6 = local_208;
    lVar36 = *plVar39;
    if ((byte ****)(lVar36 + 0x20) != &local_210) {
      local_208 = (byte ***)0x0;
      uVar16 = *(ulong *)(lVar36 + 0x28);
      *(byte ****)(lVar36 + 0x28) = pppbVar6;
      if (uVar16 != 0) {
        uVar17 = *(ulong *)(uVar16 + 0x18);
        *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar16 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar16);
      }
    }
    pppbVar6 = local_208;
    local_210 = (byte ***)&PTR_FUN_710523d988;
    local_208 = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      uVar16 = *(ulong *)((long)pppbVar6 + 0x18);
      *(undefined ***)((long)pppbVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppbVar6 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40((ulong)pppbVar6);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar37 + 8),0x710436c9fe);
    lVar36 = puVar11[uVar10 + 0x42];
    if (lVar36 != 0) {
      FUN_7103778300(0x3f800000,*(long *)(lVar36 + 8),0x7104281165);
      FUN_7103778300(0x3f800000,*(long *)(lVar36 + 8),0x7104306de4);
      FUN_7103778300(0x3f800000,*(long *)(lVar36 + 8),0x71043176ce);
      lVar37 = *(long *)(*plVar28 + 0x1b8);
      if (lVar37 != 0) {
        lVar31 = *plVar28 + 0x1b8;
        lVar32 = lVar31;
        lVar33 = lVar37;
        do {
          if (iVar9 <= *(int *)(lVar33 + 0x20)) {
            lVar32 = lVar33;
          }
          lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < iVar9) * 8);
        } while (lVar33 != 0);
        if (((lVar32 != lVar31) && (*(int *)(lVar32 + 0x20) <= iVar9)) &&
           (plVar39 = *(long **)(lVar32 + 0x28), plVar39 != (long *)0x0)) {
          (**(code **)(*plVar39 + 0x1f8))(plVar39,0);
          (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
          lVar31 = *plVar28 + 0x1b8;
          lVar37 = *(long *)(*plVar28 + 0x1b8);
        }
        lVar32 = lVar31;
        if (lVar37 != 0) {
          do {
            if (iVar9 <= *(int *)(lVar37 + 0x20)) {
              lVar32 = lVar37;
            }
            lVar37 = *(long *)(lVar37 + (ulong)(*(int *)(lVar37 + 0x20) < iVar9) * 8);
          } while (lVar37 != 0);
          if (((lVar32 != lVar31) && (*(int *)(lVar32 + 0x20) <= iVar9)) &&
             (plVar39 = *(long **)(lVar32 + 0x28), plVar39 != (long *)0x0)) {
            (**(code **)(*plVar39 + 0x208))(plVar39,0);
            (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
          }
        }
      }
      *(undefined1 *)(lVar36 + 0xf8) = 0;
    }
    pcVar23 = (char *)0x0;
    FUN_7101e6fd70((long)plVar28,(byte)uVar10,0,ppppbVar38,pppplVar25,param_6,param_7,param_8);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 4);
  (**(code **)(*(long *)*plVar28 + 0x60))((long *)*plVar28,0);
  (**(code **)(*(long *)*plVar28 + 0x70))((long *)*plVar28,0);
  if (alStack_c0 == local_a0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  else if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x28))();
  }
  if (alStack_f0 == local_d0) {
    pcVar26 = *(code **)(*local_d0 + 0x20);
LAB_710194d17c:
    (*pcVar26)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_d0 + 0x28);
    goto LAB_710194d17c;
  }
  if (alStack_120 == local_100) {
    pcVar26 = *(code **)(*local_100 + 0x20);
LAB_710194d1ac:
    (*pcVar26)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar26 = *(code **)(*local_100 + 0x28);
    goto LAB_710194d1ac;
  }
  if (alStack_150 == local_130) {
    pcVar26 = *(code **)(*local_130 + 0x20);
LAB_710194d1dc:
    (*pcVar26)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar26 = *(code **)(*local_130 + 0x28);
    goto LAB_710194d1dc;
  }
  if (alStack_180 == local_160) {
    pcVar26 = *(code **)(*local_160 + 0x20);
LAB_710194d20c:
    (*pcVar26)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar26 = *(code **)(*local_160 + 0x28);
    goto LAB_710194d20c;
  }
  FUN_7103776640(&local_1b0,(long)puVar12,(byte ****)"set_parts_name",pcVar23,ppppbVar38,pppplVar25,
                 param_6,param_7,param_8);
  uVar10 = local_1a8;
  if (puVar11 + 0x47 != &local_1b0) {
    local_1a8 = 0;
    uVar16 = puVar11[0x48];
    puVar11[0x48] = uVar10;
    if (uVar16 != 0) {
      uVar10 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar16);
    }
  }
  uVar10 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar10 != 0) {
    uVar16 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar10);
  }
  FUN_7103776640(&local_1b0,(long)puVar12,(byte ****)"set_parts_name_pre",pcVar23,ppppbVar38,
                 pppplVar25,param_6,param_7,param_8);
  uVar10 = local_1a8;
  if (puVar11 + 0x49 != &local_1b0) {
    local_1a8 = 0;
    uVar16 = puVar11[0x4a];
    puVar11[0x4a] = uVar10;
    if (uVar16 != 0) {
      uVar10 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar16);
    }
  }
  uVar10 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar10 != 0) {
    uVar16 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar10);
  }
  FUN_71037780e0(&local_1b0,(long)puVar12,(long ****)"name_in",pcVar23,ppppbVar38,pppplVar25,param_6
                 ,param_7,param_8);
  uVar10 = local_1a8;
  if (puVar11 + 0x4b != &local_1b0) {
    local_1a8 = 0;
    uVar16 = puVar11[0x4c];
    puVar11[0x4c] = uVar10;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  uVar10 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_71037780e0(&local_1b0,(long)puVar12,(long ****)"name_out",pcVar23,ppppbVar38,pppplVar25,
                 param_6,param_7,param_8);
  uVar10 = local_1a8;
  if (puVar11 + 0x4d != &local_1b0) {
    local_1a8 = 0;
    uVar16 = puVar11[0x4e];
    puVar11[0x4e] = uVar10;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  uVar10 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_71037780e0(&local_1b0,(long)puVar12,(long ****)"name_cross_right",pcVar23,ppppbVar38,
                 pppplVar25,param_6,param_7,param_8);
  uVar10 = local_1a8;
  if (puVar11 + 0x4f != &local_1b0) {
    local_1a8 = 0;
    uVar16 = puVar11[0x50];
    puVar11[0x50] = uVar10;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  uVar10 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_71037780e0(&local_1b0,(long)puVar12,(long ****)"name_cross_left",pcVar23,ppppbVar38,pppplVar25
                 ,param_6,param_7,param_8);
  uVar10 = local_1a8;
  if (puVar11 + 0x51 != &local_1b0) {
    local_1a8 = 0;
    uVar16 = puVar11[0x52];
    puVar11[0x52] = uVar10;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  uVar10 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103778300(0x3f800000,puVar11[0x36],0x710438d2e3);
  if (0x12 < *(uint *)((long)puVar11 + 0x18c)) {
LAB_710194d73c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar11 + (long)(int)*(uint *)((long)puVar11 + 0x18c) * 4 + 0x140) = 0x10;
  uVar10 = (ulong)*(byte *)(*(long **)(param_1 + 400) + 1);
  if ((uVar10 < 5) &&
     (plVar28 = *(long **)(*(long *)(**(long **)(param_1 + 400) + 8) + uVar10 * 8 + 0x90),
     plVar28 != (long *)0x0)) {
    lVar36 = *plVar28;
    *(undefined2 *)(lVar36 + 0xf1) = 0;
    *(undefined1 *)(lVar36 + 0xf3) = 0;
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pcVar23,ppppbVar38,pppplVar25,param_6,param_7,
                           param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200 = (undefined **)((ulong)local_200 & 0xffffffff00000000);
      local_1b0 = (undefined **)&DAT_00000088;
      pppplVar41 = (long ****)&local_1b0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar41,ppppbVar38,pppplVar25,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_710194d4ec;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710194d4ec:
  ppppbVar38 = (byte ****)(ulong)*(byte *)(param_1 + 0x1a0);
  pppplVar41 = (long ****)0x3;
  FUN_7101e99cb0(puVar11,plVar1,(long ****)0x3,ppppbVar38,pppplVar25,param_6,param_7,param_8);
  puVar11[2] = &DAT_7105333600;
  uVar5 = DAT_7105333664;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = uVar5;
  do {
    uVar8 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar8 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_15,pppplVar41,ppppbVar38,pppplVar25,param_6,param_7,
                 param_8);
  lVar36 = *(long *)(param_1 + 0x178);
  *(undefined8 **)(param_1 + 0x178) = puVar11;
  if (lVar36 != 0) {
    FUN_71032cad20(lVar36);
    puVar11 = *(undefined8 **)(param_1 + 0x178);
  }
  FUN_7101e9a160((undefined8 *)puVar11[0x10]);
  FUN_7101af86a0(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8),1,pppplVar41,ppppbVar38,pppplVar25,
                 param_6,param_7,param_8);
  lVar36 = *(long *)(*(long *)(param_1 + 0x180) + 8);
  if (*(char *)(lVar36 + 0x161) == '\0') {
    *(undefined4 *)(lVar36 + 0xe0) = 0;
    *(undefined8 *)(lVar36 + 8) = 0;
    *(undefined8 *)(lVar36 + 0x10) = 0;
    *(undefined1 *)(lVar36 + 0xf4) = 0;
    *(undefined8 *)(lVar36 + 0x98) = 0x600000001;
    *(undefined8 *)(lVar36 + 0xec) = 0xffffffff00000000;
    *(undefined8 *)(lVar36 + 0xe4) = 0xffffffff00000001;
    *(undefined8 *)(lVar36 + 0xd0) = 0;
    *(undefined8 *)(lVar36 + 0xd8) = 0;
    *(undefined8 *)(lVar36 + 0xc0) = 0;
    *(undefined8 *)(lVar36 + 200) = 0;
    *(undefined8 *)(lVar36 + 0xb0) = 0;
    *(undefined8 *)(lVar36 + 0xb8) = 0;
    *(undefined8 *)(lVar36 + 0xa0) = 0;
    *(undefined8 *)(lVar36 + 0xa8) = 0;
  }
  *(undefined1 *)(lVar36 + 0x160) = 1;
  lVar36 = DAT_710532f8d0;
  lVar37 = *(long *)(*DAT_7105329fa0 + 0x8d0);
  if ((ulong)*(byte *)(param_1 + 0x1a0) < (ulong)(*(long *)(*DAT_7105329fa0 + 0x8d8) - lVar37 >> 4))
  {
    uVar10 = FUN_71032575c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),
                            *(ulong *)(lVar37 + (ulong)*(byte *)(param_1 + 0x1a0) * 0x10 + 8));
  }
  else {
    uVar10 = 0xd9ffff0000000000;
  }
  FUN_71033145d0(lVar36,uVar10,1,ppppbVar38,pppplVar25,param_6,param_7,param_8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}

