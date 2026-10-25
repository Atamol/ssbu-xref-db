// addr:      71023907b0
// offset:    0x23907b0
// name:      FUN_71023907b0
// mangled:   
// signature: undefined __cdecl FUN_71023907b0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023907b0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  long ********pppppppplVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
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
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  long *********ppppppppplVar11;
  undefined *puVar12;
  long ****pppplVar13;
  undefined **ppuVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  ulong *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  long *plVar27;
  long ********pppppppplVar28;
  long *plVar29;
  undefined8 *puVar30;
  void *pvVar31;
  ulong uVar32;
  long *********ppppppppplVar33;
  ulong uVar34;
  void *pvVar35;
  undefined1 auVar36 [16];
  undefined8 local_180;
  long ********local_178;
  undefined8 uStack_170;
  long ***local_80 [2];
  undefined4 local_64;
  
  plVar26 = *(long **)(DAT_7105325cc0 + 8);
  plVar9 = plVar26 + 1;
  FUN_7101cd2c30((undefined8 *)*plVar9);
  plVar26[2] = 0;
  *plVar26 = (long)plVar9;
  *plVar9 = 0;
  plVar7 = plVar26 + 4;
  FUN_7101cd2c30((undefined8 *)*plVar7);
  plVar26[5] = 0;
  plVar26[3] = (long)plVar7;
  *plVar7 = 0;
  puVar17 = (ulong *)plVar26[7];
  lVar18 = plVar26[8];
  lVar21 = lVar18 - (long)puVar17;
  if (lVar21 != 0) {
    uVar24 = plVar26[10];
    plVar29 = (long *)((long)puVar17 + (uVar24 >> 6 & 0x3fffffffffffff8));
    lVar23 = *plVar29 + (uVar24 & 0x1ff) * 8;
    while (*(long *)((long)puVar17 + (plVar26[0xb] + uVar24 >> 6 & 0x3fffffffffffff8)) +
           (plVar26[0xb] + uVar24 & 0x1ff) * 8 != lVar23) {
      lVar23 = lVar23 + 8;
      if (lVar23 - *plVar29 == 0x1000) {
        plVar29 = plVar29 + 1;
        lVar23 = *plVar29;
      }
    }
  }
  plVar26[0xb] = 0;
  while (uVar24 = lVar21 >> 3, 2 < uVar24) {
    if (*puVar17 != 0) {
      FUN_710392eb40(*puVar17);
      puVar17 = (ulong *)plVar26[7];
      lVar18 = plVar26[8];
    }
    puVar17 = puVar17 + 1;
    plVar26[7] = (long)puVar17;
    lVar21 = lVar18 - (long)puVar17;
  }
  if (uVar24 == 1) {
    lVar18 = 0x100;
LAB_71023908e0:
    plVar26[10] = lVar18;
  }
  else if (uVar24 == 2) {
    lVar18 = 0x200;
    goto LAB_71023908e0;
  }
  local_178 = (long ********)0x0;
  uStack_170 = 0;
  local_180 = (undefined **)0x0;
  FUN_71017c6990((long *)**(undefined8 **)(*DAT_7105314510 + 0x88),&local_180,param_3,param_4,
                 param_5,param_6,param_7,param_8);
  pppppppplVar2 = local_178;
  if ((long ********)local_180 != local_178) {
    pppppppplVar28 = (long ********)local_180;
    do {
      if (*(char *)((long)pppppppplVar28 + 0x14) != '\0') {
        plVar29 = plVar9;
        plVar19 = plVar9;
        if ((long *)*plVar9 != (long *)0x0) {
          plVar5 = (long *)*plVar9;
          plVar19 = plVar26 + 1;
          do {
            while (plVar29 = plVar5, pppppppplVar28[3] < (long *******)plVar29[4]) {
              plVar5 = (long *)*plVar29;
              plVar19 = plVar29;
              if ((long *)*plVar29 == (long *)0x0) {
                lVar18 = *plVar29;
                goto joined_r0x007102390a2c;
              }
            }
            if (pppppppplVar28[3] <= (long *******)plVar29[4]) break;
            plVar19 = plVar29 + 1;
            plVar5 = (long *)*plVar19;
          } while ((long *)*plVar19 != (long *)0x0);
        }
        lVar18 = *plVar19;
joined_r0x007102390a2c:
        if (lVar18 == 0) {
          plVar5 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8)
          ;
          if (plVar5 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              local_80[0] = (long ***)&DAT_00000028;
              param_3 = local_80;
              uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar24 & 1) != 0) &&
                 (plVar5 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,
                                                  param_8), plVar5 != (long *)0x0))
              goto LAB_71023909e4;
            }
            plVar5 = (long *)0x0;
          }
LAB_71023909e4:
          plVar5[4] = (long)pppppppplVar28[3];
          plVar5[2] = (long)plVar29;
          *plVar5 = 0;
          plVar5[1] = 0;
          *plVar19 = (long)plVar5;
          if (*(long *)*plVar26 != 0) {
            *plVar26 = *(long *)*plVar26;
            plVar5 = (long *)*plVar19;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)plVar26[1],plVar5)
          ;
          plVar26[2] = plVar26[2] + 1;
        }
      }
      pppppppplVar28 = pppppppplVar28 + 0x36;
    } while (pppppppplVar28 != pppppppplVar2);
  }
  if ((long ********)local_180 != (long ********)0x0) {
    local_178 = (long ********)local_180;
    FUN_710392eb40((ulong)local_180);
  }
  plVar29 = *(long **)(*DAT_7105314510 + 0x298);
  FUN_71017ce520(*plVar29);
  uVar25 = 0;
  while( true ) {
    nn::os::SleepThread(10000000);
    if (*(long *)(*plVar29 + 0x60) == 0) break;
    if (((*(int *)(*(long *)(*plVar29 + 0x60) + 0x448) == 0) &&
        (*(long *)(*DAT_710593b218 + 0x50) == 0)) || (uVar25 = uVar25 + 1, 999 < uVar25)) break;
  }
  plVar19 = (long *)*plVar29;
  lVar18 = plVar19[3];
  lVar21 = plVar19[4];
  uVar24 = extraout_x1;
  if (lVar18 == lVar21) {
    if (*plVar19 != plVar19[1]) {
      lVar23 = 0x32198;
      lVar22 = plVar19[1] - *plVar19;
      goto LAB_7102390af0;
    }
  }
  else {
    lVar22 = lVar21 - lVar18;
    lVar23 = 0x198;
LAB_7102390af0:
    uVar32 = 0;
    if (lVar23 != 0) {
      uVar32 = lVar22 / lVar23;
    }
    if (0 < (int)uVar32) {
      uVar34 = 0;
      if (lVar18 != lVar21) goto LAB_7102390b44;
LAB_7102390b68:
      lVar18 = *plVar19;
      if (lVar18 == plVar19[1]) goto LAB_7102390cb0;
      if ((ulong)((plVar19[1] - lVar18) / 0x32198) <= uVar34) goto LAB_7102390cb0;
      uVar25 = *(uint *)(lVar18 + uVar34 * 0x32198);
      uVar24 = (ulong)uVar25;
      if (uVar25 == 0) goto LAB_7102390cb0;
      do {
        param_3 = (long ****)&local_180;
        uVar6 = FUN_71017cee10(plVar29,(uint)uVar24,param_3);
        uVar24 = extraout_x1_00;
        if ((local_180._4_1_ != '\0') && ((uVar6 & 1) != 0)) {
          plVar27 = (long *)*plVar9;
          plVar5 = plVar9;
          plVar19 = plVar9;
          while (plVar27 != (long *)0x0) {
            while (plVar19 = plVar27, local_178 < (long ********)plVar19[4]) {
              plVar27 = (long *)*plVar19;
              plVar5 = plVar19;
              if ((long *)*plVar19 == (long *)0x0) {
                lVar18 = *plVar19;
                goto joined_r0x007102390c04;
              }
            }
            if (local_178 <= (long ********)plVar19[4]) break;
            plVar5 = plVar19 + 1;
            plVar27 = (long *)*plVar5;
          }
          lVar18 = *plVar5;
joined_r0x007102390c04:
          if (lVar18 == 0) {
            plVar27 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,
                                             param_8);
            if (plVar27 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_64 = 0;
                local_80[0] = (long ***)&DAT_00000028;
                param_3 = local_80;
                uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                if (((uVar24 & 1) != 0) &&
                   (plVar27 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,
                                                     param_7,param_8), plVar27 != (long *)0x0))
                goto LAB_7102390c64;
              }
              plVar27 = (long *)0x0;
            }
LAB_7102390c64:
            plVar27[4] = (long)local_178;
            plVar27[2] = (long)plVar19;
            *plVar27 = 0;
            plVar27[1] = 0;
            *plVar5 = (long)plVar27;
            if (*(long *)*plVar26 != 0) {
              *plVar26 = *(long *)*plVar26;
              plVar27 = (long *)*plVar5;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                      ((long *)plVar26[1],plVar27);
            plVar26[2] = plVar26[2] + 1;
            uVar24 = extraout_x1_01;
          }
        }
LAB_7102390cb0:
        while( true ) {
          uVar34 = uVar34 + 1;
          if (uVar34 == (uVar32 & 0xffffffff)) goto LAB_7102390cbc;
          plVar19 = (long *)*plVar29;
          lVar18 = plVar19[3];
          lVar21 = plVar19[4];
          if (lVar18 == lVar21) goto LAB_7102390b68;
LAB_7102390b44:
          uVar6 = (lVar21 - lVar18 >> 3) * -0x505050505050505;
          if (uVar6 < uVar34 || uVar6 - uVar34 == 0) goto LAB_7102390b68;
          uVar25 = *(uint *)(lVar18 + uVar34 * 0x198);
          uVar24 = (ulong)uVar25;
          if (uVar25 != 0) break;
          uVar24 = 0;
        }
      } while( true );
    }
  }
LAB_7102390cbc:
  puVar30 = *(undefined8 **)(*DAT_7105314510 + 0x268);
  lVar18 = 0;
  do {
    uVar32 = *(ulong *)(*(long *)*puVar30 + lVar18 * 8);
    if (uVar32 != 0) {
      plVar19 = (long *)*plVar7;
      plVar9 = plVar7;
      plVar29 = plVar7;
      while (plVar19 != (long *)0x0) {
        while (plVar29 = plVar19, uVar32 < (ulong)plVar29[4]) {
          plVar9 = plVar29;
          plVar19 = (long *)*plVar29;
          if ((long *)*plVar29 == (long *)0x0) {
            lVar21 = *plVar29;
            goto joined_r0x007102390d48;
          }
        }
        if (uVar32 <= (ulong)plVar29[4]) break;
        plVar9 = plVar29 + 1;
        plVar19 = (long *)*plVar9;
      }
      lVar21 = *plVar9;
joined_r0x007102390d48:
      if (lVar21 == 0) {
        plVar19 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
        if (plVar19 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
            local_180 = (undefined **)&DAT_00000028;
            param_3 = (long ****)&local_180;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
            if (((uVar24 & 1) != 0) &&
               (plVar19 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,
                                                 param_8), plVar19 != (long *)0x0))
            goto LAB_7102390da0;
          }
          plVar19 = (long *)0x0;
        }
LAB_7102390da0:
        plVar19[4] = uVar32;
        *plVar19 = 0;
        plVar19[1] = 0;
        plVar19[2] = (long)plVar29;
        *plVar9 = (long)plVar19;
        if (*(long *)plVar26[3] != 0) {
          plVar26[3] = *(long *)plVar26[3];
          plVar19 = (long *)*plVar9;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)plVar26[4],plVar19);
        plVar26[5] = plVar26[5] + 1;
        uVar24 = extraout_x1_02;
      }
      lVar21 = plVar26[7];
      uVar34 = 0;
      if (plVar26[8] - lVar21 != 0) {
        uVar34 = (plVar26[8] - lVar21) * 0x40 - 1;
      }
      uVar6 = plVar26[0xb] + plVar26[10];
      if (uVar34 == uVar6) {
        FUN_710135ac80((ulong *)(plVar26 + 6),uVar24,param_3,param_4,param_5,param_6,param_7,param_8
                      );
        lVar21 = plVar26[7];
        uVar6 = plVar26[10] + plVar26[0xb];
        uVar24 = extraout_x1_03;
      }
      *(ulong *)(*(long *)(lVar21 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) =
           uVar32;
      plVar26[0xb] = plVar26[0xb] + 1;
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 100);
  lVar18 = *(long *)(DAT_7105325cc8 + 8);
  if (*(int *)(lVar18 + 0xb8) == 0) {
    if (0x12 < *(uint *)(lVar18 + 0xb4)) goto LAB_7102391fe8;
    *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar18 + 0xb4) * 4 + 0x68) = 1;
  }
  lVar18 = *(long *)(DAT_7105324fd8 + 8);
  if (*(int *)(lVar18 + 200) == 0) {
    if (0x12 < *(uint *)(lVar18 + 0xc4)) goto LAB_7102391fe8;
    *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar18 + 0xc4) * 4 + 0x78) = 1;
  }
  lVar18 = *(long *)(DAT_7105325cb8 + 8);
  if (*(int *)(lVar18 + 0xa8) == 0) {
    if (0x12 < *(uint *)(lVar18 + 0xa4)) goto LAB_7102391fe8;
    *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar18 + 0xa4) * 4 + 0x58) = 1;
  }
  lVar18 = *(long *)(DAT_7105324fa0 + 8);
  if (*(int *)(lVar18 + 0xa8) == 0) {
    if (0x12 < *(uint *)(lVar18 + 0xa4)) goto LAB_7102391fe8;
    *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar18 + 0xa4) * 4 + 0x58) = 1;
  }
  lVar18 = DAT_7105325cb0;
  lVar23 = *(long *)(DAT_7105325cb0 + 8);
  lVar21 = *(long *)(lVar23 + 0xe8);
  FUN_710323beb0(lVar21,(ulong *)&DAT_7104545360,(long)*(int *)(lVar21 + 0x70),
                 (ulong)*(uint *)(lVar21 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar21 = *(long *)(lVar23 + 0xe8);
  FUN_710323beb0(lVar21,(ulong *)&DAT_7104545368,(long)*(int *)(lVar21 + 0x70),
                 (ulong)*(uint *)(lVar21 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar21 = *(long *)(lVar23 + 0xe8);
  ppppppppplVar11 = (long *********)(long)*(int *)(lVar21 + 0x70);
  ppppbVar15 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
  pppplVar16 = (long ****)0x0;
  FUN_710323beb0(lVar21,(ulong *)&DAT_7104545370,(long)ppppppppplVar11,(ulong)ppppbVar15,
                 (long ****)0x0,param_6,param_7,param_8);
  local_180 = (undefined **)FUN_710323af70(0x7104545c50,0);
  uVar20 = extraout_x1_04;
  if (((ulong)local_180 & 0xffffffffff) != 0) {
    lVar21 = *(long *)(lVar23 + 0xe8);
    ppppppppplVar11 = (long *********)(long)*(int *)(lVar21 + 0x70);
    ppppbVar15 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
    FUN_710323c4e0(lVar21,&local_180,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,param_8);
    uVar20 = extraout_x1_05;
  }
  lVar21 = *(long *)(*(long *)(lVar18 + 8) + 0xe8);
  while (uVar24 = FUN_710323cb80(lVar21,uVar20,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7
                                 ,param_8), (uVar24 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar20 = extraout_x1_06;
  }
  plVar26 = *(long **)(lVar18 + 8);
  puVar30 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                           param_7,param_8);
  if (puVar30 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_00000088;
      ppppppppplVar11 = (long *********)&local_180;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar24 & 1) != 0) &&
         (puVar30 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,
                                   param_6,param_7,param_8), puVar30 != (undefined8 *)0x0))
      goto LAB_7102391014;
    }
    puVar30 = (undefined8 *)0x0;
  }
LAB_7102391014:
  *puVar30 = &PTR_FUN_71050ae300;
  puVar30[1] = 0;
  puVar30[0xc] = 0;
  puVar30[0xd] = 0x1ffffffff;
  puVar30[2] = 0;
  puVar30[3] = 0;
  *(undefined1 *)(puVar30 + 0xb) = 0;
  puVar30[0xf] = plVar26 + 0x1d;
  *(undefined1 *)(puVar30 + 0xe) = 1;
  puVar30[9] = 0;
  puVar30[10] = 0;
  plVar7 = (long *)FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,
                                  param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_00000140;
      ppppppppplVar11 = (long *********)&local_180;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar24 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar11,ppppbVar15,
                                          pppplVar16,param_6,param_7,param_8), plVar7 != (long *)0x0
         )) goto LAB_7102391098;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102391098:
  *plVar7 = (long)plVar7;
  plVar7[4] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined4 *)(plVar7 + 0x1c) = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0xe4) = 0;
  plVar7[5] = 0;
  plVar7[0x1d] = (long)(plVar26 + 0x1d);
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0xffffffff;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                          param_8);
  uVar20 = extraout_x1_07;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_00000008;
      ppppppppplVar11 = (long *********)&local_180;
      auVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      uVar20 = auVar36._8_8_;
      if (((auVar36._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                                  param_7,param_8), uVar20 = extraout_x1_08,
         puVar8 != (undefined8 *)0x0)) goto LAB_7102391144;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102391144:
  FUN_7103773200(puVar8,uVar20,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  plVar7[0x1e] = (long)puVar8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                          param_8);
  uVar20 = extraout_x1_09;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_00000008;
      ppppppppplVar11 = (long *********)&local_180;
      auVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      uVar20 = auVar36._8_8_;
      if (((auVar36._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                                  param_7,param_8), uVar20 = extraout_x1_10,
         puVar8 != (undefined8 *)0x0)) goto LAB_71023911a8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71023911a8:
  FUN_7103773200(puVar8,uVar20,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  plVar7[0x1f] = (long)puVar8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                          param_8);
  uVar20 = extraout_x1_11;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_00000008;
      ppppppppplVar11 = (long *********)&local_180;
      auVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      uVar20 = auVar36._8_8_;
      if (((auVar36._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                                  param_7,param_8), uVar20 = extraout_x1_12,
         puVar8 != (undefined8 *)0x0)) goto LAB_710239120c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710239120c:
  FUN_7103773200(puVar8,uVar20,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  *(undefined2 *)(plVar7 + 0x21) = 0xffff;
  plVar7[5] = (long)FUN_7101ccd330;
  plVar7[6] = 0;
  plVar7[7] = (long)FUN_7101ccd330;
  plVar7[8] = 0;
  plVar7[9] = (long)FUN_7101ccd340;
  plVar7[10] = 0;
  plVar7[0x20] = (long)puVar8;
  plVar7[0xd] = (long)FUN_7101ccd6e0;
  plVar7[0xe] = 0;
  plVar7[0xf] = (long)FUN_7101ccd6f0;
  plVar7[0x10] = 0;
  plVar7[0x26] = 0;
  plVar7[0x27] = 0;
  plVar7[0x24] = 0;
  plVar7[0x25] = 0;
  plVar7[0x22] = 0;
  plVar7[0x23] = 0;
  plVar7[0xb] = (long)FUN_7101ccd480;
  plVar7[0xc] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *(undefined8 *)((long)plVar7 + 0xcc) = 0;
  *(undefined8 *)((long)plVar7 + 0xc4) = 0;
  *(undefined8 *)((long)plVar7 + 0xbc) = 0;
  *(undefined8 *)((long)plVar7 + 0xb4) = 0;
  *(undefined8 *)((long)plVar7 + 0xac) = 0;
  *(undefined8 *)((long)plVar7 + 0xa4) = 0;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  *(undefined8 *)((long)plVar7 + 0x94) = 0;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0;
  *(undefined8 *)((long)plVar7 + 0xd4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar7 + 0xdc) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar7 + 0xe4) = 0;
  *(undefined4 *)(plVar7 + 0x11) = 0;
  FUN_7101ccd9f0(plVar7);
  pvVar31 = (void *)plVar7[0x22];
  uVar20 = extraout_x1_13;
  if ((ulong)((plVar7[0x24] - (long)pvVar31 >> 3) * -0x5555555555555555) < 8) {
    ppppppppplVar33 = (long *********)(plVar7[0x23] - (long)pvVar31);
    lVar18 = FUN_710392e290(0x10,0xc0,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                            param_7,param_8);
    uVar20 = extraout_x1_14;
    if (lVar18 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
        local_180 = (undefined **)&DAT_000000c0;
        ppppppppplVar11 = (long *********)&local_180;
        auVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
        uVar20 = auVar36._8_8_;
        if (((auVar36._0_8_ & 1) != 0) &&
           (lVar18 = FUN_710392e290(0x10,0xc0,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,
                                    param_6,param_7,param_8), uVar20 = extraout_x1_15, lVar18 != 0))
        goto LAB_7102391334;
      }
      lVar18 = 0;
    }
LAB_7102391334:
    lVar21 = SUB168(SEXT816((long)ppppppppplVar33) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
    lVar23 = lVar18 + ((long)ppppppppplVar33 >> 3) * 8;
    pvVar35 = (void *)(lVar23 + ((lVar21 >> 2) - (lVar21 >> 0x3f)) * 0x18);
    if (0 < (long)ppppppppplVar33) {
      memcpy(pvVar35,pvVar31,(size_t)ppppppppplVar33);
      uVar20 = extraout_x1_16;
      ppppppppplVar11 = ppppppppplVar33;
    }
    plVar7[0x24] = lVar18 + 0xc0;
    plVar7[0x22] = (long)pvVar35;
    plVar7[0x23] = lVar23;
    if (pvVar31 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar31);
      uVar20 = extraout_x1_17;
    }
  }
  pvVar31 = (void *)plVar7[0x25];
  if ((ulong)(plVar7[0x27] - (long)pvVar31 >> 4) < 2) {
    ppppppppplVar33 = (long *********)(plVar7[0x26] - (long)pvVar31);
    lVar18 = (long)ppppppppplVar33 >> 4;
    pvVar35 = (void *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,
                                     param_6,param_7,param_8);
    uVar20 = extraout_x1_18;
    if (pvVar35 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
        local_180 = (undefined **)&SUB_00000020;
        ppppppppplVar11 = (long *********)&local_180;
        auVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
        uVar20 = auVar36._8_8_;
        if (((auVar36._0_8_ & 1) != 0) &&
           (pvVar35 = (void *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,ppppbVar15,
                                             pppplVar16,param_6,param_7,param_8),
           uVar20 = extraout_x1_19, pvVar35 != (void *)0x0)) goto LAB_710239140c;
      }
      pvVar35 = (void *)0x0;
    }
LAB_710239140c:
    if (0 < (long)ppppppppplVar33) {
      memcpy(pvVar35,pvVar31,(size_t)ppppppppplVar33);
      uVar20 = extraout_x1_20;
      ppppppppplVar11 = ppppppppplVar33;
    }
    plVar7[0x25] = (long)pvVar35;
    plVar7[0x26] = (long)((long)pvVar35 + lVar18 * 0x10);
    plVar7[0x27] = (long)pvVar35 + 0x20;
    if (pvVar31 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar31);
      uVar20 = extraout_x1_21;
    }
  }
  puVar30[0x10] = plVar7;
  puVar30[2] = &DAT_7105333600;
  *(undefined4 *)(puVar30 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar30 + 0x6c) = DAT_7105333664;
  do {
    uVar25 = DAT_7105333650;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar25 & 1) != 0);
  puVar30[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar30;
  FUN_71032caea0((long)puVar30,uVar20,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                 param_7,param_8);
  lVar18 = plVar26[0x1e];
  plVar26[0x1e] = (long)puVar30;
  uVar20 = extraout_x1_22;
  if (lVar18 != 0) {
    FUN_71032cad20(lVar18);
    puVar30 = (undefined8 *)plVar26[0x1e];
    uVar20 = extraout_x1_23;
  }
  plVar7 = (long *)puVar30[0x10];
  lVar18 = *(long *)plVar7[0x1d];
  while (uVar24 = FUN_710323cb80(lVar18,uVar20,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7
                                 ,param_8), (uVar24 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar20 = extraout_x1_24;
  }
  puVar12 = &DAT_7104545360;
  ppppbVar15 = (byte ****)0x0;
  FUN_71032cbf30(plVar7 + 0x1e,*(long *)plVar7[0x1d],(ulong *)&DAT_7104545360,(byte ****)0x0,
                 pppplVar16,param_6,param_7,param_8);
  FUN_7103776910(&local_180,*(long *)plVar7[0x1e] + 8,(long ****)"set_rep_pic",puVar12,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  ppppppppplVar11 = (long *********)0x0;
  plVar9 = FUN_7103240d30((long *)plVar7[0x1d],0x7104545c50,(long ****)0x0,ppppbVar15,pppplVar16,
                          param_6,param_7,param_8);
  pppppppplVar2 = local_178;
  FUN_7103778b80((long)local_178,(long)plVar9,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  local_180 = &PTR_FUN_710523d9a8;
  local_178 = (long ********)0x0;
  if (pppppppplVar2 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar2);
  }
  FUN_71032cbf30(plVar7 + 0x1f,*(long *)plVar7[0x1d],(ulong *)&DAT_7104545368,(byte ****)0x0,
                 pppplVar16,param_6,param_7,param_8);
  FUN_7103778630(0,*(long *)(*(long *)plVar7[0x1f] + 0x10),0x710437cd11);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)plVar7[0x1f] + 0x10),0x71043bedf8);
  ppppppppplVar11 = (long *********)&DAT_7104545370;
  ppppbVar15 = (byte ****)0x0;
  FUN_71032cbf30(plVar7 + 0x20,*(long *)plVar7[0x1d],(ulong *)&DAT_7104545370,(byte ****)0x0,
                 pppplVar16,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)plVar7[0x20] + 0x10),0x71042812a4);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)plVar7[0x20] + 0x10),0x710438d2ec);
  FUN_7103778760(*(long *)(*(long *)plVar7[0x20] + 0x10),0x71043bedfe);
  FUN_7103778760(*(long *)(*(long *)plVar7[0x20] + 0x10),0x710443386d);
  FUN_710323b9e0(*(long *)plVar7[0x1d],extraout_x1_25,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                 param_7,param_8);
  *(undefined4 *)((long)plVar7 + 0xd4) = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *(undefined8 *)((long)plVar7 + 0xcc) = 0;
  *(undefined8 *)((long)plVar7 + 0xc4) = 0;
  *(undefined8 *)((long)plVar7 + 0xbc) = 0;
  *(undefined8 *)((long)plVar7 + 0xb4) = 0;
  *(undefined8 *)((long)plVar7 + 0xac) = 0;
  *(undefined8 *)((long)plVar7 + 0xa4) = 0;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  *(undefined8 *)((long)plVar7 + 0x94) = 0;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0;
  plVar7[0x1b] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x1c) = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0xe4) = 0;
  *(undefined4 *)(plVar7 + 0x11) = 1;
  FUN_7101ccd9f0(plVar7);
  FUN_710323b9e0(plVar26[0x1d],extraout_x1_26,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  plVar26[1] = 0;
  plVar26[2] = 0;
  *(undefined4 *)((long)plVar26 + 0xd4) = 0;
  *(undefined8 *)((long)plVar26 + 0xcc) = 0;
  *(undefined8 *)((long)plVar26 + 0xc4) = 0;
  *(undefined8 *)((long)plVar26 + 0xbc) = 0;
  *(undefined8 *)((long)plVar26 + 0xb4) = 0;
  *(undefined8 *)((long)plVar26 + 0xac) = 0;
  *(undefined8 *)((long)plVar26 + 0xa4) = 0;
  *(undefined8 *)((long)plVar26 + 0x9c) = 0;
  *(undefined8 *)((long)plVar26 + 0x94) = 0;
  *(undefined8 *)((long)plVar26 + 0x8c) = 0;
  plVar26[0x1b] = 0xffffffff;
  *(undefined4 *)(plVar26 + 0x1c) = 0xffffffff;
  *(undefined1 *)((long)plVar26 + 0xe4) = 0;
  *(undefined4 *)(plVar26 + 0x11) = 1;
  FUN_7101cd0990(plVar26);
  lVar18 = DAT_7105324fa8;
  lVar21 = *(long *)(*(long *)(DAT_7105324fa8 + 8) + 0x198);
  ppppppppplVar11 = (long *********)(long)*(int *)(lVar21 + 0x70);
  ppppbVar15 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
  pppplVar16 = (long ****)0x0;
  FUN_710323beb0(lVar21,(ulong *)&DAT_7104545378,(long)ppppppppplVar11,(ulong)ppppbVar15,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar21 = *(long *)(*(long *)(lVar18 + 8) + 0x198);
  uVar20 = extraout_x1_27;
  while (uVar24 = FUN_710323cb80(lVar21,uVar20,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7
                                 ,param_8), (uVar24 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar20 = extraout_x1_28;
  }
  plVar26 = *(long **)(lVar18 + 8);
  puVar30 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                           param_7,param_8);
  if (puVar30 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_00000088;
      ppppppppplVar11 = (long *********)&local_180;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar24 & 1) != 0) &&
         (puVar30 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,
                                   param_6,param_7,param_8), puVar30 != (undefined8 *)0x0))
      goto LAB_7102391784;
    }
    puVar30 = (undefined8 *)0x0;
  }
LAB_7102391784:
  FUN_7101cd1830(puVar30,(long)(plVar26 + 0x33),(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  puVar30[2] = &DAT_7105333600;
  *(undefined4 *)(puVar30 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar30 + 0x6c) = DAT_7105333664;
  do {
    uVar25 = DAT_7105333650;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar25 & 1) != 0);
  puVar30[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar30;
  FUN_71032caea0((long)puVar30,extraout_x1_29,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  lVar18 = plVar26[0x34];
  plVar26[0x34] = (long)puVar30;
  if (lVar18 != 0) {
    FUN_71032cad20(lVar18);
    puVar30 = (undefined8 *)plVar26[0x34];
  }
  FUN_7101cd1e80((long *)puVar30[0x10]);
  FUN_710323b9e0(plVar26[0x33],extraout_x1_30,ppppppppplVar11,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  plVar26[1] = 0;
  plVar26[2] = 0;
  *(undefined8 *)((long)plVar26 + 0x17c) = 0;
  *(undefined8 *)((long)plVar26 + 0x174) = 0;
  *(undefined8 *)((long)plVar26 + 0x16c) = 0;
  *(undefined8 *)((long)plVar26 + 0x164) = 0;
  *(undefined8 *)((long)plVar26 + 0x15c) = 0;
  *(undefined8 *)((long)plVar26 + 0x154) = 0;
  *(undefined8 *)((long)plVar26 + 0x14c) = 0;
  *(undefined4 *)((long)plVar26 + 0x184) = 0;
  *(undefined8 *)((long)plVar26 + 0x13c) = 0;
  *(undefined8 *)((long)plVar26 + 0x144) = 0;
  plVar26[0x31] = 0xffffffff;
  *(undefined4 *)(plVar26 + 0x32) = 0xffffffff;
  *(undefined1 *)((long)plVar26 + 0x194) = 0;
  *(undefined4 *)(plVar26 + 0x27) = 1;
  FUN_7101cb1510(plVar26);
  puVar30 = (undefined8 *)
            FUN_710392e290(0x10,0x22a8,(long ****)ppppppppplVar11,ppppbVar15,pppplVar16,param_6,
                           param_7,param_8);
  if (puVar30 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)0x22a8;
      pppplVar13 = (long ****)&local_180;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar24 & 1) != 0) &&
         (puVar30 = (undefined8 *)
                    FUN_710392e290(0x10,0x22a8,pppplVar13,ppppbVar15,pppplVar16,param_6,param_7,
                                   param_8), puVar30 != (undefined8 *)0x0)) goto LAB_71023918c8;
    }
    puVar30 = (undefined8 *)0x0;
  }
LAB_71023918c8:
  uVar20 = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  *(undefined2 *)(puVar30 + 2) = 0x100;
  *(undefined8 *)((long)puVar30 + 0x1c) = 0;
  *(undefined1 *)((long)puVar30 + 0x6c) = 0;
  *puVar30 = uVar20;
  puVar30[1] = 0;
  *(undefined8 *)((long)puVar30 + 0x14) = 0x100000000;
  *(undefined1 *)((long)puVar30 + 0x24) = 0;
  *(undefined8 *)((long)puVar30 + 100) = 0;
  *(undefined1 *)((long)puVar30 + 0xb4) = 0;
  *(undefined8 *)((long)puVar30 + 0xac) = 0;
  memset((void *)((long)puVar30 + 0xf4),0,0x1000);
  ppuVar14 = (undefined **)&DAT_00001000;
  *(undefined1 *)((long)puVar30 + 0x10f4) = 1;
  *(undefined4 *)(puVar30 + 0x21f) = 0;
  *(undefined1 *)((long)puVar30 + 0x10fc) = 1;
  *(undefined1 *)(puVar30 + 0x221) = 0;
  puVar30[0x220] = 0;
  *(undefined4 *)(puVar30 + 0x229) = 0x20;
  memset(puVar30 + 0x233,0,0x1000);
  *(undefined8 *)((long)puVar30 + 0x1151) = 0;
  *(undefined8 *)((long)puVar30 + 0x114c) = 0;
  puVar30[0x433] = param_1 + 0x50;
  puVar30[0x434] = puVar30;
  puVar30[0x438] = 0;
  puVar30[0x437] = 0;
  puVar30[0x436] = 0;
  puVar30[0x435] = 0;
  puVar30[0x453] = 0xffffffff;
  *(undefined4 *)(puVar30 + 0x454) = 0xffffffff;
  *(undefined1 *)((long)puVar30 + 0x22a4) = 0;
  puVar30[0x452] = 0;
  puVar30[0x451] = 0;
  puVar30[0x450] = 0;
  puVar30[0x44f] = 0;
  puVar30[0x44e] = 0;
  puVar30[0x44d] = 0;
  puVar30[0x44c] = 0;
  puVar30[1099] = 0;
  puVar30[0x44a] = 0;
  puVar30[0x449] = 0;
  puVar30[0x448] = 0;
  puVar30[0x447] = 0;
  puVar30[0x446] = 0;
  puVar30[0x445] = 0;
  puVar30[0x444] = 0;
  puVar30[0x443] = 0;
  puVar30[0x442] = 0;
  puVar30[0x441] = 0;
  puVar30[0x440] = 0;
  puVar30[0x43f] = 0;
  puVar30[0x43e] = 0;
  puVar30[0x43d] = 0;
  puVar30[0x43c] = 0;
  puVar30[0x43b] = 0;
  puVar30[0x43a] = 0;
  puVar30[0x439] = 0;
  uVar25 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
  DAT_71052391c0 = DAT_71052391c4;
  uVar25 = uVar25 ^ uVar25 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
  DAT_71052391c4 = DAT_71052391c8;
  DAT_71052391c8 = DAT_71052391cc;
  DAT_71052391cc = uVar25;
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    ppuVar14 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_7105308408 = uVar25;
  FUN_7103723a90(puVar30[0x433],&DAT_71053295e8,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,
                 param_7,param_8);
  puVar30[0x439] = FUN_7102388200;
  puVar30[0x43b] = FUN_71023883a0;
  puVar30[0x43d] = FUN_7102388430;
  puVar30[0x43f] = FUN_7102388440;
  puVar30[0x441] = FUN_7102388e40;
  puVar30[0x443] = FUN_71023892d0;
  puVar30[0x445] = FUN_7102389490;
  puVar30[0x447] = FUN_7102389670;
  puVar30[0x43a] = 0;
  puVar30[0x43c] = 0;
  puVar30[0x43e] = 0;
  puVar30[0x440] = 0;
  puVar30[0x442] = 0;
  puVar30[0x444] = 0;
  puVar30[0x446] = 0;
  puVar30[0x448] = 0;
  if (0x12 < *(uint *)((long)puVar30 + 0x2294)) {
LAB_7102391fe8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar30 + (long)(int)*(uint *)((long)puVar30 + 0x2294) * 4 + 0x2248) = 3;
  if (*(int *)((long)puVar30 + 0x2294) < 0x12) {
    uVar25 = *(int *)((long)puVar30 + 0x2294) + 1;
    *(uint *)((long)puVar30 + 0x2294) = uVar25;
    if (0x12 < uVar25) goto LAB_7102391fe8;
    *(undefined4 *)((long)puVar30 + (long)(int)uVar25 * 4 + 0x2248) = 0;
  }
  if (DAT_710532f860 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,8,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                           );
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
        local_180 = (undefined **)&DAT_00000008;
        ppuVar14 = (undefined **)&local_180;
        uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
        if (((uVar24 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,8,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,param_7
                                    ,param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102391b68;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_7102391b68:
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
        local_180 = (undefined **)&SUB_00000020;
        ppuVar14 = (undefined **)&local_180;
        uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
        if (((uVar24 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_7102391bb8;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_7102391bb8:
    puVar10[2] = 0;
    puVar10[1] = 0;
    *puVar10 = puVar10 + 1;
    *(undefined4 *)(puVar10 + 3) = 1;
    *puVar8 = puVar10;
    DAT_710532f860 = puVar8;
  }
  if (DAT_710532f838 == (long *)0x0) {
    plVar26 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,
                                     param_7,param_8);
    uVar20 = extraout_x1_31;
    if (plVar26 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
        local_180 = (undefined **)&DAT_00000010;
        ppuVar14 = (undefined **)&local_180;
        auVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
        uVar20 = auVar36._8_8_;
        if (((auVar36._0_8_ & 1) != 0) &&
           (plVar26 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppuVar14,ppppbVar15,pppplVar16,
                                             param_6,param_7,param_8), uVar20 = extraout_x1_32,
           plVar26 != (long *)0x0)) goto LAB_7102391c3c;
      }
      plVar26 = (long *)0x0;
    }
LAB_7102391c3c:
    FUN_71032ff7b0(plVar26,uVar20,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8)
    ;
    DAT_710532f838 = plVar26;
  }
  if (DAT_7105325ca0 != (long *)0x0) goto LAB_7102391da0;
  plVar26 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,
                                   param_7,param_8);
  if (plVar26 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_00000010;
      ppuVar14 = (undefined **)&local_180;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar24 & 1) != 0) &&
         (plVar26 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppuVar14,ppppbVar15,pppplVar16,
                                           param_6,param_7,param_8), plVar26 != (long *)0x0))
      goto LAB_7102391cac;
    }
    plVar26 = (long *)0x0;
  }
LAB_7102391cac:
  *plVar26 = (long)&PTR_FUN_71050ae2c0;
  plVar7 = (long *)FUN_710392e290(0x10,0xe0,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,
                                  param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80[0] = (long ***)((ulong)local_80[0] & 0xffffffff00000000);
      local_180 = (undefined **)&DAT_000000e0;
      ppuVar14 = (undefined **)&local_180;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
      if (((uVar24 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0xe0,(long ****)ppuVar14,ppppbVar15,pppplVar16,
                                          param_6,param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102391d10;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102391d10:
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0x58ffff0000000000;
  plVar7[4] = 0;
  plVar7[5] = (long)FUN_7101cc48b0;
  *(undefined1 *)(plVar7 + 0x1b) = 1;
  plVar7[10] = 0;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  *(undefined8 *)((long)plVar7 + 0x94) = 0;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0;
  *(undefined8 *)((long)plVar7 + 0x7c) = 0;
  *(undefined8 *)((long)plVar7 + 0x74) = 0;
  *(undefined8 *)((long)plVar7 + 0x6c) = 0;
  *(undefined8 *)((long)plVar7 + 100) = 0;
  *(undefined8 *)((long)plVar7 + 0x5c) = 0;
  *(undefined4 *)((long)plVar7 + 0xa4) = 0;
  *(undefined4 *)(plVar7 + 0x15) = 0xffffffff;
  *(undefined4 *)((long)plVar7 + 0xac) = 0;
  *(undefined4 *)(plVar7 + 0x16) = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0xb4) = 0;
  *(undefined4 *)(plVar7 + 0xb) = 0;
  plVar7[6] = 0;
  plVar7[7] = (long)FUN_7101cc48c0;
  plVar7[0x17] = 0;
  plVar7[0x18] = 0;
  plVar7[8] = 0;
  plVar7[9] = (long)FUN_7101cc4930;
  *plVar7 = (long)plVar7;
  plVar7[1] = 0;
  FUN_7101cc4a60(plVar7);
  plVar26[1] = (long)plVar7;
  DAT_7105325ca0 = plVar26;
LAB_7102391da0:
  puVar8 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar8 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105328150), iVar4 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105324750), iVar4 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    puVar10 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (puVar10 != (undefined8 *)0x0) {
      do {
        if ((undefined8 **)puVar10 == &DAT_7105328158) {
          if (*(char *)((long)puVar8 + 0x51) != '\0') {
            puVar30[0x435] = 0;
            puVar30[0x436] = 0;
            *(undefined8 *)((long)puVar30 + 0x228c) = 0;
            *(undefined8 *)((long)puVar30 + 0x2284) = 0;
            *(undefined8 *)((long)puVar30 + 0x227c) = 0;
            *(undefined8 *)((long)puVar30 + 0x2274) = 0;
            *(undefined8 *)((long)puVar30 + 0x226c) = 0;
            *(undefined8 *)((long)puVar30 + 0x2264) = 0;
            *(undefined8 *)((long)puVar30 + 0x225c) = 0;
            *(undefined8 *)((long)puVar30 + 0x2254) = 0;
            *(undefined8 *)((long)puVar30 + 0x224c) = 0;
            *(undefined8 *)((long)puVar30 + 0x2294) = 0xffffffff00000000;
            *(undefined8 *)((long)puVar30 + 0x229c) = 0xffffffff00000000;
            *(undefined1 *)((long)puVar30 + 0x22a4) = 0;
            *(undefined4 *)(puVar30 + 0x449) = 1;
          }
          break;
        }
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
  }
  uVar24 = *(ulong *)(param_1 + 0xe8);
  *(undefined8 **)(param_1 + 0xe8) = puVar30;
  if (uVar24 != 0) {
    auVar36 = FUN_7103723e70(*(long *)(uVar24 + 0x2198),&DAT_71053295e8,(long ****)ppuVar14,
                             ppppbVar15,pppplVar16,param_6,param_7,param_8);
    FUN_71023899c0(auVar36._0_8_,auVar36._8_8_,(long ****)ppuVar14,ppppbVar15,pppplVar16,param_6,
                   param_7,param_8);
    if (DAT_710532f838 != (long *)0x0) {
      (**(code **)(*DAT_710532f838 + 8))();
      DAT_710532f838 = (long *)0x0;
    }
    lVar18 = DAT_7105325ca0[1];
    bVar3 = FUN_7101cc4970(lVar18);
    if ((bVar3) &&
       (*(char *)(*(long *)(*(long *)(*(long *)(DAT_710532f820 + 8) + 0x110) + 0x80) + 0x14d) ==
        '\0')) {
      FUN_7101cc4b30(lVar18);
    }
    *(undefined8 *)(lVar18 + 0xc0) = *(undefined8 *)(lVar18 + 0xb8);
    if (DAT_7105325ca0 != (long *)0x0) {
      (**(code **)(*DAT_7105325ca0 + 8))();
      DAT_7105325ca0 = (long *)0x0;
    }
    lVar18 = DAT_71052c50f0;
    if (DAT_71052c50f0 != 0) {
      *(undefined1 *)(DAT_71052c50f0 + 0x5a4) = 0;
      (**(code **)(*(long *)(lVar18 + 0x588) + 0x68))(lVar18 + 0x588);
    }
    FUN_710392eb40(uVar24);
    return;
  }
  return;
}

