// addr:      7102c0c720
// offset:    0x2c0c720
// name:      FUN_7102c0c720
// mangled:   
// signature: undefined __cdecl FUN_7102c0c720(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102c0c720(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  float *pfVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long ****pppplVar18;
  int *piVar19;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long *plVar20;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  long extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  long *********ppppppppplVar21;
  byte ****ppppbVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  long *plVar32;
  int iVar33;
  undefined8 *puVar34;
  ulong uVar35;
  byte *pbVar36;
  uint uVar37;
  long lVar38;
  long *plVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulong *puVar42;
  ulong *puVar43;
  long ***ppplVar44;
  uint *puVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined8 local_5a0;
  undefined8 uStack_598;
  long ********local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  long local_520;
  uint local_518;
  uint local_510;
  ulong local_4e8;
  ulong local_4e0;
  ulong *local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  long ********local_4c0;
  ulong local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined4 local_3c4;
  undefined4 local_3c0;
  uint local_3bc;
  long local_3b0;
  long local_3a8;
  long ********local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  
  uVar41 = *param_1;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  plVar11 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                                  );
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      param_3 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7
                                           ,param_8), plVar11 != (long *)0x0)) goto LAB_7102c0c7b0;
    }
    plVar11 = (long *)0x0;
  }
LAB_7102c0c7b0:
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
    local_4c0 = (long ********)&DAT_00000010;
    param_3 = &local_4c0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
    puVar13 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *puVar13 = uVar41;
  puVar13[1] = param_1 + 1;
  *plVar11 = (long)puVar13;
  puVar42 = (ulong *)param_1[0x35];
  param_1[0x35] = plVar11;
  if (puVar42 != (ulong *)0x0) {
    uVar12 = *puVar42;
    *puVar42 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar42);
    plVar11 = (long *)param_1[0x35];
  }
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      param_3 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                                  ), puVar13 != (undefined8 *)0x0)) goto LAB_7102c0c884;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7102c0c884:
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x60,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000060;
      param_3 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x60,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar14 != (undefined8 *)0x0)) goto LAB_7102c0c8e0;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7102c0c8e0:
  *(undefined4 *)(puVar14 + 0xb) = 0xffffffff;
  auVar48 = _DAT_710446a360;
  *puVar14 = plVar11;
  puVar14[10] = 0;
  uVar50 = auVar48._8_8_;
  uVar41 = auVar48._0_8_;
  puVar14[3] = 0;
  puVar14[2] = 0x3f800000;
  puVar14[5] = uVar50;
  puVar14[4] = uVar41;
  puVar14[7] = 0x3f800000;
  puVar14[6] = 0;
  puVar14[9] = 0x3f80000000000000;
  puVar14[8] = 0;
  uStack_598 = 0x3f80000000000000;
  local_5a0 = 0;
  if (plVar11 != (long *)0x0) {
    for (plVar28 = *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd0);
        plVar28 != *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd8); plVar28 = plVar28 + 2) {
      if ((*(uint *)(plVar28 + 1) < 2) &&
         (lVar15 = *plVar28, *(long *)(lVar15 + 0x68) == 0xee4574689)) {
        puVar14[10] = lVar15;
        if (lVar15 != 0) {
          if (*(long *)(lVar15 + 0xd8) == 0) {
            uVar10 = 0xffffffff;
          }
          else {
            plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0xd8) + 8) + 8);
            uVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,&DAT_7104410997);
            lVar15 = puVar14[10];
          }
          *(undefined4 *)(puVar14 + 0xb) = uVar10;
        }
        goto LAB_7102c0c97c;
      }
    }
    lVar15 = 0;
    puVar14[10] = 0;
LAB_7102c0c97c:
    FUN_710260fdd0(0,lVar15,1);
    uVar12 = FUN_7102c12990(*(char *)(**(long **)*puVar14 + 0x18));
    lVar15 = puVar14[10];
    if ((uVar12 & 1) == 0) {
      if (lVar15 != 0) {
        if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar15 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar15 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
        }
      }
    }
    else if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x32) = 0x101;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x22) = 1;
      }
      lVar15 = puVar14[10];
      if (lVar15 != 0) {
        if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar15 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar15 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 1;
        }
      }
    }
  }
  *puVar13 = puVar14;
  puVar42 = (ulong *)param_1[0x36];
  param_1[0x36] = puVar13;
  if (puVar42 != (ulong *)0x0) {
    uVar12 = *puVar42;
    *puVar42 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar42);
  }
  plVar11 = (long *)param_1[0x35];
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      param_3 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                                  ), puVar13 != (undefined8 *)0x0)) goto LAB_7102c0cad4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7102c0cad4:
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_000000e0;
      param_3 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar14 != (undefined8 *)0x0)) goto LAB_7102c0cb30;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7102c0cb30:
  *puVar14 = plVar11;
  plVar32 = puVar14 + 1;
  *plVar32 = 0;
  *(undefined4 *)(puVar14 + 5) = 0xffffffff;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[7] = 0;
  plVar31 = puVar14 + 6;
  *plVar31 = 0;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0;
  puVar14[0x14] = 0;
  puVar14[0x15] = 0;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0;
  puVar14[0x10] = 0;
  puVar14[0x11] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  puVar14[0xc] = 0;
  puVar14[0xd] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  uVar51 = _DAT_7107521008;
  uVar40 = _ConstantZero;
  *(undefined1 *)(puVar14 + 0x1a) = 0;
  *(undefined4 *)((long)puVar14 + 0xd4) = 0;
  *(undefined2 *)(puVar14 + 0x1b) = 0;
  puVar14[0x19] = uVar51;
  puVar14[0x18] = uVar40;
  for (plVar28 = *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd0);
      plVar28 != *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd8); plVar28 = plVar28 + 2) {
    if ((*(uint *)(plVar28 + 1) < 2) && (lVar15 = *plVar28, *(long *)(lVar15 + 0x68) == 0xa62f45986)
       ) goto LAB_7102c0cbe8;
  }
  lVar15 = 0;
LAB_7102c0cbe8:
  *plVar32 = lVar15;
  uVar12 = *(long *)(*(long *)(*plVar11 + 8) + 0x118) - *(long *)(*(long *)(*plVar11 + 8) + 0x110);
  iVar33 = (int)(uVar12 >> 3);
  if (0 < iVar33) {
    lVar15 = (long)(uVar12 * 0x20000000) >> 0x20;
    if (6 < iVar33) {
      lVar15 = 7;
    }
    lVar38 = 0;
    do {
      puVar16 = (undefined8 *)
                FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar16 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
          local_4c0 = (long ********)&DAT_00000008;
          param_3 = &local_4c0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
          if (((uVar12 & 1) != 0) &&
             (puVar16 = (undefined8 *)
                        FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8), puVar16 != (undefined8 *)0x0)) goto LAB_7102c0ccac;
        }
        puVar16 = (undefined8 *)0x0;
      }
LAB_7102c0ccac:
      plVar11 = (long *)*puVar14;
      puVar17 = (undefined8 *)
                FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (puVar17 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
          local_4c0 = (long ********)&DAT_00000030;
          param_3 = &local_4c0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
          if (((uVar12 & 1) != 0) &&
             (puVar17 = (undefined8 *)
                        FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8), puVar17 != (undefined8 *)0x0)) goto LAB_7102c0cd10;
        }
        puVar17 = (undefined8 *)0x0;
      }
LAB_7102c0cd10:
      *puVar17 = plVar11;
      *(undefined2 *)(puVar17 + 3) = 0;
      puVar17[1] = 0;
      *(undefined1 *)((long)puVar17 + 0x1c) = 0;
      puVar17[4] = 0;
      *(undefined4 *)(puVar17 + 5) = 0;
      puVar17[2] = 0;
      FUN_7102c12a90(&local_4b8,(undefined8 *)(*(long *)(*plVar11 + 8) + 8),(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      local_4c0 = (long ********)&PTR_FUN_7105121670;
      uVar12 = local_3a8 - local_3b0 >> 3;
      iVar33 = (int)lVar38;
      if (iVar33 < (int)uVar12) {
        if (uVar12 <= (ulong)(long)iVar33) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        pfVar1 = (float *)(local_3b0 + (long)iVar33 * 8);
        fVar47 = *pfVar1;
        *(float *)(puVar17 + 4) = fVar47;
        fVar46 = pfVar1[1];
        param_3 = (long *********)(ulong)(iVar33 + 1);
        *(float *)((long)puVar17 + 0x24) = fVar46;
        *(float *)(puVar17 + 5) = fVar46 - fVar47;
        uStack_568 = uStack_568 & 0xffffffffffffff00;
        local_570 = (long ********)0x0;
        FUN_710062dc20((uint *)&local_570,"floatbase%d");
        plVar28 = *(long **)(*(long *)(**(long **)*puVar17 + 0x300) + 0x18);
        plVar11 = (long *)*plVar28;
        plVar28 = (long *)plVar28[1];
        if (plVar11 != plVar28) {
          do {
            uVar37 = (uint)(byte)uStack_568;
            if (uVar37 == 0) {
              uVar35 = 0;
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              uVar9 = 0xffffffff;
              pbVar36 = (byte *)((long)&uStack_568 + 1);
              do {
                uVar2 = uVar37 + 0x20;
                if (0x19 < uVar37 - 0x41) {
                  uVar2 = uVar37;
                }
                uVar9 = (&DAT_7104754084)[(uVar2 ^ uVar9) & 0xff] ^ uVar9 >> 8;
                uVar37 = (uint)*pbVar36;
                uVar12 = uVar12 + 0x100000000;
                pbVar36 = pbVar36 + 1;
              } while (uVar37 != 0);
              uVar35 = (ulong)~uVar9;
              uVar12 = uVar12 & 0xff00000000;
            }
            if ((*(ulong *)(*plVar11 + 0xa0) & 0xffffffffff) == (uVar12 | uVar35)) {
              plVar11 = *(long **)(*plVar11 + 0x110);
              if ((plVar11 != (long *)0x0) && (*plVar11 != plVar11[1])) {
                puVar17[1] = plVar11;
                param_3 = (long *********)0x1;
                FUN_71025f4d80((long *)*plVar11,(long *)plVar11[1],1);
              }
              break;
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar28);
        }
      }
      FUN_7102c104b0((long)&local_4b8);
      *puVar16 = puVar17;
      puVar17 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (puVar17 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
          local_4c0 = (long ********)&SUB_00000020;
          param_3 = &local_4c0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
          if (((uVar12 & 1) != 0) &&
             (puVar17 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8), puVar17 != (undefined8 *)0x0)) goto LAB_7102c0cee0;
        }
        puVar17 = (undefined8 *)0x0;
      }
LAB_7102c0cee0:
      *puVar17 = &DAT_71051210e8;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar17[3] = puVar16;
      puVar14[lVar38 * 2 + 10] = puVar16;
      plVar11 = (long *)puVar14[lVar38 * 2 + 0xb];
      puVar14[lVar38 * 2 + 0xb] = puVar17;
      if (plVar11 != (long *)0x0) {
        plVar28 = plVar11 + 1;
        do {
          lVar29 = *plVar28;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar8) {
            *plVar28 = lVar29 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar29 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar38 = lVar38 + 1;
    } while (lVar38 < lVar15);
    lVar15 = *plVar32;
  }
  if (((lVar15 != 0) && (*(long *)(lVar15 + 0xd8) != 0)) &&
     (plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0xd8) + 8) + 8),
     uVar37 = (**(code **)(*plVar11 + 0x18))(plVar11,"SwingN"), uVar37 != 0xffffffff)) {
    lVar15 = *plVar32;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0xd8) == 0) {
LAB_7102c0d010:
        lVar15 = (**(code **)(**(long **)(lVar15 + 0x90) + 0x158))();
      }
      else {
        uVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar15 + 0xd8) + 8) + 8) + 0x10))();
        if (uVar9 <= uVar37) goto LAB_7102c0d010;
        plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0xd8) + 8) + 0x48);
        (**(code **)(*plVar11 + 0x38))(plVar11,0);
        lVar15 = extraout_x1 + (ulong)uVar37 * 0x40;
      }
      uStack_598 = *(undefined8 *)(lVar15 + 0x38);
      local_5a0 = *(undefined8 *)(lVar15 + 0x30);
    }
    auVar48._8_8_ = uStack_598;
    auVar48._0_8_ = local_5a0;
    auVar48 = NEON_ext(auVar48,auVar48,8,1);
    puVar16 = (undefined8 *)
              FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar16 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
        local_4c0 = (long ********)&DAT_00000008;
        param_3 = &local_4c0;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
        if (((uVar12 & 1) != 0) &&
           (puVar16 = (undefined8 *)
                      FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar16 != (undefined8 *)0x0)) goto LAB_7102c0d09c;
      }
      puVar16 = (undefined8 *)0x0;
    }
LAB_7102c0d09c:
    plVar11 = (long *)*puVar14;
    puVar17 = (undefined8 *)
              FUN_710392e290(0x10,0x70,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar40 = extraout_x1_00;
    if (puVar17 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
        local_4c0 = (long ********)&DAT_00000070;
        param_3 = &local_4c0;
        auVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
        uVar40 = auVar53._8_8_;
        if (((auVar53._0_8_ & 1) != 0) &&
           (puVar17 = (undefined8 *)
                      FUN_710392e290(0x10,0x70,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), uVar40 = extraout_x1_01, puVar17 != (undefined8 *)0x0
           )) goto LAB_7102c0d10c;
      }
      puVar17 = (undefined8 *)0x0;
    }
LAB_7102c0d10c:
    *puVar17 = plVar11;
    *(undefined2 *)(puVar17 + 4) = 0;
    plVar39 = puVar17 + 1;
    *plVar39 = 0;
    *(undefined1 *)((long)puVar17 + 0x24) = 0;
    puVar17[5] = 0;
    puVar17[6] = 0xffffffff00000000;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[9] = (ulong)auVar48._0_4_;
    puVar17[8] = local_5a0;
    uVar52 = _DAT_7107521008;
    uVar51 = _ConstantZero;
    puVar17[0xc] = 0xffffffff;
    *(undefined4 *)(puVar17 + 0xd) = 0;
    puVar17[0xb] = uVar52;
    puVar17[10] = uVar51;
    lVar15 = *(long *)(*plVar11 + 8);
    fVar47 = *(float *)(lVar15 + 0x40);
    *(float *)(puVar17 + 5) = fVar47;
    fVar46 = *(float *)(lVar15 + 0x44);
    *(float *)((long)puVar17 + 0x2c) = fVar46;
    *(float *)(puVar17 + 6) = fVar46 - fVar47;
    *(undefined4 *)((long)puVar17 + 100) = *(undefined4 *)(lVar15 + 0x48);
    for (plVar28 = *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd0);
        plVar28 != *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd8); plVar28 = plVar28 + 2) {
      if ((*(uint *)(plVar28 + 1) < 2) &&
         (lVar15 = *plVar28, *(long *)(lVar15 + 0x68) == 0x9044b5c4c)) goto LAB_7102c0d1c8;
    }
    lVar15 = 0;
LAB_7102c0d1c8:
    auVar53._8_4_ = auVar48._0_4_;
    auVar53._0_8_ = local_5a0;
    *plVar39 = lVar15;
    auVar53._12_4_ = 0x3f800000;
    uStack_568 = 0;
    local_570 = (long ********)&DAT_3f800000;
    uStack_548 = 0x3f800000;
    local_550 = 0;
    local_538 = auVar53._8_8_;
    local_540 = local_5a0;
    local_560 = uVar41;
    uStack_558 = uVar50;
    if (lVar15 != 0) {
      (**(code **)(**(long **)(lVar15 + 0x90) + 0x148))(*(long **)(lVar15 + 0x90),&local_570);
      lVar15 = *(long *)(lVar15 + 0xd8);
      uVar40 = extraout_x1_02;
      if (lVar15 != 0) {
        local_4a8 = uStack_558;
        local_4b0 = local_560;
        local_4b8 = uStack_568;
        local_4c0 = local_570;
        local_488 = local_538;
        local_490 = local_540;
        local_498 = uStack_548;
        local_4a0 = local_550;
        if (*(char *)(*(long *)(lVar15 + 8) + 0xa8) != '\0') {
          plVar11 = *(long **)(*(long *)(lVar15 + 8) + 0x48);
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_4c0);
          uVar40 = extraout_x1_03;
        }
        *(undefined1 *)(lVar15 + 0x20) = 1;
      }
    }
    lVar15 = *plVar39;
    if (lVar15 != 0) {
      *(undefined1 *)(lVar15 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar15 + 0x108),uVar40,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      lVar15 = *plVar39;
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
      }
    }
    puVar23 = (undefined8 *)puVar17[2];
    if (puVar23 != (undefined8 *)0x0) {
      param_3 = (long *********)0x1;
      FUN_71025f4d80((long *)*puVar23,(long *)puVar23[1],1);
    }
    lVar15 = *plVar39;
    if (lVar15 == 0) {
LAB_7102c0d324:
      uVar10 = 0xffffffff;
    }
    else {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar15 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
      }
      if ((*plVar39 == 0) || (lVar15 = *(long *)(*plVar39 + 0xd8), lVar15 == 0))
      goto LAB_7102c0d324;
      plVar11 = *(long **)(*(long *)(lVar15 + 8) + 8);
      uVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,"CSwingBody");
    }
    *(undefined4 *)(puVar17 + 0xc) = uVar10;
    plVar28 = *(long **)(*(long *)(**(long **)*puVar17 + 0x300) + 0x18);
    plVar11 = (long *)*plVar28;
    do {
      if (plVar11 == (long *)plVar28[1]) goto LAB_7102c0d518;
      lVar15 = *plVar11;
      plVar11 = plVar11 + 1;
    } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xa4bcfa873);
    plVar11 = *(long **)(lVar15 + 0x110);
    if ((plVar11 != (long *)0x0) && (*plVar11 != plVar11[1])) {
      puVar17[2] = plVar11;
      plVar28 = (long *)*plVar11;
      plVar11 = (long *)plVar11[1];
      plVar20 = plVar28;
      if (plVar28 != plVar11) {
        fVar47 = (float)puVar17[8];
        fVar46 = (float)((ulong)puVar17[8] >> 0x20) + *(float *)((long)puVar17 + 100);
        do {
          lVar15 = *plVar28;
          if (*(char *)(lVar15 + 0x128) == '\0' ||
              (*(char *)(*(long *)(lVar15 + 8) + 0xe8) != '\0' ||
              *(char *)(*(long *)(lVar15 + 8) + 0xe7) != '\0')) {
            *(undefined1 *)(lVar15 + 0x129) = 1;
LAB_7102c0d41c:
            *(undefined8 *)(lVar15 + 0x18) = 0;
            *(ulong *)(lVar15 + 0x10) = CONCAT44(fVar46,fVar47);
          }
          else if ((1e-05 < ABS((float)*(undefined8 *)(lVar15 + 0x10) - fVar47)) ||
                  (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x20) - fVar46))) {
            *(undefined1 *)(lVar15 + 0x12a) = 1;
            goto LAB_7102c0d41c;
          }
          if (1e-05 <= ABS(*(float *)(lVar15 + 0x30))) {
            *(undefined4 *)(lVar15 + 0x30) = 0;
            *(undefined1 *)(lVar15 + 0x129) = 1;
          }
          uVar51 = *(undefined8 *)(lVar15 + 0x58);
          uVar40 = *(undefined8 *)(lVar15 + 0x50);
          if (1e-05 <= ABS((float)uVar40 + -1.0)) {
            uVar40 = CONCAT44((int)((ulong)uVar40 >> 0x20),0x3f800000);
            *(undefined8 *)(lVar15 + 0x58) = uVar51;
            *(undefined8 *)(lVar15 + 0x50) = uVar40;
            *(undefined1 *)(lVar15 + 0x129) = 1;
          }
          if (1e-05 <= ABS((float)((ulong)uVar40 >> 0x20) + -1.0)) {
            *(undefined8 *)(lVar15 + 0x58) = uVar51;
            *(ulong *)(lVar15 + 0x50) = CONCAT44(0x3f800000,(int)uVar40);
            *(undefined1 *)(lVar15 + 0x129) = 1;
          }
          plVar28 = plVar28 + 1;
        } while (plVar11 != plVar28);
        plVar28 = *(long **)puVar17[2];
        plVar20 = (long *)((undefined8 *)puVar17[2])[1];
      }
      param_3 = (long *********)0x1;
      FUN_71025f4d80(plVar28,plVar20,1);
      uVar12 = FUN_7102c12990(*(char *)(**(long **)*puVar17 + 0x18));
      if ((((uVar12 & 1) == 0) && (*plVar39 != 0)) &&
         (lVar15 = *(long *)(*plVar39 + 0xd8), lVar15 != 0)) {
        *(undefined1 *)(lVar15 + 0x21) = 1;
      }
      local_4c0 = (long ********)0x0;
      lVar15 = *(long *)(**(long **)(**(long **)*puVar17 + 0x338) + 8);
      if (lVar15 == 0) {
        uVar10 = 0xffffffff;
      }
      else {
        param_3 = (long *********)0x0;
        uVar10 = FUN_7102405040(lVar15,&local_4c0,0,param_4,param_5,param_6,param_7,param_8);
      }
      *(undefined4 *)((long)puVar17 + 0x34) = uVar10;
    }
LAB_7102c0d518:
    *puVar16 = puVar17;
    puVar42 = (ulong *)*plVar31;
    *plVar31 = (long)puVar16;
    if (puVar42 != (ulong *)0x0) {
      uVar12 = *puVar42;
      *puVar42 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40((ulong)puVar42);
    }
  }
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      param_3 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                                  ), puVar16 != (undefined8 *)0x0)) goto LAB_7102c0d5a0;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7102c0d5a0:
  uVar40 = *puVar14;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x120,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000120;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x120,(long ****)ppppppppplVar21,param_4,param_5,param_6,
                                   param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_7102c0d600;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7102c0d600:
  *puVar17 = uVar40;
  *(undefined1 *)(puVar17 + 1) = 0;
  memset(puVar17 + 2,0,0x110);
  memset(&local_4c0,0,0x400);
  ppppbVar22 = (byte ****)&DAT_710433849c;
  snprintf((char *)&local_4c0,0x400,"%s0000","BLK");
  local_4d8 = (ulong *)0x0;
  uStack_4d0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4c8 = 0x3f800000;
  lVar15 = *(long *)(**(long **)*puVar17 + 0x300);
  uVar37 = FUN_7103151710((byte *)&local_4c0);
  ppppppppplVar21 = (long *********)(ulong)uVar37;
  FUN_710262cfa0(&local_520,*(long *)(lVar15 + 8),uVar37);
  if (local_520 != 0) {
LAB_7102c0d778:
    uVar12 = (ulong)local_518;
    if ((ulong)(*(long *)(local_520 + 0x1b0) - *(long *)(local_520 + 0x1a8) >> 3) <= uVar12) {
LAB_7102c10360:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar15 = *(long *)(*(long *)(*(long *)(local_520 + 0x1a8) + uVar12 * 8) + 0x10);
    if (local_510 < *(uint *)(lVar15 + 0x108)) {
      lVar15 = *(long *)(lVar15 + 0x110) + (ulong)local_510 * 0x130;
    }
    else {
      lVar15 = 0;
    }
    if ((ulong)(*(long *)(local_520 + 0x1b0) - *(long *)(local_520 + 0x1a8) >> 3) <= uVar12)
    goto LAB_7102c10360;
    uVar37 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(local_520 + 0x1a8) + uVar12 * 8) +
                                          0x10) + 0x110) + (ulong)local_510 * 0x130 + 0x100);
    uVar12 = 0;
    do {
      if (local_4e0 != 0) {
        uVar35 = local_4e0 - 1;
        if ((uVar35 & local_4e0) == 0) {
          uVar24 = uVar35 & uVar12;
        }
        else {
          uVar24 = uVar12;
          if (local_4e0 <= uVar12) {
            uVar24 = 0;
            if (local_4e0 != 0) {
              uVar24 = uVar12 / local_4e0;
            }
            uVar24 = uVar12 - uVar24 * local_4e0;
          }
        }
        plVar11 = *(long **)(local_4e8 + uVar24 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if ((uVar35 & local_4e0) == 0) {
            do {
              uVar30 = plVar11[1];
              if (uVar30 != uVar12 && (uVar30 & uVar35) != uVar24) break;
              if ((uVar30 == uVar12) && (uVar12 == *(uint *)(plVar11 + 2))) goto LAB_7102c0d8e0;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar35 = plVar11[1];
              if (uVar35 == uVar12) {
                if (uVar12 == *(uint *)(plVar11 + 2)) goto LAB_7102c0d8e0;
              }
              else {
                if (local_4e0 <= uVar35) {
                  uVar30 = 0;
                  if (local_4e0 != 0) {
                    uVar30 = uVar35 / local_4e0;
                  }
                  uVar35 = uVar35 - uVar30 * local_4e0;
                }
                if (uVar35 != uVar24) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      memset(&local_4c0,0,0x400);
      iVar33 = (int)uVar12;
      param_5 = (long ****)(ulong)(iVar33 + 1U);
      ppppppppplVar21 = (long *********)"%s00%02d";
      ppppbVar22 = (byte ****)&DAT_710433849c;
      snprintf((char *)&local_4c0,0x400,"%s00%02d","BLK",iVar33 + 1U);
      uVar9 = FUN_7103151710((byte *)&local_4c0);
      if ((uVar9 == uVar37) && (*(int *)(lVar15 + 0x104) == 4)) {
        uVar10 = *(undefined4 *)(lVar15 + 0x10c);
        auVar7 = *(undefined1 (*) [12])(lVar15 + 0x108);
        puVar23 = (undefined8 *)
                  FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                 param_7,param_8);
        if (puVar23 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
            local_570 = (long ********)&DAT_00000008;
            ppppppppplVar21 = &local_570;
            uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
            if (((uVar35 & 1) != 0) &&
               (puVar23 = (undefined8 *)
                          FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                                         param_6,param_7,param_8), puVar23 != (undefined8 *)0x0))
            goto LAB_7102c0d970;
          }
          puVar23 = (undefined8 *)0x0;
        }
LAB_7102c0d970:
        puVar34 = (undefined8 *)*puVar17;
        puVar27 = (undefined8 *)
                  FUN_710392e290(0x10,0xf0,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                 param_7,param_8);
        uVar40 = extraout_x1_04;
        if (puVar27 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
            local_570 = (long ********)&DAT_000000f0;
            ppppppppplVar21 = &local_570;
            auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
            uVar40 = auVar48._8_8_;
            if (((auVar48._0_8_ & 1) != 0) &&
               (puVar27 = (undefined8 *)
                          FUN_710392e290(0x10,0xf0,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                                         param_6,param_7,param_8), uVar40 = extraout_x1_05,
               puVar27 != (undefined8 *)0x0)) goto LAB_7102c0d9d0;
          }
          puVar27 = (undefined8 *)0x0;
        }
LAB_7102c0d9d0:
        *puVar27 = puVar34;
        *(undefined1 *)(puVar27 + 4) = 0;
        plVar11 = puVar27 + 1;
        *plVar11 = 0;
        puVar27[2] = 0;
        puVar27[3] = 0;
        *(undefined2 *)((long)puVar27 + 0x8c) = 0;
        *(undefined8 *)((long)puVar27 + 0x84) = 0;
        *(undefined4 *)(puVar27 + 0x12) = 0;
        *(undefined8 *)((long)puVar27 + 0x94) = 0xffffffff00000000;
        *(undefined2 *)(puVar27 + 0x10) = 0;
        puVar27[0xe] = 0;
        puVar27[0xf] = 0;
        puVar27[0xc] = puVar27;
        puVar27[0xd] = 0;
        uVar52 = _DAT_7107521008;
        uVar51 = _ConstantZero;
        *(undefined4 *)(puVar27 + 0x19) = 0;
        *(int *)((long)puVar27 + 0xcc) = iVar33;
        puVar27[0x18] = 0;
        *(undefined4 *)(puVar27 + 0x1a) = 0x1010100;
        *(undefined8 *)((long)puVar27 + 0xd9) = 0;
        *(undefined8 *)((long)puVar27 + 0xd4) = 0;
        puVar27[0x15] = uVar52;
        puVar27[0x14] = uVar51;
        puVar27[0x17] = (ulong)auVar7._8_4_;
        puVar27[0x16] = auVar7._0_8_;
        if (0x10 < iVar33) goto LAB_7102c0de1c;
        *(undefined4 *)(puVar27 + 0x18) = uVar10;
        *(undefined4 *)((long)puVar27 + 0xc4) = uVar10;
        lVar38 = *(long *)*puVar34;
        lVar15 = *(long *)(lVar38 + 0x310);
        if (iVar33 == 0) {
          puVar25 = *(undefined8 **)(lVar15 + 0xd0);
          goto joined_r0x007102c0daac;
        }
        plVar28 = *(long **)(lVar15 + 0xd0);
        if (plVar28 == *(long **)(lVar15 + 0xd8)) goto LAB_7102c0dad8;
        goto LAB_7102c0da78;
      }
LAB_7102c0d8e0:
      bVar8 = uVar12 < 0x10;
      uVar12 = uVar12 + 1;
    } while (bVar8);
    goto LAB_7102c0dfb0;
  }
  goto LAB_7102c0dfe0;
  while (plVar28 = plVar28 + 2, *(long **)(lVar15 + 0xd8) != plVar28) {
LAB_7102c0da78:
    if ((*(uint *)(plVar28 + 1) < 2) && (*(long *)(*plVar28 + 0x68) == 0xb9bdef171)) {
      pppplVar18 = FUN_710262fb80(lVar15,plVar28,ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                                  param_8);
      goto LAB_7102c0d6c4;
    }
  }
LAB_7102c0dad8:
  *plVar11 = 0;
LAB_7102c0dadc:
  ppppppppplVar21 = (long *********)(ulong)(*(int *)((long)puVar27 + 0xcc) + 1);
  FUN_710062dc20((uint *)(puVar27 + 3),"ChikuwaBlock%dN");
  plVar31 = *(long **)(*(long *)(lVar38 + 0x300) + 0x18);
  plVar28 = (long *)*plVar31;
  plVar31 = (long *)plVar31[1];
  uVar40 = extraout_x1_06;
  if (plVar28 != plVar31) {
    do {
      uVar37 = (uint)*(byte *)(puVar27 + 4);
      if (uVar37 == 0) {
        uVar24 = 0;
        uVar35 = 0;
      }
      else {
        uVar35 = 0;
        uVar9 = 0xffffffff;
        pbVar36 = (byte *)((long)puVar27 + 0x21);
        do {
          uVar2 = uVar37 + 0x20;
          if (0x19 < uVar37 - 0x41) {
            uVar2 = uVar37;
          }
          uVar9 = (&DAT_7104754084)[(uVar2 ^ uVar9) & 0xff] ^ uVar9 >> 8;
          uVar37 = (uint)*pbVar36;
          uVar35 = uVar35 + 0x100000000;
          pbVar36 = pbVar36 + 1;
        } while (uVar37 != 0);
        uVar24 = (ulong)~uVar9;
        uVar35 = uVar35 & 0xff00000000;
      }
      if ((*(ulong *)(*plVar28 + 0xa0) & 0xffffffffff) == (uVar35 | uVar24)) {
        plVar28 = *(long **)(*plVar28 + 0x110);
        if ((plVar28 != (long *)0x0) && (*plVar28 != plVar28[1])) {
          puVar27[2] = plVar28;
          plVar31 = (long *)*plVar28;
          plVar28 = (long *)plVar28[1];
          if (plVar31 == plVar28) goto LAB_7102c0dca0;
          uVar40 = puVar27[0x16];
          goto LAB_7102c0dbc8;
        }
        break;
      }
      plVar28 = plVar28 + 1;
    } while (plVar28 != plVar31);
  }
LAB_7102c0de1c:
  lVar15 = *plVar11;
  if (lVar15 != 0) {
    *(undefined1 *)(lVar15 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar15 + 0x108),uVar40,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                   param_6,param_7,param_8);
    lVar15 = *plVar11;
    if (lVar15 != 0) {
      *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
    }
  }
  puVar25 = (undefined8 *)puVar27[2];
  if (puVar25 == (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar27 + 0xd2) = 0;
  }
  else {
    ppppppppplVar21 = (long *********)0x1;
    FUN_71025f4d80((long *)*puVar25,(long *)puVar25[1],1);
    puVar25 = (undefined8 *)puVar27[2];
    *(undefined2 *)((long)puVar27 + 0xd2) = 0x100;
    if (puVar25 != (undefined8 *)0x0) {
      ppppppppplVar21 = (long *********)0x1;
      FUN_71025f4d80((long *)*puVar25,(long *)puVar25[1],1);
      *(undefined1 *)((long)puVar27 + 0xd3) = 1;
    }
  }
  local_570 = (long ********)0x0;
  lVar15 = *(long *)(**(long **)(*(long *)*puVar34 + 0x338) + 8);
  if (lVar15 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    ppppppppplVar21 = (long *********)0x0;
    uVar10 = FUN_7102405040(lVar15,&local_570,0,ppppbVar22,param_5,param_6,param_7,param_8);
  }
  *(undefined4 *)(puVar27 + 0x13) = uVar10;
  puVar27[0xf] = 0;
  *(undefined2 *)(puVar27 + 0x10) = 1;
  *(undefined8 *)((long)puVar27 + 0x84) = 0;
  *(undefined2 *)((long)puVar27 + 0x8c) = 1;
  *puVar23 = puVar27;
  puVar27 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar27 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_570 = (long ********)&SUB_00000020;
      ppppppppplVar21 = &local_570;
      uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar35 & 1) != 0) &&
         (puVar27 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar27 != (undefined8 *)0x0))
      goto LAB_7102c0df40;
    }
    puVar27 = (undefined8 *)0x0;
  }
LAB_7102c0df40:
  *puVar27 = &DAT_7105121078;
  puVar27[1] = 0;
  puVar27[2] = 0;
  puVar27[3] = puVar23;
  *(undefined8 **)((long)puVar17 + ((long)(uVar12 << 0x20) >> 0x1c) + 0x10) = puVar23;
  plVar11 = (long *)puVar17[(long)iVar33 * 2 + 3];
  puVar17[(long)iVar33 * 2 + 3] = puVar27;
  if (plVar11 != (long *)0x0) {
    plVar28 = plVar11 + 1;
    do {
      lVar15 = *plVar28;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar8) {
        *plVar28 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  piVar19 = FUN_71029ebfb0(&local_4e8,iVar33,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                           param_7,param_8);
  *(undefined1 *)piVar19 = 1;
LAB_7102c0dfb0:
  FUN_71026825a0(&local_520);
  puVar42 = local_4d8;
  if (local_520 == 0) goto joined_r0x007102c0dfcc;
  goto LAB_7102c0d778;
joined_r0x007102c0daac:
  if (puVar25 == *(undefined8 **)(lVar15 + 0xd8)) goto LAB_7102c0dad8;
  if ((*(uint *)(puVar25 + 1) < 2) &&
     (pppplVar18 = (long ****)*puVar25, pppplVar18[0xd] == (long ***)0xb9bdef171))
  goto LAB_7102c0d6c4;
  puVar25 = puVar25 + 2;
  goto joined_r0x007102c0daac;
LAB_7102c0d6c4:
  *plVar11 = (long)pppplVar18;
  if (pppplVar18 != (long ****)0x0) {
    local_90 = puVar27[0x16];
    uStack_b8 = 0;
    local_c0 = (long ********)&DAT_3f800000;
    uStack_98 = 0x3f800000;
    local_a0 = 0;
    local_88 = CONCAT44(0x3f800000,(int)puVar27[0x17]);
    local_b0 = uVar41;
    uStack_a8 = uVar50;
    (*(code *)(*pppplVar18[0x12])[0x29])(pppplVar18[0x12],&local_c0);
    ppplVar44 = pppplVar18[0x1b];
    if (ppplVar44 != (long ***)0x0) {
      uStack_558 = uStack_a8;
      local_560 = local_b0;
      uStack_568 = uStack_b8;
      local_570 = local_c0;
      local_538 = local_88;
      local_540 = local_90;
      uStack_548 = uStack_98;
      local_550 = local_a0;
      if (*(char *)(ppplVar44[1] + 0x15) != '\0') {
        plVar28 = ppplVar44[1][9];
        (**(code **)(*plVar28 + 0x20))(plVar28,&local_570);
      }
      *(undefined1 *)(ppplVar44 + 4) = 1;
    }
  }
  goto LAB_7102c0dadc;
  while( true ) {
    if (1e-05 <= ABS(*(float *)(lVar15 + 0x30))) {
      *(undefined4 *)(lVar15 + 0x30) = 0;
      *(undefined1 *)(lVar15 + 0x129) = 1;
    }
    uVar52 = *(undefined8 *)(lVar15 + 0x58);
    uVar51 = *(undefined8 *)(lVar15 + 0x50);
    if (1e-05 <= ABS((float)uVar51 + -1.0)) {
      uVar51 = CONCAT44((int)((ulong)uVar51 >> 0x20),0x3f800000);
      *(undefined1 *)(lVar15 + 0x129) = 1;
      *(undefined8 *)(lVar15 + 0x58) = uVar52;
      *(undefined8 *)(lVar15 + 0x50) = uVar51;
    }
    if (1e-05 <= ABS((float)((ulong)uVar51 >> 0x20) + -1.0)) {
      *(undefined1 *)(lVar15 + 0x129) = 1;
      *(undefined8 *)(lVar15 + 0x58) = uVar52;
      *(ulong *)(lVar15 + 0x50) = CONCAT44(0x3f800000,(int)uVar51);
    }
    plVar31 = plVar31 + 1;
    if (plVar28 == plVar31) break;
LAB_7102c0dbc8:
    lVar15 = *plVar31;
    if (*(char *)(lVar15 + 0x128) == '\0' ||
        (*(char *)(*(long *)(lVar15 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar15 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar15 + 0x129) = 1;
LAB_7102c0dc24:
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(undefined8 *)(lVar15 + 0x10) = uVar40;
    }
    else if ((1e-05 < ABS((float)*(undefined8 *)(lVar15 + 0x10) - (float)uVar40)) ||
            (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x20) -
                         (float)((ulong)uVar40 >> 0x20)))) {
      *(undefined1 *)(lVar15 + 0x12a) = 1;
      goto LAB_7102c0dc24;
    }
  }
LAB_7102c0dca0:
  uVar35 = FUN_7102c12990(*(char *)(**(long **)*puVar27 + 0x18));
  uVar40 = extraout_x1_07;
  if ((uVar35 & 1) != 0) {
    plVar31 = (long *)((long *)puVar27[2])[1];
    for (plVar28 = *(long **)puVar27[2]; plVar28 != plVar31; plVar28 = plVar28 + 1) {
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
      lVar38 = *plVar28;
      lVar15 = *(long *)(lVar38 + 0x60);
      if (lVar15 != 0) {
        sVar5 = *(short *)(lVar15 + 8) + -1;
        *(short *)(lVar15 + 8) = sVar5;
        if ((sVar5 < 1) && (*(long **)(lVar38 + 0x60) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar38 + 0x60) + 8))();
        }
        *(undefined8 *)(lVar38 + 0x60) = 0;
      }
      puVar25 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                               param_7,param_8);
      uVar40 = extraout_x1_08;
      if (puVar25 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
          local_570 = (long ********)&SUB_00000020;
          ppppppppplVar21 = &local_570;
          auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
          uVar40 = auVar48._8_8_;
          if (((auVar48._0_8_ & 1) != 0) &&
             (puVar25 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                                       param_6,param_7,param_8), uVar40 = extraout_x1_09,
             puVar25 != (undefined8 *)0x0)) goto LAB_7102c0dd5c;
        }
        puVar25 = (undefined8 *)0x0;
      }
LAB_7102c0dd5c:
      *(undefined4 *)(puVar25 + 1) = 0x10001;
      *puVar25 = &PTR_FUN_710507f650;
      puVar25[2] = puVar27;
      puVar25[3] = FUN_7102c11a20;
      *(undefined8 **)(lVar38 + 0x60) = puVar25;
    }
  }
  lVar15 = *plVar11;
  if (lVar15 != 0) {
    *(undefined1 *)(lVar15 + 0x110) = 1;
    FUN_71025e9d50((long *)(lVar15 + 0x108),uVar40,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                   param_6,param_7,param_8);
    lVar15 = *plVar11;
    uVar40 = extraout_x1_10;
    if (lVar15 != 0) {
      *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) & 0xfe;
    }
  }
  plVar28 = (long *)puVar27[2];
  if (plVar28 != (long *)0x0) {
    plVar31 = (long *)plVar28[1];
    for (plVar28 = (long *)*plVar28; plVar28 != plVar31; plVar28 = plVar28 + 1) {
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
      lVar15 = *plVar28;
      *(undefined1 *)(lVar15 + 0x128) = 1;
      if (*(long *)(lVar15 + 8) != 0) {
        *(undefined8 *)(*(long *)(lVar15 + 8) + 0xd8) = 0xffffffffffffffff;
        FUN_7100532bc0(*(long *)(lVar15 + 8),0);
        uVar40 = extraout_x1_11;
      }
    }
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
    *(undefined1 *)((long)puVar27 + 0xd3) = 0;
  }
  *(undefined1 *)((long)puVar27 + 0xd2) = 1;
  puVar27[0xd] = FUN_7102c11a40;
  puVar27[0xe] = 0;
  goto LAB_7102c0de1c;
joined_r0x007102c0dfcc:
  while (puVar42 != (ulong *)0x0) {
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
    uVar12 = *puVar42;
    FUN_710392eb40((ulong)puVar42);
    puVar42 = (ulong *)uVar12;
  }
LAB_7102c0dfe0:
  uVar12 = local_4e8;
  local_4e8 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  *puVar16 = puVar17;
  puVar42 = (ulong *)puVar14[8];
  puVar14[8] = puVar16;
  if (puVar42 != (ulong *)0x0) {
    FUN_7102c125a0(puVar42);
    FUN_710392eb40((ulong)puVar42);
  }
  if (((*plVar32 != 0) && (lVar15 = *(long *)(*plVar32 + 0xd8), lVar15 != 0)) &&
     (plVar11 = *(long **)(*(long *)(lVar15 + 8) + 8),
     uVar37 = (**(code **)(*plVar11 + 0x18))(plVar11,"SeesawN"), uVar37 != 0xffffffff)) {
    lVar15 = *plVar32;
    auVar48 = _DAT_710446a350;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0xd8) == 0) {
LAB_7102c0e0a0:
        lVar15 = (**(code **)(**(long **)(lVar15 + 0x90) + 0x158))();
      }
      else {
        uVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar15 + 0xd8) + 8) + 8) + 0x10))();
        if (uVar9 <= uVar37) goto LAB_7102c0e0a0;
        plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0xd8) + 8) + 0x48);
        (**(code **)(*plVar11 + 0x38))(plVar11,0);
        lVar15 = extraout_x1_12 + (ulong)uVar37 * 0x40;
      }
      auVar48 = *(undefined1 (*) [16])(lVar15 + 0x30);
    }
    auVar49._0_8_ = auVar48._0_8_;
    auVar48 = NEON_ext(auVar48,auVar48,8,1);
    uVar37 = auVar48._0_4_;
    puVar16 = (undefined8 *)
              FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                             param_8);
    if (puVar16 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
        local_4c0 = (long ********)&DAT_00000008;
        ppppppppplVar21 = &local_4c0;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
        if (((uVar12 & 1) != 0) &&
           (puVar16 = (undefined8 *)
                      FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                     param_7,param_8), puVar16 != (undefined8 *)0x0))
        goto LAB_7102c0e134;
      }
      puVar16 = (undefined8 *)0x0;
    }
LAB_7102c0e134:
    puVar23 = (undefined8 *)*puVar14;
    puVar17 = (undefined8 *)
              FUN_710392e290(0x10,0xd0,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7
                             ,param_8);
    uVar40 = extraout_x1_13;
    if (puVar17 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
        local_4c0 = (long ********)&DAT_000000d0;
        ppppppppplVar21 = &local_4c0;
        auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
        uVar40 = auVar48._8_8_;
        if (((auVar48._0_8_ & 1) != 0) &&
           (puVar17 = (undefined8 *)
                      FUN_710392e290(0x10,0xd0,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6
                                     ,param_7,param_8), uVar40 = extraout_x1_14,
           puVar17 != (undefined8 *)0x0)) goto LAB_7102c0e1a0;
      }
      puVar17 = (undefined8 *)0x0;
    }
LAB_7102c0e1a0:
    *puVar17 = puVar23;
    plVar28 = puVar17 + 1;
    *plVar28 = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[6] = puVar17;
    *(undefined1 *)(puVar17 + 0x12) = 0;
    *(undefined8 *)((long)puVar17 + 0x9c) = 0;
    *(undefined8 *)((long)puVar17 + 0x94) = 0;
    *(undefined4 *)((long)puVar17 + 0xa4) = 0xffffffff;
    *(undefined1 *)(puVar17 + 0x15) = 0;
    *(undefined2 *)((long)puVar17 + 0xb4) = 0;
    *(undefined8 *)((long)puVar17 + 0xac) = 0;
    *(undefined1 *)(puVar17 + 0x17) = 0;
    *(undefined4 *)((long)puVar17 + 0xbc) = 0;
    puVar17[7] = 0;
    puVar17[8] = 0;
    auVar49._8_4_ = uVar37;
    puVar17[0x18] = 0;
    puVar17[0x10] = 0;
    puVar17[0x11] = 0;
    puVar17[0xe] = 0;
    puVar17[0xf] = 0;
    puVar17[0xb] = (ulong)uVar37;
    puVar17[10] = auVar49._0_8_;
    puVar17[0xd] = (ulong)uVar37;
    puVar17[0xc] = auVar49._0_8_;
    auVar49._12_4_ = 0x3f800000;
    uStack_568 = 0;
    local_570 = (long ********)&DAT_3f800000;
    uStack_548 = 0x3f800000;
    local_550 = 0;
    local_538 = auVar49._8_8_;
    lVar15 = *(long *)*puVar23;
    for (plVar11 = *(long **)(*(long *)(lVar15 + 0x310) + 0xd0); local_540 = auVar49._0_8_,
        plVar11 != *(long **)(*(long *)(lVar15 + 0x310) + 0xd8); plVar11 = plVar11 + 2) {
      if ((*(uint *)(plVar11 + 1) < 2) &&
         (lVar38 = *plVar11, *(long *)(lVar38 + 0x68) == 0xf71687e4b)) {
        *plVar28 = lVar38;
        local_560 = uVar41;
        uStack_558 = uVar50;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_570);
          lVar38 = *(long *)(lVar38 + 0xd8);
          uVar40 = extraout_x1_24;
          if (lVar38 != 0) {
            local_4a8 = uStack_558;
            local_4b0 = local_560;
            local_4b8 = uStack_568;
            local_4c0 = local_570;
            local_488 = local_538;
            local_490 = local_540;
            local_498 = uStack_548;
            local_4a0 = local_550;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_4c0);
              uVar40 = extraout_x1_25;
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        goto LAB_7102c0e268;
      }
    }
    *plVar28 = 0;
    local_560 = uVar41;
    uStack_558 = uVar50;
LAB_7102c0e268:
    for (plVar11 = *(long **)(*(long *)(lVar15 + 0x310) + 0xd0);
        plVar11 != *(long **)(*(long *)(lVar15 + 0x310) + 0xd8); plVar11 = plVar11 + 2) {
      if ((*(uint *)(plVar11 + 1) < 2) &&
         (lVar38 = *plVar11, *(long *)(lVar38 + 0x68) == 0xff338e99a)) {
        puVar17[2] = lVar38;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_570);
          lVar38 = *(long *)(lVar38 + 0xd8);
          uVar40 = extraout_x1_26;
          if (lVar38 != 0) {
            local_4a8 = uStack_558;
            local_4b0 = local_560;
            local_4b8 = uStack_568;
            local_4c0 = local_570;
            local_488 = local_538;
            local_490 = local_540;
            local_498 = uStack_548;
            local_4a0 = local_550;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_4c0);
              uVar40 = extraout_x1_27;
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        goto LAB_7102c0e2b0;
      }
    }
    puVar17[2] = 0;
LAB_7102c0e2b0:
    for (plVar11 = *(long **)(*(long *)(lVar15 + 0x310) + 0xd0);
        plVar11 != *(long **)(*(long *)(lVar15 + 0x310) + 0xd8); plVar11 = plVar11 + 2) {
      if ((*(uint *)(plVar11 + 1) < 2) &&
         (lVar38 = *plVar11, *(long *)(lVar38 + 0x68) == 0xf2ce8c079)) {
        puVar17[3] = lVar38;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_570);
          lVar38 = *(long *)(lVar38 + 0xd8);
          uVar40 = extraout_x1_28;
          if (lVar38 != 0) {
            local_4a8 = uStack_558;
            local_4b0 = local_560;
            local_4b8 = uStack_568;
            local_4c0 = local_570;
            local_488 = local_538;
            local_490 = local_540;
            local_498 = uStack_548;
            local_4a0 = local_550;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_4c0);
              uVar40 = extraout_x1_29;
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        goto LAB_7102c0e2f8;
      }
    }
    puVar17[3] = 0;
LAB_7102c0e2f8:
    for (plVar11 = *(long **)(*(long *)(lVar15 + 0x310) + 0xd0);
        plVar11 != *(long **)(*(long *)(lVar15 + 0x310) + 0xd8); plVar11 = plVar11 + 2) {
      if ((*(uint *)(plVar11 + 1) < 2) &&
         (lVar38 = *plVar11, *(long *)(lVar38 + 0x68) == 0xe97264435)) {
        puVar17[4] = lVar38;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_570);
          lVar38 = *(long *)(lVar38 + 0xd8);
          uVar40 = extraout_x1_30;
          if (lVar38 != 0) {
            local_4a8 = uStack_558;
            local_4b0 = local_560;
            local_4b8 = uStack_568;
            local_4c0 = local_570;
            local_488 = local_538;
            local_490 = local_540;
            local_498 = uStack_548;
            local_4a0 = local_550;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_4c0);
              uVar40 = extraout_x1_31;
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        goto LAB_7102c0e340;
      }
    }
    puVar17[4] = 0;
LAB_7102c0e340:
    plVar28 = *(long **)(*(long *)(lVar15 + 0x300) + 0x18);
    plVar11 = (long *)*plVar28;
    do {
      if (plVar11 == (long *)plVar28[1]) goto LAB_7102c0e560;
      lVar15 = *plVar11;
      plVar11 = plVar11 + 1;
    } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xf71687e4b);
    plVar11 = *(long **)(lVar15 + 0x110);
    if ((plVar11 != (long *)0x0) && (*plVar11 != plVar11[1])) {
      puVar17[5] = plVar11;
      plVar28 = (long *)*plVar11;
      plVar11 = (long *)plVar11[1];
      if (plVar28 != plVar11) {
        uVar40 = puVar17[10];
        do {
          lVar15 = *plVar28;
          if (*(char *)(lVar15 + 0x128) == '\0' ||
              (*(char *)(*(long *)(lVar15 + 8) + 0xe8) != '\0' ||
              *(char *)(*(long *)(lVar15 + 8) + 0xe7) != '\0')) {
            *(undefined1 *)(lVar15 + 0x129) = 1;
LAB_7102c0e410:
            *(undefined8 *)(lVar15 + 0x18) = 0;
            *(undefined8 *)(lVar15 + 0x10) = uVar40;
          }
          else if ((1e-05 < ABS((float)*(undefined8 *)(lVar15 + 0x10) - (float)uVar40)) ||
                  (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x20) -
                               (float)((ulong)uVar40 >> 0x20)))) {
            *(undefined1 *)(lVar15 + 0x12a) = 1;
            goto LAB_7102c0e410;
          }
          if (1e-05 <= ABS(*(float *)(lVar15 + 0x30))) {
            *(undefined4 *)(lVar15 + 0x30) = 0;
            *(undefined1 *)(lVar15 + 0x129) = 1;
          }
          uVar52 = *(undefined8 *)(lVar15 + 0x58);
          uVar51 = *(undefined8 *)(lVar15 + 0x50);
          if (1e-05 <= ABS((float)uVar51 + -1.0)) {
            uVar51 = CONCAT44((int)((ulong)uVar51 >> 0x20),0x3f800000);
            *(undefined1 *)(lVar15 + 0x129) = 1;
            *(undefined8 *)(lVar15 + 0x58) = uVar52;
            *(undefined8 *)(lVar15 + 0x50) = uVar51;
          }
          if (1e-05 <= ABS((float)((ulong)uVar51 >> 0x20) + -1.0)) {
            *(undefined1 *)(lVar15 + 0x129) = 1;
            *(undefined8 *)(lVar15 + 0x58) = uVar52;
            *(ulong *)(lVar15 + 0x50) = CONCAT44(0x3f800000,(int)uVar51);
          }
          plVar28 = plVar28 + 1;
        } while (plVar11 != plVar28);
      }
      uVar12 = FUN_7102c12990(*(char *)(**(long **)*puVar17 + 0x18));
      uVar40 = extraout_x1_15;
      if ((uVar12 & 1) != 0) {
        plVar28 = (long *)((long *)puVar17[5])[1];
        for (plVar11 = *(long **)puVar17[5]; plVar11 != plVar28; plVar11 = plVar11 + 1) {
          lVar38 = *plVar11;
          lVar15 = *(long *)(lVar38 + 0x60);
          if (lVar15 != 0) {
            sVar5 = *(short *)(lVar15 + 8) + -1;
            *(short *)(lVar15 + 8) = sVar5;
            if ((sVar5 < 1) && (*(long **)(lVar38 + 0x60) != (long *)0x0)) {
              (**(code **)(**(long **)(lVar38 + 0x60) + 8))();
            }
            *(undefined8 *)(lVar38 + 0x60) = 0;
          }
          puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8);
          uVar40 = extraout_x1_16;
          if (puVar23 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
              local_4c0 = (long ********)&SUB_00000020;
              ppppppppplVar21 = &local_4c0;
              auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
              uVar40 = auVar48._8_8_;
              if (((auVar48._0_8_ & 1) != 0) &&
                 (puVar23 = (undefined8 *)
                            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                                           param_6,param_7,param_8), uVar40 = extraout_x1_17,
                 puVar23 != (undefined8 *)0x0)) goto LAB_7102c0e544;
            }
            puVar23 = (undefined8 *)0x0;
          }
LAB_7102c0e544:
          *(undefined4 *)(puVar23 + 1) = 0x10001;
          *puVar23 = &PTR_FUN_710507f650;
          puVar23[2] = puVar17;
          puVar23[3] = FUN_7102c16d30;
          *(undefined8 **)(lVar38 + 0x60) = puVar23;
        }
      }
    }
LAB_7102c0e560:
    local_4c0 = (long ********)0x0;
    lVar15 = *(long *)(**(long **)(**(long **)*puVar17 + 0x338) + 8);
    if (lVar15 == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      ppppppppplVar21 = (long *********)0x0;
      uVar10 = FUN_7102405040(lVar15,&local_4c0,0,ppppbVar22,param_5,param_6,param_7,param_8);
      uVar40 = extraout_x1_18;
    }
    *(undefined4 *)((long)puVar17 + 0xa4) = uVar10;
    FUN_7102c167c0(puVar17,uVar40,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                   param_8);
    lVar15 = puVar17[1];
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar15 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
      }
    }
    lVar15 = puVar17[2];
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar15 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
      }
    }
    lVar15 = puVar17[3];
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar15 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
      }
    }
    lVar15 = puVar17[4];
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar15 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
      }
    }
    lVar15 = *(long *)(*(long *)*puVar17 + 8);
    fVar47 = *(float *)(lVar15 + 0x20);
    *(float *)((long)puVar17 + 0xbc) = fVar47;
    fVar46 = *(float *)(lVar15 + 0x24);
    puVar17[7] = FUN_7102c168d0;
    puVar17[8] = 0;
    *(float *)(puVar17 + 0x18) = fVar46;
    *(float *)((long)puVar17 + 0xc4) = fVar46 - fVar47;
    *puVar16 = puVar17;
    puVar42 = (ulong *)puVar14[7];
    puVar14[7] = puVar16;
    if (puVar42 != (ulong *)0x0) {
      uVar12 = *puVar42;
      *puVar42 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40((ulong)puVar42);
    }
  }
  plVar28 = *(long **)(*(long *)(**(long **)*puVar14 + 0x300) + 0x18);
  plVar11 = (long *)*plVar28;
  do {
    if (plVar11 == (long *)plVar28[1]) goto LAB_7102c0e760;
    lVar15 = *plVar11;
    plVar11 = plVar11 + 1;
  } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xa37ca915e);
  plVar11 = *(long **)(lVar15 + 0x110);
  if ((plVar11 != (long *)0x0) && (*plVar11 != plVar11[1])) {
    puVar14[3] = plVar11;
  }
LAB_7102c0e760:
  lVar15 = *plVar32;
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0xe0) != '\0')) {
    (**(code **)(**(long **)(lVar15 + 0x90) + 0x180))(*(long **)(lVar15 + 0x90),0x77953eed7,0);
  }
  FUN_71025f4d80(*(long **)puVar14[3],(long *)((undefined8 *)puVar14[3])[1],1);
  if ((puVar14[1] == 0) || (lVar15 = *(long *)(puVar14[1] + 0xd8), lVar15 == 0)) {
    uVar10 = 0xffffffff;
  }
  else {
    plVar11 = *(long **)(*(long *)(lVar15 + 8) + 8);
    uVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,"DMStandA");
  }
  *(undefined4 *)(puVar14 + 5) = uVar10;
  plVar28 = *(long **)(*(long *)(**(long **)*puVar14 + 0x300) + 0x18);
  plVar11 = (long *)*plVar28;
  do {
    if (plVar11 == (long *)plVar28[1]) goto LAB_7102c0e83c;
    lVar15 = *plVar11;
    plVar11 = plVar11 + 1;
  } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xb00762ca8);
  plVar11 = *(long **)(lVar15 + 0x110);
  if ((plVar11 != (long *)0x0) && (*plVar11 != plVar11[1])) {
    puVar14[4] = plVar11;
  }
LAB_7102c0e83c:
  ppppppppplVar21 = (long *********)0x1;
  FUN_71025f4d80(*(long **)puVar14[4],(long *)((undefined8 *)puVar14[4])[1],1);
  plVar11 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                                           param_6,param_7,param_8), plVar11 != (long *)0x0))
      goto LAB_7102c0e8a8;
    }
    plVar11 = (long *)0x0;
  }
LAB_7102c0e8a8:
  uVar40 = *puVar14;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000010;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar16 != (undefined8 *)0x0))
      goto LAB_7102c0e900;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7102c0e900:
  *puVar16 = uVar40;
  *(undefined1 *)(puVar16 + 1) = 0;
  *plVar11 = (long)puVar16;
  puVar42 = (ulong *)puVar14[9];
  puVar14[9] = plVar11;
  if (puVar42 != (ulong *)0x0) {
    uVar12 = *puVar42;
    *puVar42 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar42);
  }
  lVar15 = *(long *)(**(long **)*puVar14 + 0x310);
  for (plVar11 = *(long **)(lVar15 + 0xd0); plVar11 != *(long **)(lVar15 + 0xd8);
      plVar11 = plVar11 + 2) {
    if ((*(uint *)(plVar11 + 1) < 2) && (lVar38 = *plVar11, *(long *)(lVar38 + 0x68) == 0x9fa0d123c)
       ) goto LAB_7102c0e994;
  }
  lVar38 = 0;
LAB_7102c0e994:
  puVar14[2] = lVar38;
  if (puVar14[1] != 0) {
    uVar12 = FUN_7102c12990(*(char *)(**(long **)*puVar14 + 0x18));
    pbVar36 = (byte *)"ashiba_set_00";
    if ((uVar12 & 1) == 0) {
      pbVar36 = (byte *)"ashiba_set_01";
    }
    if (*plVar32 == 0) {
      lVar15 = 0;
    }
    else {
      ppppppppplVar21 = (long *********)0x0;
      FUN_71025ee080(*plVar32 + 0x60,pbVar36,0);
      lVar15 = *plVar32;
    }
    FUN_7102610070(lVar15,pbVar36);
    FUN_710260fdd0(0,*plVar32,1);
    lVar15 = *plVar32;
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x32) = 0x101;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x22) = 1;
      }
      lVar15 = *plVar32;
      if (lVar15 != 0) {
        if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar15 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar15 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 1;
        }
      }
    }
  }
  *puVar13 = puVar14;
  puVar42 = (ulong *)param_1[0x38];
  param_1[0x38] = puVar13;
  if (puVar42 != (ulong *)0x0) {
    FUN_7102c139f0(puVar42);
    FUN_710392eb40((ulong)puVar42);
  }
  puVar14 = (undefined8 *)param_1[0x35];
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7102c0eaf0;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7102c0eaf0:
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x40,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000040;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar16 != (undefined8 *)0x0))
      goto LAB_7102c0eb4c;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7102c0eb4c:
  *(undefined1 *)(puVar16 + 7) = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  *puVar16 = puVar14;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_7102c0ebbc;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7102c0ebbc:
  ppppppppplVar21 = (long *********)0x0;
  FUN_7102c10570(puVar17,puVar14,(long *********)0x0,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&SUB_00000020;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar23 != (undefined8 *)0x0))
      goto LAB_7102c0ec20;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_7102c0ec20:
  *puVar23 = &DAT_7105121040;
  puVar23[1] = 0;
  puVar23[2] = 0;
  puVar23[3] = puVar17;
  puVar16[1] = puVar17;
  plVar11 = (long *)puVar16[2];
  puVar16[2] = puVar23;
  if (plVar11 != (long *)0x0) {
    plVar28 = plVar11 + 1;
    do {
      lVar15 = *plVar28;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar8) {
        *plVar28 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_7102c0eccc;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7102c0eccc:
  ppppppppplVar21 = (long *********)0x1;
  FUN_7102c10570(puVar17,puVar14,(long *********)0x1,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&SUB_00000020;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar23 != (undefined8 *)0x0))
      goto LAB_7102c0ed30;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_7102c0ed30:
  *puVar23 = &DAT_7105121040;
  puVar23[1] = 0;
  puVar23[2] = 0;
  puVar23[3] = puVar17;
  puVar16[3] = puVar17;
  plVar11 = (long *)puVar16[4];
  puVar16[4] = puVar23;
  if (plVar11 != (long *)0x0) {
    plVar28 = plVar11 + 1;
    do {
      lVar15 = *plVar28;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar8) {
        *plVar28 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_7102c0edd4;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7102c0edd4:
  ppppppppplVar21 = (long *********)0x2;
  FUN_7102c10570(puVar17,puVar14,(long *********)0x2,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&SUB_00000020;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar14 != (undefined8 *)0x0))
      goto LAB_7102c0ee38;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7102c0ee38:
  *puVar14 = &DAT_7105121040;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = puVar17;
  plVar11 = (long *)puVar16[6];
  puVar16[5] = puVar17;
  puVar16[6] = puVar14;
  if (plVar11 != (long *)0x0) {
    plVar28 = plVar11 + 1;
    do {
      lVar15 = *plVar28;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar8) {
        *plVar28 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  *puVar13 = puVar16;
  puVar42 = (ulong *)param_1[0x39];
  param_1[0x39] = puVar13;
  if (puVar42 != (ulong *)0x0) {
    FUN_7102c11940(puVar42);
    FUN_710392eb40((ulong)puVar42);
  }
  puVar14 = (undefined8 *)param_1[0x35];
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7102c0ef00;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7102c0ef00:
  plVar11 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8);
  uVar40 = extraout_x1_19;
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000010;
      ppppppppplVar21 = &local_4c0;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      uVar40 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                                           param_6,param_7,param_8), uVar40 = extraout_x1_20,
         plVar11 != (long *)0x0)) goto LAB_7102c0ef5c;
    }
    plVar11 = (long *)0x0;
  }
LAB_7102c0ef5c:
  *plVar11 = 0;
  plVar11[1] = 0;
  lVar38 = *(long *)*puVar14;
  lVar15 = *(long *)(lVar38 + 0x310);
  for (plVar28 = *(long **)(lVar15 + 0xd0); plVar28 != *(long **)(lVar15 + 0xd8);
      plVar28 = plVar28 + 2) {
    if ((*(uint *)(plVar28 + 1) < 2) && (lVar29 = *plVar28, *(long *)(lVar29 + 0x68) == 0xcbce13164)
       ) {
      *plVar11 = lVar29;
      if (lVar29 != 0) {
        *(undefined1 *)(lVar29 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar29 + 0x108),uVar40,(long ****)ppppppppplVar21,ppppbVar22,param_5
                       ,param_6,param_7,param_8);
        lVar15 = *plVar11;
        if (lVar15 != 0) {
          *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
          lVar15 = *plVar11;
          if (lVar15 != 0) {
            if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar15 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar15 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
            }
          }
        }
      }
      goto LAB_7102c0efb0;
    }
  }
  *plVar11 = 0;
LAB_7102c0efb0:
  plVar31 = *(long **)(*(long *)(lVar38 + 0x300) + 0x18);
  plVar28 = (long *)*plVar31;
  do {
    if (plVar28 == (long *)plVar31[1]) goto LAB_7102c0f00c;
    lVar15 = *plVar28;
    plVar28 = plVar28 + 1;
  } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xcbce13164);
  plVar28 = *(long **)(lVar15 + 0x110);
  if ((plVar28 != (long *)0x0) && (*plVar28 != plVar28[1])) {
    plVar11[1] = (long)plVar28;
    ppppppppplVar21 = (long *********)0x1;
    FUN_71025f4d80((long *)*plVar28,(long *)plVar28[1],1);
  }
LAB_7102c0f00c:
  *puVar13 = plVar11;
  puVar42 = (ulong *)param_1[0x3a];
  param_1[0x3a] = puVar13;
  if (puVar42 != (ulong *)0x0) {
    uVar12 = *puVar42;
    *puVar42 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar42);
  }
  plVar11 = (long *)param_1[0x35];
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7102c0f094;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7102c0f094:
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000030;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar14 != (undefined8 *)0x0))
      goto LAB_7102c0f0f0;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7102c0f0f0:
  *puVar14 = plVar11;
  puVar14[1] = 0;
  uVar51 = _DAT_7107521008;
  uVar40 = _ConstantZero;
  *(undefined1 *)(puVar14 + 4) = 1;
  puVar14[3] = uVar51;
  puVar14[2] = uVar40;
  for (plVar28 = *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd0);
      plVar28 != *(long **)(*(long *)(*(long *)*plVar11 + 0x310) + 0xd8); plVar28 = plVar28 + 2) {
    if ((*(uint *)(plVar28 + 1) < 2) && (lVar15 = *plVar28, *(long *)(lVar15 + 0x68) == 0x8e01b55d8)
       ) goto LAB_7102c0f15c;
  }
  lVar15 = 0;
LAB_7102c0f15c:
  puVar14[1] = lVar15;
  FUN_7102c12a90(&local_4b8,(undefined8 *)(*(long *)(*plVar11 + 8) + 8),(long ****)ppppppppplVar21,
                 ppppbVar22,param_5,param_6,param_7,param_8);
  local_4c0 = (long ********)&PTR_FUN_7105121670;
  local_90 = CONCAT44(local_3c0,local_3c4);
  puVar14[3] = (ulong)local_3bc;
  puVar14[2] = CONCAT44(local_3c0,local_3c4);
  uStack_b8 = 0;
  local_c0 = (long ********)&DAT_3f800000;
  uStack_98 = 0x3f800000;
  local_a0 = 0;
  local_88 = CONCAT44(0x3f800000,local_3bc);
  lVar15 = puVar14[1];
  uVar40 = extraout_x1_21;
  local_b0 = uVar41;
  uStack_a8 = uVar50;
  if (lVar15 != 0) {
    (**(code **)(**(long **)(lVar15 + 0x90) + 0x148))(*(long **)(lVar15 + 0x90),&local_c0);
    lVar15 = *(long *)(lVar15 + 0xd8);
    uVar40 = extraout_x1_22;
    if (lVar15 != 0) {
      uStack_558 = uStack_a8;
      local_560 = local_b0;
      uStack_568 = uStack_b8;
      local_570 = local_c0;
      local_538 = local_88;
      local_540 = local_90;
      uStack_548 = uStack_98;
      local_550 = local_a0;
      if (*(char *)(*(long *)(lVar15 + 8) + 0xa8) != '\0') {
        plVar11 = *(long **)(*(long *)(lVar15 + 8) + 0x48);
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_570);
        uVar40 = extraout_x1_23;
      }
      *(undefined1 *)(lVar15 + 0x20) = 1;
    }
  }
  if (*(char *)(puVar14 + 4) != '\0') {
    lVar15 = puVar14[1];
    if (lVar15 != 0) {
      *(undefined1 *)(lVar15 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar15 + 0x108),uVar40,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                     param_6,param_7,param_8);
      lVar15 = puVar14[1];
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
        lVar15 = puVar14[1];
        if (lVar15 != 0) {
          if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar15 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar15 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
          }
        }
      }
    }
    *(undefined1 *)(puVar14 + 4) = 0;
  }
  FUN_7102c104b0((long)&local_4b8);
  *puVar13 = puVar14;
  puVar42 = (ulong *)param_1[0x3b];
  param_1[0x3b] = puVar13;
  if (puVar42 != (ulong *)0x0) {
    uVar12 = *puVar42;
    *puVar42 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar42);
  }
  uVar41 = param_1[0x35];
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7102c0f354;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7102c0f354:
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x58,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000058;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x58,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar14 != (undefined8 *)0x0))
      goto LAB_7102c0f3b4;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7102c0f3b4:
  *puVar14 = uVar41;
  plVar11 = puVar14 + 3;
  *plVar11 = 0;
  puVar16 = (undefined8 *)0x0;
  puVar14[4] = 0;
  puVar43 = puVar14 + 1;
  *puVar43 = 0;
  puVar14[2] = 0;
  *(undefined4 *)(puVar14 + 5) = 0x3f800000;
  puVar42 = puVar14 + 6;
  *puVar42 = 0;
  plVar28 = puVar14 + 8;
  *plVar28 = 0;
  puVar14[9] = 0;
  puVar14[7] = 0;
  *(undefined4 *)(puVar14 + 10) = 0x3f800000;
LAB_7102c0f41c:
  if (puVar16 != (undefined8 *)0x0) {
    plVar32 = *(long **)(*(long *)(**(long **)*puVar14 + 0x300) + 0x18);
    plVar31 = (long *)*plVar32;
    plVar32 = (long *)plVar32[1];
    if (plVar31 != plVar32) {
      do {
        uVar37 = (uint)(byte)*(&PTR_DAT_71051210a0)[(long)puVar16];
        if (uVar37 == 0) {
          uVar35 = 0;
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          uVar9 = 0xffffffff;
          pbVar36 = (&PTR_DAT_71051210a0)[(long)puVar16];
          do {
            pbVar36 = pbVar36 + 1;
            uVar2 = uVar37 + 0x20;
            if (0x19 < uVar37 - 0x41) {
              uVar2 = uVar37;
            }
            uVar9 = (&DAT_7104754084)[(uVar2 ^ uVar9) & 0xff] ^ uVar9 >> 8;
            uVar37 = (uint)*pbVar36;
            uVar12 = uVar12 + 0x100000000;
          } while (uVar37 != 0);
          uVar35 = (ulong)~uVar9;
          uVar12 = uVar12 & 0xff00000000;
        }
        if ((*(ulong *)(*plVar31 + 0xa0) & 0xffffffffff) == (uVar12 | uVar35)) {
          lVar15 = *(long *)(*plVar31 + 0x130);
          if (lVar15 != 0) {
            puVar23 = (undefined8 *)puVar14[2];
            if (puVar23 == (undefined8 *)0x0) goto LAB_7102c0f578;
            puVar26 = (undefined1 *)((long)puVar23 + -1);
            if (((ulong)puVar26 & (ulong)puVar23) == 0) {
              puVar17 = (undefined8 *)((ulong)puVar26 & (ulong)puVar16);
            }
            else {
              puVar17 = puVar16;
              if (puVar23 <= puVar16) {
                uVar12 = 0;
                if (puVar23 != (undefined8 *)0x0) {
                  uVar12 = (ulong)puVar16 / (ulong)puVar23;
                }
                puVar17 = (undefined8 *)((long)puVar16 - uVar12 * (long)puVar23);
              }
            }
            plVar31 = *(long **)(*puVar43 + (long)puVar17 * 8);
            if (plVar31 == (long *)0x0) goto LAB_7102c0f578;
            if (((ulong)puVar26 & (ulong)puVar23) == 0) goto LAB_7102c0f54c;
            goto LAB_7102c0f510;
          }
          break;
        }
        plVar31 = plVar31 + 1;
      } while (plVar31 != plVar32);
    }
  }
  goto LAB_7102c0fbc8;
  while( true ) {
    puVar27 = (undefined8 *)plVar31[1];
    if (puVar27 != puVar16) {
      if (puVar23 <= puVar27) {
        uVar12 = 0;
        if (puVar23 != (undefined8 *)0x0) {
          uVar12 = (ulong)puVar27 / (ulong)puVar23;
        }
        puVar27 = (undefined8 *)((long)puVar27 - uVar12 * (long)puVar23);
      }
      if (puVar27 != puVar17) goto LAB_7102c0f578;
    }
    if (puVar16 == (undefined8 *)(ulong)*(uint *)(plVar31 + 2)) break;
LAB_7102c0f510:
    plVar31 = (long *)*plVar31;
    if (plVar31 == (long *)0x0) goto LAB_7102c0f578;
  }
  goto LAB_7102c0f790;
  while (puVar16 != (undefined8 *)(ulong)*(uint *)(plVar31 + 2)) {
LAB_7102c0f54c:
    plVar31 = (long *)*plVar31;
    if ((plVar31 == (long *)0x0) ||
       ((undefined8 *)plVar31[1] != puVar16 &&
        (undefined8 *)((ulong)plVar31[1] & (ulong)puVar26) != puVar17)) goto LAB_7102c0f578;
  }
LAB_7102c0f790:
  plVar31[3] = lVar15;
  puVar23 = (undefined8 *)puVar14[7];
  if (puVar23 == (undefined8 *)0x0) {
LAB_7102c0f850:
    plVar31 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6
                                     ,param_7,param_8);
    if (plVar31 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
        local_4c0 = (long ********)&SUB_00000018;
        ppppppppplVar21 = &local_4c0;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
        if (((uVar12 & 1) != 0) &&
           (plVar31 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar21,ppppbVar22,param_5
                                             ,param_6,param_7,param_8), plVar31 != (long *)0x0))
        goto LAB_7102c0f8ac;
      }
      plVar31 = (long *)0x0;
    }
LAB_7102c0f8ac:
    puVar45 = (uint *)(plVar31 + 2);
    *puVar45 = (uint)puVar16;
    *(undefined1 *)((long)plVar31 + 0x14) = 0;
    *plVar31 = 0;
    plVar31[1] = (long)puVar16;
    if ((puVar23 == (undefined8 *)0x0) ||
       (*(float *)(puVar14 + 10) * (float)puVar23 < (float)(puVar14[9] + 1))) {
      if (puVar23 < (undefined8 *)0x3) {
        uVar12 = 1;
      }
      else {
        uVar12 = (ulong)(((ulong)((long)puVar23 + -1) & (ulong)puVar23) != 0);
      }
      uVar12 = uVar12 | (long)puVar23 << 1;
      uVar35 = (ulong)((float)(puVar14[9] + 1) / *(float *)(puVar14 + 10));
      if (uVar35 <= uVar12) {
        uVar35 = uVar12;
      }
      if (uVar35 - 1 == 0) {
        uVar35 = 2;
      }
      else if ((uVar35 - 1 & uVar35) != 0) {
        uVar35 = std::__next_prime(uVar35);
      }
      uVar12 = puVar14[7];
      if (uVar12 < uVar35) {
LAB_7102c0f94c:
        FUN_7102c13390(puVar42,uVar35,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                       param_8);
      }
      else if (uVar35 < uVar12) {
        uVar24 = (ulong)((float)(ulong)puVar14[9] / *(float *)(puVar14 + 10));
        if (uVar12 < 3 || (uVar12 - 1 & uVar12) != 0) {
          uVar24 = std::__next_prime(uVar24);
        }
        else if (1 < uVar24) {
          uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
        }
        if (uVar24 <= uVar35) {
          uVar24 = uVar35;
        }
        uVar35 = uVar24;
        if (uVar24 < uVar12) goto LAB_7102c0f94c;
      }
      puVar23 = (undefined8 *)puVar14[7];
      if (((ulong)((long)puVar23 + -1) & (ulong)puVar23) == 0) {
        puVar17 = (undefined8 *)((ulong)((long)puVar23 + -1) & (ulong)puVar16);
      }
      else {
        puVar17 = puVar16;
        if (puVar23 <= puVar16) {
          uVar12 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar12 = (ulong)puVar16 / (ulong)puVar23;
          }
          puVar17 = (undefined8 *)((long)puVar16 - uVar12 * (long)puVar23);
        }
      }
    }
    uVar12 = *puVar42;
    plVar32 = *(long **)(uVar12 + (long)puVar17 * 8);
    if (plVar32 == (long *)0x0) {
      *plVar31 = *plVar28;
      *plVar28 = (long)plVar31;
      *(long **)(uVar12 + (long)puVar17 * 8) = plVar28;
      if (*plVar31 != 0) {
        puVar27 = *(undefined8 **)(*plVar31 + 8);
        if (((ulong)((long)puVar23 + -1) & (ulong)puVar23) == 0) {
          puVar27 = (undefined8 *)((ulong)puVar27 & (ulong)((long)puVar23 + -1));
        }
        else if (puVar23 <= puVar27) {
          uVar12 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar12 = (ulong)puVar27 / (ulong)puVar23;
          }
          puVar27 = (undefined8 *)((long)puVar27 - uVar12 * (long)puVar23);
        }
        plVar32 = (long *)(*puVar42 + (long)puVar27 * 8);
        goto LAB_7102c0fa74;
      }
    }
    else {
      *plVar31 = *plVar32;
LAB_7102c0fa74:
      *plVar32 = (long)plVar31;
    }
    puVar14[9] = puVar14[9] + 1;
  }
  else {
    puVar26 = (undefined1 *)((long)puVar23 + -1);
    if (((ulong)puVar26 & (ulong)puVar23) == 0) {
      puVar17 = (undefined8 *)((ulong)puVar26 & (ulong)puVar16);
    }
    else {
      puVar17 = puVar16;
      if (puVar23 <= puVar16) {
        uVar12 = 0;
        if (puVar23 != (undefined8 *)0x0) {
          uVar12 = (ulong)puVar16 / (ulong)puVar23;
        }
        puVar17 = (undefined8 *)((long)puVar16 - uVar12 * (long)puVar23);
      }
    }
    plVar31 = *(long **)(*puVar42 + (long)puVar17 * 8);
    if (plVar31 == (long *)0x0) goto LAB_7102c0f850;
    if (((ulong)puVar26 & (ulong)puVar23) == 0) {
      do {
        plVar31 = (long *)*plVar31;
        if ((plVar31 == (long *)0x0) ||
           ((undefined8 *)plVar31[1] != puVar16 &&
            (undefined8 *)((ulong)plVar31[1] & (ulong)puVar26) != puVar17)) goto LAB_7102c0f850;
        puVar45 = (uint *)(plVar31 + 2);
      } while (puVar16 != (undefined8 *)(ulong)*puVar45);
    }
    else {
      do {
        plVar31 = (long *)*plVar31;
        if (plVar31 == (long *)0x0) goto LAB_7102c0f850;
        puVar27 = (undefined8 *)plVar31[1];
        if (puVar27 != puVar16) {
          if (puVar23 <= puVar27) {
            uVar12 = 0;
            if (puVar23 != (undefined8 *)0x0) {
              uVar12 = (ulong)puVar27 / (ulong)puVar23;
            }
            puVar27 = (undefined8 *)((long)puVar27 - uVar12 * (long)puVar23);
          }
          if (puVar27 != puVar17) goto LAB_7102c0f850;
        }
        puVar45 = (uint *)(plVar31 + 2);
      } while (puVar16 != (undefined8 *)(ulong)*puVar45);
    }
  }
  *(undefined1 *)(puVar45 + 1) = 0;
  puVar23 = (undefined8 *)puVar14[2];
  if (puVar23 != (undefined8 *)0x0) {
    puVar26 = (undefined1 *)((long)puVar23 + -1);
    if (((ulong)puVar26 & (ulong)puVar23) == 0) {
      puVar27 = (undefined8 *)((ulong)puVar26 & (ulong)puVar16);
    }
    else {
      puVar27 = puVar16;
      if (puVar23 <= puVar16) {
        uVar12 = 0;
        if (puVar23 != (undefined8 *)0x0) {
          uVar12 = (ulong)puVar16 / (ulong)puVar23;
        }
        puVar27 = (undefined8 *)((long)puVar16 - uVar12 * (long)puVar23);
      }
    }
    plVar31 = *(long **)(*puVar43 + (long)puVar27 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      if (((ulong)puVar26 & (ulong)puVar23) == 0) {
        do {
          puVar23 = (undefined8 *)plVar31[1];
          if (puVar23 != puVar16 && (undefined8 *)((ulong)puVar23 & (ulong)puVar26) != puVar27)
          break;
          if ((puVar23 == puVar16) && (puVar16 == (undefined8 *)(ulong)*(uint *)(plVar31 + 2)))
          goto LAB_7102c0fb44;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          puVar34 = (undefined8 *)plVar31[1];
          if (puVar34 == puVar16) {
            if (puVar16 == (undefined8 *)(ulong)*(uint *)(plVar31 + 2)) goto LAB_7102c0fb44;
          }
          else {
            if (puVar23 <= puVar34) {
              uVar12 = 0;
              if (puVar23 != (undefined8 *)0x0) {
                uVar12 = (ulong)puVar34 / (ulong)puVar23;
              }
              puVar34 = (undefined8 *)((long)puVar34 - uVar12 * (long)puVar23);
            }
            if (puVar34 != puVar27) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
    }
  }
LAB_7102c0fbc8:
  puVar16 = (undefined8 *)((long)puVar16 + 1);
  if (puVar16 == (undefined8 *)&DAT_00000007) goto code_r0x007102c0fbd4;
  goto LAB_7102c0f41c;
LAB_7102c0f578:
  plVar31 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8);
  if (plVar31 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&SUB_00000020;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (plVar31 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,ppppbVar22,param_5,
                                           param_6,param_7,param_8), plVar31 != (long *)0x0))
      goto LAB_7102c0f5d4;
    }
    plVar31 = (long *)0x0;
  }
LAB_7102c0f5d4:
  *(uint *)(plVar31 + 2) = (uint)puVar16;
  plVar31[3] = 0;
  *plVar31 = 0;
  plVar31[1] = (long)puVar16;
  if ((puVar23 == (undefined8 *)0x0) ||
     (*(float *)(puVar14 + 5) * (float)puVar23 < (float)(puVar14[4] + 1))) {
    if (puVar23 < (undefined8 *)0x3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)(((ulong)((long)puVar23 + -1) & (ulong)puVar23) != 0);
    }
    uVar12 = uVar12 | (long)puVar23 << 1;
    uVar35 = (ulong)((float)(puVar14[4] + 1) / *(float *)(puVar14 + 5));
    if (uVar35 <= uVar12) {
      uVar35 = uVar12;
    }
    if (uVar35 - 1 == 0) {
      uVar35 = 2;
    }
    else if ((uVar35 - 1 & uVar35) != 0) {
      uVar35 = std::__next_prime(uVar35);
    }
    uVar12 = puVar14[2];
    if (uVar12 < uVar35) {
LAB_7102c0f670:
      FUN_7102c13630(puVar43,uVar35,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                     param_8);
    }
    else if (uVar35 < uVar12) {
      uVar24 = (ulong)((float)(ulong)puVar14[4] / *(float *)(puVar14 + 5));
      if (uVar12 < 3 || (uVar12 - 1 & uVar12) != 0) {
        uVar24 = std::__next_prime(uVar24);
      }
      else if (1 < uVar24) {
        uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
      }
      if (uVar24 <= uVar35) {
        uVar24 = uVar35;
      }
      uVar35 = uVar24;
      if (uVar24 < uVar12) goto LAB_7102c0f670;
    }
    puVar23 = (undefined8 *)puVar14[2];
    if (((ulong)((long)puVar23 + -1) & (ulong)puVar23) == 0) {
      puVar17 = (undefined8 *)((ulong)((long)puVar23 + -1) & (ulong)puVar16);
    }
    else {
      puVar17 = puVar16;
      if (puVar23 <= puVar16) {
        uVar12 = 0;
        if (puVar23 != (undefined8 *)0x0) {
          uVar12 = (ulong)puVar16 / (ulong)puVar23;
        }
        puVar17 = (undefined8 *)((long)puVar16 - uVar12 * (long)puVar23);
      }
    }
  }
  uVar12 = *puVar43;
  plVar32 = *(long **)(uVar12 + (long)puVar17 * 8);
  if (plVar32 == (long *)0x0) {
    *plVar31 = *plVar11;
    *plVar11 = (long)plVar31;
    *(long **)(uVar12 + (long)puVar17 * 8) = plVar11;
    if (*plVar31 != 0) {
      puVar27 = *(undefined8 **)(*plVar31 + 8);
      if (((ulong)((long)puVar23 + -1) & (ulong)puVar23) == 0) {
        puVar27 = (undefined8 *)((ulong)puVar27 & (ulong)((long)puVar23 + -1));
      }
      else if (puVar23 <= puVar27) {
        uVar12 = 0;
        if (puVar23 != (undefined8 *)0x0) {
          uVar12 = (ulong)puVar27 / (ulong)puVar23;
        }
        puVar27 = (undefined8 *)((long)puVar27 - uVar12 * (long)puVar23);
      }
      plVar32 = (long *)(*puVar43 + (long)puVar27 * 8);
      goto LAB_7102c0f780;
    }
  }
  else {
    *plVar31 = *plVar32;
LAB_7102c0f780:
    *plVar32 = (long)plVar31;
  }
  puVar14[4] = puVar14[4] + 1;
  goto LAB_7102c0f790;
LAB_7102c0fb44:
  puVar27 = (undefined8 *)((undefined8 *)plVar31[3])[1];
  for (puVar23 = *(undefined8 **)plVar31[3]; puVar23 != puVar27; puVar23 = puVar23 + 1) {
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
    plVar31 = (long *)*puVar23;
    if ((char)plVar31[4] != '\0') {
      plVar32 = (long *)plVar31[1];
      lVar15 = plVar31[2];
      lVar38 = *plVar31;
      *(undefined1 *)(plVar31 + 4) = 0;
      *plVar32 = lVar38;
      *(long **)(lVar38 + 8) = plVar32;
      *(long *)(lVar15 + 0x18) = *(long *)(lVar15 + 0x18) + -1;
      *plVar31 = 0;
      plVar31[1] = 0;
      puVar34 = *(undefined8 **)(lVar15 + 0x40);
      *plVar31 = lVar15 + 0x38;
      plVar31[1] = (long)puVar34;
      *(long **)(lVar15 + 0x40) = plVar31;
      *puVar34 = plVar31;
      *(long *)(lVar15 + 0x30) = *(long *)(lVar15 + 0x30) + 1;
      iVar33 = 0;
      if (plVar31[3] != 0) {
        iVar33 = *(int *)(plVar31[3] + 0x110);
      }
      *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) - iVar33;
    }
  }
  goto LAB_7102c0fbc8;
code_r0x007102c0fbd4:
  *puVar13 = puVar14;
  puVar42 = (ulong *)param_1[0x3c];
  param_1[0x3c] = puVar13;
  if (puVar42 != (ulong *)0x0) {
    FUN_7102c138d0(puVar42);
    FUN_710392eb40((ulong)puVar42);
  }
  puVar14 = (undefined8 *)param_1[0x35];
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000008;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7102c0fc58;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7102c0fc58:
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,param_7,
                           param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_570 = (long ********)((ulong)local_570 & 0xffffffff00000000);
      local_4c0 = (long ********)&DAT_00000070;
      ppppppppplVar21 = &local_4c0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_570);
      if (((uVar12 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar21,ppppbVar22,param_5,param_6,
                                   param_7,param_8), puVar16 != (undefined8 *)0x0))
      goto LAB_7102c0fcb4;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7102c0fcb4:
  *puVar16 = puVar14;
  plVar28 = puVar16 + 1;
  *plVar28 = 0;
  *(undefined4 *)((long)puVar16 + 0x2c) = 0;
  puVar16[6] = 0xffffffff00000000;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[2] = 0;
  *(undefined2 *)(puVar16 + 5) = 0;
  uVar50 = _DAT_7107521008;
  uVar41 = _ConstantZero;
  *(undefined2 *)(puVar16 + 10) = 0;
  *(undefined8 *)((long)puVar16 + 0x5a) = 0;
  *(undefined8 *)((long)puVar16 + 0x54) = 0;
  puVar16[9] = uVar50;
  puVar16[8] = uVar41;
  for (plVar11 = *(long **)(*(long *)(*(long *)*puVar14 + 0x310) + 0xd0);
      plVar11 != *(long **)(*(long *)(*(long *)*puVar14 + 0x310) + 0xd8); plVar11 = plVar11 + 2) {
    if ((*(uint *)(plVar11 + 1) < 2) && (lVar15 = *plVar11, *(long *)(lVar15 + 0x68) == 0x8a3b616ff)
       ) {
      *plVar28 = lVar15;
      if ((lVar15 != 0) && (*(char *)(lVar15 + 0xe0) != '\0')) {
        ppppppppplVar21 = (long *********)0x1;
        local_4c0 = (long ********)0x71043abbef;
        FUN_71026527b0(*(undefined8 **)(lVar15 + 0xb8),&local_4c0,(long *********)0x1,ppppbVar22,
                       param_5,param_6,param_7,param_8);
        puVar14 = (undefined8 *)*puVar16;
      }
      goto LAB_7102c0fd44;
    }
  }
  *plVar28 = 0;
LAB_7102c0fd44:
  uVar12 = FUN_7102c12990(*(char *)(*(long *)*puVar14 + 0x18));
  pbVar36 = (byte *)"ship_set_00";
  if ((uVar12 & 1) == 0) {
    pbVar36 = (byte *)"ship_set_01";
  }
  if (*plVar28 == 0) {
    lVar15 = 0;
  }
  else {
    ppppppppplVar21 = (long *********)0x0;
    FUN_71025ee080(*plVar28 + 0x60,pbVar36,0);
    lVar15 = *plVar28;
  }
  FUN_7102610070(lVar15,pbVar36);
  if ((*plVar28 == 0) || (lVar15 = *(long *)(*plVar28 + 0xd8), lVar15 == 0)) {
    uVar10 = 0xffffffff;
  }
  else {
    plVar11 = *(long **)(*(long *)(lVar15 + 8) + 8);
    uVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,"ShipN");
  }
  puVar14 = (undefined8 *)*puVar16;
  *(undefined4 *)((long)puVar16 + 0x34) = uVar10;
  lVar15 = *(long *)*puVar14;
  plVar28 = *(long **)(*(long *)(lVar15 + 0x300) + 0x18);
  plVar11 = (long *)*plVar28;
  do {
    if (plVar11 == (long *)plVar28[1]) goto LAB_7102c0fe3c;
    lVar38 = *plVar11;
    plVar11 = plVar11 + 1;
  } while ((*(ulong *)(lVar38 + 0xa0) & 0xffffffffff) != 0x4fa30eb24);
  plVar11 = *(long **)(lVar38 + 0x110);
  if ((plVar11 != (long *)0x0) && (*plVar11 != plVar11[1])) {
    puVar16[2] = plVar11;
    lVar15 = *(long *)*puVar14;
  }
LAB_7102c0fe3c:
  local_4c0 = (long ********)0x0;
  lVar15 = *(long *)(**(long **)(lVar15 + 0x338) + 8);
  if (lVar15 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    ppppppppplVar21 = (long *********)0x0;
    uVar10 = FUN_7102405040(lVar15,&local_4c0,0,ppppbVar22,param_5,param_6,param_7,param_8);
    puVar14 = (undefined8 *)*puVar16;
  }
  *(undefined4 *)((long)puVar16 + 0x2c) = uVar10;
  lVar15 = *(long *)(**(long **)(*(long *)*puVar14 + 0x338) + 8);
  if (lVar15 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    ppppppppplVar21 = (long *********)0x0;
    uVar10 = FUN_7102405040(lVar15,&local_4c0,0,ppppbVar22,param_5,param_6,param_7,param_8);
    puVar14 = (undefined8 *)*puVar16;
  }
  *(undefined4 *)(puVar16 + 6) = uVar10;
  uVar41 = FUN_7102c12990(*(char *)(*(long *)*puVar14 + 0x18));
  *(byte *)((long)puVar16 + 0x61) = ~(byte)uVar41 & 1;
  plVar11 = (long *)*puVar16;
  uVar10 = *(undefined4 *)(*(long *)(*plVar11 + 8) + 0x160);
  *(undefined4 *)(puVar16 + 4) = uVar10;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar10;
  *(undefined2 *)(puVar16 + 5) = 1;
  puVar3 = *(undefined4 **)(*(long *)(*plVar11 + 8) + 0x140);
  if (*(undefined4 **)(*(long *)(*plVar11 + 8) + 0x148) == puVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar10 = puVar3[1];
  *(undefined4 *)(puVar16 + 0xb) = *puVar3;
  *(undefined4 *)((long)puVar16 + 0x5c) = uVar10;
  plVar28 = *(long **)(*(long *)(*(long *)*plVar11 + 0x300) + 0x18);
  plVar11 = (long *)*plVar28;
  do {
    if (plVar11 == (long *)plVar28[1]) goto LAB_7102c0ff3c;
    lVar15 = *plVar11;
    plVar11 = plVar11 + 1;
  } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0x4fa30eb24);
  lVar15 = *(long *)(lVar15 + 0x130);
  if (lVar15 != 0) {
    puVar16[3] = lVar15;
  }
LAB_7102c0ff3c:
  *puVar13 = puVar16;
  puVar42 = (ulong *)param_1[0x37];
  param_1[0x37] = puVar13;
  if (puVar42 != (ulong *)0x0) {
    uVar12 = *puVar42;
    *puVar42 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar42);
  }
  if ((undefined8 *)param_1[0x36] != (undefined8 *)0x0) {
    FUN_7102c164e0(*(undefined8 **)param_1[0x36]);
    lVar15 = *(long *)param_1[0x36];
    if (lVar15 != 0) {
      uVar41 = *(undefined8 *)(lVar15 + 0x18);
      param_1[0x41] = *(undefined8 *)(lVar15 + 0x28);
      param_1[0x3f] = uVar41;
      uVar41 = *(undefined8 *)(lVar15 + 0x38);
      param_1[0x45] = *(undefined8 *)(lVar15 + 0x48);
      param_1[0x43] = uVar41;
      uVar41 = *(undefined8 *)(lVar15 + 0x10);
      param_1[0x40] = *(undefined8 *)(lVar15 + 0x20);
      param_1[0x3e] = uVar41;
      uVar41 = *(undefined8 *)(lVar15 + 0x30);
      param_1[0x44] = *(undefined8 *)(lVar15 + 0x40);
      param_1[0x42] = uVar41;
    }
  }
  puVar13 = param_1 + 0x3e;
  if (*(undefined8 **)param_1[0x38] != (undefined8 *)0x0) {
    auVar6._12_4_ = 0;
    auVar6._0_12_ = ZEXT812(0);
    FUN_7102c13c40(auVar6,*(undefined8 **)param_1[0x38],puVar13,(long ****)ppppppppplVar21,
                   ppppbVar22,param_5,param_6,param_7,param_8);
  }
  FUN_7102c16f10(0,0.0,(undefined8 *)param_1[0x37],puVar13,(long ****)ppppppppplVar21,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  param_1[0x49] = param_1[0x41];
  param_1[0x47] = param_1[0x3f];
  param_1[0x4d] = param_1[0x45];
  param_1[0x4b] = param_1[0x43];
  param_1[0x48] = param_1[0x40];
  param_1[0x46] = *puVar13;
  param_1[0x4c] = param_1[0x44];
  param_1[0x4a] = param_1[0x42];
  return;
}

