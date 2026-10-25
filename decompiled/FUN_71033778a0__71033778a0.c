// addr:      71033778a0
// offset:    0x33778a0
// name:      FUN_71033778a0
// mangled:   
// signature: undefined __cdecl FUN_71033778a0(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_71033778a0(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  void *__dest;
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
  undefined8 uVar8;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  long lVar21;
  uint *puVar22;
  int iVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long ********pppppppplVar29;
  void *pvVar30;
  long *********ppppppppplVar31;
  byte *pbVar32;
  ulong uVar33;
  undefined1 auVar34 [16];
  uint local_b0 [2];
  uint local_a8 [2];
  long ********local_a0;
  byte *local_98;
  undefined4 local_90;
  undefined *local_8c;
  undefined4 local_84;
  undefined2 local_80;
  uint local_78 [2];
  long ********local_70;
  long ***local_68;
  
  plVar7 = DAT_710593b8d8;
  ((undefined8 *)*DAT_710593b8d8)[1] = *(undefined8 *)*DAT_710593b8d8;
  *(undefined8 *)(*plVar7 + 0x18) = 0;
  *(undefined8 *)(*plVar7 + 0x38) = 0;
  lVar26 = *param_1;
  if (((DAT_710532f4d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710532f4d0), iVar5 != 0)) {
    DAT_710532f4a0 = 0xffffff;
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
  }
  plVar27 = (long *)(lVar26 + 0x10);
  plVar24 = (long *)*plVar27;
  plVar7 = plVar27;
  if (plVar24 == (long *)0x0) {
    puVar17 = &DAT_710532f4a0;
  }
  else {
    do {
      bVar4 = (plVar24[4] & 0xfffffffffcU) < 0x25441d086c;
      if (!bVar4) {
        plVar7 = plVar24;
      }
      plVar24 = (long *)plVar24[bVar4];
    } while (plVar24 != (long *)0x0);
    if ((plVar7 == plVar27) || (0x25441d086c < (plVar7[4] & 0xffffffffffU))) {
      puVar17 = &DAT_710532f4a0;
    }
    else {
      puVar17 = (uint *)(plVar7 + 5);
    }
  }
  uVar14 = *puVar17;
  plVar7 = param_1 + 2;
  local_70 = (long ********)CONCAT44(local_70._4_4_,uVar14);
  if (uVar14 == 0xffffff) {
    FUN_7103720c30((long)plVar7,(uint *)&local_70,(long *********)param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else {
    FUN_7103540a00(DAT_7105332f20,uVar14);
    FUN_7103720c30((long)plVar7,(uint *)&local_70,(long *********)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103540b10(DAT_7105332f20,uVar14,(long *********)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    local_70 = (long ********)CONCAT44(local_70._4_4_,0xffffff);
  }
  uVar14 = *(uint *)((long)param_1 + 0xc);
  lVar26 = (long)(int)uVar14;
  if (uVar14 != 1) {
    if (uVar14 == 2) {
      pcVar15 = (char *)param_1[3];
      if ((*pcVar15 != '\f') || (iVar5 = *(int *)(pcVar15 + 1) + -1, *(int *)(pcVar15 + 1) < 1))
      goto LAB_7103377b68;
      pppppppplVar29 = (long ********)*plVar7;
      iVar23 = 0;
      do {
        iVar1 = iVar5 + iVar23;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar17 = (uint *)((long)pppppppplVar29[5] + (long)iVar1 * 8 + (long)*(int *)(pcVar15 + 5));
        if (pppppppplVar29[4][*puVar17] == (long ******)0x14eb7c526c) goto LAB_7103377c08;
        iVar3 = iVar1 + -1;
        if (pppppppplVar29[4][*puVar17] < (long ******)0x14eb7c526d) {
          iVar23 = iVar1 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
      } while (iVar23 <= iVar5);
    }
    else if (uVar14 == 3) {
      pcVar15 = (char *)param_1[3];
      if ((*pcVar15 != '\f') || (iVar5 = *(int *)(pcVar15 + 1) + -1, *(int *)(pcVar15 + 1) < 1))
      goto LAB_7103377b68;
      pppppppplVar29 = (long ********)*plVar7;
      iVar23 = 0;
      do {
        iVar1 = iVar5 + iVar23;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar17 = (uint *)((long)pppppppplVar29[5] + (long)iVar1 * 8 + (long)*(int *)(pcVar15 + 5));
        if (pppppppplVar29[4][*puVar17] == (long ******)0x148a947e3a) goto LAB_7103377c08;
        iVar3 = iVar1 + -1;
        if (pppppppplVar29[4][*puVar17] < (long ******)0x148a947e3b) {
          iVar23 = iVar1 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
      } while (iVar23 <= iVar5);
    }
    else {
      pcVar15 = (char *)param_1[3];
      if ((*pcVar15 == '\f') && (iVar5 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
        pppppppplVar29 = (long ********)*plVar7;
        iVar23 = 0;
        do {
          iVar1 = iVar5 + iVar23;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar17 = (uint *)((long)pppppppplVar29[5] + (long)iVar1 * 8 + (long)*(int *)(pcVar15 + 5)
                            );
          if (pppppppplVar29[4][*puVar17] == (long ******)0x125e7ac33c) goto LAB_7103377c08;
          iVar3 = iVar1 + -1;
          if (pppppppplVar29[4][*puVar17] < (long ******)0x125e7ac33d) {
            iVar23 = iVar1 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
        } while (iVar23 <= iVar5);
      }
    }
joined_r0x007103377c30:
    pbVar32 = &DAT_7104742dbb;
    pppppppplVar29 = (long ********)0x0;
    goto joined_r0x007103377c18;
  }
  pcVar15 = (char *)param_1[3];
  if ((*pcVar15 == '\f') && (iVar5 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    pppppppplVar29 = (long ********)*plVar7;
    iVar23 = 0;
    do {
      iVar1 = iVar5 + iVar23;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar17 = (uint *)((long)pppppppplVar29[5] + (long)iVar1 * 8 + (long)*(int *)(pcVar15 + 5));
      if (pppppppplVar29[4][*puVar17] == (long ******)0x143686e13b) goto LAB_7103377c08;
      iVar3 = iVar1 + -1;
      if (pppppppplVar29[4][*puVar17] < (long ******)0x143686e13c) {
        iVar23 = iVar1 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
    } while (iVar23 <= iVar5);
    goto joined_r0x007103377c30;
  }
LAB_7103377b68:
  pppppppplVar29 = (long ********)0x0;
  pbVar32 = &DAT_7104742dbb;
LAB_7103377c34:
  if ((*pbVar32 - 0xb < 2) && (0 < *(int *)(pbVar32 + 1))) {
    if (*pbVar32 == 0xb) {
      local_98 = pbVar32 + *(int *)(pbVar32 + 5);
      local_a0 = pppppppplVar29;
    }
    else {
      local_98 = &DAT_7104742dbb;
      local_a0 = (long ********)0x0;
    }
    FUN_7103378b90((long *)&local_a0,(long)(&PTR_s_nintendo64_7105185978 + lVar26 * 0x2a));
    if ((*pbVar32 - 0xb < 2) && (1 < *(int *)(pbVar32 + 1))) {
      if (*pbVar32 == 0xb) {
        local_98 = pbVar32 + *(int *)(pbVar32 + 9);
        local_a0 = pppppppplVar29;
      }
      else {
        local_98 = &DAT_7104742dbb;
        local_a0 = (long ********)0x0;
      }
      FUN_7103378b90((long *)&local_a0,lVar26 * 0x150 + 0x71051859b0);
      if ((*pbVar32 - 0xb < 2) && (2 < *(int *)(pbVar32 + 1))) {
        if (*pbVar32 == 0xb) {
          local_98 = pbVar32 + *(int *)(pbVar32 + 0xd);
          local_a0 = pppppppplVar29;
        }
        else {
          local_98 = &DAT_7104742dbb;
          local_a0 = (long ********)0x0;
        }
        FUN_7103378b90((long *)&local_a0,lVar26 * 0x150 + 0x71051859e8);
        if ((*pbVar32 - 0xb < 2) && (3 < *(int *)(pbVar32 + 1))) {
          if (*pbVar32 == 0xb) {
            local_98 = pbVar32 + *(int *)(pbVar32 + 0x11);
            local_a0 = pppppppplVar29;
          }
          else {
            local_98 = &DAT_7104742dbb;
            local_a0 = (long ********)0x0;
          }
          FUN_7103378b90((long *)&local_a0,lVar26 * 0x150 + 0x7105185a20);
          if ((*pbVar32 - 0xb < 2) && (4 < *(int *)(pbVar32 + 1))) {
            if (*pbVar32 == 0xb) {
              local_98 = pbVar32 + *(int *)(pbVar32 + 0x15);
              local_a0 = pppppppplVar29;
            }
            else {
              local_98 = &DAT_7104742dbb;
              local_a0 = (long ********)0x0;
            }
            FUN_7103378b90((long *)&local_a0,lVar26 * 0x150 + 0x7105185a58);
            if ((*pbVar32 - 0xb < 2) && (5 < *(int *)(pbVar32 + 1))) {
              if (*pbVar32 == 0xb) {
                local_98 = pbVar32 + *(int *)(pbVar32 + 0x19);
                local_a0 = pppppppplVar29;
              }
              else {
                local_98 = &DAT_7104742dbb;
                local_a0 = (long ********)0x0;
              }
              FUN_7103378b90((long *)&local_a0,lVar26 * 0x150 + 0x7105185a90);
              uVar14 = (uint)*pbVar32;
              if ((*pbVar32 - 0xb < 2) && (6 < *(int *)(pbVar32 + 1))) {
                iVar5 = 0x18;
                lVar26 = 6;
                do {
                  if ((((int)lVar26 < 0) || (uVar14 != 0xb)) ||
                     (*(int *)(pbVar32 + 1) <= (int)lVar26)) {
                    local_a0 = (long ********)0x0;
                    local_98 = &DAT_7104742dbb;
                  }
                  else {
                    local_98 = pbVar32 + *(int *)(pbVar32 + (long)iVar5 + 5);
                    local_a0 = pppppppplVar29;
                  }
                  FUN_7103378b90((long *)&local_a0,0x7105185940);
                  uVar14 = (uint)*pbVar32;
                  lVar26 = lVar26 + 1;
                  if (uVar14 - 0xb < 2) {
                    iVar23 = *(int *)(pbVar32 + 1);
                  }
                  else {
                    iVar23 = 0;
                  }
                  iVar5 = iVar5 + 4;
                } while (lVar26 < iVar23);
              }
            }
          }
        }
      }
    }
  }
  pcVar15 = (char *)param_1[3];
  if ((*pcVar15 == '\f') && (iVar5 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar26 = param_1[2];
    iVar23 = 0;
    pcVar20 = "";
    do {
      iVar1 = iVar5 + iVar23;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar17 = (uint *)(*(long *)(lVar26 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar1 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar26 + 0x20) + (ulong)*puVar17 * 8);
      if (uVar25 == 0x10453a9db9) {
        uVar14 = puVar17[1];
        if ((int)uVar14 < 0) goto LAB_7103377f88;
        pcVar20 = pcVar15 + (int)uVar14;
        goto LAB_7103377f94;
      }
      iVar3 = iVar1 + -1;
      if (uVar25 < 0x10453a9dba) {
        iVar23 = iVar1 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
    } while (iVar23 <= iVar5);
    lVar26 = 0;
  }
  else {
LAB_7103377f88:
    lVar26 = 0;
    pcVar20 = "";
  }
LAB_7103377f94:
  if ((*pcVar20 == '\v') && (0 < *(int *)(pcVar20 + 1))) {
    pcVar20 = pcVar20 + *(int *)(pcVar20 + 5);
    if (*pcVar20 != '\0') {
      if ((*pcVar20 == '\f') && (iVar5 = *(int *)(pcVar20 + 1) + -1, 0 < *(int *)(pcVar20 + 1))) {
        iVar23 = 0;
        pcVar15 = "";
        do {
          iVar1 = iVar5 + iVar23;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar17 = (uint *)(*(long *)(lVar26 + 0x28) + (long)*(int *)(pcVar20 + 5) +
                            (long)iVar1 * 8);
          uVar25 = *(ulong *)(*(long *)(lVar26 + 0x20) + (ulong)*puVar17 * 8);
          if (uVar25 == 0x12e305a941) {
            uVar14 = puVar17[1];
            if ((int)uVar14 < 0) goto LAB_710337805c;
            pcVar15 = pcVar20 + (int)uVar14;
            break;
          }
          iVar3 = iVar1 + -1;
          if (uVar25 < 0x12e305a942) {
            iVar23 = iVar1 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
        } while (iVar23 <= iVar5);
      }
      else {
LAB_710337805c:
        pcVar15 = "";
      }
      switch(*pcVar15) {
      case '\x01':
      case '\x03':
        cVar13 = pcVar15[1];
        break;
      case '\x02':
        cVar13 = pcVar15[1];
        break;
      case '\x04':
        cVar13 = (char)*(undefined2 *)(pcVar15 + 1);
        break;
      case '\x05':
        cVar13 = (char)*(undefined2 *)(pcVar15 + 1);
        break;
      case '\x06':
      case '\a':
        cVar13 = (char)*(undefined4 *)(pcVar15 + 1);
        break;
      default:
        cVar13 = -1;
      }
      *(char *)(*DAT_710593b8d8 + 0x6c) = cVar13;
    }
  }
  lVar26 = (long)(int)*(uint *)((long)param_1 + 0xc);
  if (3 < *(uint *)((long)param_1 + 0xc)) goto LAB_71033789fc;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x68,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar8 = extraout_x1;
  if (puVar6 == (undefined8 *)0x0) {
    local_70 = (long ********)((ulong)local_70 & 0xffffffff00000000);
    local_a0 = (long ********)&DAT_00000068;
    param_3 = (undefined **)&local_a0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
    puVar6 = (undefined8 *)
             FUN_710392e290(0x10,0x68,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar8 = extraout_x1_00;
  }
  *puVar6 = 6;
  FUN_7103760840(puVar6 + 1,uVar8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103760840(puVar6 + 3,extraout_x1_01,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103760840(puVar6 + 5,extraout_x1_02,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103760840(puVar6 + 7,extraout_x1_03,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103760840(puVar6 + 9,extraout_x1_04,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103760840(puVar6 + 0xb,extraout_x1_05,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar28 = param_1[8];
  param_1[8] = (long)(puVar6 + 1);
  if (lVar28 != 0) {
    lVar16 = *(long *)(lVar28 + -8);
    if (lVar16 != 0) {
      lVar16 = lVar16 << 4;
      uVar8 = extraout_x1_06;
      do {
        FUN_7103760b00((undefined8 *)(lVar28 + lVar16 + -0x10),uVar8,(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
        lVar16 = lVar16 + -0x10;
        uVar8 = extraout_x1_07;
      } while (lVar16 != 0);
    }
    FUN_710392eb40((ulong)(lVar28 + -8));
  }
  lVar28 = *param_1;
  if (((DAT_710532f4d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710532f4d0), iVar5 != 0)) {
    DAT_710532f4a0 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
  }
  plVar27 = (long *)(lVar28 + 0x10);
  plVar24 = (long *)*plVar27;
  plVar7 = plVar27;
  if (plVar24 == (long *)0x0) {
    puVar17 = &DAT_710532f4a0;
  }
  else {
    do {
      bVar4 = (plVar24[4] & 0xfffffffffeU) < 0x2099c474a2;
      if (!bVar4) {
        plVar7 = plVar24;
      }
      plVar24 = (long *)plVar24[bVar4];
    } while (plVar24 != (long *)0x0);
    if ((plVar7 == plVar27) || (0x2099c474a2 < (plVar7[4] & 0xffffffffffU))) {
      puVar17 = &DAT_710532f4a0;
    }
    else {
      puVar17 = (uint *)(plVar7 + 5);
    }
  }
  local_78[0] = *puVar17;
  if (local_78[0] != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,local_78[0]);
  }
  uVar25 = 0;
  do {
    puVar17 = &DAT_710532f4a0;
    lVar16 = uVar25 * 0x38 + lVar26 * 0x150;
    lVar28 = param_1[8];
    local_a0 = (long ********)
               (ulong)*(uint *)(&PTR_s_nintendo64_7105185978 + lVar26 * 0x2a + uVar25 * 7 + 1);
    local_98 = *(byte **)((long)&PTR_s_nintendo64_7105185978 + lVar16 + 0xc);
    local_90 = *(undefined4 *)((long)&PTR_s_nintendo64_7105185978 + lVar16 + 0x14);
    local_8c = (&PTR_s_nintendo64_7105185978)[lVar26 * 0x2a + uVar25 * 7 + 3];
    local_80 = *(undefined2 *)(&PTR_s_nintendo64_7105185978 + lVar26 * 0x2a + uVar25 * 7 + 5);
    local_84 = *(undefined4 *)(&PTR_s_nintendo64_7105185978 + lVar26 * 0x2a + uVar25 * 7 + 4);
    uVar14 = *(uint *)((long)&PTR_s_nintendo64_7105185978 + lVar16 + 0x24);
    if (uVar14 == 0) {
LAB_710337834c:
      local_a8[0] = 0xffffff;
    }
    else {
      if (3 < uVar14) goto LAB_71033789fc;
      uVar33 = *(ulong *)(&DAT_7104471240 + (long)(int)uVar14 * 8) & 0xffffffffff;
      if (uVar33 == 0) goto LAB_710337834c;
      lVar16 = *param_1;
      if (((DAT_710532f4d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710532f4d0), iVar5 != 0))
      {
        DAT_710532f4a0 = 0xffffff;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_710532f4d0);
        lVar21 = *(long *)(lVar16 + 0x10);
      }
      else {
        lVar21 = *(long *)(lVar16 + 0x10);
      }
      puVar22 = puVar17;
      if (lVar21 != 0) {
        lVar18 = lVar16 + 0x10;
        do {
          bVar4 = (*(ulong *)(lVar21 + 0x20) & 0xffffffffff) < uVar33;
          if (!bVar4) {
            lVar18 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)bVar4 * 8);
        } while (lVar21 != 0);
        if ((lVar18 != lVar16 + 0x10) && ((*(ulong *)(lVar18 + 0x20) & 0xffffffffff) <= uVar33)) {
          puVar22 = (uint *)(lVar18 + 0x28);
        }
      }
      local_a8[0] = *puVar22;
      if (local_a8[0] != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,local_a8[0]);
      }
    }
    lVar28 = lVar28 + uVar25 * 0x10;
    if ((*(ulong *)(&DAT_71051859a8 + lVar26 * 0x150 + uVar25 * 0x38) & 0xffffffffff) == 0) {
      uVar14 = 0xffffff;
      local_b0[0] = 0xffffff;
    }
    else {
      lVar16 = *param_1;
      if (((DAT_710532f4d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710532f4d0), iVar5 != 0))
      {
        DAT_710532f4a0 = 0xffffff;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_710532f4d0);
      }
      uVar33 = *(ulong *)(&DAT_71051859a8 + lVar26 * 0x150 + uVar25 * 0x38) & 0xffffffffff;
      if (uVar33 != 0) {
        plVar27 = (long *)(lVar16 + 0x10);
        plVar24 = (long *)*plVar27;
        plVar7 = plVar27;
        if (plVar24 != (long *)0x0) {
          do {
            bVar4 = (plVar24[4] & 0xffffffffffU) < uVar33;
            if (!bVar4) {
              plVar7 = plVar24;
            }
            plVar24 = (long *)plVar24[bVar4];
          } while (plVar24 != (long *)0x0);
          if ((plVar7 != plVar27) && ((plVar7[4] & 0xffffffffffU) <= uVar33)) {
            puVar17 = (uint *)(plVar7 + 5);
          }
        }
      }
      uVar2 = *puVar17;
      uVar14 = 0xffffff;
      local_b0[0] = uVar2;
      if (uVar2 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar2);
        uVar14 = uVar2;
      }
    }
    ppppppppplVar9 = &local_a0;
    ppppbVar10 = (byte ****)local_b0;
    pppplVar11 = (long ****)local_a8;
    pppplVar12 = (long ****)local_78;
    FUN_7103760e20(*(long **)(lVar28 + 8),
                   (long)(&PTR_s_nintendo64_7105185978)[lVar26 * 0x2a + uVar25 * 7],
                   (long ****)ppppppppplVar9,ppppbVar10,pppplVar11,pppplVar12,param_7,param_8);
    puVar6 = (undefined8 *)*DAT_710593b8d8;
    plVar7 = (long *)*puVar6;
    plVar24 = (long *)puVar6[1];
    if (plVar7 == plVar24) {
LAB_71033784f4:
      if ((long *)puVar6[2] == plVar24) {
        ppppppppplVar31 = (long *********)((long)plVar24 - (long)plVar7);
        uVar33 = ((long)ppppppppplVar31 >> 3) + 1;
        if (uVar33 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = (long)puVar6[2] - (long)plVar7;
        if ((ulong)(lVar16 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar16 >> 2;
          if (uVar33 <= uVar19) {
            uVar33 = uVar19;
          }
          if (uVar33 != 0) {
            if (uVar33 >> 0x3d == 0) goto LAB_710337855c;
            goto LAB_71033789fc;
          }
LAB_71033785bc:
          pvVar30 = (void *)0x0;
        }
        else {
          uVar33 = 0x1fffffffffffffff;
LAB_710337855c:
          pppppppplVar29 = (long ********)(uVar33 * 8);
          if (pppppppplVar29 == (long ********)0x0) {
            pppppppplVar29 = (long ********)0x1;
          }
          pvVar30 = (void *)FUN_710392e290(0x10,pppppppplVar29,(long ****)ppppppppplVar9,ppppbVar10,
                                           pppplVar11,pppplVar12,param_7,param_8);
          if (pvVar30 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_68._0_4_ = 0;
              ppppppppplVar9 = &local_70;
              local_70 = pppppppplVar29;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
              if (((uVar19 & 1) != 0) &&
                 (pvVar30 = (void *)FUN_710392e290(0x10,pppppppplVar29,(long ****)ppppppppplVar9,
                                                   ppppbVar10,pppplVar11,pppplVar12,param_7,param_8)
                 , pvVar30 != (void *)0x0)) goto LAB_71033785c0;
            }
            goto LAB_71033785bc;
          }
        }
LAB_71033785c0:
        plVar24 = (long *)((long)pvVar30 + ((long)ppppppppplVar31 >> 3) * 8);
        *plVar24 = lVar28;
        if (0 < (long)ppppppppplVar31) {
          memcpy(pvVar30,plVar7,(size_t)ppppppppplVar31);
          ppppppppplVar9 = ppppppppplVar31;
        }
        *puVar6 = pvVar30;
        puVar6[1] = plVar24 + 1;
        puVar6[2] = (void *)((long)pvVar30 + uVar33 * 8);
        if (plVar7 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar7);
        }
      }
      else {
        *plVar24 = lVar28;
        puVar6[1] = puVar6[1] + 8;
      }
    }
    else {
      lVar16 = *plVar7;
      plVar27 = plVar7;
      while (lVar16 != lVar28) {
        plVar27 = (long *)((long)plVar27 + 8);
        if (plVar24 == plVar27) goto LAB_71033784f4;
        lVar16 = *plVar27;
      }
      if (plVar27 == plVar24) goto LAB_71033784f4;
    }
    if (uVar14 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar14,ppppppppplVar9,ppppbVar10,pppplVar11,pppplVar12,param_7,
                     param_8);
      local_b0[0] = 0xffffff;
    }
    if (local_a8[0] != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,local_a8[0],ppppppppplVar9,ppppbVar10,pppplVar11,pppplVar12,
                     param_7,param_8);
      local_a8[0] = 0xffffff;
    }
    uVar25 = uVar25 + 1;
  } while (uVar25 < 6);
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar9,ppppbVar10,pppplVar11,pppplVar12,
                          param_7,param_8);
  uVar8 = extraout_x1_08;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ********)((ulong)local_70 & 0xffffffff00000000);
      local_a0 = (long ********)&DAT_00000010;
      ppppppppplVar9 = &local_a0;
      auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar8 = auVar34._8_8_;
      if (((auVar34._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar9,ppppbVar10,pppplVar11,
                                  pppplVar12,param_7,param_8), uVar8 = extraout_x1_09,
         puVar6 != (undefined8 *)0x0)) goto LAB_71033786bc;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71033786bc:
  FUN_7103760840(puVar6,uVar8,(long ****)ppppppppplVar9,ppppbVar10,pppplVar11,pppplVar12,param_7,
                 param_8);
  plVar7 = (long *)param_1[9];
  param_1[9] = (long)puVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
    puVar6 = (undefined8 *)param_1[9];
  }
  local_a0 = (long ********)(ulong)DAT_7105185948;
  local_98 = DAT_710518594c;
  local_90 = DAT_7105185954;
  local_8c = DAT_7105185958;
  local_84 = DAT_7105185960;
  local_80 = DAT_7105185968;
  local_70 = (long ********)CONCAT44(local_70._4_4_,0xffffff);
  local_68._0_4_ = 0xffffff;
  local_a8[0] = 0xffffff;
  FUN_7103760e20((long *)puVar6[1],(long)PTR_s_RubyFont_7105185940,(long ****)&local_a0,
                 (byte ****)&local_70,&local_68,(long ****)local_a8,param_7,param_8);
  lVar26 = *(long *)(param_1[9] + 8);
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x30,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x31,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x32,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x33,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x34,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x35,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x36,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x37,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x38,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  FUN_710007f500(*(long *)(lVar26 + 0x10),0x39,*(uint *)(lVar26 + 0x18),
                 (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
  uVar14 = 0x41;
  do {
    FUN_710007f500(*(long *)(lVar26 + 0x10),uVar14,*(uint *)(lVar26 + 0x18),
                   (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0x5b);
  uVar14 = 0x61;
  do {
    FUN_710007f500(*(long *)(lVar26 + 0x10),uVar14,*(uint *)(lVar26 + 0x18),
                   (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0x7b);
  iVar5 = 0;
  do {
    FUN_710007f500(*(long *)(lVar26 + 0x10),iVar5 + 0x3040,*(uint *)(lVar26 + 0x18),
                   (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x60);
  iVar5 = 0;
  do {
    ppppppppplVar9 = (long *********)(ulong)*(uint *)(lVar26 + 0x18);
    uVar25 = (ulong)*(byte *)(lVar26 + 0x30);
    pppplVar11 = (long ****)0x0;
    ppppbVar10 = (byte ****)(ulong)*(ushort *)(lVar26 + 0x32);
    FUN_710007f500(*(long *)(lVar26 + 0x10),iVar5 + 0x30a0,*(uint *)(lVar26 + 0x18),
                   (uint)*(ushort *)(lVar26 + 0x32),0,*(byte *)(lVar26 + 0x30));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x60);
  lVar16 = *(long *)(lVar26 + 0x1f8);
  lVar28 = *(long *)(lVar16 + 0x1f30);
  if (lVar28 != 0) {
    if (0 < *(int *)(lVar28 + 0x10)) {
      FUN_710354ccd0(*(int *)((&DAT_7105333f58)[*(uint *)(lVar28 + 0x14)] + 0x10),
                     (int *)(lVar28 + 0x10),(long ****)ppppppppplVar9,ppppbVar10,pppplVar11,uVar25,
                     param_7,param_8);
    }
    *(undefined8 *)(lVar16 + 0x1f30) = 0;
  }
  FUN_710007f870(lVar16 + 0x68);
  FUN_71000803c0(lVar16 + 0x68);
  if (*(int *)(lVar16 + 0x1c34) != 0) {
    *(undefined4 *)(lVar16 + 0x1c34) = 0;
  }
  *(undefined1 *)(lVar26 + 0x518) = 0;
  plVar7 = DAT_710593b8d8;
  lVar26 = param_1[9];
  *(long *)(*DAT_710593b8d8 + 0x18) = lVar26;
  puVar6 = (undefined8 *)*plVar7;
  uVar8 = extraout_x1_10;
  if (lVar26 == 0) {
    puVar6[7] = 0;
    goto LAB_7103378aac;
  }
  plVar24 = (long *)puVar6[1];
  if (plVar24 == (long *)puVar6[2]) {
    pvVar30 = (void *)*puVar6;
    ppppppppplVar31 = (long *********)((long)plVar24 - (long)pvVar30);
    uVar33 = ((long)ppppppppplVar31 >> 3) + 1;
    if (uVar33 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar28 = (long)puVar6[2] - (long)pvVar30;
    if ((ulong)(lVar28 >> 3) < 0xfffffffffffffff) {
      uVar19 = lVar28 >> 2;
      if (uVar33 <= uVar19) {
        uVar33 = uVar19;
      }
      if (uVar33 != 0) {
        if (uVar33 >> 0x3d != 0) {
LAB_71033789fc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7103378a04;
      }
LAB_7103378a64:
      __dest = (void *)0x0;
    }
    else {
      uVar33 = 0x1fffffffffffffff;
LAB_7103378a04:
      pppppppplVar29 = (long ********)(uVar33 * 8);
      if (pppppppplVar29 == (long ********)0x0) {
        pppppppplVar29 = (long ********)0x1;
      }
      __dest = (void *)FUN_710392e290(0x10,pppppppplVar29,(long ****)ppppppppplVar9,ppppbVar10,
                                      pppplVar11,uVar25,param_7,param_8);
      uVar8 = extraout_x1_11;
      if (__dest == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ********)((ulong)local_70 & 0xffffffff00000000);
          ppppppppplVar9 = &local_a0;
          local_a0 = pppppppplVar29;
          auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          uVar8 = auVar34._8_8_;
          if (((auVar34._0_8_ & 1) != 0) &&
             (__dest = (void *)FUN_710392e290(0x10,pppppppplVar29,(long ****)ppppppppplVar9,
                                              ppppbVar10,pppplVar11,uVar25,param_7,param_8),
             uVar8 = extraout_x1_12, __dest != (void *)0x0)) goto LAB_7103378a68;
        }
        goto LAB_7103378a64;
      }
    }
LAB_7103378a68:
    plVar24 = (long *)((long)__dest + ((long)ppppppppplVar31 >> 3) * 8);
    *plVar24 = lVar26;
    if (0 < (long)ppppppppplVar31) {
      memcpy(__dest,pvVar30,(size_t)ppppppppplVar31);
      uVar8 = extraout_x1_13;
      ppppppppplVar9 = ppppppppplVar31;
    }
    *puVar6 = __dest;
    puVar6[1] = plVar24 + 1;
    puVar6[2] = (void *)((long)__dest + uVar33 * 8);
    if (pvVar30 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar30);
      uVar8 = extraout_x1_14;
    }
  }
  else {
    *plVar24 = lVar26;
    puVar6[1] = puVar6[1] + 8;
  }
  *(undefined8 *)(*plVar7 + 0x38) = *(undefined8 *)(lVar26 + 8);
LAB_7103378aac:
  FUN_710323b9e0(*param_1,uVar8,ppppppppplVar9,ppppbVar10,pppplVar11,uVar25,param_7,param_8);
  *(undefined1 *)(param_1 + 10) = 1;
  if (local_78[0] != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,local_78[0],ppppppppplVar9,ppppbVar10,pppplVar11,uVar25,param_7,
                   param_8);
  }
  return;
LAB_7103377c08:
  if ((int)puVar17[1] < 0) goto joined_r0x007103377c30;
  pbVar32 = (byte *)(pcVar15 + (int)puVar17[1]);
joined_r0x007103377c18:
  if (3 < uVar14) goto LAB_71033789fc;
  goto LAB_7103377c34;
}

