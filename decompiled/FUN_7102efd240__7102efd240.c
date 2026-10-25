// addr:      7102efd240
// offset:    0x2efd240
// name:      FUN_7102efd240
// mangled:   
// signature: undefined __cdecl FUN_7102efd240(float param_1, undefined8 * param_2, undefined8 param_3, char * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_7102efd240(float param_1,undefined8 *param_2,undefined8 param_3,char *param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
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
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 uVar5;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  
  if (*(int *)((long)param_2 + 0x24) == 0) goto LAB_7102efd960;
  fVar11 = *(float *)(param_2 + 5) - param_1;
  *(float *)(param_2 + 5) = fVar11;
  switch(*(int *)((long)param_2 + 0x24)) {
  case 2:
    iVar6 = *(int *)(param_2 + 1);
    if (iVar6 == -1) {
      FUN_7102666c30(param_2);
      iVar6 = *(int *)(param_2 + 1);
      param_3 = extraout_x1;
    }
    uVar7 = *(undefined4 *)((long)param_2 + 0xc);
    *(int *)(param_2 + 3) = iVar6;
    *(int *)((long)param_2 + 0x2c) = iVar6;
    *(undefined1 *)((long)param_2 + 0x14) = 1;
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    *(undefined4 *)(param_2 + 1) = uVar7;
    puVar8 = *(uint **)(param_2[0x56] + 0x340);
    fVar11 = *(float *)(param_2[0x57] + 0x1c0);
    fVar13 = *(float *)(param_2[0x57] + 0x1c4);
    uVar1 = *puVar8 ^ *puVar8 << 0xb;
    uVar2 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar8[2] = uVar2;
    puVar8[3] = uVar1;
    *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)((long)param_2 + 0x2c);
    lVar10 = param_2[10];
    *(undefined4 *)(param_2 + 0xe) = 0;
    *(undefined4 *)(param_2 + 0xf) = 0;
    *(float *)(param_2 + 5) = fVar11 + (fVar13 - fVar11) * (float)uVar1 * 2.3283064e-10;
    if (lVar10 != 0) {
      *(undefined1 *)(lVar10 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar10 + 0x108),param_3,(long ****)param_4,param_5,param_6,param_7,
                     param_8,param_9);
      lVar10 = param_2[10];
      param_3 = extraout_x1_00;
      if (lVar10 != 0) {
        if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar10 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar10 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 1;
        }
      }
    }
    *(undefined1 *)((long)param_2 + 0xbc) = 1;
    plVar3 = *(long **)(**(long **)(param_2[0xb] + 0x338) + 8);
    if (plVar3 != (long *)0x0) {
      param_4 = (char *)(ulong)*(uint *)(param_2 + 0x13);
      (**(code **)(*plVar3 + 0x58))(plVar3,9);
      param_3 = extraout_x1_01;
    }
    *(undefined4 *)(param_2 + 9) = 1;
    if ((long *)param_2[0x1b] != (long *)0x0) {
      FUN_710313ef20((long *)param_2[0x1b]);
      param_3 = extraout_x1_02;
    }
    *(undefined4 *)(param_2 + 0x21) = *(undefined4 *)((long)param_2 + 0x2c);
    lVar10 = param_2[0x1e];
    *(undefined4 *)(param_2 + 0x22) = 0;
    *(undefined4 *)(param_2 + 0x23) = 0;
    if (lVar10 != 0) {
      *(undefined1 *)(lVar10 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar10 + 0x108),param_3,(long ****)param_4,param_5,param_6,param_7,
                     param_8,param_9);
      lVar10 = param_2[0x1e];
      param_3 = extraout_x1_03;
      if (lVar10 != 0) {
        if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar10 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar10 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 1;
        }
      }
    }
    *(undefined1 *)((long)param_2 + 0x15c) = 1;
    plVar3 = *(long **)(**(long **)(param_2[0x1f] + 0x338) + 8);
    if (plVar3 != (long *)0x0) {
      param_4 = (char *)(ulong)*(uint *)(param_2 + 0x27);
      (**(code **)(*plVar3 + 0x58))(plVar3,9);
      param_3 = extraout_x1_04;
    }
    *(undefined4 *)(param_2 + 0x1d) = 1;
    if ((long *)param_2[0x2f] != (long *)0x0) {
      FUN_710313ef20((long *)param_2[0x2f]);
      param_3 = extraout_x1_05;
    }
    uVar7 = 3;
    goto LAB_7102efd678;
  case 3:
    if (fVar11 <= 0.0) {
      puVar8 = *(uint **)(param_2[0x56] + 0x340);
      fVar11 = *(float *)(param_2[0x57] + 0x1c8);
      fVar13 = *(float *)(param_2[0x57] + 0x1cc);
      uVar1 = *puVar8;
      *puVar8 = puVar8[1];
      uVar2 = puVar8[3];
      uVar1 = uVar1 ^ uVar1 << 0xb;
      uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar8[1] = puVar8[2];
      puVar8[2] = uVar2;
      puVar8[3] = uVar1;
      iVar6 = *(int *)(param_2 + 9);
      *(float *)(param_2 + 5) = fVar11 + (fVar13 - fVar11) * (float)uVar1 * 2.3283064e-10;
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          fVar11 = *(float *)((long)param_2 + 0x6c) - *(float *)(param_2 + 0xe);
        }
        else {
          if (iVar6 == 3) goto LAB_7102efd60c;
          fVar11 = 0.0;
        }
        *(undefined4 *)(param_2 + 0xf) = 0x42f00000;
        *(float *)(param_2 + 0xe) = fVar11;
        plVar3 = *(long **)(**(long **)(param_2[0xb] + 0x338) + 8);
        if (plVar3 != (long *)0x0) {
          param_4 = (char *)(ulong)*(uint *)(param_2 + 0x13);
          (**(code **)(*plVar3 + 0x58))(plVar3,10);
          param_3 = extraout_x1_08;
        }
        *(undefined4 *)(param_2 + 9) = 3;
      }
LAB_7102efd60c:
      iVar6 = *(int *)(param_2 + 0x1d);
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          fVar11 = *(float *)((long)param_2 + 0x10c) - *(float *)(param_2 + 0x22);
        }
        else {
          if (iVar6 == 3) goto LAB_7102efd674;
          fVar11 = 0.0;
        }
        *(undefined4 *)(param_2 + 0x23) = 0x42f00000;
        *(float *)(param_2 + 0x22) = fVar11;
        plVar3 = *(long **)(**(long **)(param_2[0x1f] + 0x338) + 8);
        if (plVar3 != (long *)0x0) {
          param_4 = (char *)(ulong)*(uint *)(param_2 + 0x27);
          (**(code **)(*plVar3 + 0x58))(plVar3,10);
          param_3 = extraout_x1_09;
        }
        *(undefined4 *)(param_2 + 0x1d) = 3;
      }
LAB_7102efd674:
      uVar7 = 4;
      goto LAB_7102efd678;
    }
    break;
  case 4:
    if (fVar11 <= 0.0) {
      uVar7 = 1;
      goto LAB_7102efd678;
    }
    break;
  case 5:
    iVar6 = *(int *)(param_2 + 9);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)((long)param_2 + 0x6c) - *(float *)(param_2 + 0xe);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efd558;
        fVar11 = 0.0;
      }
      *(undefined4 *)(param_2 + 0xf) = 0x42f00000;
      *(float *)(param_2 + 0xe) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0xb] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x13);
        (**(code **)(*plVar3 + 0x58))(plVar3,10);
        param_3 = extraout_x1_06;
      }
      *(undefined4 *)(param_2 + 9) = 3;
    }
LAB_7102efd558:
    iVar6 = *(int *)(param_2 + 0x1d);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)((long)param_2 + 0x10c) - *(float *)(param_2 + 0x22);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efd5c0;
        fVar11 = 0.0;
      }
      *(undefined4 *)(param_2 + 0x23) = 0x42f00000;
      *(float *)(param_2 + 0x22) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0x1f] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x27);
        (**(code **)(*plVar3 + 0x58))(plVar3,10);
        param_3 = extraout_x1_07;
      }
      *(undefined4 *)(param_2 + 0x1d) = 3;
    }
LAB_7102efd5c0:
    uVar7 = 6;
LAB_7102efd678:
    *(undefined4 *)((long)param_2 + 0x24) = uVar7;
  }
  FUN_7102efbb50(param_1,(long)(param_2 + 8),param_3,(long ****)param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102efbdc0(param_1,(long)(param_2 + 8));
  iVar6 = *(int *)(param_2 + 9);
  uVar5 = extraout_x1_10;
  if (iVar6 != 0) {
    fVar11 = *(float *)(param_2 + 0xf) + param_1;
    uVar12 = (ulong)(uint)fVar11;
    *(float *)(param_2 + 0xf) = fVar11;
    if (iVar6 == 3) {
      if (320.0 <= fVar11) {
        fVar13 = -160.0;
        goto LAB_7102efd714;
      }
    }
    else if (iVar6 == 2) {
      if (120.0 <= fVar11) {
        fVar13 = -60.0;
        goto LAB_7102efd714;
      }
    }
    else if ((iVar6 == 1) && (40.0 <= fVar11)) {
      fVar13 = -40.0;
LAB_7102efd714:
      uVar12 = (ulong)(uint)(fVar11 + fVar13);
      *(float *)(param_2 + 0xf) = fVar11 + fVar13;
    }
    FUN_710260fdd0(uVar12,param_2[10],1);
    uVar5 = extraout_x1_11;
  }
  FUN_7102efbb50(param_1,(long)(param_2 + 0x1c),uVar5,(long ****)param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102efbdc0(param_1,(long)(param_2 + 0x1c));
  iVar6 = *(int *)(param_2 + 0x1d);
  param_3 = extraout_x1_12;
  if (iVar6 != 0) {
    fVar11 = *(float *)(param_2 + 0x23) + param_1;
    uVar12 = (ulong)(uint)fVar11;
    *(float *)(param_2 + 0x23) = fVar11;
    if (iVar6 == 3) {
      if (320.0 <= fVar11) {
        fVar13 = -160.0;
        goto LAB_7102efd7c0;
      }
    }
    else if (iVar6 == 2) {
      if (120.0 <= fVar11) {
        fVar13 = -60.0;
        goto LAB_7102efd7c0;
      }
    }
    else if ((iVar6 == 1) && (40.0 <= fVar11)) {
      fVar13 = -40.0;
LAB_7102efd7c0:
      uVar12 = (ulong)(uint)(fVar11 + fVar13);
      *(float *)(param_2 + 0x23) = fVar11 + fVar13;
    }
    FUN_710260fdd0(uVar12,param_2[0x1e],1);
    param_3 = extraout_x1_13;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    if ((*(char *)((long)param_2 + 0x9c) != '\0') || (*(char *)((long)param_2 + 0x13c) != '\0')) {
      lVar10 = param_2[0x56];
      puVar9 = *(undefined8 **)(lVar10 + 0x9a8);
      if (puVar9 != (undefined8 *)0x0) {
        FUN_71025f55b0((undefined8 *)*puVar9,(undefined8 *)puVar9[1],"IPP0004");
        puVar9 = *(undefined8 **)(lVar10 + 0x9a8);
        param_4 = "IPP0005";
        FUN_71025f5420((undefined8 *)*puVar9,(undefined8 *)puVar9[1],"IPP0005");
        param_3 = extraout_x1_15;
      }
      *(undefined1 *)(param_2 + 4) = 1;
    }
  }
  else if ((*(char *)((long)param_2 + 0x9c) == '\0') && (*(char *)((long)param_2 + 0x13c) == '\0'))
  {
    lVar10 = param_2[0x56];
    puVar9 = *(undefined8 **)(lVar10 + 0x9a8);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar9,(undefined8 *)puVar9[1],"IPP0004");
      puVar9 = *(undefined8 **)(lVar10 + 0x9a8);
      param_4 = "IPP0005";
      FUN_71025f55b0((undefined8 *)*puVar9,(undefined8 *)puVar9[1],"IPP0005");
      param_3 = extraout_x1_14;
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  if (*(char *)((long)param_2 + 0x21) == '\0') {
    if ((*(int *)(param_2 + 9) == 2) && (*(int *)(param_2 + 0x1d) == 2)) {
      iVar6 = *(int *)((long)param_2 + 0x2c);
      if (iVar6 == 2) {
        puVar9 = *(undefined8 **)(param_2[0x56] + 0x9a8);
        if (puVar9 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
          param_4 = "IPP0003";
          goto LAB_7102efd954;
        }
      }
      else if (iVar6 == 1) {
        puVar9 = *(undefined8 **)(param_2[0x56] + 0x9a8);
        if (puVar9 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
          param_4 = "IPP0002";
          goto LAB_7102efd954;
        }
      }
      else if ((iVar6 == 0) &&
              (puVar9 = *(undefined8 **)(param_2[0x56] + 0x9a8), puVar9 != (undefined8 *)0x0)) {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = (undefined8 *)puVar9[1];
        param_4 = "IPP0001";
LAB_7102efd954:
        FUN_71025f5420(puVar4,puVar9,param_4);
        param_3 = extraout_x1_17;
      }
      *(undefined1 *)((long)param_2 + 0x21) = 1;
    }
LAB_7102efd960:
    iVar6 = *(int *)(param_2 + 6);
  }
  else {
    if ((*(int *)(param_2 + 9) == 2) && (*(int *)(param_2 + 0x1d) == 2)) goto LAB_7102efd960;
    lVar10 = param_2[0x56];
    puVar9 = *(undefined8 **)(lVar10 + 0x9a8);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar9,(undefined8 *)puVar9[1],"IPP0001");
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(lVar10 + 0x9a8),
                     (undefined8 *)(*(undefined8 **)(lVar10 + 0x9a8))[1],"IPP0002");
      param_4 = "IPP0003";
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(lVar10 + 0x9a8),
                     (undefined8 *)(*(undefined8 **)(lVar10 + 0x9a8))[1],"IPP0003");
      param_3 = extraout_x1_16;
    }
    *(undefined1 *)((long)param_2 + 0x21) = 0;
    iVar6 = *(int *)(param_2 + 6);
  }
  if (iVar6 == 0) {
    return;
  }
  fVar11 = *(float *)((long)param_2 + 0x34) - param_1;
  *(float *)((long)param_2 + 0x34) = fVar11;
  switch(iVar6) {
  case 2:
    puVar8 = *(uint **)(param_2[0x56] + 0x340);
    uVar1 = *puVar8 ^ *puVar8 << 0xb;
    *puVar8 = puVar8[1];
    uVar2 = puVar8[3];
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar8[1] = puVar8[2];
    puVar8[2] = uVar2;
    puVar8[3] = uVar1;
    if ((uVar1 & 1) == 0) {
      lVar10 = param_2[0x4a];
      *(undefined4 *)((long)param_2 + 0x26c) = 0;
      if (lVar10 != 0) {
        *(undefined1 *)(lVar10 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar10 + 0x108),param_3,(long ****)param_4,param_5,param_6,param_7,
                       param_8,param_9);
        lVar10 = param_2[0x4a];
        param_3 = extraout_x1_18;
        if (lVar10 != 0) {
          if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0;
          }
          if (*(long *)(lVar10 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 0;
          }
          if (*(char *)(lVar10 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 1;
          }
        }
      }
      plVar3 = *(long **)(**(long **)(param_2[0x4b] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x54);
        (**(code **)(*plVar3 + 0x58))(plVar3,2);
        param_3 = extraout_x1_19;
      }
      puVar9 = param_2 + 0x49;
      uVar7 = 3;
    }
    else {
      lVar10 = param_2[0x32];
      *(undefined4 *)((long)param_2 + 0x1b4) = 0;
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        *(undefined1 *)(lVar10 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar10 + 0x108),param_3,(long ****)param_4,param_5,param_6,param_7,
                       param_8,param_9);
        lVar10 = param_2[0x32];
      }
      FUN_710260fdd0(0,lVar10,1);
      lVar10 = param_2[0x32];
      if (lVar10 != 0) {
        if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar10 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar10 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 0;
        }
      }
      plVar3 = *(long **)(**(long **)(param_2[0x33] + 0x338) + 8);
      uVar5 = extraout_x1_23;
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x3b);
        (**(code **)(*plVar3 + 0x58))(plVar3,4);
        uVar5 = extraout_x1_24;
      }
      lVar10 = param_2[0x3e];
      *(undefined4 *)(param_2 + 0x31) = 1;
      *(undefined4 *)((long)param_2 + 0x214) = 0;
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        *(undefined1 *)(lVar10 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar10 + 0x108),uVar5,(long ****)param_4,param_5,param_6,param_7,
                       param_8,param_9);
        lVar10 = param_2[0x3e];
      }
      FUN_710260fdd0(0,lVar10,1);
      lVar10 = param_2[0x3e];
      if (lVar10 != 0) {
        if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar10 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar10 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 0;
        }
      }
      plVar3 = *(long **)(**(long **)(param_2[0x3f] + 0x338) + 8);
      param_3 = extraout_x1_25;
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x47);
        (**(code **)(*plVar3 + 0x58))(plVar3,4);
        param_3 = extraout_x1_26;
      }
      puVar9 = param_2 + 0x3d;
      uVar7 = 4;
    }
    *(undefined4 *)puVar9 = 1;
    *(undefined4 *)(param_2 + 6) = uVar7;
    puVar8 = *(uint **)(param_2[0x56] + 0x340);
    fVar11 = *(float *)(param_2[0x57] + 0x1c0);
    fVar13 = *(float *)(param_2[0x57] + 0x1c4);
    uVar1 = *puVar8;
    *puVar8 = puVar8[1];
    uVar2 = puVar8[3];
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar8[1] = puVar8[2];
    puVar8[2] = uVar2;
    puVar8[3] = uVar1;
    *(float *)((long)param_2 + 0x34) = fVar11 + (fVar13 - fVar11) * (float)uVar1 * 2.3283064e-10;
    goto LAB_7102efded8;
  case 3:
    if (0.0 < fVar11) goto LAB_7102efded8;
    iVar6 = *(int *)(param_2 + 0x49);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)(param_2 + 0x4d) - *(float *)((long)param_2 + 0x26c);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efde78;
        fVar11 = 0.0;
      }
      *(float *)((long)param_2 + 0x26c) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0x4b] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x54);
        (**(code **)(*plVar3 + 0x58))(plVar3,3);
        param_3 = extraout_x1_27;
      }
      *(undefined4 *)(param_2 + 0x49) = 3;
    }
    goto LAB_7102efde78;
  case 4:
    if (0.0 < fVar11) goto LAB_7102efded8;
    iVar6 = *(int *)(param_2 + 0x31);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)((long)param_2 + 0x1ac) - *(float *)((long)param_2 + 0x1b4);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efde18;
        fVar11 = 0.0;
      }
      *(float *)((long)param_2 + 0x1b4) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0x33] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x3b);
        (**(code **)(*plVar3 + 0x58))(plVar3,5);
        param_3 = extraout_x1_28;
      }
      *(undefined4 *)(param_2 + 0x31) = 3;
    }
LAB_7102efde18:
    iVar6 = *(int *)(param_2 + 0x3d);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)((long)param_2 + 0x20c) - *(float *)((long)param_2 + 0x214);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efde78;
        fVar11 = 0.0;
      }
      *(float *)((long)param_2 + 0x214) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0x3f] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x47);
        (**(code **)(*plVar3 + 0x58))(plVar3,5);
        param_3 = extraout_x1_29;
      }
      *(undefined4 *)(param_2 + 0x3d) = 3;
    }
LAB_7102efde78:
    puVar8 = *(uint **)(param_2[0x56] + 0x340);
    fVar11 = *(float *)(param_2[0x57] + 0x1c8);
    fVar13 = *(float *)(param_2[0x57] + 0x1cc);
    uVar1 = *puVar8;
    *puVar8 = puVar8[1];
    uVar2 = puVar8[3];
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar8[1] = puVar8[2];
    puVar8[2] = uVar2;
    puVar8[3] = uVar1;
    uVar7 = 5;
    *(float *)((long)param_2 + 0x34) = fVar11 + (fVar13 - fVar11) * (float)uVar1 * 2.3283064e-10;
    break;
  case 5:
    if (0.0 < fVar11) goto LAB_7102efded8;
    uVar7 = 1;
    break;
  case 6:
    iVar6 = *(int *)(param_2 + 0x31);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)((long)param_2 + 0x1ac) - *(float *)((long)param_2 + 0x1b4);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efdb44;
        fVar11 = 0.0;
      }
      *(float *)((long)param_2 + 0x1b4) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0x33] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x3b);
        (**(code **)(*plVar3 + 0x58))(plVar3,5);
        param_3 = extraout_x1_20;
      }
      *(undefined4 *)(param_2 + 0x31) = 3;
    }
LAB_7102efdb44:
    iVar6 = *(int *)(param_2 + 0x3d);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)((long)param_2 + 0x20c) - *(float *)((long)param_2 + 0x214);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efdba4;
        fVar11 = 0.0;
      }
      *(float *)((long)param_2 + 0x214) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0x3f] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x47);
        (**(code **)(*plVar3 + 0x58))(plVar3,5);
        param_3 = extraout_x1_21;
      }
      *(undefined4 *)(param_2 + 0x3d) = 3;
    }
LAB_7102efdba4:
    iVar6 = *(int *)(param_2 + 0x49);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        fVar11 = *(float *)(param_2 + 0x4d) - *(float *)((long)param_2 + 0x26c);
      }
      else {
        if (iVar6 == 3) goto LAB_7102efdc04;
        fVar11 = 0.0;
      }
      *(float *)((long)param_2 + 0x26c) = fVar11;
      plVar3 = *(long **)(**(long **)(param_2[0x4b] + 0x338) + 8);
      if (plVar3 != (long *)0x0) {
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x54);
        (**(code **)(*plVar3 + 0x58))(plVar3,3);
        param_3 = extraout_x1_22;
      }
      *(undefined4 *)(param_2 + 0x49) = 3;
    }
LAB_7102efdc04:
    uVar7 = 7;
    break;
  default:
    goto LAB_7102efded8;
  }
  *(undefined4 *)(param_2 + 6) = uVar7;
LAB_7102efded8:
  FUN_7102efa8b0(param_1,(long)(param_2 + 0x30),param_3,(long ****)param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102efa8b0(param_1,(long)(param_2 + 0x3c),extraout_x1_30,(long ****)param_4,param_5,param_6,
                 param_7,param_8,param_9);
  switchD_7102efd990::default
            (param_1,(long)(param_2 + 0x48),extraout_x1_31,(long ****)param_4,param_5,param_6,
             param_7,param_8,param_9);
  return;
}

