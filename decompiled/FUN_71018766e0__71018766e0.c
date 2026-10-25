// addr:      71018766e0
// offset:    0x18766e0
// name:      FUN_71018766e0
// mangled:   
// signature: undefined __cdecl FUN_71018766e0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018766e0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  long ***ppplVar14;
  undefined1 *puVar15;
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
  undefined8 uVar16;
  long *********ppppppppplVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  undefined4 *puVar22;
  ulong uVar23;
  long ********pppppppplVar24;
  long ****pppplVar25;
  long *****ppppplVar26;
  long ******pppppplVar27;
  undefined8 uVar28;
  byte *pbVar29;
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  long *******ppppppplVar34;
  void *pvVar35;
  long *******ppppppplVar36;
  long *********ppppppppplVar37;
  size_t __n;
  undefined8 *puVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  long ***local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  
  lVar5 = FUN_710392e290(0x10,0xf8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar5 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_d0 = (long ********)&DAT_000000f8;
      param_3 = (long *********)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
      if (((uVar6 & 1) != 0) &&
         (lVar5 = FUN_710392e290(0x10,0xf8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar5 != 0)) goto LAB_7101876764;
    }
    lVar5 = 0;
  }
LAB_7101876764:
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 0xb0) = 0xffffffff;
  *(long *)lVar5 = lVar5;
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined1 *)(lVar5 + 0xb4) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0xffffffff;
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
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar16 = extraout_x1;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_d0 = (long ********)&DAT_00000080;
      param_3 = (long *********)&local_d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
      uVar16 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar16 = extraout_x1_00, puVar7 != (undefined8 *)0x0))
      goto LAB_71018767f0;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71018767f0:
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
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xd) = 2;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  puVar7[0xe] = 0;
  *(undefined8 **)(lVar5 + 0xb8) = puVar7;
  *(undefined8 *)(lVar5 + 0xc0) = 0;
  lVar10 = DAT_710532f840;
  *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(*(long *)(lVar10 + 8) + 0xc0);
  *(undefined8 *)(lVar5 + 0xd8) = 0;
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined2 *)(lVar5 + 0xe4) = 0x100;
  *(undefined1 *)(lVar5 + 0xee) = 0;
  *(undefined8 *)(lVar5 + 0xe6) = 0;
  *(undefined1 *)(lVar5 + 0xf4) = 0;
  *(undefined4 *)(lVar5 + 0xf0) = 0;
  *(bool *)(lVar5 + 0xe0) = iVar4 == 2;
  puVar7 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar7 != (undefined8 *)0x0) {
    if (((DAT_71053248f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053248f0), iVar4 != 0)) {
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
      DAT_71053248f8 = &DAT_7105324760;
      __cxa_guard_release(&DAT_71053248f0);
    }
    auVar40 = (**(code **)*puVar7)(puVar7);
    uVar16 = auVar40._8_8_;
    for (puVar8 = auVar40._0_8_; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      if ((undefined8 **)puVar8 == &DAT_71053248f8) {
        iVar4 = *(int *)(puVar7 + 1);
        *(int *)(lVar5 + 0xdc) = iVar4;
        if (iVar4 == 1) {
          uVar28 = *(undefined8 *)((long)puVar7 + 0xc);
          uVar30 = *(undefined8 *)((long)puVar7 + 0x14);
          *(undefined1 *)(lVar5 + 0xf4) = *(undefined1 *)((long)puVar7 + 0x1c);
          *(undefined8 *)(lVar5 + 0xe4) = uVar28;
          *(undefined8 *)(lVar5 + 0xec) = uVar30;
        }
        goto LAB_71018768d8;
      }
    }
  }
  *(undefined4 *)(lVar5 + 0xdc) = 0;
LAB_71018768d8:
  *(code **)(lVar5 + 0x28) = FUN_7101874680;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(code **)(lVar5 + 0x38) = FUN_71018752f0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(code **)(lVar5 + 0x48) = FUN_7101875830;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  if (0x12 < *(uint *)(lVar5 + 0xa4)) goto LAB_7101877750;
  *(undefined4 *)(lVar5 + (long)(int)*(uint *)(lVar5 + 0xa4) * 4 + 0x58) = 0;
  uVar6 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar5;
  lVar10 = DAT_710532f8b0;
  puVar7 = DAT_710532f7a0;
  if (uVar6 != 0) {
    if (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) != 0) {
      if (DAT_710532f7a0 != (undefined8 *)0x0) {
        puVar33 = (uint *)*DAT_710532f7a0;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_01;
          }
          puVar33[0x12] = 3;
          if (((((puVar33[0x26] != 2) && (puVar33[0x3a] != 2)) && (puVar33[0x4e] != 2)) &&
              ((puVar33[0x62] != 2 && (puVar33[0x76] != 2)))) &&
             ((puVar33[0x8a] != 2 && (puVar33[0x9e] != 2)))) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
        puVar33 = (uint *)*puVar7;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x28);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_02;
          }
          puVar33[0x26] = 3;
          if ((((puVar33[0x12] != 2) && (puVar33[0x3a] != 2)) && (puVar33[0x4e] != 2)) &&
             (((puVar33[0x62] != 2 && (puVar33[0x76] != 2)) &&
              ((puVar33[0x8a] != 2 && (puVar33[0x9e] != 2)))))) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
        puVar33 = (uint *)*puVar7;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x30);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_03;
          }
          puVar33[0x3a] = 3;
          if ((((puVar33[0x12] != 2) && (puVar33[0x26] != 2)) && (puVar33[0x4e] != 2)) &&
             (((puVar33[0x62] != 2 && (puVar33[0x76] != 2)) &&
              ((puVar33[0x8a] != 2 && (puVar33[0x9e] != 2)))))) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
        puVar33 = (uint *)*puVar7;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x38);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_04;
          }
          puVar33[0x4e] = 3;
          if ((((((puVar33[0x12] != 2) && (puVar33[0x26] != 2)) && (puVar33[0x3a] != 2)) &&
               ((puVar33[0x62] != 2 && (puVar33[0x76] != 2)))) && (puVar33[0x8a] != 2)) &&
             (puVar33[0x9e] != 2)) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
        puVar33 = (uint *)*puVar7;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x40);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_05;
          }
          puVar33[0x62] = 3;
          if ((((puVar33[0x12] != 2) && (puVar33[0x26] != 2)) && (puVar33[0x3a] != 2)) &&
             (((puVar33[0x4e] != 2 && (puVar33[0x76] != 2)) &&
              ((puVar33[0x8a] != 2 && (puVar33[0x9e] != 2)))))) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
        puVar33 = (uint *)*puVar7;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x48);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_06;
          }
          puVar33[0x76] = 3;
          if ((((puVar33[0x12] != 2) && (puVar33[0x26] != 2)) && (puVar33[0x3a] != 2)) &&
             (((puVar33[0x4e] != 2 && (puVar33[0x62] != 2)) &&
              ((puVar33[0x8a] != 2 && (puVar33[0x9e] != 2)))))) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
        puVar33 = (uint *)*puVar7;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x50);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_07;
          }
          puVar33[0x8a] = 3;
          if (((((puVar33[0x12] != 2) && (puVar33[0x26] != 2)) && (puVar33[0x3a] != 2)) &&
              ((puVar33[0x4e] != 2 && (puVar33[0x62] != 2)))) &&
             ((puVar33[0x76] != 2 && (puVar33[0x9e] != 2)))) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
        puVar33 = (uint *)*puVar7;
        if (((byte)*puVar33 >> 1 & 1) != 0) {
          lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x58);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
            FUN_7100653490(lVar5,0);
            uVar16 = extraout_x1_08;
          }
          puVar33[0x9e] = 3;
          if ((((puVar33[0x12] != 2) && (puVar33[0x26] != 2)) && (puVar33[0x3a] != 2)) &&
             (((puVar33[0x4e] != 2 && (puVar33[0x62] != 2)) &&
              ((puVar33[0x76] != 2 && (puVar33[0x8a] != 2)))))) {
            *puVar33 = *puVar33 | 0x20;
          }
        }
      }
      lVar5 = *(long *)(lVar10 + 8);
      *(undefined8 *)(lVar5 + 0x318) = *(undefined8 *)(lVar5 + 0x310);
      *(undefined1 *)(lVar5 + 0x328) = 0;
      if (-1 < *(int *)(lVar5 + 0x134)) {
        uVar23 = 0;
        do {
          if (0x12 < uVar23) goto LAB_7101877750;
          if (*(int *)(lVar5 + 0xe8 + uVar23 * 4) == 9) goto LAB_7101876eb8;
          bVar1 = (long)uVar23 < (long)*(int *)(lVar5 + 0x134);
          uVar23 = uVar23 + 1;
        } while (bVar1);
      }
      if (*(int *)(lVar5 + 0x138) != 0) {
        *(undefined8 *)(lVar5 + 0x138) = 0xffffffff;
        *(undefined8 *)(lVar5 + 0x128) = 0;
        *(undefined8 *)(lVar5 + 0x130) = 0x300000000;
        *(undefined8 *)(lVar5 + 8) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined4 *)(lVar5 + 0x140) = 0xffffffff;
        *(undefined1 *)(lVar5 + 0x144) = 0;
        *(undefined8 *)(lVar5 + 0x118) = 0;
        *(undefined8 *)(lVar5 + 0x120) = 0;
        *(undefined8 *)(lVar5 + 0x108) = 0;
        *(undefined8 *)(lVar5 + 0x110) = 0;
        *(undefined8 *)(lVar5 + 0xf8) = 0;
        *(undefined8 *)(lVar5 + 0x100) = 0;
        *(undefined8 *)(lVar5 + 0xe8) = 0x900000000;
        *(undefined8 *)(lVar5 + 0xf0) = 0x400000008;
      }
    }
LAB_7101876eb8:
    lVar5 = *(long *)(uVar6 + 0xc0);
    *(undefined8 *)(uVar6 + 0xc0) = 0;
    if (lVar5 != 0) {
      FUN_71032cad20(lVar5);
      uVar16 = extraout_x1_09;
    }
    FUN_710323b9e0(*(long *)(uVar6 + 0xb8),uVar16,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar9 = *(long **)(uVar6 + 0xb8);
    *(undefined8 *)(uVar6 + 0xb8) = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_710392eb40(uVar6);
    lVar5 = *(long *)(param_1 + 0x58);
  }
  plVar9 = (long *)(lVar5 + 0xb8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545140,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_d0 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,&local_d0,(long)*(int *)(lVar10 + 0x70),(ulong)*(uint *)(lVar10 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_d0 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,&local_d0,(long)*(int *)(lVar10 + 0x70),(ulong)*(uint *)(lVar10 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545148,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_d0 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,&local_d0,(long)*(int *)(lVar10 + 0x70),(ulong)*(uint *)(lVar10 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_d0 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,&local_d0,(long)*(int *)(lVar10 + 0x70),(ulong)*(uint *)(lVar10 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545150,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_d0 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar10,&local_d0,(long)*(int *)(lVar10 + 0x70),(ulong)*(uint *)(lVar10 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  local_d0 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar10,&local_d0,(long)*(int *)(lVar10 + 0x70),(ulong)*(uint *)(lVar10 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  ppppppppplVar17 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar21 = (long ****)0x1;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545158,(long)ppppppppplVar17,(ulong)ppppbVar20,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar10 = *plVar9;
  uVar6 = FUN_710323cb80(lVar10,extraout_x1_10,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7
                         ,param_8);
  while ((uVar6 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar6 = FUN_710323cb80(lVar10,extraout_x1_11,ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                           param_7,param_8);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7
                          ,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_d0 = (long ********)&DAT_00000088;
      ppppppppplVar17 = (long *********)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6
                                  ,param_7,param_8), puVar7 != (undefined8 *)0x0))
      goto LAB_71018770a4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71018770a4:
  *(undefined1 *)(puVar7 + 0xb) = 0;
  *puVar7 = &PTR_FUN_71050ad370;
  puVar7[1] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0x1ffffffff;
  puVar7[0xf] = plVar9;
  *(undefined1 *)(puVar7 + 0xe) = 1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0xc0,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7
                          ,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_d0 = (long ********)&DAT_000000c0;
      ppppppppplVar17 = (long *********)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0xc0,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6
                                  ,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7101877130;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101877130:
  *(undefined4 *)(puVar8 + 1) = 0x1000;
  puVar8[3] = 0;
  puVar8[4] = 0;
  uVar39 = 0x811c9dc5;
  puVar8[2] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[6] = 0;
  puVar8[5] = puVar8 + 6;
  *puVar8 = &PTR_FUN_71050ad2f0;
  *(undefined2 *)(puVar8 + 0xc) = 0x100;
  puVar38 = puVar8 + 9;
  *puVar38 = 0;
  *(undefined1 *)((long)puVar8 + 0x6a) = 0;
  *(undefined8 *)((long)puVar8 + 0x62) = 0;
  *(undefined1 *)(puVar8 + 0xe) = 0;
  *(undefined4 *)((long)puVar8 + 0x6c) = 0;
  *(undefined1 *)((long)puVar8 + 0x7c) = 0;
  *(undefined4 *)((long)puVar8 + 0x74) = 0x811c9dc5;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar11 = (undefined4 *)
            FUN_710392e290(0x10,4,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                           param_8);
  if (puVar11 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_d0 = (long ********)&DAT_00000004;
      ppppppppplVar17 = (long *********)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
      if (((uVar6 & 1) != 0) &&
         (puVar11 = (undefined4 *)
                    FUN_710392e290(0x10,4,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                                   param_7,param_8), puVar11 != (undefined4 *)0x0))
      goto LAB_71018771f0;
    }
    puVar11 = (undefined4 *)0x0;
  }
LAB_71018771f0:
  *puVar11 = 0;
  puVar8[9] = puVar11;
  puVar8[10] = puVar11 + 1;
  puVar8[0xb] = puVar11 + 1;
  puVar12 = (undefined4 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_d0 = (long ********)&DAT_00000008;
      ppppppppplVar17 = (long *********)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
      if (((uVar6 & 1) != 0) &&
         (puVar12 = (undefined4 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar17,ppppbVar20,pppplVar21,param_6,
                                   param_7,param_8), puVar12 != (undefined4 *)0x0))
      goto LAB_7101877254;
    }
    puVar12 = (undefined4 *)0x0;
  }
LAB_7101877254:
  puVar12[1] = 1;
  puVar22 = puVar12 + 2;
  *puVar12 = *puVar11;
  puVar8[0xb] = puVar22;
  puVar8[9] = puVar12;
  puVar8[10] = puVar22;
  puVar12 = puVar22;
  if (puVar11 == (undefined4 *)0x0) {
LAB_71018772a8:
    pvVar35 = (void *)*puVar38;
    ppppppppplVar37 = (long *********)((long)puVar12 - (long)pvVar35);
    uVar6 = ((long)ppppppppplVar37 >> 2) + 1;
    if (uVar6 >> 0x3e != 0) goto LAB_7101878658;
    if ((ulong)((long)puVar22 - (long)pvVar35 >> 2) < 0x1fffffffffffffff) {
      uVar23 = (long)puVar22 - (long)pvVar35 >> 1;
      if (uVar6 <= uVar23) {
        uVar6 = uVar23;
      }
      if (uVar6 != 0) {
        if (uVar6 >> 0x3e != 0) goto LAB_7101877750;
        goto LAB_71018772f4;
      }
      pvVar13 = (void *)0x0;
    }
    else {
      uVar6 = 0x3fffffffffffffff;
LAB_71018772f4:
      pppppppplVar24 = (long ********)(uVar6 * 4);
      if (pppppppplVar24 == (long ********)0x0) {
        pppppppplVar24 = (long ********)0x1;
      }
      pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,ppppbVar20,
                                       pppplVar21,param_6,param_7,param_8);
      if (pvVar13 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
          ppppppppplVar17 = (long *********)&local_d0;
          local_d0 = pppppppplVar24;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
          if (((uVar23 & 1) != 0) &&
             (pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,
                                               ppppbVar20,pppplVar21,param_6,param_7,param_8),
             pvVar13 != (void *)0x0)) goto LAB_710187735c;
        }
        pvVar13 = (void *)0x0;
      }
    }
LAB_710187735c:
    puVar12 = (undefined4 *)((long)pvVar13 + ((long)ppppppppplVar37 >> 2) * 4);
    puVar11 = puVar12 + 1;
    *puVar12 = 2;
    if (0 < (long)ppppppppplVar37) {
      memcpy(pvVar13,pvVar35,(size_t)ppppppppplVar37);
      ppppppppplVar17 = ppppppppplVar37;
    }
    puVar8[9] = pvVar13;
    puVar8[10] = puVar11;
    puVar8[0xb] = (void *)((long)pvVar13 + uVar6 * 4);
    if (pvVar35 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar35);
      puVar11 = (undefined4 *)puVar8[10];
    }
  }
  else {
    FUN_710392eb40((ulong)puVar11);
    puVar12 = (undefined4 *)puVar8[10];
    puVar22 = (undefined4 *)puVar8[0xb];
    if (puVar22 <= puVar12) goto LAB_71018772a8;
    *puVar12 = 2;
    puVar11 = (undefined4 *)(puVar8[10] + 4);
    puVar8[10] = puVar11;
  }
  if (puVar11 < (undefined4 *)puVar8[0xb]) {
    *puVar11 = 3;
    puVar11 = (undefined4 *)(puVar8[10] + 4);
    puVar8[10] = puVar11;
  }
  else {
    pvVar35 = (void *)*puVar38;
    ppppppppplVar37 = (long *********)((long)puVar11 - (long)pvVar35);
    uVar6 = ((long)ppppppppplVar37 >> 2) + 1;
    if (uVar6 >> 0x3e != 0) goto LAB_7101878658;
    lVar10 = (long)puVar8[0xb] - (long)pvVar35;
    if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
      uVar23 = lVar10 >> 1;
      if (uVar6 <= uVar23) {
        uVar6 = uVar23;
      }
      if (uVar6 != 0) {
        if (uVar6 >> 0x3e != 0) goto LAB_7101877750;
        goto LAB_710187740c;
      }
      pvVar13 = (void *)0x0;
    }
    else {
      uVar6 = 0x3fffffffffffffff;
LAB_710187740c:
      pppppppplVar24 = (long ********)(uVar6 * 4);
      if (pppppppplVar24 == (long ********)0x0) {
        pppppppplVar24 = (long ********)0x1;
      }
      pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,ppppbVar20,
                                       pppplVar21,param_6,param_7,param_8);
      if (pvVar13 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
          ppppppppplVar17 = (long *********)&local_d0;
          local_d0 = pppppppplVar24;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
          if (((uVar23 & 1) != 0) &&
             (pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,
                                               ppppbVar20,pppplVar21,param_6,param_7,param_8),
             pvVar13 != (void *)0x0)) goto LAB_7101877474;
        }
        pvVar13 = (void *)0x0;
      }
    }
LAB_7101877474:
    puVar12 = (undefined4 *)((long)pvVar13 + ((long)ppppppppplVar37 >> 2) * 4);
    puVar11 = puVar12 + 1;
    *puVar12 = 3;
    if (0 < (long)ppppppppplVar37) {
      memcpy(pvVar13,pvVar35,(size_t)ppppppppplVar37);
      ppppppppplVar17 = ppppppppplVar37;
    }
    puVar8[9] = pvVar13;
    puVar8[10] = puVar11;
    puVar8[0xb] = (void *)((long)pvVar13 + uVar6 * 4);
    if (pvVar35 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar35);
      puVar11 = (undefined4 *)puVar8[10];
    }
  }
  if (puVar11 < (undefined4 *)puVar8[0xb]) {
    *puVar11 = 4;
    puVar11 = (undefined4 *)(puVar8[10] + 4);
    puVar8[10] = puVar11;
  }
  else {
    pvVar35 = (void *)*puVar38;
    ppppppppplVar37 = (long *********)((long)puVar11 - (long)pvVar35);
    uVar6 = ((long)ppppppppplVar37 >> 2) + 1;
    if (uVar6 >> 0x3e != 0) goto LAB_7101878658;
    lVar10 = (long)puVar8[0xb] - (long)pvVar35;
    if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
      uVar23 = lVar10 >> 1;
      if (uVar6 <= uVar23) {
        uVar6 = uVar23;
      }
      if (uVar6 != 0) {
        if (uVar6 >> 0x3e != 0) goto LAB_7101877750;
        goto LAB_7101877524;
      }
      pvVar13 = (void *)0x0;
    }
    else {
      uVar6 = 0x3fffffffffffffff;
LAB_7101877524:
      pppppppplVar24 = (long ********)(uVar6 * 4);
      if (pppppppplVar24 == (long ********)0x0) {
        pppppppplVar24 = (long ********)0x1;
      }
      pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,ppppbVar20,
                                       pppplVar21,param_6,param_7,param_8);
      if (pvVar13 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
          ppppppppplVar17 = (long *********)&local_d0;
          local_d0 = pppppppplVar24;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
          if (((uVar23 & 1) != 0) &&
             (pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,
                                               ppppbVar20,pppplVar21,param_6,param_7,param_8),
             pvVar13 != (void *)0x0)) goto LAB_710187758c;
        }
        pvVar13 = (void *)0x0;
      }
    }
LAB_710187758c:
    puVar12 = (undefined4 *)((long)pvVar13 + ((long)ppppppppplVar37 >> 2) * 4);
    puVar11 = puVar12 + 1;
    *puVar12 = 4;
    if (0 < (long)ppppppppplVar37) {
      memcpy(pvVar13,pvVar35,(size_t)ppppppppplVar37);
      ppppppppplVar17 = ppppppppplVar37;
    }
    puVar8[9] = pvVar13;
    puVar8[10] = puVar11;
    puVar8[0xb] = (void *)((long)pvVar13 + uVar6 * 4);
    if (pvVar35 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar35);
      puVar11 = (undefined4 *)puVar8[10];
    }
  }
  if (puVar11 < (undefined4 *)puVar8[0xb]) {
    *puVar11 = 5;
    puVar11 = (undefined4 *)(puVar8[10] + 4);
    puVar8[10] = puVar11;
  }
  else {
    pvVar35 = (void *)*puVar38;
    ppppppppplVar37 = (long *********)((long)puVar11 - (long)pvVar35);
    uVar6 = ((long)ppppppppplVar37 >> 2) + 1;
    if (uVar6 >> 0x3e != 0) {
LAB_7101878658:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)puVar8[0xb] - (long)pvVar35;
    if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
      uVar23 = lVar10 >> 1;
      if (uVar6 <= uVar23) {
        uVar6 = uVar23;
      }
      if (uVar6 != 0) {
        if (uVar6 >> 0x3e != 0) goto LAB_7101877750;
        goto LAB_710187763c;
      }
      pvVar13 = (void *)0x0;
    }
    else {
      uVar6 = 0x3fffffffffffffff;
LAB_710187763c:
      pppppppplVar24 = (long ********)(uVar6 * 4);
      if (pppppppplVar24 == (long ********)0x0) {
        pppppppplVar24 = (long ********)0x1;
      }
      pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,ppppbVar20,
                                       pppplVar21,param_6,param_7,param_8);
      if (pvVar13 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
          ppppppppplVar17 = (long *********)&local_d0;
          local_d0 = pppppppplVar24;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
          if (((uVar23 & 1) != 0) &&
             (pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,
                                               ppppbVar20,pppplVar21,param_6,param_7,param_8),
             pvVar13 != (void *)0x0)) goto LAB_71018776a4;
        }
        pvVar13 = (void *)0x0;
      }
    }
LAB_71018776a4:
    puVar12 = (undefined4 *)((long)pvVar13 + ((long)ppppppppplVar37 >> 2) * 4);
    puVar11 = puVar12 + 1;
    *puVar12 = 5;
    if (0 < (long)ppppppppplVar37) {
      memcpy(pvVar13,pvVar35,(size_t)ppppppppplVar37);
      ppppppppplVar17 = ppppppppplVar37;
    }
    puVar8[9] = pvVar13;
    puVar8[10] = puVar11;
    puVar8[0xb] = (void *)((long)pvVar13 + uVar6 * 4);
    if (pvVar35 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar35);
      puVar11 = (undefined4 *)puVar8[10];
    }
  }
  if (puVar11 < (undefined4 *)puVar8[0xb]) {
    *puVar11 = 6;
    puVar8[10] = puVar8[10] + 4;
  }
  else {
    pvVar35 = (void *)*puVar38;
    __n = (long)puVar11 - (long)pvVar35;
    uVar6 = ((long)__n >> 2) + 1;
    if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)puVar8[0xb] - (long)pvVar35;
    if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
      uVar23 = lVar10 >> 1;
      if (uVar6 <= uVar23) {
        uVar6 = uVar23;
      }
      if (uVar6 != 0) {
        if (uVar6 >> 0x3e != 0) {
LAB_7101877750:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7101877758;
      }
LAB_71018777b8:
      pvVar13 = (void *)0x0;
    }
    else {
      uVar6 = 0x3fffffffffffffff;
LAB_7101877758:
      pppppppplVar24 = (long ********)(uVar6 * 4);
      if (pppppppplVar24 == (long ********)0x0) {
        pppppppplVar24 = (long ********)0x1;
      }
      pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,(long ****)ppppppppplVar17,ppppbVar20,
                                       pppplVar21,param_6,param_7,param_8);
      if (pvVar13 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
          pppplVar25 = (long ****)&local_d0;
          local_d0 = pppppppplVar24;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
          if (((uVar23 & 1) != 0) &&
             (pvVar13 = (void *)FUN_710392e290(0x10,pppppppplVar24,pppplVar25,ppppbVar20,pppplVar21,
                                               param_6,param_7,param_8), pvVar13 != (void *)0x0))
          goto LAB_71018777bc;
        }
        goto LAB_71018777b8;
      }
    }
LAB_71018777bc:
    puVar11 = (undefined4 *)((long)pvVar13 + ((long)__n >> 2) * 4);
    *puVar11 = 6;
    if (0 < (long)__n) {
      memcpy(pvVar13,pvVar35,__n);
    }
    puVar8[9] = pvVar13;
    puVar8[10] = puVar11 + 1;
    puVar8[0xb] = (void *)((long)pvVar13 + uVar6 * 4);
    if (pvVar35 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar35);
    }
  }
  ppuVar18 = &PTR_DAT_71050ad350;
  ppppbVar20 = (byte ****)0x27d6023b7c;
  pppplVar21 = (long ****)0x1;
  puVar7[0x10] = puVar8;
  FUN_71032cb040((long)puVar8,plVar9,(long ****)&PTR_DAT_71050ad350,(byte ****)0x27d6023b7c,
                 (long ****)0x1,param_6,param_7,param_8);
  ppppppplVar34 = (long *******)puVar7[0x10];
  if (ppppppplVar34[3] == ppppppplVar34[2]) {
LAB_7101878650:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pppplVar25 = **ppppppplVar34[2];
  *(undefined4 *)((**pppplVar25)[0xc0] + 3) = 0x800008;
  *(undefined4 *)((long)(**pppplVar25)[0xc0] + 0x1c) = 0x200022;
  if (ppppppplVar34[3] == ppppppplVar34[2]) goto LAB_7101878650;
  FUN_7103778630(0,(long)(***ppppppplVar34[2])[2],0x7104421055);
  ppppppplVar36 = ppppppplVar34 + 8;
  uVar16 = extraout_x1_12;
  if (*ppppppplVar36 == (long ******)0x0) goto LAB_7101878148;
  ppppplVar26 = **ppppppplVar36;
  if (ppppplVar26 == (long *****)0x0) {
    pppplVar25 = (long ****)0x0;
  }
  else {
    pppplVar25 = *ppppplVar26;
  }
  if (ppppppplVar34[3] == ppppppplVar34[2]) goto LAB_7101878650;
  pppplVar19 = **ppppppplVar34[2];
  FUN_71033743c0((long)pppplVar25,"layout_root",pppplVar19);
  pppppplVar27 = *ppppppplVar36;
  if (*pppppplVar27 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042b2a84;
    FUN_7103375650((long *)*pppppplVar27,"exit_code",&DAT_71042b2a84);
    pppppplVar27 = *ppppppplVar36;
    if (*pppppplVar27 != (long *****)0x0) {
      pppplVar19 = (long ****)&DAT_71042b2a84;
      FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_BODY_SIZE",&DAT_71042b2a84);
      pppppplVar27 = *ppppppplVar36;
      if (*pppppplVar27 != (long *****)0x0) {
        pppplVar19 = (long ****)&DAT_71042b2a84;
        FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_HEAD_OPTION",&DAT_71042b2a84);
        pppppplVar27 = *ppppppplVar36;
        if (*pppppplVar27 != (long *****)0x0) {
          pppplVar19 = (long ****)&DAT_71042b2a84;
          FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_BODY_OPTION",&DAT_71042b2a84);
          pppppplVar27 = *ppppppplVar36;
          if (*pppppplVar27 != (long *****)0x0) {
            pppplVar19 = (long ****)&DAT_71042b2a84;
            FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_STATE_OPTION",&DAT_71042b2a84);
            pppppplVar27 = *ppppppplVar36;
            if (*pppppplVar27 != (long *****)0x0) {
              pppplVar19 = (long ****)&DAT_71042b2a84;
              FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_WEIGHT",&DAT_71042b2a84);
              pppppplVar27 = *ppppppplVar36;
              if (*pppppplVar27 != (long *****)0x0) {
                pppplVar19 = (long ****)&DAT_71042b2a84;
                FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_SPEED",&DAT_71042b2a84);
                pppppplVar27 = *ppppppplVar36;
                if (*pppppplVar27 != (long *****)0x0) {
                  pppplVar19 = (long ****)&DAT_71042b2a84;
                  FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_CAMERA",&DAT_71042b2a84);
                  pppppplVar27 = *ppppppplVar36;
                  if (*pppppplVar27 != (long *****)0x0) {
                    pppplVar19 = (long ****)&DAT_71042b2a84;
                    FUN_7103375650((long *)*pppppplVar27,"BUTTON_ID_OK",&DAT_71042b2a84);
                    pppppplVar27 = *ppppppplVar36;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uStack_c8 = (byte ***)&DAT_765f70735f6c656d;
  local_c0 = 0x635f73756f697261;
  local_b8 = 0x7461;
  uStack_b6 = 0x5f79726f6765;
  uStack_b0 = 0x6973;
  uStack_ac = 0;
  uStack_ae = 0x657a;
  uVar31 = 0x6d;
  pbVar29 = (byte *)((long)&uStack_c8 + 1);
  uVar32 = uVar39;
  do {
    uVar32 = uVar32 * 0x89 ^ uVar31;
    uVar31 = (uint)*pbVar29;
    pbVar29 = pbVar29 + 1;
  } while (uVar31 != 0);
  local_d0 = (long ********)CONCAT44(0x1c,uVar32);
  if (*pppppplVar27 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042d5020;
    FUN_7103375650((long *)*pppppplVar27,"BODY_SIZE_TITLE_MSG",&DAT_71042d5020);
  }
  uStack_c8 = (byte ***)&DAT_765f70735f6c656d;
  local_c0 = 0x635f73756f697261;
  local_b8 = 0x7461;
  uStack_b6 = 0x5f79726f6765;
  uStack_b0 = 0x6568;
  uStack_ae = 0x6461;
  uVar31 = 0x6d;
  uStack_ac = 0;
  pbVar29 = (byte *)((long)&uStack_c8 + 1);
  uVar32 = uVar39;
  do {
    uVar32 = uVar32 * 0x89 ^ uVar31;
    uVar31 = (uint)*pbVar29;
    pbVar29 = pbVar29 + 1;
  } while (uVar31 != 0);
  local_d0 = (long ********)CONCAT44(0x1c,uVar32);
  if (**ppppppplVar36 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042d5020;
    FUN_7103375650((long *)**ppppppplVar36,"HEAD_OPTION_TITLE_MSG",&DAT_71042d5020);
  }
  uStack_c8 = (byte ***)&DAT_765f70735f6c656d;
  local_c0 = 0x635f73756f697261;
  local_b8 = 0x7461;
  uStack_b6 = 0x5f79726f6765;
  uStack_b0 = 0x7165;
  uVar31 = 0x6d;
  uStack_ae = 0x6975;
  uStack_ac = 0x70;
  uStack_ab = 0;
  pbVar29 = (byte *)((long)&uStack_c8 + 1);
  uVar32 = uVar39;
  do {
    uVar32 = uVar32 * 0x89 ^ uVar31;
    uVar31 = (uint)*pbVar29;
    pbVar29 = pbVar29 + 1;
  } while (uVar31 != 0);
  local_d0 = (long ********)CONCAT44(0x1d,uVar32);
  if (**ppppppplVar36 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042d5020;
    FUN_7103375650((long *)**ppppppplVar36,"BODY_OPTION_TITLE_MSG",&DAT_71042d5020);
  }
  uStack_c8 = (byte ***)&DAT_765f70735f6c656d;
  local_c0 = 0x635f73756f697261;
  local_b8 = 0x7461;
  uStack_b6 = 0x5f79726f6765;
  uStack_b0 = 0x7473;
  uVar31 = 0x6d;
  uStack_ae = 0x7461;
  uStack_ac = 0x65;
  uStack_ab = 0;
  pbVar29 = (byte *)((long)&uStack_c8 + 1);
  uVar32 = uVar39;
  do {
    uVar32 = uVar32 * 0x89 ^ uVar31;
    uVar31 = (uint)*pbVar29;
    pbVar29 = pbVar29 + 1;
  } while (uVar31 != 0);
  local_d0 = (long ********)CONCAT44(0x1d,uVar32);
  if (**ppppppplVar36 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042d5020;
    FUN_7103375650((long *)**ppppppplVar36,"STATE_OPTION_TITLE_MSG",&DAT_71042d5020);
  }
  uStack_c8 = (byte ***)&DAT_765f70735f6c656d;
  local_c0 = 0x635f73756f697261;
  local_b8 = 0x7461;
  uStack_b6 = 0x5f79726f6765;
  uStack_b0 = 0x6577;
  uStack_ae = 0x6769;
  uStack_ac = 0x68;
  uStack_ab = 0x74;
  uVar31 = 0x6d;
  uStack_aa = 0;
  pbVar29 = (byte *)((long)&uStack_c8 + 1);
  uVar32 = uVar39;
  do {
    uVar32 = uVar32 * 0x89 ^ uVar31;
    uVar31 = (uint)*pbVar29;
    pbVar29 = pbVar29 + 1;
  } while (uVar31 != 0);
  local_d0 = (long ********)CONCAT44(0x1e,uVar32);
  if (**ppppppplVar36 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042d5020;
    FUN_7103375650((long *)**ppppppplVar36,"WEIGHT_TITLE_MSG",&DAT_71042d5020);
  }
  uStack_c8 = (byte ***)&DAT_765f70735f6c656d;
  local_c0 = 0x635f73756f697261;
  local_b8 = 0x7461;
  uStack_b6 = 0x5f79726f6765;
  uStack_b0 = 0x7073;
  uVar31 = 0x6d;
  uStack_ae = 0x6565;
  uStack_ac = 100;
  uStack_ab = 0;
  pbVar29 = (byte *)((long)&uStack_c8 + 1);
  uVar32 = uVar39;
  do {
    uVar32 = uVar32 * 0x89 ^ uVar31;
    uVar31 = (uint)*pbVar29;
    pbVar29 = pbVar29 + 1;
  } while (uVar31 != 0);
  local_d0 = (long ********)CONCAT44(0x1d,uVar32);
  if (**ppppppplVar36 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042d5020;
    FUN_7103375650((long *)**ppppppplVar36,"SPEED_TITLE_MSG",&DAT_71042d5020);
  }
  uStack_c8 = (byte ***)&DAT_765f70735f6c656d;
  local_c0 = 0x635f73756f697261;
  local_b8 = 0x7461;
  uStack_b6 = 0x5f79726f6765;
  uStack_b0 = 0x6163;
  ppppbVar20 = (byte ****)&uStack_c8;
  uStack_ae = 0x656d;
  uStack_ac = 0x72;
  uStack_ab = 0x61;
  uVar32 = 0x6d;
  uStack_aa = 0;
  pbVar29 = (byte *)((long)&uStack_c8 + 1);
  do {
    uVar39 = uVar39 * 0x89 ^ uVar32;
    uVar32 = (uint)*pbVar29;
    pbVar29 = pbVar29 + 1;
  } while (uVar32 != 0);
  local_d0 = (long ********)CONCAT44(0x1e,uVar39);
  if (**ppppppplVar36 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042d5020;
    FUN_7103375650((long *)**ppppppplVar36,"CAMERA_TITLE_MSG",&DAT_71042d5020);
  }
  pppppplVar27 = *ppppppplVar36;
  if (*pppppplVar27 != (long *****)0x0) {
    pppplVar19 = (long ****)&DAT_71042b2a84;
    ppppbVar20 = (byte ****)0x3;
    FUN_7103375650((long *)*pppppplVar27,"BODY_SIZE_BUTTON_NUM",&DAT_71042b2a84);
    pppppplVar27 = *ppppppplVar36;
    if (*pppppplVar27 != (long *****)0x0) {
      pppplVar19 = (long ****)&DAT_71042b2a84;
      ppppbVar20 = (byte ****)0x3;
      FUN_7103375650((long *)*pppppplVar27,"HEAD_OPTION_BUTTON_NUM",&DAT_71042b2a84);
      pppppplVar27 = *ppppppplVar36;
      if (*pppppplVar27 != (long *****)0x0) {
        pppplVar19 = (long ****)&DAT_71042b2a84;
        ppppbVar20 = (byte ****)&DAT_00000007;
        FUN_7103375650((long *)*pppppplVar27,"BODY_OPTION_BUTTON_NUM",&DAT_71042b2a84);
        pppppplVar27 = *ppppppplVar36;
        if (*pppppplVar27 != (long *****)0x0) {
          pppplVar19 = (long ****)&DAT_71042b2a84;
          ppppbVar20 = (byte ****)0x3;
          FUN_7103375650((long *)*pppppplVar27,"STATE_OPTION_BUTTON_NUM",&DAT_71042b2a84);
          pppppplVar27 = *ppppppplVar36;
          if (*pppppplVar27 != (long *****)0x0) {
            pppplVar19 = (long ****)&DAT_71042b2a84;
            ppppbVar20 = (byte ****)0x3;
            FUN_7103375650((long *)*pppppplVar27,"WEIGHT_BUTTON_NUM",&DAT_71042b2a84);
            pppppplVar27 = *ppppppplVar36;
            if (*pppppplVar27 != (long *****)0x0) {
              pppplVar19 = (long ****)&DAT_71042b2a84;
              ppppbVar20 = (byte ****)0x3;
              FUN_7103375650((long *)*pppppplVar27,"SPEED_BUTTON_NUM",&DAT_71042b2a84);
              pppppplVar27 = *ppppppplVar36;
              if (*pppppplVar27 != (long *****)0x0) {
                pppplVar19 = (long ****)&DAT_71042b2a84;
                ppppbVar20 = (byte ****)0x3;
                FUN_7103375650((long *)*pppppplVar27,"CAMERA_BUTTON_NUM",&DAT_71042b2a84);
                pppppplVar27 = *ppppppplVar36;
                if (*pppppplVar27 != (long *****)0x0) {
                  pppplVar19 = (long ****)&DAT_71042b2a84;
                  ppppbVar20 = (byte ****)0x0;
                  FUN_7103375650((long *)*pppppplVar27,"CAMERA_NORMAL",&DAT_71042b2a84);
                  pppppplVar27 = *ppppppplVar36;
                  if (*pppppplVar27 != (long *****)0x0) {
                    pppplVar19 = (long ****)&DAT_71042b2a84;
                    ppppbVar20 = (byte ****)0x1;
                    FUN_7103375650((long *)*pppppplVar27,"CAMERA_FIX",&DAT_71042b2a84);
                    pppppplVar27 = *ppppppplVar36;
                    if (*pppppplVar27 != (long *****)0x0) {
                      pppplVar19 = (long ****)&DAT_71042b2a84;
                      ppppbVar20 = (byte ****)0x2;
                      FUN_7103375650((long *)*pppppplVar27,"CAMERA_LOOK_DOWN",&DAT_71042b2a84);
                      pppppplVar27 = *ppppppplVar36;
                      if (*pppppplVar27 != (long *****)0x0) {
                        pppplVar19 = (long ****)&DAT_71042b2a84;
                        ppppbVar20 = (byte ****)0x6;
                        FUN_7103375650((long *)*pppppplVar27,"BUTTON_EX_LEFT",&DAT_71042b2a84);
                        pppppplVar27 = *ppppppplVar36;
                        if (*pppppplVar27 != (long *****)0x0) {
                          pppplVar19 = (long ****)&DAT_71042b2a84;
                          ppppbVar20 = (byte ****)&DAT_00000007;
                          FUN_7103375650((long *)*pppppplVar27,"BUTTON_EX_RIGHT",&DAT_71042b2a84);
                          pppppplVar27 = *ppppppplVar36;
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
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar19,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_138 = (long ***)((ulong)local_138 & 0xffffffff00000000);
      local_d0 = (long ********)&DAT_00000028;
      pppplVar25 = (long ****)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
      if (((uVar6 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar25,ppppbVar20,pppplVar21,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_7101877fb8;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_7101877fb8:
  *ppplVar14 = (long **)&PTR_FUN_71050ad338;
  ppplVar14[4] = (long **)0x0;
  ppplVar14[2] = (long **)ppppppplVar34;
  ppplVar14[3] = (long **)FUN_7101c2bc00;
  *(undefined4 *)(ppplVar14 + 1) = 0;
  pppplVar25 = &local_138;
  local_138 = ppplVar14;
  FUN_7103376af0((long)pppppplVar27,(byte *)"get_sub_selector_item_text",pppplVar25,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  ppplVar14 = local_138;
  local_138 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar27 = *ppppppplVar36;
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar25,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70._4_4_ << 0x20);
      local_d0 = (long ********)&DAT_00000028;
      pppplVar25 = (long ****)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar6 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar25,ppppbVar20,pppplVar21,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_7101878060;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_7101878060:
  *ppplVar14 = (long **)&PTR_FUN_71050ad338;
  ppplVar14[2] = (long **)ppppppplVar34;
  ppplVar14[3] = (long **)FUN_7101c2ce40;
  ppplVar14[4] = (long **)0x0;
  pppplVar25 = (long ****)&local_70;
  *(undefined4 *)(ppplVar14 + 1) = 0;
  local_70 = ppplVar14;
  FUN_7103376af0((long)pppppplVar27,(byte *)"set_rule_special",pppplVar25,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  ppplVar14 = local_70;
  local_70 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar27 = *ppppppplVar36;
  local_d0 = (long ********)
             FUN_710392e290(0x10,0x28,pppplVar25,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  if (local_d0 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = 0;
      local_d0 = (long ********)&DAT_00000028;
      pppplVar25 = (long ****)&local_d0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar6 & 1) != 0) &&
         (local_d0 = (long ********)
                     FUN_710392e290(0x10,0x28,pppplVar25,ppppbVar20,pppplVar21,param_6,param_7,
                                    param_8), local_d0 != (long ********)0x0)) goto LAB_7101878100;
    }
    local_d0 = (long ********)0x0;
  }
LAB_7101878100:
  *local_d0 = (long *******)&PTR_FUN_71050ad338;
  local_d0[2] = ppppppplVar34;
  local_d0[3] = (long *******)FUN_7101c2d000;
  local_d0[4] = (long *******)0x0;
  ppuVar18 = (undefined **)&local_d0;
  *(undefined4 *)(local_d0 + 1) = 0;
  FUN_7103376af0((long)pppppplVar27,(byte *)"get_help_text",(long ****)ppuVar18,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  pppppppplVar24 = local_d0;
  local_d0 = (long ********)0x0;
  uVar16 = extraout_x1_13;
  if (pppppppplVar24 != (long ********)0x0) {
    (*(code *)(*pppppppplVar24)[1])();
    uVar16 = extraout_x1_14;
  }
LAB_7101878148:
  puVar7[2] = &DAT_7105333600;
  uVar3 = DAT_7105333664;
  *(undefined4 *)(puVar7 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar7 + 0x6c) = uVar3;
  do {
    uVar39 = DAT_7105333650;
    cVar2 = '\x01';
    bVar1 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar1) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar39 & 1) != 0);
  puVar7[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar7;
  FUN_71032caea0((long)puVar7,uVar16,(long ****)ppuVar18,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  lVar10 = *(long *)(lVar5 + 0xc0);
  *(undefined8 **)(lVar5 + 0xc0) = puVar7;
  if (lVar10 != 0) {
    FUN_71032cad20(lVar10);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  local_138 = (long ***)0x0;
  DAT_71053055d4._0_1_ = 0;
  DAT_71053055d6._1_1_ = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_c0 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b6 = 0;
  uStack_b0 = 0;
  uStack_ae = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  local_d0 = (long ********)0x0;
  uStack_c8 = (byte ***)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = 0;
  local_128 = 0;
  lVar5 = *(long *)(DAT_710532f730 + 8);
  puVar15 = FUN_71032631a0(*(long *)(lVar5 + 0x168),0xedaf3c863);
  uVar6 = FUN_71032b23e0(*(long *)(*(long *)(lVar5 + 0x178) + 8),0x16d5030b51);
  lVar5 = *(long *)(DAT_710532f8b0 + 8);
  *(undefined1 **)(lVar5 + 0x148) = puVar15;
  *(undefined8 *)(lVar5 + 0x150) = 0x10000000000;
  *(undefined1 *)(lVar5 + 0x328) = 0;
  *(undefined8 *)(lVar5 + 0x158) = 0xffffffff;
  *(undefined8 *)(lVar5 + 0x160) = 0x1000c0b0a040303;
  *(undefined2 *)(lVar5 + 0x168) = 0x205;
  *(undefined1 *)(lVar5 + 0x16a) = 2;
  *(undefined4 *)(lVar5 + 0x16b) = 0x1010101;
  *(undefined8 *)(lVar5 + 0x16f) = 0xc0b0a03030404;
  *(undefined8 *)(lVar5 + 0x177) = 0x101010102020501;
  *(undefined2 *)(lVar5 + 0x17f) = 0xd0d;
  *(undefined4 *)(lVar5 + 0x181) = 0x20304;
  *(undefined2 *)(lVar5 + 0x185) = 0x102;
  *(undefined8 *)(lVar5 + 0x187) = 0x1000001010101;
  *(byte ****)(lVar5 + 0x197) = uStack_c8;
  *(undefined8 *)(lVar5 + 0x1b7) = local_a8;
  *(long *********)(lVar5 + 399) = local_d0;
  *(ulong *)(lVar5 + 0x1af) =
       CONCAT17(uStack_a9,
                CONCAT16(uStack_aa,
                         CONCAT15(uStack_ab,CONCAT14(uStack_ac,CONCAT22(uStack_ae,uStack_b0)))));
  *(ulong *)(lVar5 + 0x1a7) = CONCAT62(uStack_b6,local_b8);
  *(undefined8 *)(lVar5 + 0x19f) = local_c0;
  *(undefined8 *)(lVar5 + 0x1bf) = local_a0;
  *(undefined8 *)(lVar5 + 0x1cf) = local_90;
  *(undefined8 *)(lVar5 + 0x1c7) = local_98;
  *(undefined8 *)(lVar5 + 0x1d7) = local_88;
  *(undefined1 *)(lVar5 + 0x1e7) = local_78;
  *(undefined8 *)(lVar5 + 0x1df) = uStack_80;
  *(undefined8 *)(lVar5 + 0x1e8) = 0x13ffff0000000000;
  *(undefined8 *)(lVar5 + 0x1f0) = 0x5affff0000000000;
  *(undefined2 *)(lVar5 + 0x1fc) = local_d4;
  *(undefined4 *)(lVar5 + 0x1f8) = local_d8;
  *(undefined1 **)(lVar5 + 0x200) = &DAT_c1ffff0000000000;
  *(undefined8 *)(lVar5 + 0x208) = 0x10000000003;
  *(undefined8 *)(lVar5 + 0x218) = 0x1000c0b0a040303;
  *(undefined2 *)(lVar5 + 0x220) = 0x205;
  *(undefined8 *)(lVar5 + 0x210) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0x222) = 2;
  *(undefined2 *)(lVar5 + 0x1fe) = local_dc;
  *(undefined4 *)(lVar5 + 0x223) = 0x1010101;
  *(undefined8 *)(lVar5 + 0x227) = 0xc0b0a03030404;
  *(undefined4 *)(lVar5 + 0x22f) = 0x2020501;
  *(undefined8 *)(lVar5 + 0x233) = 0x3040d0d01010101;
  *(undefined8 *)(lVar5 + 0x23b) = 0x101010101020002;
  *(undefined4 *)(lVar5 + 0x243) = 0;
  *(undefined8 *)(lVar5 + 0x25f) = local_120;
  *(undefined8 *)(lVar5 + 599) = local_128;
  *(undefined8 *)(lVar5 + 0x24f) = local_130;
  *(long ****)(lVar5 + 0x247) = local_138;
  *(undefined8 *)(lVar5 + 0x27f) = local_100;
  *(undefined8 *)(lVar5 + 0x277) = local_108;
  *(undefined8 *)(lVar5 + 0x26f) = local_110;
  *(undefined8 *)(lVar5 + 0x267) = local_118;
  *(undefined8 *)(lVar5 + 0x297) = local_e8;
  *(undefined1 *)(lVar5 + 0x29f) = local_e0;
  *(undefined8 *)(lVar5 + 0x28f) = local_f0;
  *(undefined8 *)(lVar5 + 0x287) = local_f8;
  *(undefined8 *)(lVar5 + 0x2a0) = 0x13ffff0000000000;
  *(undefined8 *)(lVar5 + 0x2a8) = 0x5affff0000000000;
  *(undefined2 *)(lVar5 + 0x2b4) = 0;
  *(undefined4 *)(lVar5 + 0x2b0) = 0;
  *(undefined1 *)(lVar5 + 0x2b8) = 2;
  *(undefined2 *)(lVar5 + 0x2b6) = 0;
  *(undefined2 *)(lVar5 + 0x2bd) = local_70._4_2_;
  *(undefined4 *)(lVar5 + 0x2b9) = (undefined4)local_70;
  *(undefined1 *)(lVar5 + 0x2bf) = local_70._6_1_;
  *(ulong *)(lVar5 + 0x2c0) = uVar6;
  *(undefined2 *)(lVar5 + 0x2c8) = 0;
  *(undefined1 *)(lVar5 + 0x2ca) = 0;
  *(undefined8 *)(lVar5 + 0x2cc) = 0x100000100000010;
  iVar4 = *(int *)(lVar5 + 0x138);
  *(undefined1 *)(lVar5 + 0x2d4) = 1;
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x130) = 0;
  *(undefined8 *)(lVar5 + 0x120) = 0;
  *(undefined8 *)(lVar5 + 0x128) = 0;
  *(undefined4 *)(lVar5 + 0x138) = 0xffffffff;
  *(undefined4 *)(lVar5 + 0x13c) = 0;
  *(undefined4 *)(lVar5 + 0x140) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0x144) = 0;
  *(undefined4 *)(lVar5 + 0x134) = 1;
  *(undefined4 *)(lVar5 + 0xe8) = 3;
  *(undefined4 *)(lVar5 + 0xec) = 1;
  *(undefined8 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x118) = 0;
  *(undefined8 *)(lVar5 + 0x100) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0;
  *(undefined8 *)(lVar5 + 0xf0) = 0;
  *(undefined8 *)(lVar5 + 0xf8) = 0;
  if (iVar4 != 0) {
    *(undefined8 *)(lVar5 + 0xf0) = 0x800000009;
    *(undefined4 *)(lVar5 + 0x134) = 4;
    *(undefined4 *)(lVar5 + 0xf8) = 4;
  }
  return;
}

