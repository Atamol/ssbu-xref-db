// addr:      710297de70
// offset:    0x297de70
// name:      FUN_710297de70
// mangled:   
// signature: ulong __cdecl FUN_710297de70(byte * * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710297de70(byte **param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  byte **ppbVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long *plVar12;
  long ****pppplVar13;
  byte ***pppbVar14;
  long *plVar15;
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
  long *extraout_x1_11;
  long *extraout_x1_12;
  long *extraout_x1_13;
  long *extraout_x1_14;
  long *extraout_x1_15;
  long *extraout_x1_16;
  long *extraout_x1_17;
  long *extraout_x1_18;
  long *extraout_x1_19;
  long *extraout_x1_20;
  long *extraout_x1_21;
  long *extraout_x1_22;
  long *extraout_x1_23;
  long *extraout_x1_24;
  long *extraout_x1_25;
  long *extraout_x1_26;
  long *extraout_x1_27;
  long *extraout_x1_28;
  long *extraout_x1_29;
  long *extraout_x1_30;
  long *extraout_x1_31;
  char *pcVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  byte ****ppppbVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  long ***ppplVar24;
  long **pplVar25;
  int *piVar26;
  ulong uVar27;
  long ****pppplVar28;
  byte *pbVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_80;
  long ***local_78;
  long **local_70;
  byte *local_68;
  undefined4 local_54;
  
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x103386e162)) goto LAB_710297dedc;
  }
  pbVar22 = (byte *)0x0;
LAB_710297dedc:
  param_1[0x105] = pbVar22;
  if (pbVar22 == (byte *)0x0) {
LAB_710297df44:
    pbVar22 = param_1[0x105];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)param_1[0xf2]);
      pbVar22 = param_1[0x105];
      param_2 = extraout_x1_00;
    }
  }
  else {
    pbVar22[0x110] = *(int *)(param_1 + 0x115) == 0;
    FUN_71025e9d50((long *)(pbVar22 + 0x108),param_2,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pbVar29 = param_1[0x105];
    pbVar22 = (byte *)0x0;
    param_2 = extraout_x1;
    if (pbVar29 != (byte *)0x0) {
      if (pbVar29[0x110] == 0) {
        if ((pbVar29[0xe0] != 0) && (*(long *)(pbVar29 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar29 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(pbVar29 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xd8) + 0x21) = 1;
        }
        if (pbVar29[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_710297df44;
    }
  }
  if (pbVar22 == (byte *)0x0) {
    param_1[0x11f] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Slope_O_OBJ_O_HIR");
      param_2 = extraout_x1_01;
    }
    param_1[0x11f] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
      param_2 = extraout_x1_02;
    }
  }
  *(int *)(param_1 + 0x120) = iVar9;
  param_1[0x123] = (byte *)0x0;
  param_1[0x122] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  param_1[0x127] = &DAT_3f800000;
  param_1[0x126] = (byte *)0x0;
  param_1[0x125] = (byte *)0x0;
  param_1[0x124] = &DAT_3f80000000000000;
  param_1[0x129] = &DAT_3f80000000000000;
  param_1[0x128] = (byte *)0x0;
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x12c0771146)) goto LAB_710297e074;
  }
  pbVar22 = (byte *)0x0;
LAB_710297e074:
  param_1[0x106] = pbVar22;
  if (pbVar22 == (byte *)0x0) {
LAB_710297e0dc:
    pbVar22 = param_1[0x106];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf2] + 4));
      pbVar22 = param_1[0x106];
      param_2 = extraout_x1_04;
    }
  }
  else {
    pbVar22[0x110] = *(int *)(param_1 + 0x115) == 1;
    FUN_71025e9d50((long *)(pbVar22 + 0x108),param_2,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pbVar29 = param_1[0x106];
    pbVar22 = (byte *)0x0;
    param_2 = extraout_x1_03;
    if (pbVar29 != (byte *)0x0) {
      if (pbVar29[0x110] == 0) {
        if ((pbVar29[0xe0] != 0) && (*(long *)(pbVar29 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar29 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(pbVar29 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xd8) + 0x21) = 1;
        }
        if (pbVar29[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_710297e0dc;
    }
  }
  if (pbVar22 == (byte *)0x0) {
    param_1[0x12d] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Slope_O_OBJ_O_HIR");
      param_2 = extraout_x1_05;
    }
    param_1[0x12d] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
      param_2 = extraout_x1_06;
    }
  }
  *(int *)(param_1 + 0x12e) = iVar9;
  param_1[0x131] = (byte *)0x0;
  param_1[0x130] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x138) = 0;
  param_1[0x133] = (byte *)0x0;
  param_1[0x132] = &DAT_3f80000000000000;
  param_1[0x135] = &DAT_3f800000;
  param_1[0x134] = (byte *)0x0;
  param_1[0x137] = &DAT_3f80000000000000;
  param_1[0x136] = (byte *)0x0;
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x104c8d8d27)) goto LAB_710297e1f0;
  }
  pbVar22 = (byte *)0x0;
LAB_710297e1f0:
  param_1[0x107] = pbVar22;
  if (pbVar22 == (byte *)0x0) {
LAB_710297e258:
    pbVar22 = param_1[0x107];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf2] + 8));
      pbVar22 = param_1[0x107];
      param_2 = extraout_x1_08;
    }
  }
  else {
    pbVar22[0x110] = *(int *)(param_1 + 0x115) == 2;
    FUN_71025e9d50((long *)(pbVar22 + 0x108),param_2,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pbVar29 = param_1[0x107];
    pbVar22 = (byte *)0x0;
    param_2 = extraout_x1_07;
    if (pbVar29 != (byte *)0x0) {
      if (pbVar29[0x110] == 0) {
        if ((pbVar29[0xe0] != 0) && (*(long *)(pbVar29 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar29 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(pbVar29 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xd8) + 0x21) = 1;
        }
        if (pbVar29[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_710297e258;
    }
  }
  if (pbVar22 == (byte *)0x0) {
    param_1[0x13b] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Slope_O_OBJ_O_HIR");
      param_2 = extraout_x1_09;
    }
    param_1[0x13b] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
      param_2 = extraout_x1_10;
    }
  }
  *(int *)(param_1 + 0x13c) = iVar9;
  param_1[0x13f] = (byte *)0x0;
  param_1[0x13e] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x146) = 0;
  param_1[0x141] = (byte *)0x0;
  param_1[0x140] = &DAT_3f80000000000000;
  param_1[0x143] = &DAT_3f800000;
  param_1[0x142] = (byte *)0x0;
  param_1[0x145] = &DAT_3f80000000000000;
  param_1[0x144] = (byte *)0x0;
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0xd8bba34fa)) goto LAB_710297e36c;
  }
  pbVar22 = (byte *)0x0;
LAB_710297e36c:
  param_1[0x108] = pbVar22;
  if (pbVar22 == (byte *)0x0) {
LAB_710297e3d4:
    pbVar22 = param_1[0x108];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf2] + 0xc));
      pbVar22 = param_1[0x108];
    }
  }
  else {
    pbVar22[0x110] = *(int *)(param_1 + 0x115) == 3;
    FUN_71025e9d50((long *)(pbVar22 + 0x108),param_2,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pbVar29 = param_1[0x108];
    pbVar22 = (byte *)0x0;
    if (pbVar29 != (byte *)0x0) {
      if (pbVar29[0x110] == 0) {
        if ((pbVar29[0xe0] != 0) && (*(long *)(pbVar29 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar29 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(pbVar29 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xd8) + 0x21) = 1;
        }
        if (pbVar29[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_710297e3d4;
    }
  }
  if (pbVar22 == (byte *)0x0) {
    param_1[0x149] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Slope_O_OBJ_O_HIR");
    }
    param_1[0x149] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  pbVar22 = param_1[0x62];
  *(int *)(param_1 + 0x14a) = iVar9;
  param_1[0x14d] = (byte *)0x0;
  param_1[0x14c] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x154) = 0;
  param_1[0x14f] = (byte *)0x0;
  param_1[0x14e] = &DAT_3f80000000000000;
  param_1[0x151] = &DAT_3f800000;
  param_1[0x150] = (byte *)0x0;
  param_1[0x153] = &DAT_3f80000000000000;
  param_1[0x152] = (byte *)0x0;
  for (plVar12 = *(long **)(pbVar22 + 0xd0); plVar12 != *(long **)(pbVar22 + 0xd8);
      plVar12 = plVar12 + 2) {
    if ((*(uint *)(plVar12 + 1) < 2) && (*(long *)(*plVar12 + 0x68) == 0xd8bba34fa)) {
      pppplVar13 = FUN_710262fb80((long)pbVar22,plVar12,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
      plVar12 = extraout_x1_11;
      goto LAB_710297e4e4;
    }
  }
  pppplVar13 = (long ****)0x0;
LAB_710297e4e4:
  param_1[0x109] = (byte *)pppplVar13;
  if (pppplVar13 == (long ****)0x0) {
LAB_710297e550:
    pbVar22 = param_1[0x109];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf2] + 0x10));
      pbVar22 = param_1[0x109];
    }
  }
  else {
    *(bool *)(pppplVar13 + 0x22) = *(int *)(param_1 + 0x115) == 4;
    FUN_71025e9d50((long *)(pppplVar13 + 0x21),plVar12,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pbVar29 = param_1[0x109];
    pbVar22 = (byte *)0x0;
    if (pbVar29 != (byte *)0x0) {
      if (pbVar29[0x110] == 0) {
        if ((pbVar29[0xe0] != 0) && (*(long *)(pbVar29 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar29 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(pbVar29 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xd8) + 0x21) = 1;
        }
        if (pbVar29[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_710297e550;
    }
  }
  if (pbVar22 == (byte *)0x0) {
    param_1[0x157] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Slope_O_OBJ_O_HIR");
    }
    param_1[0x157] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  pbVar22 = param_1[0x62];
  *(int *)(param_1 + 0x158) = iVar9;
  param_1[0x15b] = (byte *)0x0;
  param_1[0x15a] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x162) = 0;
  param_1[0x15d] = (byte *)0x0;
  param_1[0x15c] = &DAT_3f80000000000000;
  param_1[0x15f] = &DAT_3f800000;
  param_1[0x15e] = (byte *)0x0;
  param_1[0x161] = &DAT_3f80000000000000;
  param_1[0x160] = (byte *)0x0;
  for (plVar12 = *(long **)(pbVar22 + 0xd0); plVar12 != *(long **)(pbVar22 + 0xd8);
      plVar12 = plVar12 + 2) {
    if ((*(uint *)(plVar12 + 1) < 2) && (*(long *)(*plVar12 + 0x68) == 0xd8bba34fa)) {
      pppplVar13 = FUN_710262fb80((long)pbVar22,plVar12,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
      plVar12 = extraout_x1_12;
      goto LAB_710297e660;
    }
  }
  pppplVar13 = (long ****)0x0;
LAB_710297e660:
  param_1[0x10a] = (byte *)pppplVar13;
  if (pppplVar13 == (long ****)0x0) {
LAB_710297e6cc:
    pbVar22 = param_1[0x10a];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf2] + 0x14));
      pbVar22 = param_1[0x10a];
      plVar12 = extraout_x1_14;
    }
  }
  else {
    *(bool *)(pppplVar13 + 0x22) = *(int *)(param_1 + 0x115) == 5;
    FUN_71025e9d50((long *)(pppplVar13 + 0x21),plVar12,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pbVar29 = param_1[0x10a];
    pbVar22 = (byte *)0x0;
    plVar12 = extraout_x1_13;
    if (pbVar29 != (byte *)0x0) {
      if (pbVar29[0x110] == 0) {
        if ((pbVar29[0xe0] != 0) && (*(long *)(pbVar29 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar29 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(pbVar29 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xd8) + 0x21) = 1;
        }
        if (pbVar29[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar29 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_710297e6cc;
    }
  }
  if (pbVar22 == (byte *)0x0) {
    param_1[0x165] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Slope_O_OBJ_O_HIR");
      plVar12 = extraout_x1_15;
    }
    param_1[0x165] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
      plVar12 = extraout_x1_16;
    }
  }
  *(int *)(param_1 + 0x166) = iVar9;
  param_1[0x169] = (byte *)0x0;
  param_1[0x168] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x170) = 0;
  param_1[0x16b] = (byte *)0x0;
  param_1[0x16a] = &DAT_3f80000000000000;
  param_1[0x16d] = &DAT_3f800000;
  param_1[0x16c] = (byte *)0x0;
  param_1[0x16f] = &DAT_3f80000000000000;
  param_1[0x16e] = (byte *)0x0;
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x157b7750c7)) {
      param_1[0x10b] = pbVar22;
      if (pbVar22 == (byte *)0x0) goto LAB_710297e7e4;
      pbVar22[0x110] = *(int *)(param_1 + 0x115) == 1;
      FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pbVar22 = param_1[0x10b];
      plVar12 = extraout_x1_24;
      goto joined_r0x00710297ee3c;
    }
  }
  param_1[0x10b] = (byte *)0x0;
LAB_710297e7e4:
  pbVar22 = param_1[0x10b];
joined_r0x00710297ee3c:
  if (pbVar22 != (byte *)0x0) {
    if ((pbVar22[0x110] == 0) && (pbVar22 != (byte *)0x0)) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
    pbVar22 = param_1[0x10b];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)param_1[0xf5]);
      plVar12 = extraout_x1_17;
    }
  }
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x14420f7180)) {
      param_1[0x10c] = pbVar22;
      if (pbVar22 == (byte *)0x0) goto LAB_710297e8a4;
      pbVar22[0x110] = *(int *)(param_1 + 0x115) == 1;
      FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pbVar22 = param_1[0x10c];
      plVar12 = extraout_x1_25;
      goto joined_r0x00710297ee6c;
    }
  }
  param_1[0x10c] = (byte *)0x0;
LAB_710297e8a4:
  pbVar22 = param_1[0x10c];
joined_r0x00710297ee6c:
  if (pbVar22 != (byte *)0x0) {
    if ((pbVar22[0x110] == 0) && (pbVar22 != (byte *)0x0)) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
    pbVar22 = param_1[0x10c];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf5] + 4));
      plVar12 = extraout_x1_18;
    }
  }
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x11a54daa42)) {
      param_1[0x10d] = pbVar22;
      if (pbVar22 == (byte *)0x0) goto LAB_710297e964;
      pbVar22[0x110] = *(int *)(param_1 + 0x115) == 3;
      FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pbVar22 = param_1[0x10d];
      plVar12 = extraout_x1_26;
      goto joined_r0x00710297ee9c;
    }
  }
  param_1[0x10d] = (byte *)0x0;
LAB_710297e964:
  pbVar22 = param_1[0x10d];
joined_r0x00710297ee9c:
  if (pbVar22 != (byte *)0x0) {
    if ((pbVar22[0x110] == 0) && (pbVar22 != (byte *)0x0)) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
    pbVar22 = param_1[0x10d];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)param_1[0xf8]);
      plVar12 = extraout_x1_19;
    }
  }
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x12124b2f11)) {
      param_1[0x10e] = pbVar22;
      if (pbVar22 == (byte *)0x0) goto LAB_710297ea24;
      pbVar22[0x110] = *(int *)(param_1 + 0x115) == 3;
      FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pbVar22 = param_1[0x10e];
      plVar12 = extraout_x1_27;
      goto joined_r0x00710297eecc;
    }
  }
  param_1[0x10e] = (byte *)0x0;
LAB_710297ea24:
  pbVar22 = param_1[0x10e];
joined_r0x00710297eecc:
  if (pbVar22 != (byte *)0x0) {
    if ((pbVar22[0x110] == 0) && (pbVar22 != (byte *)0x0)) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
    pbVar22 = param_1[0x10e];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf8] + 4));
      plVar12 = extraout_x1_20;
    }
  }
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x110223aef5)) {
      param_1[0x10f] = pbVar22;
      if (pbVar22 == (byte *)0x0) goto LAB_710297eae4;
      pbVar22[0x110] = *(int *)(param_1 + 0x115) == 3;
      FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pbVar22 = param_1[0x10f];
      plVar12 = extraout_x1_28;
      goto joined_r0x00710297eefc;
    }
  }
  param_1[0x10f] = (byte *)0x0;
LAB_710297eae4:
  pbVar22 = param_1[0x10f];
joined_r0x00710297eefc:
  if (pbVar22 != (byte *)0x0) {
    if ((pbVar22[0x110] == 0) && (pbVar22 != (byte *)0x0)) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
    pbVar22 = param_1[0x10f];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)(param_1[0xf8] + 8));
      plVar12 = extraout_x1_21;
    }
  }
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0xe91800aff)) {
      param_1[0x110] = pbVar22;
      if (pbVar22 == (byte *)0x0) goto LAB_710297eba4;
      pbVar22[0x110] = *(int *)(param_1 + 0x115) == 0;
      FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pbVar22 = param_1[0x110];
      plVar12 = extraout_x1_29;
      goto joined_r0x00710297ef2c;
    }
  }
  param_1[0x110] = (byte *)0x0;
LAB_710297eba4:
  pbVar22 = param_1[0x110];
joined_r0x00710297ef2c:
  if (pbVar22 != (byte *)0x0) {
    if ((pbVar22[0x110] == 0) && (pbVar22 != (byte *)0x0)) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
    pbVar22 = param_1[0x110];
    if ((pbVar22 != (byte *)0x0) && (pbVar22[0xe0] != 0)) {
      (**(code **)(**(long **)(pbVar22 + 0x90) + 0x2f0))(*(undefined4 *)param_1[0xfb]);
      plVar12 = extraout_x1_22;
    }
  }
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0xc34ee568b)) {
      param_1[0x111] = pbVar22;
      if (pbVar22 == (byte *)0x0) goto LAB_710297ec64;
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x32) = 0;
      }
      if (*(long *)(pbVar22 + 0xd8) == 0) goto LAB_710297ec64;
      *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x22) = 0;
      pbVar22 = param_1[0x111];
      goto joined_r0x00710297ef64;
    }
  }
  param_1[0x111] = (byte *)0x0;
LAB_710297ec64:
  pbVar22 = param_1[0x111];
joined_r0x00710297ef64:
  if (pbVar22 != (byte *)0x0) {
    pbVar22[0x110] = 0;
    FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pbVar22 = param_1[0x111];
    plVar12 = extraout_x1_23;
    if (pbVar22 != (byte *)0x0) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
  }
  pbVar22 = param_1[0x62];
  for (puVar4 = *(undefined8 **)(pbVar22 + 0xd0); puVar4 != *(undefined8 **)(pbVar22 + 0xd8);
      puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar29 = (byte *)*puVar4, *(long *)(pbVar29 + 0x68) == 0xe8b9eeacb)) goto LAB_710297ed00;
  }
  pbVar29 = (byte *)0x0;
LAB_710297ed00:
  param_1[0x112] = pbVar29;
  for (puVar4 = *(undefined8 **)(pbVar22 + 0xd0); puVar4 != *(undefined8 **)(pbVar22 + 0xd8);
      puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar29 = (byte *)*puVar4, *(long *)(pbVar29 + 0x68) == 0x1c494a9bdc)) {
      param_1[0x113] = pbVar29;
      if (pbVar29 != (byte *)0x0) {
        pbVar29[0x110] = *(int *)(param_1 + 0x115) == 1;
        FUN_71025e9d50((long *)(pbVar29 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                       param_7,param_8);
        plVar12 = extraout_x1_30;
      }
      goto LAB_710297ed4c;
    }
  }
  param_1[0x113] = (byte *)0x0;
LAB_710297ed4c:
  if (*(int *)(param_1 + 0x115) == 1) {
    plVar12 = *(long **)(*(long *)(*(long *)(param_1[100] + 0x48) + 800) + 0x40);
    piVar5 = (int *)*plVar12;
    piVar6 = (int *)plVar12[1];
    if ((long)piVar6 - (long)piVar5 == 0) {
LAB_710297efac:
      uVar27 = 0xffffffff;
    }
    else {
      piVar26 = piVar5;
      for (piVar1 = piVar5;
          (piVar1 != piVar6 &&
          ((*piVar1 != 0 ||
           (piVar26 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xe3f59ce9e))));
          piVar1 = piVar1 + 0x1c) {
        piVar26 = piVar6;
      }
      uVar27 = ((long)piVar26 - (long)piVar5 >> 4) * 0x6db6db6db6db6db7;
      if ((ulong)(((long)piVar6 - (long)piVar5 >> 4) * 0x6db6db6db6db6db7) <= uVar27)
      goto LAB_710297efac;
    }
    pbVar22 = param_1[100] + 0x48;
    uVar10 = FUN_71025f06f0((long *)pbVar22,(uint)uVar27,(byte *)"BattleShip_main_rotate");
    param_4 = (byte ****)(ulong)uVar10;
    param_3 = (long *********)(uVar27 & 0xffffffff);
    param_5 = (long ****)0x0;
    FUN_71025f0e10((long ***)&local_78,(long *)pbVar22,(uint)uVar27,param_4,(long ****)0x0,param_6,
                   param_7,param_8);
    pppplVar13 = (long ****)(param_1 + 0x181);
    if ((pppplVar13 != &local_78) && (pbVar22 = param_1[0x183], pbVar22 != local_68)) {
      if (local_68 == (byte *)0x0) {
        if (pbVar22 != (byte *)0x0) {
          pbVar29 = param_1[0x181];
          pbVar23 = param_1[0x182];
          *(byte **)pbVar23 = pbVar29;
          *(byte **)(pbVar29 + 8) = pbVar23;
          *(long *)(pbVar22 + 0x10) = *(long *)(pbVar22 + 0x10) + -1;
          param_1[0x182] = (byte *)0x0;
          param_1[0x183] = (byte *)0x0;
          *pppplVar13 = (long ***)0x0;
        }
      }
      else {
        if (pbVar22 != (byte *)0x0) {
          ppplVar24 = *pppplVar13;
          pplVar25 = (long **)param_1[0x182];
          *pplVar25 = (long *)ppplVar24;
          ppplVar24[1] = pplVar25;
          *(long *)(pbVar22 + 0x10) = *(long *)(pbVar22 + 0x10) + -1;
          param_1[0x182] = (byte *)0x0;
          param_1[0x183] = (byte *)0x0;
          *pppplVar13 = (long ***)0x0;
        }
        pbVar22 = *(byte **)(local_68 + 0x20);
        param_1[0x181] = local_68 + 0x18;
        param_1[0x182] = pbVar22;
        *(long *****)(local_68 + 0x20) = pppplVar13;
        *(long *****)pbVar22 = pppplVar13;
        *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + 1;
        param_1[0x183] = local_68;
      }
    }
    if (local_68 != (byte *)0x0) {
      *local_70 = (long *)local_78;
      local_78[1] = local_70;
      *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + -1;
      local_70 = (long **)0x0;
      local_68 = (byte *)0x0;
      local_78 = (long ***)0x0;
    }
    plVar12 = extraout_x1_31;
    if (param_1[0x183] != (byte *)0x0) {
      param_1[0x183][0xb9] = 0;
    }
  }
  else {
    pbVar22 = param_1[0x113];
    if (pbVar22 != (byte *)0x0) {
      if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
      }
      if (pbVar22[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
      }
    }
  }
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pbVar22 = (byte *)*puVar4, *(long *)(pbVar22 + 0x68) == 0x17b24944e2)) {
      param_1[0x114] = pbVar22;
      if (pbVar22 != (byte *)0x0) {
        pbVar22[0x110] = *(int *)(param_1 + 0x115) - 3U < 3;
        FUN_71025e9d50((long *)(pbVar22 + 0x108),plVar12,(long ****)param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      goto LAB_710297f100;
    }
  }
  param_1[0x114] = (byte *)0x0;
LAB_710297f100:
  if (*(int *)(param_1 + 0x115) - 3U < 3) {
    plVar12 = *(long **)(*(long *)(*(long *)(param_1[100] + 0x48) + 800) + 0x40);
    piVar5 = (int *)*plVar12;
    piVar6 = (int *)plVar12[1];
    if ((long)piVar6 - (long)piVar5 == 0) {
LAB_710297f220:
      uVar27 = 0xffffffff;
    }
    else {
      piVar26 = piVar5;
      for (piVar1 = piVar5;
          (piVar1 != piVar6 &&
          ((*piVar1 != 0 ||
           (piVar26 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xc201b461d))));
          piVar1 = piVar1 + 0x1c) {
        piVar26 = piVar6;
      }
      uVar27 = ((long)piVar26 - (long)piVar5 >> 4) * 0x6db6db6db6db6db7;
      if ((ulong)(((long)piVar6 - (long)piVar5 >> 4) * 0x6db6db6db6db6db7) <= uVar27)
      goto LAB_710297f220;
    }
    pbVar22 = param_1[100] + 0x48;
    uVar10 = FUN_71025f06f0((long *)pbVar22,(uint)uVar27,(byte *)"Space_main_rotate");
    param_4 = (byte ****)(ulong)uVar10;
    param_5 = (long ****)0x0;
    FUN_71025f0e10((long ***)&local_78,(long *)pbVar22,(uint)uVar27,param_4,(long ****)0x0,param_6,
                   param_7,param_8);
    pppplVar13 = (long ****)(param_1 + 0x17e);
    if ((pppplVar13 != &local_78) && (pbVar22 = param_1[0x180], pbVar22 != local_68)) {
      if (local_68 == (byte *)0x0) {
        if (pbVar22 != (byte *)0x0) {
          pbVar29 = param_1[0x17e];
          pbVar23 = param_1[0x17f];
          *(byte **)pbVar23 = pbVar29;
          *(byte **)(pbVar29 + 8) = pbVar23;
          *(long *)(pbVar22 + 0x10) = *(long *)(pbVar22 + 0x10) + -1;
          param_1[0x17f] = (byte *)0x0;
          param_1[0x180] = (byte *)0x0;
          *pppplVar13 = (long ***)0x0;
        }
      }
      else {
        if (pbVar22 != (byte *)0x0) {
          ppplVar24 = *pppplVar13;
          pplVar25 = (long **)param_1[0x17f];
          *pplVar25 = (long *)ppplVar24;
          ppplVar24[1] = pplVar25;
          *(long *)(pbVar22 + 0x10) = *(long *)(pbVar22 + 0x10) + -1;
          param_1[0x17f] = (byte *)0x0;
          param_1[0x180] = (byte *)0x0;
          *pppplVar13 = (long ***)0x0;
        }
        pbVar22 = *(byte **)(local_68 + 0x20);
        param_1[0x17e] = local_68 + 0x18;
        param_1[0x17f] = pbVar22;
        *(long *****)(local_68 + 0x20) = pppplVar13;
        *(long *****)pbVar22 = pppplVar13;
        *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + 1;
        param_1[0x180] = local_68;
      }
    }
    if (local_68 != (byte *)0x0) {
      *local_70 = (long *)local_78;
      local_78[1] = local_70;
      *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + -1;
      local_70 = (long **)0x0;
      local_68 = (byte *)0x0;
      local_78 = (long ***)0x0;
    }
    if (param_1[0x180] != (byte *)0x0) {
      param_1[0x180][0xb9] = 0;
    }
LAB_710297f328:
    pbVar22 = param_1[0x106];
    if (pbVar22 != (byte *)0x0) goto LAB_710297f330;
LAB_710297f1d0:
    param_1[0x1b3] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    pbVar22 = param_1[0x114];
    if (pbVar22 == (byte *)0x0) goto LAB_710297f328;
    if ((pbVar22[0xe0] != 0) && (*(long *)(pbVar22 + 200) != 0)) {
      *(undefined2 *)(*(long *)(pbVar22 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(pbVar22 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(pbVar22 + 0xd8) + 0x21) = 1;
    }
    if (pbVar22[0xe0] == 0) goto LAB_710297f328;
    *(undefined1 *)(*(long *)(pbVar22 + 0xb0) + 0x10) = 0;
    pbVar22 = param_1[0x106];
    if (pbVar22 == (byte *)0x0) goto LAB_710297f1d0;
LAB_710297f330:
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"explosion_01_O_OBJ_O_HIR");
    }
    param_1[0x1b3] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  pbVar22 = param_1[0x106];
  *(int *)(param_1 + 0x1b4) = iVar9;
  param_1[0x1b7] = (byte *)0x0;
  param_1[0x1b6] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x1be) = 0;
  param_1[0x1b9] = (byte *)0x0;
  param_1[0x1b8] = &DAT_3f80000000000000;
  param_1[0x1bb] = &DAT_3f800000;
  param_1[0x1ba] = (byte *)0x0;
  param_1[0x1bd] = &DAT_3f80000000000000;
  param_1[0x1bc] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x1c1] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"explosion_02_O_OBJ_O_HIR");
    }
    param_1[0x1c1] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  pbVar22 = param_1[0x106];
  *(int *)(param_1 + 0x1c2) = iVar9;
  param_1[0x1c5] = (byte *)0x0;
  param_1[0x1c4] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  param_1[0x1c7] = (byte *)0x0;
  param_1[0x1c6] = &DAT_3f80000000000000;
  param_1[0x1c9] = &DAT_3f800000;
  param_1[0x1c8] = (byte *)0x0;
  param_1[0x1cb] = &DAT_3f80000000000000;
  param_1[0x1ca] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x1cf] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"explosion_02_O_OBJ_O_HIR");
    }
    param_1[0x1cf] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  pbVar22 = param_1[0x106];
  *(int *)(param_1 + 0x1d0) = iVar9;
  param_1[0x1d3] = (byte *)0x0;
  param_1[0x1d2] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x1da) = 0;
  param_1[0x1d5] = (byte *)0x0;
  param_1[0x1d4] = &DAT_3f80000000000000;
  param_1[0x1d7] = &DAT_3f800000;
  param_1[0x1d6] = (byte *)0x0;
  param_1[0x1d9] = &DAT_3f80000000000000;
  param_1[0x1d8] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x1dd] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"explosion_03_O_OBJ_O_HIR");
    }
    param_1[0x1dd] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  pbVar22 = param_1[0x105];
  *(int *)(param_1 + 0x1de) = iVar9;
  param_1[0x1e1] = (byte *)0x0;
  param_1[0x1e0] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  param_1[0x1e3] = (byte *)0x0;
  param_1[0x1e2] = &DAT_3f80000000000000;
  param_1[0x1e5] = &DAT_3f800000;
  param_1[0x1e4] = (byte *)0x0;
  param_1[0x1e7] = &DAT_3f80000000000000;
  param_1[0x1e6] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x1eb] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"clash_meteo2_O_OBJ_O_HIR");
    }
    param_1[0x1eb] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  pbVar22 = param_1[0x105];
  *(int *)(param_1 + 0x1ec) = iVar9;
  param_1[0x1ef] = (byte *)0x0;
  param_1[0x1ee] = &DAT_3f800000;
  *(undefined1 *)(param_1 + 0x1f6) = 0;
  param_1[0x1f1] = (byte *)0x0;
  param_1[0x1f0] = &DAT_3f80000000000000;
  param_1[499] = &DAT_3f800000;
  param_1[0x1f2] = (byte *)0x0;
  param_1[0x1f5] = &DAT_3f80000000000000;
  param_1[500] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x1f9] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"clash_meteo3_O_OBJ_O_HIR");
    }
    param_1[0x1f9] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x1fa) = iVar9;
  *(undefined1 *)(param_1 + 0x204) = 0;
  ppbVar2 = param_1 + 0x67;
  param_1[0x1fd] = (byte *)0x0;
  param_1[0x1fc] = &DAT_3f800000;
  param_1[0x1ff] = (byte *)0x0;
  param_1[0x1fe] = &DAT_3f80000000000000;
  param_1[0x201] = &DAT_3f800000;
  param_1[0x200] = (byte *)0x0;
  param_1[0x203] = &DAT_3f80000000000000;
  param_1[0x202] = (byte *)0x0;
  local_80 = 0;
  pbVar22 = param_1[0x67];
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x674) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33a4) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x675) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33ac) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x676) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33b4) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x677) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33bc) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x678) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33c4) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x679) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33cc) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x67a) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33d4) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x67b) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33dc) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x67c) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33e4) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)(param_1 + 0x67d) = uVar11;
  if (*(long *)(*(long *)pbVar22 + 8) == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = FUN_7102405040(*(long *)(*(long *)pbVar22 + 8),&local_80,0,param_4,param_5,param_6,
                            param_7,param_8);
    pbVar22 = *ppbVar2;
  }
  *(undefined4 *)((long)param_1 + 0x33ec) = uVar11;
  pppplVar13 = (long ****)&DAT_00000004;
  FUN_7103179e10(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1f8),
                 **(ulong **)pbVar22,(long *********)&DAT_00000004,param_4,param_5,param_6,param_7,
                 param_8);
  pbVar22 = param_1[0x112];
  if (pbVar22 == (byte *)0x0) {
    param_1[0x207] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"JET_O_OBJ_O_HIR");
    }
    param_1[0x207] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x208) = iVar9;
  *(undefined1 *)(param_1 + 0x212) = 0;
  pbVar22 = param_1[0x110];
  param_1[0x20b] = (byte *)0x0;
  param_1[0x20a] = &DAT_3f800000;
  param_1[0x20d] = (byte *)0x0;
  param_1[0x20c] = &DAT_3f80000000000000;
  param_1[0x20f] = &DAT_3f800000;
  param_1[0x20e] = (byte *)0x0;
  param_1[0x211] = &DAT_3f80000000000000;
  param_1[0x210] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x215] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"ArwingMove_O_OBJ_O_HIR");
    }
    param_1[0x215] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x216) = iVar9;
  *(undefined1 *)(param_1 + 0x220) = 0;
  pbVar22 = param_1[0x110];
  param_1[0x219] = (byte *)0x0;
  param_1[0x218] = &DAT_3f800000;
  param_1[0x21b] = (byte *)0x0;
  param_1[0x21a] = &DAT_3f80000000000000;
  param_1[0x21d] = &DAT_3f800000;
  param_1[0x21c] = (byte *)0x0;
  param_1[0x21f] = &DAT_3f80000000000000;
  param_1[0x21e] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x223] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"ArwingJet_O_OBJ_O_HIR");
    }
    param_1[0x223] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x224) = iVar9;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  param_1[0x227] = (byte *)0x0;
  param_1[0x226] = &DAT_3f800000;
  param_1[0x229] = (byte *)0x0;
  param_1[0x228] = &DAT_3f80000000000000;
  param_1[0x22b] = &DAT_3f800000;
  param_1[0x22a] = (byte *)0x0;
  param_1[0x22d] = &DAT_3f80000000000000;
  param_1[0x22c] = (byte *)0x0;
  uVar27 = 0;
  do {
    if (uVar27 < 0x2a) {
      pbVar22 = param_1[0x106];
      if (pbVar22 == (byte *)0x0) {
LAB_710297fd88:
        param_1[uVar27 * 0xe + 0x231] = (byte *)0x0;
      }
      else if (*(long *)(pbVar22 + 0xd8) == 0) {
        param_1[uVar27 * 0xe + 0x231] = pbVar22;
        iVar9 = -1;
        lVar20 = *(long *)(pbVar22 + 0xd8);
        if (lVar20 != 0) goto joined_r0x00710297fd7c;
      }
      else {
        pcVar16 = (&PTR_s_BsCoM_08_O_OBJ_O_HIR_71050f8af0)[uVar27];
        uVar10 = 0;
        do {
          uVar21 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
        } while (pcVar16[uVar21] != '\0');
        cVar7 = *pcVar16;
        while (cVar7 != '\0') {
          pcVar16 = pcVar16 + 1;
          cVar7 = *pcVar16;
        }
        iVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x18))();
        param_1[uVar27 * 0xe + 0x231] = pbVar22;
        if (pbVar22 != (byte *)0x0) {
          lVar20 = *(long *)(pbVar22 + 0xd8);
          goto joined_r0x00710297fc80;
        }
      }
LAB_710297fd90:
      iVar9 = -1;
    }
    else {
      pbVar22 = param_1[0x10b];
      if (pbVar22 == (byte *)0x0) goto LAB_710297fd88;
      if (*(long *)(pbVar22 + 0xd8) == 0) {
        param_1[uVar27 * 0xe + 0x231] = pbVar22;
        iVar9 = -1;
        lVar20 = *(long *)(pbVar22 + 0xd8);
      }
      else {
        pcVar16 = (&PTR_s_BsCoM_08_O_OBJ_O_HIR_71050f8af0)[uVar27];
        uVar10 = 0;
        do {
          uVar21 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
        } while (pcVar16[uVar21] != '\0');
        cVar7 = *pcVar16;
        while (cVar7 != '\0') {
          pcVar16 = pcVar16 + 1;
          cVar7 = *pcVar16;
        }
        iVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x18))();
        param_1[uVar27 * 0xe + 0x231] = pbVar22;
        if (pbVar22 == (byte *)0x0) goto LAB_710297fd90;
        lVar20 = *(long *)(pbVar22 + 0xd8);
      }
joined_r0x00710297fc80:
      if (lVar20 == 0) goto LAB_710297fd90;
joined_r0x00710297fd7c:
      if (iVar9 == -1) {
        iVar9 = 0;
      }
      else {
        (**(code **)(**(long **)(*(long *)(lVar20 + 8) + 8) + 0x10))();
      }
    }
    *(int *)(param_1 + uVar27 * 0xe + 0x232) = iVar9;
    *(undefined1 *)(param_1 + uVar27 * 0xe + 0x23c) = 0;
    uVar21 = uVar27 + 1;
    param_1[uVar27 * 0xe + 0x235] = (byte *)0x0;
    param_1[uVar27 * 0xe + 0x234] = &DAT_3f800000;
    param_1[uVar27 * 0xe + 0x237] = (byte *)0x0;
    param_1[uVar27 * 0xe + 0x236] = &DAT_3f80000000000000;
    param_1[uVar27 * 0xe + 0x239] = &DAT_3f800000;
    param_1[uVar27 * 0xe + 0x238] = (byte *)0x0;
    param_1[uVar27 * 0xe + 0x23b] = &DAT_3f80000000000000;
    param_1[uVar27 * 0xe + 0x23a] = (byte *)0x0;
    uVar27 = uVar21;
  } while (uVar21 != 0x45);
  pbVar22 = param_1[0x112];
  if (pbVar22 == (byte *)0x0) {
    param_1[0x605] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"JET_O_OBJ_O_HIR");
    }
    param_1[0x605] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x606) = iVar9;
  *(undefined1 *)(param_1 + 0x610) = 0;
  pbVar22 = param_1[0x10d];
  param_1[0x609] = (byte *)0x0;
  param_1[0x608] = &DAT_3f800000;
  param_1[0x60b] = (byte *)0x0;
  param_1[0x60a] = &DAT_3f80000000000000;
  param_1[0x60d] = &DAT_3f800000;
  param_1[0x60c] = (byte *)0x0;
  param_1[0x60f] = &DAT_3f80000000000000;
  param_1[0x60e] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x613] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Arwing3Move_O_OBJ_O_HIR");
    }
    param_1[0x613] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x614) = iVar9;
  *(undefined1 *)(param_1 + 0x61e) = 0;
  pbVar22 = param_1[0x10d];
  param_1[0x617] = (byte *)0x0;
  param_1[0x616] = &DAT_3f800000;
  param_1[0x619] = (byte *)0x0;
  param_1[0x618] = &DAT_3f80000000000000;
  param_1[0x61b] = &DAT_3f800000;
  param_1[0x61a] = (byte *)0x0;
  param_1[0x61d] = &DAT_3f80000000000000;
  param_1[0x61c] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x621] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Wolfen3Move_O_OBJ_O_HIR");
    }
    param_1[0x621] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x622) = iVar9;
  *(undefined1 *)(param_1 + 0x62c) = 0;
  pbVar22 = param_1[0x10e];
  param_1[0x625] = (byte *)0x0;
  param_1[0x624] = &DAT_3f800000;
  param_1[0x627] = (byte *)0x0;
  param_1[0x626] = &DAT_3f80000000000000;
  param_1[0x629] = &DAT_3f800000;
  param_1[0x628] = (byte *)0x0;
  param_1[0x62b] = &DAT_3f80000000000000;
  param_1[0x62a] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x62f] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Arwing4Move_O_OBJ_O_HIR");
    }
    param_1[0x62f] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x630) = iVar9;
  *(undefined1 *)(param_1 + 0x63a) = 0;
  pbVar22 = param_1[0x10e];
  param_1[0x633] = (byte *)0x0;
  param_1[0x632] = &DAT_3f800000;
  param_1[0x635] = (byte *)0x0;
  param_1[0x634] = &DAT_3f80000000000000;
  param_1[0x637] = &DAT_3f800000;
  param_1[0x636] = (byte *)0x0;
  param_1[0x639] = &DAT_3f80000000000000;
  param_1[0x638] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x63d] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Wolfen4Move_O_OBJ_O_HIR");
    }
    param_1[0x63d] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x63e) = iVar9;
  *(undefined1 *)(param_1 + 0x648) = 0;
  pbVar22 = param_1[0x10e];
  param_1[0x641] = (byte *)0x0;
  param_1[0x640] = &DAT_3f800000;
  param_1[0x643] = (byte *)0x0;
  param_1[0x642] = &DAT_3f80000000000000;
  param_1[0x645] = &DAT_3f800000;
  param_1[0x644] = (byte *)0x0;
  param_1[0x647] = &DAT_3f80000000000000;
  param_1[0x646] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x64b] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"Wolfen5Move_O_OBJ_O_HIR");
    }
    param_1[0x64b] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x64c) = iVar9;
  *(undefined1 *)(param_1 + 0x656) = 0;
  pbVar22 = param_1[0x10f];
  param_1[0x64f] = (byte *)0x0;
  param_1[0x64e] = &DAT_3f800000;
  param_1[0x651] = (byte *)0x0;
  param_1[0x650] = &DAT_3f80000000000000;
  param_1[0x653] = &DAT_3f800000;
  param_1[0x652] = (byte *)0x0;
  param_1[0x655] = &DAT_3f80000000000000;
  param_1[0x654] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x659] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"GfoxMove_O_OBJ_O_HIR");
    }
    param_1[0x659] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x65a) = iVar9;
  *(undefined1 *)(param_1 + 0x664) = 0;
  pbVar22 = param_1[0x10f];
  param_1[0x65d] = (byte *)0x0;
  param_1[0x65c] = &DAT_3f800000;
  param_1[0x65f] = (byte *)0x0;
  param_1[0x65e] = &DAT_3f80000000000000;
  param_1[0x661] = &DAT_3f800000;
  param_1[0x660] = (byte *)0x0;
  param_1[0x663] = &DAT_3f80000000000000;
  param_1[0x662] = (byte *)0x0;
  if (pbVar22 == (byte *)0x0) {
    param_1[0x667] = (byte *)0x0;
    iVar9 = -1;
  }
  else {
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else {
      plVar12 = *(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8);
      iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12,"JET_O_OBJ_O_HIR_0");
    }
    param_1[0x667] = pbVar22;
    if (*(long *)(pbVar22 + 0xd8) == 0) {
      iVar9 = -1;
    }
    else if (iVar9 == -1) {
      iVar9 = 0;
    }
    else {
      (**(code **)(**(long **)(*(long *)(*(long *)(pbVar22 + 0xd8) + 8) + 8) + 0x10))();
    }
  }
  *(int *)(param_1 + 0x668) = iVar9;
  *(undefined1 *)(param_1 + 0x672) = 0;
  param_1[0x66b] = (byte *)0x0;
  param_1[0x66a] = &DAT_3f800000;
  param_1[0x66d] = (byte *)0x0;
  param_1[0x66c] = &DAT_3f80000000000000;
  param_1[0x66f] = &DAT_3f800000;
  param_1[0x66e] = (byte *)0x0;
  param_1[0x671] = &DAT_3f80000000000000;
  param_1[0x670] = (byte *)0x0;
  for (puVar4 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar4 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar4 = puVar4 + 2) {
    if ((*(uint *)(puVar4 + 1) < 2) &&
       (pppplVar28 = (long ****)*puVar4, pppplVar28[0xd] == (long ***)0xe8b9eeacb))
    goto LAB_7102980348;
  }
  pppplVar28 = (long ****)0x0;
LAB_7102980348:
  plVar12 = (long *)**(long **)(param_1[0x60] + 0x18);
  do {
    if (plVar12 == (long *)(*(long **)(param_1[0x60] + 0x18))[1]) goto LAB_7102980394;
    lVar20 = *plVar12;
    plVar12 = plVar12 + 1;
  } while ((*(ulong *)(lVar20 + 0xa0) & 0xffffffffff) != 0xe8b9eeacb);
  ppppbVar19 = *(byte *****)(lVar20 + 0x110);
  if (ppppbVar19 == (byte ****)0x0) {
LAB_7102980394:
    ppppbVar18 = (byte ****)0x0;
  }
  else {
    ppppbVar18 = (byte ****)0x0;
    if (*ppppbVar19 != ppppbVar19[1]) {
      ppppbVar18 = ppppbVar19;
    }
  }
  plVar12 = (long *)FUN_710392e290(0x10,0x1e0,pppplVar13,param_4,param_5,param_6,param_7,param_8);
  if (plVar12 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_78 = (long ***)&DAT_000001e0;
      pppplVar13 = &local_78;
      uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar27 & 1) != 0) &&
         (plVar12 = (long *)FUN_710392e290(0x10,0x1e0,pppplVar13,param_4,param_5,param_6,param_7,
                                           param_8), plVar12 != (long *)0x0)) goto LAB_71029803f4;
    }
    plVar12 = (long *)0x0;
  }
LAB_71029803f4:
  FUN_7103145d70(plVar12,(long)param_1,(long)pppplVar28,ppppbVar18,param_5,param_6,param_7,param_8);
  FUN_710313ef20(plVar12);
  pppbVar14 = (byte ***)
              FUN_710392e290(0x10,0x110,pppplVar28,ppppbVar18,param_5,param_6,param_7,param_8);
  if (pppbVar14 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_78 = (long ***)&DAT_00000110;
      pppplVar13 = &local_78;
      uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar27 & 1) != 0) &&
         (pppbVar14 = (byte ***)
                      FUN_710392e290(0x10,0x110,pppplVar13,ppppbVar18,param_5,param_6,param_7,
                                     param_8), pppbVar14 != (byte ***)0x0)) goto LAB_710298046c;
    }
    pppbVar14 = (byte ***)0x0;
  }
LAB_710298046c:
  ppppbVar19 = (byte ****)0x0;
  FUN_7103140260(pppbVar14,param_1,(byte *)0x0,(byte ****)0x0,param_5,param_6,param_7,param_8);
  param_1[0x172] = (byte *)pppbVar14;
  pbVar22 = _ConstantZero;
  pbVar29 = param_1[0x61];
  param_1[0x175] = pbRam0000007107459008;
  param_1[0x174] = pbVar22;
  fVar30 = *(float *)(pbVar29 + 0x118);
  fVar31 = *(float *)(pbVar29 + 0x11c);
  fVar32 = *(float *)(pbVar29 + 0x120);
  fVar33 = *(float *)(pbVar29 + 0x124);
  *(undefined2 *)(param_1 + 0x178) = 3;
  pbVar22 = param_1[0xef];
  param_1[0x177] = (byte *)0x0;
  param_1[0x176] = (byte *)CONCAT44(fVar32 - fVar33,fVar31 - fVar30);
  *(undefined4 *)((long)param_1 + 0xbc4) = *(undefined4 *)(pbVar22 + 0x18);
  *(undefined4 *)(param_1 + 0x179) = *(undefined4 *)(pbVar22 + 0x1c);
  *(undefined4 *)((long)param_1 + 0xbcc) = *(undefined4 *)(pbVar22 + 0x20);
  *(undefined4 *)(param_1 + 0x17a) = *(undefined4 *)(pbVar22 + 0x24);
  *(undefined4 *)((long)param_1 + 0xbd4) = *(undefined4 *)(pbVar22 + 0x28);
  *(undefined4 *)((long)param_1 + 0xbdc) = *(undefined4 *)(pbVar22 + 0x2c);
  if (pppbVar14[7] != (byte **)0x0) {
    lVar20 = (**(code **)(*(long *)pppbVar14[7][0x26] + 0x1c8))();
    pbVar22 = param_1[0x174];
    pbVar29 = param_1[0x176];
    *(undefined8 *)(lVar20 + 0x60) = 0x121900;
    *(undefined4 *)(lVar20 + 0x68) = 0;
    *(undefined8 *)(lVar20 + 0x70) = 0x31ed91fca;
    *(byte **)(lVar20 + 0x78) = pbVar22;
    *(byte **)(lVar20 + 0x80) = pbVar29;
    pbVar22 = param_1[0x179];
    pbVar29 = param_1[0x17a];
    pbVar23 = param_1[0x17b];
    *(undefined1 *)(lVar20 + 0x288) = *(undefined1 *)(param_1 + 0x17c);
    *(byte **)(lVar20 + 0x280) = pbVar23;
    *(byte **)(lVar20 + 0x278) = pbVar29;
    *(byte **)(lVar20 + 0x270) = pbVar22;
    *(byte **)(lVar20 + 0x268) = param_1[0x178];
    pppbVar14 = (byte ***)param_1[0x172];
  }
  (*(code *)(*pppbVar14)[0x12])(pppbVar14);
  FUN_710313ef20((long *)param_1[0x172]);
  pbVar22 = param_1[0x172];
  if (pbVar22[0x40] != 0) {
    plVar12 = *(long **)(pbVar22 + 0x30);
    if (((plVar12 != (long *)0x0) && ((char)plVar12[2] != '\0')) &&
       (*(undefined1 *)(plVar12 + 2) = 0, (char)plVar12[10] != '\0')) {
      plVar15 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar12 + 8));
      (**(code **)(*plVar15 + 0x48))(plVar15,0);
      *(undefined1 *)(plVar12 + 10) = 0;
    }
    (**(code **)(*(long *)pbVar22 + 0x30))(pbVar22);
  }
  pbVar22[0x40] = 0;
  switch(*(undefined4 *)(param_1 + 0x115)) {
  case 0:
    uVar10 = 0;
    *(undefined4 *)((long)param_1 + 0x8bc) = 0;
    goto LAB_7102980638;
  case 1:
    uVar10 = 1;
    break;
  case 2:
    uVar10 = 2;
    break;
  case 3:
  case 4:
  case 5:
    uVar10 = 3;
    break;
  default:
    uVar10 = *(uint *)((long)param_1 + 0x8bc);
    if (4 < uVar10) goto LAB_71029807fc;
    goto LAB_7102980638;
  }
  *(uint *)((long)param_1 + 0x8bc) = uVar10;
LAB_7102980638:
  lVar20 = *(long *)(param_1[99] + 0x10);
  FUN_71025f7350(lVar20,(&PTR_s_light00_71050f8a38)[uVar10]);
  *(undefined4 *)(lVar20 + 0x48) = 0;
  *(undefined1 *)(lVar20 + 0x25) = 0;
  uVar10 = *(uint *)((long)param_1 + 0x8bc);
  *(uint *)(param_1 + 0x118) = uVar10;
  if (4 < uVar10) {
LAB_71029807fc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_7102633b90((long)param_1[99],(long *********)(&PTR_s_stage00_71050f8a60)[uVar10],1,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  if (4 < *(uint *)((long)param_1 + 0x8bc)) goto LAB_71029807fc;
  uVar17 = 1;
  FUN_7102633a10((long)param_1[99],
                 (long *********)(&PTR_s_chara_00_71050f8a88)[*(uint *)((long)param_1 + 0x8bc)],1,
                 ppppbVar19,param_5,param_6,param_7,param_8);
  if (4 < *(uint *)((long)param_1 + 0x8bc)) goto LAB_71029807fc;
  uVar27 = FUN_7102633800((long)param_1[99],
                          (long *********)
                          (&PTR_s_reflection_cubemap_00_71050f8ab0)
                          [*(uint *)((long)param_1 + 0x8bc)],uVar17,ppppbVar19,param_5,param_6,
                          param_7,param_8);
  if (4 < *(uint *)((long)param_1 + 0x8bc)) goto LAB_71029807fc;
  pbVar22 = param_1[0x112];
  if (pbVar22 != (byte *)0x0) {
    if (pbVar22[0xe0] == 0) {
      uVar10 = *(uint *)(param_1 + 0x115);
    }
    else {
      local_78 = (long ***)(&PTR_s_chara_00_71050f8a88)[*(uint *)((long)param_1 + 0x8bc)];
      uVar10 = FUN_71026527b0(*(undefined8 **)(pbVar22 + 0xb8),&local_78,(long *********)0x1,
                              ppppbVar19,param_5,param_6,param_7,param_8);
      uVar27 = (ulong)uVar10;
      pbVar22 = param_1[0x112];
      uVar10 = *(uint *)(param_1 + 0x115);
      if (pbVar22 == (byte *)0x0) goto joined_r0x007102980758;
    }
    lVar20 = 1;
    if (uVar10 != 2) {
      lVar20 = 2;
    }
    lVar3 = 0;
    if (uVar10 != 1) {
      lVar3 = lVar20;
    }
    uVar10 = FUN_71025ee080((long)(pbVar22 + 0x60),(&PTR_s_dyr_ZGdiff_BattleShip_71050f8ad8)[lVar3],
                            1);
    uVar27 = (ulong)uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x115);
joined_r0x007102980758:
  if (uVar10 < 4) {
    uVar21 = (ulong)*(uint *)(&DAT_71044670e0 + (long)(int)uVar10 * 4);
  }
  else {
    uVar21 = 0;
  }
  if (uVar21 < (ulong)((long)param_1[0x39] - (long)param_1[0x38] >> 4)) {
    pbVar22 = param_1[0x38] + uVar21 * 0x10;
    pbVar29 = *(byte **)pbVar22;
    pbVar22 = *(byte **)(pbVar22 + 8);
    if (pbVar22 != (byte *)0x0) {
      pbVar23 = pbVar22 + 8;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pbVar23,0x10);
        if (bVar8) {
          *(long *)pbVar23 = *(long *)pbVar23 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    pbVar23 = param_1[0x34];
    param_1[0x33] = pbVar29;
    param_1[0x34] = pbVar22;
    if (pbVar23 != (byte *)0x0) {
      pbVar22 = pbVar23 + 8;
      do {
        lVar20 = *(long *)pbVar22;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pbVar22,0x10);
        if (bVar8) {
          *(long *)pbVar22 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*(long *)pbVar23 + 0x10))(pbVar23);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar27 = FUN_71025e46e0((ulong)param_1,1);
  }
  return uVar27;
}

