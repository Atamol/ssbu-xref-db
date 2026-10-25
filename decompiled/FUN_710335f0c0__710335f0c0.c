// addr:      710335f0c0
// offset:    0x335f0c0
// name:      FUN_710335f0c0
// mangled:   
// signature: ulong __cdecl FUN_710335f0c0(long param_1, undefined4 * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710335f0c0(long param_1,undefined4 *param_2,undefined8 param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  void *__dest;
  char *pcVar5;
  undefined4 uVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  long **pplVar17;
  uint uVar18;
  float *pfVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  long ****pppplVar25;
  void *__src;
  size_t __n;
  ulong *puVar26;
  long *plVar27;
  float fVar28;
  long ***local_a0;
  long *local_98;
  long ****local_80;
  undefined4 local_64;
  
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"input_index");
  pppplVar25 = (long ****)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710335f110:
    uVar6 = SUB84(*pppplVar25,0);
  }
  else {
    do {
      uVar4 = *(uint *)(pppplVar25 + 1);
      if (uVar4 == 0x13) goto LAB_710335f110;
      if (uVar4 == 3) {
        fVar28 = (float)(int)*(float *)pppplVar25;
        if ((-9.223372e+18 <= fVar28) && (fVar28 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar28;
          goto LAB_710335f178;
        }
        break;
      }
      if ((uVar4 & 0xf) != 4) break;
      pbVar21 = FUN_7103907f00((byte *)(*pppplVar25 + 3),(float *)&local_a0);
      ppplVar16 = *pppplVar25;
      if (*(char *)(ppplVar16 + 1) == '\x04') {
        pplVar17 = (long **)(ulong)*(byte *)((long)ppplVar16 + 0xb);
      }
      else {
        pplVar17 = ppplVar16[2];
      }
      pppplVar25 = &local_a0;
    } while (pbVar21 == (byte *)((long)pplVar17 + 1));
    uVar6 = 0;
  }
LAB_710335f178:
  *param_2 = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"selection_type");
  pppplVar25 = (long ****)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710335f1b0:
    uVar6 = SUB84(*pppplVar25,0);
  }
  else {
    do {
      uVar4 = *(uint *)(pppplVar25 + 1);
      if (uVar4 == 0x13) goto LAB_710335f1b0;
      if (uVar4 == 3) {
        fVar28 = (float)(int)*(float *)pppplVar25;
        if ((-9.223372e+18 <= fVar28) && (fVar28 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar28;
          goto LAB_710335f218;
        }
        break;
      }
      if ((uVar4 & 0xf) != 4) break;
      pbVar21 = FUN_7103907f00((byte *)(*pppplVar25 + 3),(float *)&local_a0);
      ppplVar16 = *pppplVar25;
      if (*(char *)(ppplVar16 + 1) == '\x04') {
        pplVar17 = (long **)(ulong)*(byte *)((long)ppplVar16 + 0xb);
      }
      else {
        pplVar17 = ppplVar16[2];
      }
      pppplVar25 = &local_a0;
    } while (pbVar21 == (byte *)((long)pplVar17 + 1));
    uVar6 = 0;
  }
LAB_710335f218:
  param_2[1] = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"use_cursor_looping");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f294:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f274:
        if (fVar28 != 0.0) goto LAB_710335f29c;
      }
      goto LAB_710335f294;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f2ac:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f274;
      }
LAB_710335f29c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f2ac;
      }
      bVar3 = true;
    }
  }
  *(bool *)(param_2 + 2) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"cancel_outside_window");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f334:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f314:
        if (fVar28 != 0.0) goto LAB_710335f33c;
      }
      goto LAB_710335f334;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f34c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f314;
      }
LAB_710335f33c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f34c;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 9) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"use_only_shortcut");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f3d4:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f3b4:
        if (fVar28 != 0.0) goto LAB_710335f3dc;
      }
      goto LAB_710335f3d4;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f3ec:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f3b4;
      }
LAB_710335f3dc:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f3ec;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 10) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"use_only_touch_control");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f474:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f454:
        if (fVar28 != 0.0) goto LAB_710335f47c;
      }
      goto LAB_710335f474;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f48c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f454;
      }
LAB_710335f47c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f48c;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0xb) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"use_only_pointer_input");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f514:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f4f4:
        if (fVar28 != 0.0) goto LAB_710335f51c;
      }
      goto LAB_710335f514;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f52c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f4f4;
      }
LAB_710335f51c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f52c;
      }
      bVar3 = true;
    }
  }
  *(bool *)(param_2 + 3) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"input_direction_only_x");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f5b4:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f594:
        if (fVar28 != 0.0) goto LAB_710335f5bc;
      }
      goto LAB_710335f5b4;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f5cc:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f594;
      }
LAB_710335f5bc:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f5cc;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0xd) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"input_direction_only_y");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f654:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f634:
        if (fVar28 != 0.0) goto LAB_710335f65c;
      }
      goto LAB_710335f654;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f66c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f634;
      }
LAB_710335f65c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f66c;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0xe) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"bring_front_on_select");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f6f4:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f6d4:
        if (fVar28 != 0.0) goto LAB_710335f6fc;
      }
      goto LAB_710335f6f4;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f70c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f6d4;
      }
LAB_710335f6fc:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f70c;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0xf) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"cursor_adjust_size");
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"cursor_interpolation");
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"ignore_side_input");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f7d4:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f7b4:
        if (fVar28 != 0.0) goto LAB_710335f7dc;
      }
      goto LAB_710335f7d4;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f7ec:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f7b4;
      }
LAB_710335f7dc:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f7ec;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0x12) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"decide_only_shortcut");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f874:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f854:
        if (fVar28 != 0.0) goto LAB_710335f87c;
      }
      goto LAB_710335f874;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f88c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f854;
      }
LAB_710335f87c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f88c;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0x13) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"select_same_button");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f914:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f8f4:
        if (fVar28 != 0.0) goto LAB_710335f91c;
      }
      goto LAB_710335f914;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f92c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f8f4;
      }
LAB_710335f91c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f92c;
      }
      bVar3 = true;
    }
  }
  *(bool *)(param_2 + 5) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"detect_outside_at_same");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335f9b4:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335f994:
        if (fVar28 != 0.0) goto LAB_710335f9bc;
      }
      goto LAB_710335f9b4;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335f9cc:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335f994;
      }
LAB_710335f9bc:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335f9cc;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0x15) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"use_button_history");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 0) {
LAB_710335fa54:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)(lVar7 + -0x10) != 0) {
        fVar28 = (float)*(long *)(lVar7 + -0x10);
joined_r0x00710335fa34:
        if (fVar28 != 0.0) goto LAB_710335fa5c;
      }
      goto LAB_710335fa54;
    }
    if (uVar4 == 1) {
      bVar3 = *(int *)(lVar7 + -0x10) == 0;
LAB_710335fa6c:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *(float *)(lVar7 + -0x10);
        goto joined_r0x00710335fa34;
      }
LAB_710335fa5c:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar3 = *(float *)(lVar7 + -0x10) == 0.0;
        }
        goto LAB_710335fa6c;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)param_2 + 0x16) = bVar3;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"size_use_button_id");
  pppplVar25 = (long ****)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710335fab0:
    uVar6 = SUB84(*pppplVar25,0);
  }
  else {
    do {
      uVar4 = *(uint *)(pppplVar25 + 1);
      if (uVar4 == 0x13) goto LAB_710335fab0;
      if (uVar4 == 3) {
        fVar28 = (float)(int)*(float *)pppplVar25;
        if ((-9.223372e+18 <= fVar28) && (fVar28 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar28;
          goto LAB_710335fb18;
        }
        break;
      }
      if ((uVar4 & 0xf) != 4) break;
      pbVar21 = FUN_7103907f00((byte *)(*pppplVar25 + 3),(float *)&local_a0);
      ppplVar16 = *pppplVar25;
      if (*(char *)(ppplVar16 + 1) == '\x04') {
        pplVar17 = (long **)(ulong)*(byte *)((long)ppplVar16 + 0xb);
      }
      else {
        pplVar17 = ppplVar16[2];
      }
      pppplVar25 = &local_a0;
    } while (pbVar21 == (byte *)((long)pplVar17 + 1));
    uVar6 = 0;
  }
LAB_710335fb18:
  param_2[6] = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"directional_degree");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  if (uVar4 == 3) {
    fVar28 = *(float *)(lVar7 + -0x10);
  }
  else if (uVar4 == 0x13) {
    fVar28 = (float)*(long *)(lVar7 + -0x10);
  }
  else {
    if ((uVar4 & 0xf) == 4) {
      pbVar21 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_a0);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar21 == (byte *)(uVar10 + 1)) {
        fVar28 = (float)(long)local_a0;
        if ((int)local_98 != 0x13) {
          fVar28 = SUB84(local_a0,0);
        }
        goto LAB_710335fc60;
      }
    }
    fVar28 = 0.0;
  }
LAB_710335fc60:
  param_2[7] = fVar28;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"multiple_operator_num");
  pppplVar25 = (long ****)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710335fc98:
    uVar6 = SUB84(*pppplVar25,0);
  }
  else {
    do {
      uVar4 = *(uint *)(pppplVar25 + 1);
      if (uVar4 == 0x13) goto LAB_710335fc98;
      if (uVar4 == 3) {
        fVar28 = (float)(int)*(float *)pppplVar25;
        if ((-9.223372e+18 <= fVar28) && (fVar28 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar28;
          goto LAB_710335fd00;
        }
        break;
      }
      if ((uVar4 & 0xf) != 4) break;
      pbVar21 = FUN_7103907f00((byte *)(*pppplVar25 + 3),(float *)&local_a0);
      ppplVar16 = *pppplVar25;
      if (*(char *)(ppplVar16 + 1) == '\x04') {
        pplVar17 = (long **)(ulong)*(byte *)((long)ppplVar16 + 0xb);
      }
      else {
        pplVar17 = ppplVar16[2];
      }
      pppplVar25 = &local_a0;
    } while (pbVar21 == (byte *)((long)pplVar17 + 1));
    uVar6 = 0;
  }
LAB_710335fd00:
  param_2[8] = uVar6;
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"is_unique_se");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8);
  pfVar19 = (float *)(lVar7 + -0x10);
  if (uVar4 == 0) {
LAB_710335fd80:
    bVar3 = false;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)pfVar19 != 0) {
        fVar28 = (float)*(long *)pfVar19;
joined_r0x00710335fd60:
        if (fVar28 != 0.0) goto LAB_710335fd88;
      }
      goto LAB_710335fd80;
    }
    if (uVar4 == 1) {
      bVar3 = *pfVar19 == 0.0;
LAB_710335fd98:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar4 & 0xf) == 3) {
        fVar28 = *pfVar19;
        goto joined_r0x00710335fd60;
      }
LAB_710335fd88:
      if (uVar4 == 3) {
        bVar3 = false;
        if (!NAN(*pfVar19)) {
          bVar3 = *pfVar19 == 0.0;
        }
        goto LAB_710335fd98;
      }
      bVar3 = true;
    }
  }
  *(float **)(param_1 + 0x10) = pfVar19;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"decide_se_label_code");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8) & 0xf;
  pfVar8 = (float *)(lVar7 + -0x10);
  pfVar19 = pfVar8;
  if (uVar4 == 4) {
LAB_710335fe1c:
    pbVar21 = (byte *)(*(long *)pfVar19 + 0x18);
  }
  else {
    if (uVar4 == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar19 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
      }
      FUN_71039080b0(param_1,pfVar19);
      lVar7 = *(long *)(param_1 + 0x10);
      pfVar8 = (float *)(lVar7 + -0x10);
      goto LAB_710335fe1c;
    }
    pbVar21 = (byte *)0x0;
  }
  *(float **)(param_1 + 0x10) = pfVar8;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"cancel_se_label_code");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8) & 0xf;
  pfVar8 = (float *)(lVar7 + -0x10);
  pfVar19 = pfVar8;
  if (uVar4 == 4) {
LAB_710335fea4:
    pbVar22 = (byte *)(*(long *)pfVar19 + 0x18);
  }
  else {
    if (uVar4 == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar19 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
      }
      FUN_71039080b0(param_1,pfVar19);
      lVar7 = *(long *)(param_1 + 0x10);
      pfVar8 = (float *)(lVar7 + -0x10);
      goto LAB_710335fea4;
    }
    pbVar22 = (byte *)0x0;
  }
  *(float **)(param_1 + 0x10) = pfVar8;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"cursor_se_label_code");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar7 + -8) & 0xf;
  pfVar8 = (float *)(lVar7 + -0x10);
  pfVar19 = pfVar8;
  if (uVar4 == 4) {
LAB_710335ff2c:
    pbVar23 = (byte *)(*(long *)pfVar19 + 0x18);
  }
  else {
    if (uVar4 == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar19 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
      }
      FUN_71039080b0(param_1,pfVar19);
      lVar7 = *(long *)(param_1 + 0x10);
      pfVar8 = (float *)(lVar7 + -0x10);
      goto LAB_710335ff2c;
    }
    pbVar23 = (byte *)0x0;
  }
  pcVar5 = "error_se_label_code";
  *(float **)(param_1 + 0x10) = pfVar8;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"error_se_label_code");
  pfVar8 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  pfVar19 = pfVar8;
  if (uVar4 == 4) {
LAB_710335ffb4:
    pbVar24 = (byte *)(*(long *)pfVar19 + 0x18);
    *(float **)(param_1 + 0x10) = pfVar8;
  }
  else {
    if (uVar4 == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar19 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
      }
      FUN_71039080b0(param_1,pfVar19);
      pfVar8 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
      goto LAB_710335ffb4;
    }
    pbVar24 = (byte *)0x0;
    *(float **)(param_1 + 0x10) = pfVar8;
  }
  if (!bVar3) {
    uVar10 = FUN_710337df20((long)param_2);
    return uVar10;
  }
  FUN_71038f4b20(param_1,"key_context");
  uVar4 = FUN_71038f4fc0(param_1,-0xf4628);
  uVar10 = (ulong)uVar4;
  plVar9 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar4 == 2) {
    plVar27 = (long *)*plVar9;
    *(long **)(param_1 + 0x10) = plVar9;
    if (plVar27 == (long *)0x0) {
      return uVar10;
    }
    lVar7 = *plVar27;
  }
  else {
    if (uVar4 != 7) {
      *(long **)(param_1 + 0x10) = plVar9;
      return uVar10;
    }
    lVar7 = *plVar9;
    *(long **)(param_1 + 0x10) = plVar9;
    plVar27 = (long *)(lVar7 + 0x28);
    lVar7 = *plVar27;
  }
  if (lVar7 == 0) {
    return uVar10;
  }
  if ((pbVar21 == (byte *)0x0) || (uVar4 = (uint)*pbVar21, *pbVar21 == 0)) {
    uVar10 = 0;
    if (pbVar22 == (byte *)0x0) goto LAB_7103360220;
LAB_710336007c:
    uVar4 = (uint)*pbVar22;
    if (*pbVar22 != 0) {
      uVar11 = 0;
      uVar18 = 0xffffffff;
      do {
        pbVar22 = pbVar22 + 1;
        uVar2 = uVar4 + 0x20;
        if (0x19 < uVar4 - 0x41) {
          uVar2 = uVar4;
        }
        uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
        uVar4 = (uint)*pbVar22;
        uVar11 = uVar11 + 0x100000000;
      } while (uVar4 != 0);
      uVar11 = uVar11 & 0xff00000000 | (ulong)~uVar18;
      goto joined_r0x0071033600d8;
    }
    uVar11 = 0;
    if (pbVar23 != (byte *)0x0) goto LAB_71033600dc;
joined_r0x00710336022c:
    uVar12 = 0;
    if (pbVar24 == (byte *)0x0) goto LAB_7103360230;
LAB_710336013c:
    uVar4 = (uint)*pbVar24;
    if (*pbVar24 == 0) {
      uVar20 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar18 = 0xffffffff;
      do {
        pbVar24 = pbVar24 + 1;
        uVar2 = uVar4 + 0x20;
        if (0x19 < uVar4 - 0x41) {
          uVar2 = uVar4;
        }
        uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
        uVar4 = (uint)*pbVar24;
        uVar13 = uVar13 + 0x100000000;
      } while (uVar4 != 0);
      uVar20 = (ulong)~uVar18;
      uVar13 = uVar13 & 0xff00000000;
    }
    uVar13 = uVar13 | uVar20;
  }
  else {
    uVar10 = 0;
    uVar18 = 0xffffffff;
    do {
      pbVar21 = pbVar21 + 1;
      uVar2 = uVar4 + 0x20;
      if (0x19 < uVar4 - 0x41) {
        uVar2 = uVar4;
      }
      uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
      uVar4 = (uint)*pbVar21;
      uVar10 = uVar10 + 0x100000000;
    } while (uVar4 != 0);
    uVar10 = uVar10 & 0xff00000000 | (ulong)~uVar18;
    if (pbVar22 != (byte *)0x0) goto LAB_710336007c;
LAB_7103360220:
    uVar11 = 0;
joined_r0x0071033600d8:
    if (pbVar23 == (byte *)0x0) goto joined_r0x00710336022c;
LAB_71033600dc:
    uVar4 = (uint)*pbVar23;
    if (*pbVar23 == 0) goto joined_r0x00710336022c;
    uVar12 = 0;
    uVar18 = 0xffffffff;
    do {
      pbVar23 = pbVar23 + 1;
      uVar2 = uVar4 + 0x20;
      if (0x19 < uVar4 - 0x41) {
        uVar2 = uVar4;
      }
      uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
      uVar4 = (uint)*pbVar23;
      uVar12 = uVar12 + 0x100000000;
    } while (uVar4 != 0);
    uVar12 = uVar12 & 0xff00000000 | (ulong)~uVar18;
    if (pbVar24 != (byte *)0x0) goto LAB_710336013c;
LAB_7103360230:
    uVar13 = 0;
  }
  puVar26 = *(ulong **)(lVar7 + 0x20);
  if (puVar26 == *(ulong **)(lVar7 + 0x28)) {
    __src = *(void **)(lVar7 + 0x18);
    __n = (long)puVar26 - (long)__src;
    uVar20 = ((long)__n >> 5) + 1;
    if (uVar20 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (long)*(ulong **)(lVar7 + 0x28) - (long)__src;
    if ((ulong)(lVar14 >> 5) < 0x3ffffffffffffff) {
      uVar15 = lVar14 >> 4;
      if (uVar20 <= uVar15) {
        uVar20 = uVar15;
      }
      if (uVar20 != 0) {
        if (uVar20 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7103360304;
      }
      __dest = (void *)0x0;
    }
    else {
      uVar20 = 0x7ffffffffffffff;
LAB_7103360304:
      ppplVar16 = (long ***)(uVar20 * 0x20);
      if (ppplVar16 == (long ***)0x0) {
        ppplVar16 = (long ***)0x1;
      }
      __dest = (void *)FUN_710392e290(0x10,ppplVar16,(long ****)pcVar5,param_4,param_5,param_6,
                                      param_7,param_8);
      if (__dest == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          pppplVar25 = &local_a0;
          local_a0 = ppplVar16;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar15 & 1) != 0) &&
             (__dest = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar25,param_4,param_5,param_6,
                                              param_7,param_8), __dest != (void *)0x0))
          goto LAB_7103360370;
        }
        __dest = (void *)0x0;
      }
    }
LAB_7103360370:
    puVar1 = (ulong *)((long)__dest + ((long)__n >> 5) * 0x20);
    puVar26 = puVar1 + 4;
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(lVar7 + 0x18) = __dest;
    *(ulong **)(lVar7 + 0x20) = puVar26;
    *(void **)(lVar7 + 0x28) = (void *)((long)__dest + uVar20 * 0x20);
    if (__src != (void *)0x0) {
      FUN_710392eb40((ulong)__src);
      puVar26 = *(ulong **)(lVar7 + 0x20);
    }
  }
  else {
    *puVar26 = uVar10;
    puVar26[1] = uVar11;
    puVar26[2] = uVar12;
    puVar26[3] = uVar13;
    puVar26 = (ulong *)(*(long *)(lVar7 + 0x20) + 0x20);
    *(ulong **)(lVar7 + 0x20) = puVar26;
  }
  param_2[0x48] = (int)((ulong)((long)puVar26 - *(long *)(lVar7 + 0x18)) >> 5) + -1;
  local_a0 = (long ***)&DAT_7105185830;
  local_98 = plVar27;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,(long *)(param_2 + 0x18));
  if (&local_a0 == local_80) {
    pplVar17 = (*local_80)[4];
LAB_710336040c:
    (*(code *)pplVar17)();
  }
  else if (local_80 != (long ****)0x0) {
    pplVar17 = (*local_80)[5];
    goto LAB_710336040c;
  }
  local_a0 = (long ***)&DAT_7105185878;
  local_98 = plVar27;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,(long *)(param_2 + 0x24));
  if (&local_a0 == local_80) {
    pplVar17 = (*local_80)[4];
LAB_7103360454:
    (*(code *)pplVar17)();
  }
  else if (local_80 != (long ****)0x0) {
    pplVar17 = (*local_80)[5];
    goto LAB_7103360454;
  }
  local_a0 = (long ***)&DAT_71051858c0;
  local_98 = plVar27;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,(long *)(param_2 + 0x30));
  if (&local_a0 == local_80) {
    pplVar17 = (*local_80)[4];
  }
  else {
    if (local_80 == (long ****)0x0) goto LAB_71033604a0;
    pplVar17 = (*local_80)[5];
  }
  (*(code *)pplVar17)();
LAB_71033604a0:
  local_a0 = (long ***)&DAT_7105185908;
  local_98 = plVar27;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,(long *)(param_2 + 0x3c));
  if (&local_a0 == local_80) {
    pplVar17 = (*local_80)[4];
  }
  else {
    if (local_80 == (long ****)0x0) {
      return 0;
    }
    pplVar17 = (*local_80)[5];
  }
  uVar10 = (*(code *)pplVar17)();
  return uVar10;
}

