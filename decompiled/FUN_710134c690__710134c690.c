// addr:      710134c690
// offset:    0x134c690
// name:      FUN_710134c690
// mangled:   
// signature: undefined __cdecl FUN_710134c690(undefined8 param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710134e71c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710134c690(undefined8 param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
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
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  undefined8 extraout_x1_47;
  undefined8 extraout_x1_48;
  undefined8 extraout_x1_49;
  undefined8 uVar12;
  undefined8 extraout_x1_50;
  undefined8 extraout_x1_51;
  undefined8 extraout_x1_52;
  undefined8 extraout_x1_53;
  long *********ppppppppplVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  int iVar17;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  undefined4 *puVar21;
  ulong *puVar22;
  int *piVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong *puVar27;
  uint *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined **local_a8;
  long *local_a0;
  ulong *local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  std::recursive_mutex::lock();
  uVar12 = extraout_x1;
  if ((DAT_71052c51da != '\0') && (DAT_71052c35a8 != (long *)0x0)) {
    (**(code **)(*DAT_71052c35a8 + 8))();
    DAT_71052c35a8 = (long *)0x0;
    uVar12 = extraout_x1_00;
  }
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), uVar12 = extraout_x1_50, iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar12 = extraout_x1_51;
  }
  lVar26 = DAT_71052c50f0;
  if (((DAT_71052c51b6 == '\0') && (DAT_71052c51b0 - 1 < 0x25)) &&
     ((0x1800fee495U >> ((ulong)(DAT_71052c51b0 - 1) & 0x3f) & 1) != 0)) {
    *(undefined4 *)(DAT_71052c50f0 + 8) = 0;
    *(undefined1 *)(lVar26 + 0x5a7) = 0;
    *(undefined4 *)(lVar26 + 0x5a8) = 0xffffffff;
    FUN_7101756470(*DAT_71052c50f8,0);
    uVar12 = extraout_x1_01;
  }
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), uVar12 = extraout_x1_52, iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar12 = extraout_x1_53;
  }
  if (DAT_71052c51b6 == '\0') {
    uVar19 = DAT_71052c51b0 - 1;
    if ((uVar19 < 0x25) && ((0x1801fee495U >> ((ulong)uVar19 & 0x3f) & 1) != 0))
    goto LAB_710134c7ac;
  }
  else if (DAT_71052c51b0 == 0x19) {
LAB_710134c7ac:
    FUN_71016d5cd0((long **)DAT_71052c4d08[1],uVar12,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = extraout_x1_02;
    if (DAT_71052c4d08 != (long *)0x0) {
      (**(code **)(*DAT_71052c4d08 + 8))();
      DAT_71052c4d08 = (long *)0x0;
      uVar12 = extraout_x1_03;
    }
  }
  if (DAT_71052b9390 != (long *)0x0) {
    param_3 = (undefined **)&DAT_ffffffff;
    FUN_710056c130((long)DAT_71052b9390,1,-1);
    uVar12 = extraout_x1_04;
    if (DAT_71052b9390 != (long *)0x0) {
      (**(code **)(*DAT_71052b9390 + 8))();
      DAT_71052b9390 = (long *)0x0;
      uVar12 = extraout_x1_05;
    }
  }
  if (lib::Singleton<app::BossManager>::instance_ != (long *)0x0) {
    (**(code **)(*lib::Singleton<app::BossManager>::instance_ + 8))();
    lib::Singleton<app::BossManager>::instance_ = (long *)0x0;
    uVar12 = extraout_x1_06;
  }
  if (lib::Singleton<app::ItemManager>::instance_ != (long *)0x0) {
    FUN_71015d4420(lib::Singleton<app::ItemManager>::instance_,uVar12,(long *********)param_3,
                   param_4,param_5,param_6,param_7,param_8);
    lVar20 = *DAT_71052c4498;
    FUN_7101609cc0(lVar20,extraout_x1_07,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_7101609e10(lVar20,extraout_x1_08,(long *********)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    lVar26 = 0;
    uVar12 = extraout_x1_09;
    do {
      piVar23 = (int *)(lVar20 + lVar26 * 0xf0 + 0x28);
      iVar7 = *piVar23;
      if (0 < iVar7) {
        do {
          FUN_7101609f20(piVar23,uVar12,(long *********)param_3,param_4,param_5,param_6,param_7,
                         param_8);
          iVar7 = iVar7 + -1;
          uVar12 = extraout_x1_10;
        } while (iVar7 != 0);
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x1b0);
  }
  lVar26 = DAT_71052c50f0;
  local_80 = &local_78;
  *(undefined8 *)(DAT_71052c50f0 + 0x2b0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar26 + 0x2a8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar26 + 0x2a0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar26 + 0x298) = 0xffffffffffffffff;
  *(undefined8 *)(lVar26 + 0x2f0) = 0;
  *(undefined8 *)(lVar26 + 0x2e8) = 0;
  *(undefined8 *)(lVar26 + 0x2e0) = 0;
  *(undefined8 *)(lVar26 + 0x2d8) = 0;
  *(undefined8 *)(lVar26 + 0x2d0) = 0;
  *(undefined8 *)(lVar26 + 0x2c8) = 0;
  *(undefined8 *)(lVar26 + 0x2c0) = 0;
  *(undefined8 *)(lVar26 + 0x2b8) = 0;
  local_78 = 0;
  local_a8 = &PTR_FUN_710509e5c8;
  local_a0 = (long *)0x3;
  local_98 = (ulong *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)(*(long *)(lVar26 + 0x2f8) + 0x18))(lVar26 + 0x2f8,&local_a8);
  (**(code **)(*(long *)(lVar26 + 0x340) + 0x18))(lVar26 + 0x340,&local_a8);
  (**(code **)(*(long *)(lVar26 + 0x388) + 0x18))(lVar26 + 0x388,&local_a8);
  (**(code **)(*(long *)(lVar26 + 0x3d0) + 0x18))(lVar26 + 0x3d0,&local_a8);
  (**(code **)(*(long *)(lVar26 + 0x418) + 0x18))(lVar26 + 0x418,&local_a8);
  (**(code **)(*(long *)(lVar26 + 0x460) + 0x18))(lVar26 + 0x460,&local_a8);
  (**(code **)(*(long *)(lVar26 + 0x4a8) + 0x18))(lVar26 + 0x4a8,&local_a8);
  (**(code **)(*(long *)(lVar26 + 0x4f0) + 0x18))(lVar26 + 0x4f0,&local_a8);
  *(undefined8 *)(lVar26 + 0x580) = 0;
  *(undefined8 *)(lVar26 + 0x578) = 0;
  *(undefined8 *)(lVar26 + 0x570) = 0;
  *(undefined8 *)(lVar26 + 0x568) = 0;
  *(undefined8 *)(lVar26 + 0x560) = 0;
  *(undefined8 *)(lVar26 + 0x558) = 0;
  *(undefined8 *)(lVar26 + 0x550) = 0;
  *(undefined8 *)(lVar26 + 0x548) = 0;
  *(undefined8 *)(lVar26 + 0x540) = 0;
  *(undefined8 *)(lVar26 + 0x538) = 0;
  FUN_7101755d30(*DAT_71052c50f8);
  *(undefined4 *)(lVar26 + 8) = 0;
  if ((DAT_710532f7b8 != 0) && (*(int *)(*(long *)(DAT_710532f7b8 + 8) + 0x98) != 0)) {
    lVar26 = *(long *)(*(long *)(*(long *)(DAT_710532f7b8 + 8) + 0xb0) + 0x80);
    uVar19 = *(uint *)(lVar26 + 0xd4);
    if (0x12 < uVar19) goto LAB_710134f5bc;
    *(undefined4 *)(lVar26 + (long)(int)uVar19 * 4 + 0x88) = 0;
  }
  ppppppppplVar13 = (long *********)&DAT_710453ef28;
  FUN_71014a34d0(*DAT_71052c3618,1,(ulong *)&DAT_710453ef28);
  FUN_71014a34d0(*DAT_71052c3618,2,(ulong *)&DAT_710453ef28);
  puVar25 = *(undefined8 **)(*DAT_71052c3618 + 0x50);
  plVar24 = DAT_71052c3618;
  for (puVar31 = *(undefined8 **)(*DAT_71052c3618 + 0x48); DAT_71052c3618 = plVar24,
      puVar31 != puVar25; puVar31 = puVar31 + 2) {
    (**(code **)(*(long *)*puVar31 + 0x18))();
    plVar24 = DAT_71052c3618;
  }
  if (plVar24 != (long *)0x0) {
    plVar8 = (long *)*plVar24;
    *plVar24 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    FUN_710392eb40((ulong)plVar24);
    DAT_71052c3618 = (long *)0x0;
  }
  puVar25 = *(undefined8 **)(*DAT_71052c33f0 + 0x30);
  plVar24 = DAT_71052c33f0;
  for (puVar31 = *(undefined8 **)(*DAT_71052c33f0 + 0x28); DAT_71052c33f0 = plVar24,
      puVar31 != puVar25; puVar31 = puVar31 + 2) {
    (**(code **)(*(long *)*puVar31 + 0x18))();
    plVar24 = DAT_71052c33f0;
  }
  if (plVar24 != (long *)0x0) {
    plVar8 = (long *)*plVar24;
    *plVar24 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    FUN_710392eb40((ulong)plVar24);
    DAT_71052c33f0 = (long *)0x0;
  }
  puVar25 = *(undefined8 **)(*DAT_71052c33e8 + 0x30);
  plVar24 = DAT_71052c33e8;
  for (puVar31 = *(undefined8 **)(*DAT_71052c33e8 + 0x28); DAT_71052c33e8 = plVar24,
      puVar31 != puVar25; puVar31 = puVar31 + 2) {
    (**(code **)(*(long *)*puVar31 + 0x18))();
    plVar24 = DAT_71052c33e8;
  }
  if (plVar24 != (long *)0x0) {
    plVar8 = (long *)*plVar24;
    *plVar24 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    FUN_710392eb40((ulong)plVar24);
    DAT_71052c33e8 = (long *)0x0;
  }
  if (DAT_71052c3420 != (long *)0x0) {
    (**(code **)(*DAT_71052c3420 + 8))();
    DAT_71052c3420 = (long *)0x0;
  }
  if (DAT_71052b8808 != (long *)0x0) {
    (**(code **)(*DAT_71052b8808 + 8))();
    DAT_71052b8808 = (long *)0x0;
  }
  puVar31 = (undefined8 *)*lib::Singleton<app::BattleObjectManager>::instance_;
  if (puVar31[0x11] != 0) {
    lVar26 = puVar31[0xf];
    plVar24 = (long *)puVar31[0x10];
    *(undefined8 *)(*plVar24 + 8) = *(undefined8 *)(lVar26 + 8);
    **(long **)(lVar26 + 8) = *plVar24;
    puVar31[0x11] = 0;
    while (plVar8 = plVar24, plVar8 != puVar31 + 0xf) {
      plVar24 = (long *)plVar8[1];
      if (plVar8 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar8);
      }
    }
  }
  (**(code **)(*(long *)*puVar31 + 0x48))((long *)*puVar31,0);
  puVar25 = DAT_71052b8548;
  *DAT_71052b8548 = 0;
  puVar25[3] = 0;
  puVar25[4] = 0;
  puVar25[1] = 0;
  puVar25[2] = 0;
  lVar26 = puVar31[0x15];
  uVar12 = extraout_x1_11;
  if (lVar26 != 0) {
    if (*(long *)(lVar26 + -8) != 0) {
      lVar20 = *(long *)(lVar26 + -8) * 0xf940;
      do {
        FUN_7100614470((undefined8 *)(lVar26 + -0xf940 + lVar20),uVar12,ppppppppplVar13,param_4,
                       param_5,param_6,param_7,param_8);
        lVar20 = lVar20 + -0xf940;
        uVar12 = extraout_x1_12;
      } while (lVar20 != 0);
    }
    FUN_710392eb40(lVar26 - 0x10);
    uVar12 = extraout_x1_13;
    if (puVar31[0x16] != 0) {
      FUN_710392eb40(puVar31[0x16]);
      uVar12 = extraout_x1_14;
    }
    *(undefined4 *)(puVar31 + 0x17) = 0;
    puVar31[0x15] = 0;
    puVar31[0x16] = 0;
  }
  lVar26 = puVar31[0x1d];
  if (lVar26 != 0) {
    if (*(long *)(lVar26 + -8) != 0) {
      lVar20 = *(long *)(lVar26 + -8) * 0x3c30;
      do {
        FUN_71033a3d80((undefined8 *)(lVar26 + -0x3c30 + lVar20));
        lVar20 = lVar20 + -0x3c30;
      } while (lVar20 != 0);
    }
    FUN_710392eb40(lVar26 - 0x10);
    uVar12 = extraout_x1_15;
    if (puVar31[0x1e] != 0) {
      FUN_710392eb40(puVar31[0x1e]);
      uVar12 = extraout_x1_16;
    }
    *(undefined4 *)(puVar31 + 0x1f) = 0;
    puVar31[0x1d] = 0;
    puVar31[0x1e] = 0;
  }
  lVar26 = puVar31[0x25];
  if (lVar26 != 0) {
    lVar20 = *(long *)(lVar26 + -8);
    if (lVar20 != 0) {
      lVar32 = lVar20 * -0x60c0;
      puVar25 = (undefined8 *)(lVar26 + lVar20 * 0x60c0);
      do {
        puVar29 = puVar25 + -0xc18;
        *puVar29 = &PTR_FUN_7104f76bb0;
        FUN_7100571be0(puVar25 + -0xc0a);
        *puVar29 = &PTR_FUN_7104f627a0;
        std::recursive_mutex::~recursive_mutex((recursive_mutex *)(puVar25 + -0xc10));
        lVar32 = lVar32 + 0x60c0;
        puVar25 = puVar29;
      } while (lVar32 != 0);
    }
    FUN_710392eb40(lVar26 - 0x10);
    uVar12 = extraout_x1_17;
    if (puVar31[0x26] != 0) {
      FUN_710392eb40(puVar31[0x26]);
      uVar12 = extraout_x1_18;
    }
    *(undefined4 *)(puVar31 + 0x27) = 0;
    puVar31[0x25] = 0;
    puVar31[0x26] = 0;
  }
  lVar26 = puVar31[0x2d];
  if (lVar26 != 0) {
    uVar14 = lVar26 - 0x10;
    if (*(long *)(lVar26 + -8) != 0) {
      lVar20 = 0;
      lVar32 = *(long *)(lVar26 + -8) * 0x300;
      do {
        lVar1 = lVar26 + lVar32;
        *(undefined8 *)(lVar1 + -0x300) = &PTR_FUN_71051784b0;
        uVar9 = *(ulong *)(lVar1 + -0x50);
        *(ulong *)(lVar1 + -0x48) = uVar9;
        if (uVar9 != 0) {
          *(ulong *)(lVar1 + -0x48) = uVar9;
          FUN_710392eb40(uVar9);
        }
        if (*(char *)(lVar1 + -0x60) != '\0') {
          *(undefined1 *)(lVar1 + -0x60) = 0;
        }
        *(undefined8 *)(lVar1 + -0x298) = &PTR_FUN_7105178b28;
        plVar24 = *(long **)(lVar1 + -0x68);
        *(undefined8 *)(lVar1 + -0x68) = 0;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 8))();
        }
        plVar24 = *(long **)(lVar1 + -0xa8);
        *(undefined8 *)(lVar1 + -0xa8) = 0;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 8))();
        }
        *(undefined ***)(lVar1 + -0xe8) = &PTR_FUN_7105178b70;
        if (*(ulong *)(lVar1 + -0xd0) != 0) {
          FUN_710392eb40(*(ulong *)(lVar1 + -0xd0));
        }
        *(undefined8 *)(lVar1 + -0x298) = &PTR_FUN_7104f68ed8;
        FUN_71037ae5e0((undefined4 *)(lVar1 + -0x288));
        *(undefined8 *)(lVar1 + -0x300) = &PTR_FUN_7104f627a0;
        std::recursive_mutex::~recursive_mutex((recursive_mutex *)(lVar1 + -0x2c0));
        lVar20 = lVar20 + 0x300;
        lVar26 = lVar26 + -0x300;
      } while (lVar32 - lVar20 != 0);
    }
    FUN_710392eb40(uVar14);
    uVar12 = extraout_x1_19;
    if (puVar31[0x2e] != 0) {
      FUN_710392eb40(puVar31[0x2e]);
      uVar12 = extraout_x1_20;
    }
    *(undefined4 *)(puVar31 + 0x2f) = 0;
    puVar31[0x2d] = 0;
    puVar31[0x2e] = 0;
  }
  lVar26 = puVar31[0x35];
  if (lVar26 != 0) {
    if (*(long *)(lVar26 + -8) != 0) {
      lVar20 = *(long *)(lVar26 + -8) * 0x2b0;
      do {
        FUN_71015a6af0((undefined8 *)(lVar26 + lVar20 + -0x2b0));
        lVar20 = lVar20 + -0x2b0;
      } while (lVar20 != 0);
    }
    FUN_710392eb40(lVar26 - 0x10);
    uVar12 = extraout_x1_21;
    if (puVar31[0x36] != 0) {
      FUN_710392eb40(puVar31[0x36]);
      uVar12 = extraout_x1_22;
    }
    *(undefined4 *)(puVar31 + 0x37) = 0;
    puVar31[0x35] = 0;
    puVar31[0x36] = 0;
  }
  *(undefined1 *)(puVar31[0x12] + 0x70) = 1;
  puVar22 = lib::Singleton<app::BattleObjectManager>::instance_;
  if (lib::Singleton<app::BattleObjectManager>::instance_ != (ulong *)0x0) {
    plVar24 = (long *)*lib::Singleton<app::BattleObjectManager>::instance_;
    lVar26 = plVar24[0x12];
    if ((lVar26 != 0) && (*(undefined8 **)(lVar26 + 0x10) == &DAT_71053330d8)) {
      *(undefined1 *)(lVar26 + 0x70) = 2;
    }
    puVar31 = DAT_71052b85e8;
    if (DAT_71052b85e8 != (undefined8 *)0x0) {
      puVar27 = (ulong *)*DAT_71052b85e8;
      *DAT_71052b85e8 = 0;
      if (puVar27 != (ulong *)0x0) {
        uVar14 = *puVar27;
        if (uVar14 != 0) {
          puVar27[1] = uVar14;
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40((ulong)puVar27);
      }
      FUN_710392eb40((ulong)puVar31);
      DAT_71052b85e8 = (undefined8 *)0x0;
    }
    puVar27 = DAT_71052b8a30;
    if (DAT_71052b8a30 != (ulong *)0x0) {
      std::mutex::~mutex((mutex *)(DAT_71052b8a30 + 5));
      puVar16 = (ulong *)puVar27[2];
      while (puVar16 != (ulong *)0x0) {
        uVar14 = *puVar16;
        plVar8 = (long *)puVar16[4];
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            lVar26 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar26 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_710392eb40((ulong)puVar16);
        puVar16 = (ulong *)uVar14;
      }
      uVar14 = *puVar27;
      *puVar27 = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40((ulong)puVar27);
      DAT_71052b8a30 = (ulong *)0x0;
    }
    if (lib::Singleton<app::BattleObjectSlow>::instance_ != 0) {
      FUN_710392eb40(lib::Singleton<app::BattleObjectSlow>::instance_);
      lib::Singleton<app::BattleObjectSlow>::instance_ = 0;
    }
    uVar14 = lib::Singleton<app::BattleObjectWorld>::instance_;
    if (lib::Singleton<app::BattleObjectWorld>::instance_ != 0) {
      uVar9 = *(ulong *)(lib::Singleton<app::BattleObjectWorld>::instance_ + 0x60);
      *(undefined8 *)(lib::Singleton<app::BattleObjectWorld>::instance_ + 0x60) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_71037ae5e0((undefined4 *)(uVar14 + 0x38));
      FUN_710392eb40(uVar14);
      lib::Singleton<app::BattleObjectWorld>::instance_ = 0;
    }
    plVar8 = DAT_71052b8540;
    if ((long *)*DAT_71052b8540 != (long *)0x0) {
      (**(code **)(*(long *)*DAT_71052b8540 + 8))();
    }
    lVar26 = plVar8[1];
    *plVar8 = 0;
    lVar20 = plVar8[2];
    while (lVar32 = lVar20, lVar32 != lVar26) {
      uVar14 = *(ulong *)(lVar32 + -0x38);
      lVar20 = lVar32 + -0x40;
      if (uVar14 != 0) {
        *(ulong *)(lVar32 + -0x30) = uVar14;
        FUN_710392eb40(uVar14);
      }
    }
    plVar8[2] = lVar26;
    plVar8 = DAT_71052b8540;
    if (DAT_71052b8540 != (long *)0x0) {
      puVar27 = (ulong *)DAT_71052b8540[4];
      DAT_71052b8540[4] = 0;
      if (puVar27 != (ulong *)0x0) {
        puVar16 = (ulong *)puVar27[2];
        while (puVar16 != (ulong *)0x0) {
          uVar14 = *puVar16;
          FUN_710392eb40((ulong)puVar16);
          puVar16 = (ulong *)uVar14;
        }
        uVar14 = *puVar27;
        *puVar27 = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40((ulong)puVar27);
      }
      uVar14 = plVar8[1];
      if (uVar14 != 0) {
        uVar9 = plVar8[2];
        if (plVar8[2] == uVar14) {
          plVar8[2] = uVar14;
          uVar9 = uVar14;
        }
        else {
          do {
            uVar10 = *(ulong *)(uVar9 - 0x38);
            uVar30 = uVar9 - 0x40;
            if (uVar10 != 0) {
              *(ulong *)(uVar9 - 0x30) = uVar10;
              FUN_710392eb40(uVar10);
            }
            uVar9 = uVar30;
          } while (uVar14 != uVar30);
          uVar9 = plVar8[1];
          plVar8[2] = uVar14;
        }
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
      }
      FUN_710392eb40((ulong)plVar8);
      DAT_71052b8540 = (long *)0x0;
    }
    FUN_71003af040(*lib::Singleton<app::BattleObjectManager>::instance_,plVar24[1]);
    FUN_71003af040(*lib::Singleton<app::BattleObjectManager>::instance_,plVar24[1] + 0x68);
    FUN_71003af040(*lib::Singleton<app::BattleObjectManager>::instance_,plVar24[1] + 0xd0);
    FUN_71003af040(*lib::Singleton<app::BattleObjectManager>::instance_,plVar24[1] + 0x138);
    FUN_71003af040(*lib::Singleton<app::BattleObjectManager>::instance_,plVar24[1] + 0x1a0);
    if (DAT_71052b8548 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)DAT_71052b8548);
      DAT_71052b8548 = (undefined8 *)0x0;
    }
    lVar26 = plVar24[1];
    if (lVar26 != 0) {
      lVar20 = *(long *)(lVar26 + -8);
      if (lVar20 != 0) {
        lVar20 = lVar20 * 0x68;
        do {
          *(undefined ***)(lVar26 + lVar20 + -0x68) = &PTR_FUN_7104f627a0;
          std::recursive_mutex::~recursive_mutex((recursive_mutex *)(lVar26 + lVar20 + -0x28));
          lVar20 = lVar20 + -0x68;
        } while (lVar20 != 0);
      }
      FUN_710392eb40((ulong)(lVar26 + -8));
    }
    if ((long *)*plVar24 != (long *)0x0) {
      (**(code **)(*(long *)*plVar24 + 0x348))();
    }
    uVar14 = *puVar22;
    *puVar22 = 0;
    if (uVar14 != 0) {
      *(undefined ***)(uVar14 + 0x1a0) = &PTR_FUN_7104f62e58;
      std::recursive_mutex::~recursive_mutex((recursive_mutex *)(uVar14 + 0x1c0));
      *(undefined ***)(uVar14 + 0x160) = &PTR_FUN_7104f62e18;
      std::recursive_mutex::~recursive_mutex((recursive_mutex *)(uVar14 + 0x180));
      *(undefined ***)(uVar14 + 0x120) = &PTR_FUN_7104f62dd8;
      std::recursive_mutex::~recursive_mutex((recursive_mutex *)(uVar14 + 0x140));
      *(undefined ***)(uVar14 + 0xe0) = &PTR_FUN_7104f62d98;
      std::recursive_mutex::~recursive_mutex((recursive_mutex *)(uVar14 + 0x100));
      *(undefined ***)(uVar14 + 0xa0) = &PTR_FUN_7104f62d58;
      std::recursive_mutex::~recursive_mutex((recursive_mutex *)(uVar14 + 0xc0));
      if (*(long *)(uVar14 + 0x88) != 0) {
        lVar26 = *(long *)(uVar14 + 0x78);
        plVar24 = *(long **)(uVar14 + 0x80);
        *(undefined8 *)(*plVar24 + 8) = *(undefined8 *)(lVar26 + 8);
        **(long **)(lVar26 + 8) = *plVar24;
        *(undefined8 *)(uVar14 + 0x88) = 0;
        while (plVar8 = plVar24, plVar8 != (long *)(uVar14 + 0x78)) {
          plVar24 = (long *)plVar8[1];
          if (plVar8 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar8);
          }
        }
      }
      FUN_71037ae5e0((undefined4 *)(uVar14 + 0x30));
      std::mutex::~mutex((mutex *)(uVar14 + 0x10));
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar22);
    lib::Singleton<app::BattleObjectManager>::instance_ = (ulong *)0x0;
    uVar12 = extraout_x1_23;
  }
  if (*(int *)(*lib::Singleton<app::StageManager>::instance_ + 0x17c) != -1) {
    FUN_7102606f60(*lib::Singleton<app::StageManager>::instance_);
    uVar12 = extraout_x1_24;
  }
  puVar22 = lib::Singleton<app::StageManager>::instance_;
  if (lib::Singleton<app::StageManager>::instance_ != (ulong *)0x0) {
    FUN_7102605ab0(lib::Singleton<app::StageManager>::instance_,uVar12,(long ****)ppppppppplVar13,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40((ulong)puVar22);
    lib::Singleton<app::StageManager>::instance_ = (ulong *)0x0;
    uVar12 = extraout_x1_25;
  }
  plVar8 = lib::Singleton<app::ItemManager>::instance_;
  piVar23 = (int *)DAT_71052c3598[1];
  plVar24 = DAT_71052c3598;
  if (*piVar23 != 0x50000000) {
    lVar26 = lib::Singleton<app::ItemManager>::instance_[2];
    lVar20 = lib::Singleton<app::ItemManager>::instance_[3];
    if (lVar20 != lVar26) {
      uVar14 = 0;
      do {
        plVar24 = *(long **)(lVar26 + uVar14 * 8);
        if ((plVar24 != (long *)0x0) && (*(int *)((long)plVar24 + 0xc) == 0x1a6)) {
          (**(code **)(*plVar24 + 0x520))(plVar24,0);
          lVar26 = plVar8[2];
          lVar20 = plVar8[3];
          uVar12 = extraout_x1_26;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulong)(lVar20 - lVar26 >> 3));
    }
    plVar24 = DAT_71052c3598;
    *piVar23 = 0x50000000;
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 8))();
    DAT_71052c3598 = (long *)0x0;
    uVar12 = extraout_x1_27;
  }
  puVar22 = DAT_71052c3790;
  if (DAT_71052c3790 != (ulong *)0x0) {
    uVar14 = *DAT_71052c3790;
    *DAT_71052c3790 = 0;
    if (uVar14 != 0) {
      puVar28 = *(uint **)(uVar14 + 0x20);
      *(undefined8 *)(uVar14 + 0x20) = 0;
      if (puVar28 != (uint *)0x0) {
        if (puVar28[6] != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,puVar28[6],ppppppppplVar13,param_4,param_5,param_6,param_7,
                         param_8);
          puVar28[6] = 0xffffff;
        }
        if (*puVar28 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,*puVar28,ppppppppplVar13,param_4,param_5,param_6,param_7,
                         param_8);
          *puVar28 = 0xffffff;
        }
        FUN_710392eb40((ulong)puVar28);
      }
      plVar24 = *(long **)(uVar14 + 8);
      if (plVar24 != (long *)0x0) {
        plVar8 = *(long **)(uVar14 + 0x10);
        if (plVar8 == plVar24) {
          *(long **)(uVar14 + 0x10) = plVar24;
          plVar8 = plVar24;
        }
        else {
          do {
            plVar8 = plVar8 + -1;
            plVar11 = (long *)*plVar8;
            *plVar8 = 0;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
          } while (plVar24 != plVar8);
          plVar8 = *(long **)(uVar14 + 8);
          *(long **)(uVar14 + 0x10) = plVar24;
        }
        if (plVar8 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar8);
        }
      }
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar22);
    DAT_71052c3790 = (ulong *)0x0;
    uVar12 = extraout_x1_28;
  }
  puVar22 = DAT_71052c3940;
  if (DAT_71052c3940 != (ulong *)0x0) {
    uVar14 = *DAT_71052c3940;
    *DAT_71052c3940 = 0;
    if (uVar14 != 0) {
      puVar28 = *(uint **)(uVar14 + 0x228);
      *(undefined8 *)(uVar14 + 0x228) = 0;
      if (puVar28 != (uint *)0x0) {
        if (puVar28[6] != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,puVar28[6],ppppppppplVar13,param_4,param_5,param_6,param_7,
                         param_8);
          puVar28[6] = 0xffffff;
        }
        if (*puVar28 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,*puVar28,ppppppppplVar13,param_4,param_5,param_6,param_7,
                         param_8);
          *puVar28 = 0xffffff;
        }
        FUN_710392eb40((ulong)puVar28);
      }
      uVar9 = *(ulong *)(uVar14 + 0x200);
      if (uVar9 != 0) {
        *(ulong *)(uVar14 + 0x208) = uVar9;
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar22);
    DAT_71052c3940 = (ulong *)0x0;
    uVar12 = extraout_x1_29;
  }
  puVar31 = DAT_71052c3948;
  if (DAT_71052c3948 != (undefined8 *)0x0) {
    puVar28 = (uint *)*DAT_71052c3948;
    *DAT_71052c3948 = 0;
    if (puVar28 != (uint *)0x0) {
      if (puVar28[6] != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,puVar28[6],ppppppppplVar13,param_4,param_5,param_6,param_7,
                       param_8);
        puVar28[6] = 0xffffff;
      }
      if (*puVar28 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,*puVar28,ppppppppplVar13,param_4,param_5,param_6,param_7,
                       param_8);
        *puVar28 = 0xffffff;
      }
      FUN_710392eb40((ulong)puVar28);
    }
    FUN_710392eb40((ulong)puVar31);
    DAT_71052c3948 = (undefined8 *)0x0;
    uVar12 = extraout_x1_30;
  }
  puVar31 = DAT_71052c3950;
  if (DAT_71052c3950 != (undefined8 *)0x0) {
    FUN_710158fe70(DAT_71052c3950,uVar12,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40((ulong)puVar31);
    DAT_71052c3950 = (undefined8 *)0x0;
  }
  plVar24 = DAT_71052c3938;
  if (DAT_71052c3938 != (long *)0x0) {
    plVar8 = (long *)*DAT_71052c3938;
    *DAT_71052c3938 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    FUN_710392eb40((ulong)plVar24);
    DAT_71052c3938 = (long *)0x0;
  }
  if (lib::Singleton<app::GimmickEventPresenter>::instance_ != 0) {
    FUN_710392eb40(lib::Singleton<app::GimmickEventPresenter>::instance_);
    lib::Singleton<app::GimmickEventPresenter>::instance_ = 0;
  }
  puVar31 = DAT_71052c3610;
  if (DAT_71052c3610 != (undefined8 *)0x0) {
    DAT_710523d138 = 0x3f800000;
    DAT_71052c3610[3] = 0;
    *puVar31 = &PTR_FUN_7105069d98;
    FUN_710392eb40((ulong)puVar31);
    DAT_71052c3610 = (undefined8 *)0x0;
  }
  plVar24 = DAT_71052b8800;
  if (DAT_71052b8800 != (long *)0x0) {
    if (DAT_71052b8800[0x23] != 0) {
      lVar26 = DAT_71052b8800[0x21];
      plVar8 = (long *)DAT_71052b8800[0x22];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0x23] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0x21) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0x20] != 0) {
      lVar26 = plVar24[0x1e];
      plVar8 = (long *)plVar24[0x1f];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0x20] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0x1e) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0x1d] != 0) {
      lVar26 = plVar24[0x1b];
      plVar8 = (long *)plVar24[0x1c];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0x1d] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0x1b) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0x1a] != 0) {
      lVar26 = plVar24[0x18];
      plVar8 = (long *)plVar24[0x19];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0x1a] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0x18) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0x17] != 0) {
      lVar26 = plVar24[0x15];
      plVar8 = (long *)plVar24[0x16];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0x17] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0x15) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0x14] != 0) {
      lVar26 = plVar24[0x12];
      plVar8 = (long *)plVar24[0x13];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0x14] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0x12) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0x11] != 0) {
      lVar26 = plVar24[0xf];
      plVar8 = (long *)plVar24[0x10];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0x11] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0xf) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0xe] != 0) {
      lVar26 = plVar24[0xc];
      plVar8 = (long *)plVar24[0xd];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0xe] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 0xc) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[0xb] != 0) {
      lVar26 = plVar24[9];
      plVar8 = (long *)plVar24[10];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[0xb] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 9) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[8] != 0) {
      lVar26 = plVar24[6];
      plVar8 = (long *)plVar24[7];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[8] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 6) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[5] != 0) {
      lVar26 = plVar24[3];
      plVar8 = (long *)plVar24[4];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[5] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24 + 3) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    if (plVar24[2] != 0) {
      lVar26 = *plVar24;
      plVar8 = (long *)plVar24[1];
      *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar26 + 8);
      **(long **)(lVar26 + 8) = *plVar8;
      plVar24[2] = 0;
      while (plVar11 = plVar8, plVar11 != plVar24) {
        plVar8 = (long *)plVar11[1];
        if (plVar11 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar11);
        }
      }
    }
    FUN_710392eb40((ulong)plVar24);
    DAT_71052b8800 = (long *)0x0;
  }
  if (DAT_71052b8620 != 0) {
    FUN_710392eb40(DAT_71052b8620);
    DAT_71052b8620 = 0;
  }
  uVar14 = DAT_71052b9290;
  if (DAT_71052b9290 != 0) {
    uVar9 = *(ulong *)(DAT_71052b9290 + 8);
    if (uVar9 != 0) {
      *(ulong *)(DAT_71052b9290 + 0x10) = uVar9;
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar14);
    DAT_71052b9290 = 0;
  }
  puVar22 = DAT_71052b85f8;
  plVar24 = (long *)DAT_71052b85f8[0x15];
  plVar8 = (long *)DAT_71052b85f8[0x16];
  if (plVar24 != plVar8) {
    do {
      if ((long *)*plVar24 != (long *)0x0) {
        (**(code **)(*(long *)*plVar24 + 8))();
      }
      plVar24 = plVar24 + 1;
    } while (plVar8 != plVar24);
    plVar24 = (long *)puVar22[0x15];
  }
  puVar22[0x16] = (ulong)plVar24;
  plVar24 = (long *)puVar22[0x18];
  plVar8 = (long *)puVar22[0x19];
  if (plVar24 != plVar8) {
    do {
      if ((long *)*plVar24 != (long *)0x0) {
        (**(code **)(*(long *)*plVar24 + 8))();
      }
      plVar24 = plVar24 + 1;
    } while (plVar8 != plVar24);
    plVar24 = (long *)puVar22[0x18];
  }
  puVar22[0x19] = (ulong)plVar24;
  plVar24 = (long *)puVar22[0x1b];
  plVar8 = (long *)puVar22[0x1c];
  if (plVar24 != plVar8) {
    do {
      if ((long *)*plVar24 != (long *)0x0) {
        (**(code **)(*(long *)*plVar24 + 8))();
      }
      plVar24 = plVar24 + 1;
    } while (plVar8 != plVar24);
    plVar24 = (long *)puVar22[0x1b];
  }
  puVar22[0x1c] = (ulong)plVar24;
  puVar22 = DAT_71052b85f8;
  if (DAT_71052b85f8 != (ulong *)0x0) {
    std::recursive_mutex::~recursive_mutex((recursive_mutex *)(DAT_71052b85f8 + 0x28));
    uVar14 = puVar22[0x25];
    if (uVar14 != 0) {
      if (puVar22[0x26] == 0) {
LAB_710134da14:
        FUN_710392eb40(uVar14);
      }
      else {
        FUN_710392eb40(puVar22[0x26]);
        uVar14 = puVar22[0x25];
        if (uVar14 != 0) goto LAB_710134da14;
      }
      if (puVar22[0x27] != 0) {
        FUN_710392eb40(puVar22[0x27]);
      }
      puVar22[0x26] = 0;
      puVar22[0x27] = 0;
      puVar22[0x25] = 0;
    }
    uVar14 = puVar22[0x20];
    if (uVar14 != 0) {
      if (puVar22[0x21] == 0) {
LAB_710134da50:
        FUN_710392eb40(uVar14);
      }
      else {
        FUN_710392eb40(puVar22[0x21]);
        uVar14 = puVar22[0x20];
        if (uVar14 != 0) goto LAB_710134da50;
      }
      if (puVar22[0x22] != 0) {
        FUN_710392eb40(puVar22[0x22]);
      }
      puVar22[0x21] = 0;
      puVar22[0x22] = 0;
      puVar22[0x20] = 0;
    }
    uVar14 = puVar22[0x1b];
    if (uVar14 != 0) {
      puVar22[0x1c] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[0x18];
    if (uVar14 != 0) {
      puVar22[0x19] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[0x15];
    if (uVar14 != 0) {
      puVar22[0x16] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[0x12];
    if (uVar14 != 0) {
      puVar22[0x13] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[0xf];
    if (uVar14 != 0) {
      puVar22[0x10] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[0xc];
    if (uVar14 != 0) {
      puVar22[0xd] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[9];
    if (uVar14 != 0) {
      puVar22[10] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[6];
    if (uVar14 != 0) {
      puVar22[7] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = puVar22[3];
    if (uVar14 != 0) {
      puVar22[4] = uVar14;
      FUN_710392eb40(uVar14);
    }
    uVar14 = *puVar22;
    if (uVar14 != 0) {
      puVar22[1] = uVar14;
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar22);
    DAT_71052b85f8 = (ulong *)0x0;
  }
  puVar31 = DAT_71052c3610;
  lVar26 = DAT_71052b8710[1];
  uVar14 = (ulong)*(byte *)(lVar26 + 0x454);
  if (uVar14 != 0xff) {
    pcVar18 = (char *)((long)DAT_71052c3610 + uVar14 * 2 + 0x20);
    if (*pcVar18 != '\0') {
      *pcVar18 = '\0';
      *(undefined1 *)((long)puVar31 + uVar14 * 2 + 0x21) = 1;
      *(undefined1 *)(puVar31 + 8) = 1;
    }
    *(undefined1 *)(lVar26 + 0x454) = 0xff;
  }
  *(undefined4 *)(lVar26 + 0x450) = 0;
  FUN_71003afe00(lVar26,0);
  *(undefined4 *)(lVar26 + 0x1c0) = 0xffffffff;
  *(undefined8 *)(lVar26 + 0x1e0) = 0x7fb997a80;
  *(undefined8 *)(lVar26 + 0x1e8) = 0;
  *(undefined2 *)(lVar26 + 0x1f0) = 0;
  *(undefined1 *)(lVar26 + 0x438) = 0;
  *(undefined8 *)(lVar26 + 0x43c) = 0;
  *(undefined4 *)(lVar26 + 0x444) = 0;
  FUN_71003afe00(lVar26 + 0x260,0);
  uVar12 = extraout_x1_31;
  if (*(long *)(lVar26 + 0x208) != 0) {
    lVar20 = *(long *)(lVar26 + 0x1f8);
    plVar24 = *(long **)(lVar26 + 0x200);
    *(undefined8 *)(*plVar24 + 8) = *(undefined8 *)(lVar20 + 8);
    **(long **)(lVar20 + 8) = *plVar24;
    *(undefined8 *)(lVar26 + 0x208) = 0;
    while (plVar8 = plVar24, plVar8 != (long *)(lVar26 + 0x1f8U)) {
      plVar24 = (long *)plVar8[1];
      if (plVar8 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar8);
        uVar12 = extraout_x1_32;
      }
    }
  }
  puVar31 = *(undefined8 **)(lVar26 + 0x1d8);
  *(undefined2 *)(lVar26 + 0x448) = 0;
  *(undefined4 *)(lVar26 + 0x44c) = 0xffffffff;
  if (puVar31 != (undefined8 *)0x0) {
    plVar24 = (long *)puVar31[0x52];
    if (plVar24 != (long *)0x0) {
      puVar31[0x52] = 0;
      (**(code **)(*plVar24 + 8))();
      uVar12 = extraout_x1_33;
    }
    plVar24 = (long *)*puVar31;
    *(undefined1 *)(puVar31 + 0x53) = 0;
    if (plVar24 != (long *)0x0) {
      *puVar31 = 0;
      FUN_7103726ec0(plVar24,uVar12,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710392eb40((ulong)plVar24);
      uVar12 = extraout_x1_34;
    }
    puVar31 = *(undefined8 **)(lVar26 + 0x1d8);
    *(undefined8 *)(lVar26 + 0x1d8) = 0;
    if (puVar31 != (undefined8 *)0x0) {
      FUN_7101f440a0(puVar31,uVar12,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710392eb40((ulong)puVar31);
    }
  }
  if (DAT_71052b8710 != (long *)0x0) {
    (**(code **)(*DAT_71052b8710 + 8))();
    DAT_71052b8710 = (long *)0x0;
  }
  uVar14 = DAT_71052b9298;
  if (DAT_71052b9298 != 0) {
    FUN_7100521220(DAT_71052b9298,0);
    uVar9 = *(ulong *)(uVar14 + 0x380);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x388) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x368);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x370) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x350);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x358) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x338);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x340) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 800);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x328) = uVar9;
      FUN_710392eb40(uVar9);
    }
    std::recursive_mutex::~recursive_mutex((recursive_mutex *)(uVar14 + 600));
    uVar9 = *(ulong *)(uVar14 + 0x240);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x248) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x228);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x230) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x200);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x208) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x1e8);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x1f0) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x1d0);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x1d8) = uVar9;
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x1b8);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x1c0) = uVar9;
      FUN_710392eb40(uVar9);
    }
    puVar22 = *(ulong **)(uVar14 + 0x1a0);
    puVar27 = *(ulong **)(uVar14 + 0x1a8);
    if (puVar27 != puVar22) {
      do {
        uVar9 = *puVar22;
        if (uVar9 != 0) {
          FUN_71005305a0(uVar9);
          FUN_710392eb40(uVar9);
        }
        puVar22 = puVar22 + 1;
      } while (puVar27 != puVar22);
      puVar27 = *(ulong **)(uVar14 + 0x1a0);
    }
    if (puVar27 != (ulong *)0x0) {
      *(ulong **)(uVar14 + 0x1a8) = puVar27;
      FUN_710392eb40((ulong)puVar27);
    }
    puVar31 = *(undefined8 **)(uVar14 + 0x188);
    puVar25 = *(undefined8 **)(uVar14 + 400);
    if (puVar25 != puVar31) {
      do {
        plVar24 = (long *)*puVar31;
        if (plVar24 != (long *)0x0) {
          FUN_71005316e0(plVar24);
          FUN_710392eb40((ulong)plVar24);
        }
        puVar31 = puVar31 + 1;
      } while (puVar25 != puVar31);
      puVar25 = *(undefined8 **)(uVar14 + 0x188);
    }
    if (puVar25 != (undefined8 *)0x0) {
      *(undefined8 **)(uVar14 + 400) = puVar25;
      FUN_710392eb40((ulong)puVar25);
    }
    puVar22 = *(ulong **)(uVar14 + 0x170);
    puVar27 = *(ulong **)(uVar14 + 0x178);
    if (puVar27 != puVar22) {
      do {
        if (*puVar22 != 0) {
          FUN_710392eb40(*puVar22);
        }
        puVar22 = puVar22 + 1;
      } while (puVar27 != puVar22);
      puVar27 = *(ulong **)(uVar14 + 0x170);
    }
    if (puVar27 != (ulong *)0x0) {
      *(ulong **)(uVar14 + 0x178) = puVar27;
      FUN_710392eb40((ulong)puVar27);
    }
    puVar22 = *(ulong **)(uVar14 + 0x158);
    puVar27 = *(ulong **)(uVar14 + 0x160);
    if (puVar27 != puVar22) {
      do {
        uVar9 = *puVar22;
        if (uVar9 != 0) {
          uVar19 = *(uint *)(uVar9 + 0xfc);
          if (uVar19 != 0) {
            plVar8 = *(long **)(uVar9 + 0xf0);
            plVar24 = (long *)plVar8[3];
            ppppppppplVar13 = (long *********)0x0;
            (**(code **)(*plVar24 + 0x18))(plVar24,uVar19);
            puVar15 = (undefined1 *)(*plVar8 + (ulong)uVar19 * 0x18);
            *puVar15 = 0;
            *(undefined8 *)(puVar15 + 8) = 0;
            puVar15[0x10] = 0;
            *(undefined4 *)(puVar15 + 0x14) = 0;
          }
          plVar24 = *(long **)(uVar9 + 0x118);
          if (plVar24 != (long *)0x0) {
            plVar8 = plVar24 + 1;
            do {
              lVar26 = *plVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar26 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              std::__shared_weak_count::__release_weak();
            }
          }
          FUN_710392eb40(uVar9);
        }
        puVar22 = puVar22 + 1;
      } while (puVar22 != puVar27);
      puVar27 = *(ulong **)(uVar14 + 0x158);
    }
    if (puVar27 != (ulong *)0x0) {
      *(ulong **)(uVar14 + 0x160) = puVar27;
      FUN_710392eb40((ulong)puVar27);
    }
    puVar22 = *(ulong **)(uVar14 + 0x140);
    puVar27 = *(ulong **)(uVar14 + 0x148);
    if (puVar27 != puVar22) {
      do {
        if (*puVar22 != 0) {
          FUN_710392eb40(*puVar22);
        }
        puVar22 = puVar22 + 1;
      } while (puVar27 != puVar22);
      puVar27 = *(ulong **)(uVar14 + 0x140);
    }
    if (puVar27 != (ulong *)0x0) {
      *(ulong **)(uVar14 + 0x148) = puVar27;
      FUN_710392eb40((ulong)puVar27);
    }
    uVar9 = *(ulong *)(uVar14 + 0x128);
    *(undefined8 *)(uVar14 + 0x128) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x120);
    *(undefined8 *)(uVar14 + 0x120) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x118);
    *(undefined8 *)(uVar14 + 0x118) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x110);
    *(undefined8 *)(uVar14 + 0x110) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x108);
    *(undefined8 *)(uVar14 + 0x108) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x100);
    *(undefined8 *)(uVar14 + 0x100) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xf8);
    *(undefined8 *)(uVar14 + 0xf8) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xf0);
    *(undefined8 *)(uVar14 + 0xf0) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xe8);
    *(undefined8 *)(uVar14 + 0xe8) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xe0);
    *(undefined8 *)(uVar14 + 0xe0) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xd8);
    *(undefined8 *)(uVar14 + 0xd8) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xd0);
    *(undefined8 *)(uVar14 + 0xd0) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 200);
    *(undefined8 *)(uVar14 + 200) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xc0);
    *(undefined8 *)(uVar14 + 0xc0) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xb8);
    *(undefined8 *)(uVar14 + 0xb8) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xb0);
    *(undefined8 *)(uVar14 + 0xb0) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xa8);
    *(undefined8 *)(uVar14 + 0xa8) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0xa0);
    *(undefined8 *)(uVar14 + 0xa0) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x98);
    *(undefined8 *)(uVar14 + 0x98) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x90);
    *(undefined8 *)(uVar14 + 0x90) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x88);
    *(undefined8 *)(uVar14 + 0x88) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x80);
    *(undefined8 *)(uVar14 + 0x80) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x78);
    *(undefined8 *)(uVar14 + 0x78) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x70);
    *(undefined8 *)(uVar14 + 0x70) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x68);
    *(undefined8 *)(uVar14 + 0x68) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x60);
    *(undefined8 *)(uVar14 + 0x60) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x58);
    *(undefined8 *)(uVar14 + 0x58) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x50);
    *(undefined8 *)(uVar14 + 0x50) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x48);
    *(undefined8 *)(uVar14 + 0x48) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x40);
    *(undefined8 *)(uVar14 + 0x40) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x38);
    *(undefined8 *)(uVar14 + 0x38) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = *(ulong *)(uVar14 + 0x30);
    *(undefined8 *)(uVar14 + 0x30) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    plVar24 = *(long **)(uVar14 + 0x28);
    if (plVar24 != (long *)0x0) {
      plVar8 = plVar24 + 1;
      do {
        lVar26 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar26 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar9 = *(ulong *)(uVar14 + 8);
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    *(ulong *)(uVar14 + 8) = 0;
    *(undefined8 *)(uVar14 + 0x10) = 0;
    FUN_710392eb40(uVar14);
    DAT_71052b9298 = 0;
  }
  local_a8 = (undefined **)*DAT_71052b8f00;
  FUN_71004f0710(&local_a8);
  puVar22 = DAT_71052b8f00;
  DAT_71053343f0 = 0;
  if (DAT_71053343e0._4_4_ == 0) {
    ram0x0071053343e4 = 0xffffffffffffffff;
  }
  if (DAT_71052b8f00 != (ulong *)0x0) {
    uVar14 = *DAT_71052b8f00;
    *DAT_71052b8f00 = 0;
    if (uVar14 != 0) {
      plVar24 = *(long **)(uVar14 + 0xa50);
      *(undefined8 *)(uVar14 + 0xa50) = 0;
      uVar12 = extraout_x1_35;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 8))();
        uVar12 = extraout_x1_36;
      }
      FUN_7100515190(uVar14 + 0x2b0,uVar12,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
      if (*(uint *)(uVar14 + 0x2a8) != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,*(uint *)(uVar14 + 0x2a8),ppppppppplVar13,param_4,param_5,
                       param_6,param_7,param_8);
        *(undefined4 *)(uVar14 + 0x2a8) = 0xffffff;
      }
      uVar9 = *(ulong *)(uVar14 + 0x290);
      if (uVar9 != 0) {
        *(ulong *)(uVar14 + 0x298) = uVar9;
        FUN_710392eb40(uVar9);
      }
      uVar9 = *(ulong *)(uVar14 + 0x278);
      if (uVar9 != 0) {
        *(ulong *)(uVar14 + 0x280) = uVar9;
        FUN_710392eb40(uVar9);
      }
      if (*(uint *)(uVar14 + 0x26c) != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,*(uint *)(uVar14 + 0x26c),ppppppppplVar13,param_4,param_5,
                       param_6,param_7,param_8);
        *(undefined4 *)(uVar14 + 0x26c) = 0xffffff;
      }
      lVar26 = *(long *)(uVar14 + 0x260);
      if (lVar26 != 0) {
        lVar20 = uVar14 + 0x140;
        do {
          while( true ) {
            plVar24 = *(long **)(lVar20 + 8);
            lVar26 = lVar26 + -1;
            if (plVar24 != (long *)0x0) break;
LAB_710134e234:
            lVar20 = lVar20 + 0x10;
            if (lVar26 == 0) goto LAB_710134e260;
          }
          plVar8 = plVar24 + 1;
          do {
            lVar32 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar32 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar32 != 0) goto LAB_710134e234;
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
          lVar20 = lVar20 + 0x10;
        } while (lVar26 != 0);
      }
LAB_710134e260:
      plVar24 = *(long **)(uVar14 + 0x138);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x128);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x118);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x108);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0xf8);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0xe8);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0xd8);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 200);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0xb8);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0xa8);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x98);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x88);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x78);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x68);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x58);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x48);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x38);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar24 = *(long **)(uVar14 + 0x28);
      if (plVar24 != (long *)0x0) {
        plVar8 = plVar24 + 1;
        do {
          lVar26 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (*(long *)(uVar14 + 0x18) != 0) {
        std::__shared_weak_count::__release_weak();
      }
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar22);
    DAT_71052b8f00 = (ulong *)0x0;
  }
  puVar21 = (undefined4 *)*DAT_71052c33d8;
  FUN_710137a0b0((long)(puVar21 + 0x16));
  FUN_710137a0b0((long)(puVar21 + 0x22));
  FUN_710137a0b0((long)(puVar21 + 0x2e));
  FUN_710137a0b0((long)(puVar21 + 0x3a));
  FUN_710137a0b0((long)(puVar21 + 0x46));
  FUN_710137a0b0((long)(puVar21 + 0x52));
  FUN_710137a0b0((long)(puVar21 + 0x5e));
  FUN_710137a0b0((long)(puVar21 + 0x6a));
  FUN_710137a0b0((long)(puVar21 + 0x76));
  FUN_710137a0b0((long)(puVar21 + 0x82));
  *puVar21 = 0xffffffff;
  puVar22 = DAT_71052c33d8;
  if (DAT_71052c33d8 != (ulong *)0x0) {
    FUN_710137a1f0(DAT_71052c33d8);
    FUN_710392eb40((ulong)puVar22);
    DAT_71052c33d8 = (ulong *)0x0;
  }
  puVar22 = (ulong *)*DAT_71052c3910;
  local_88._0_4_ = 0x3f800000;
  local_a8 = (undefined **)*puVar22;
  *puVar22 = 0;
  local_90 = 0;
  local_98 = (ulong *)0x0;
  local_a0 = (long *)0x0;
  uVar14 = *puVar22;
  *puVar22 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  uVar6 = (undefined4)local_88;
  plVar24 = (long *)puVar22[1];
  puVar22[1] = (ulong)local_a0;
  puVar16 = puVar22 + 2;
  puVar27 = (ulong *)*puVar16;
  *puVar16 = (ulong)local_98;
  uVar14 = puVar22[3];
  puVar22[3] = local_90;
  local_88 = CONCAT44(local_88._4_4_,(int)puVar22[4]);
  *(undefined4 *)(puVar22 + 4) = uVar6;
  if (uVar14 != 0) {
    plVar8 = (long *)puVar27[1];
    if (((long)plVar24 - 1U & (ulong)plVar24) == 0) {
      plVar8 = (long *)((long)plVar24 - 1U & (ulong)plVar8);
    }
    else if (plVar24 <= plVar8) {
      uVar9 = 0;
      if (plVar24 != (long *)0x0) {
        uVar9 = (ulong)plVar8 / (ulong)plVar24;
      }
      plVar8 = (long *)((long)plVar8 - uVar9 * (long)plVar24);
    }
    local_a8[(long)plVar8] = (undefined *)&local_98;
  }
  local_a0 = plVar24;
  local_98 = puVar27;
  local_90 = uVar14;
  ppuVar5 = local_a8;
  if (puVar22[3] != 0) {
    uVar14 = puVar22[1];
    uVar9 = *(ulong *)(puVar22[2] + 8);
    if ((uVar14 - 1 & uVar14) == 0) {
      uVar9 = uVar14 - 1 & uVar9;
    }
    else if (uVar14 <= uVar9) {
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = uVar9 / uVar14;
      }
      uVar9 = uVar9 - uVar10 * uVar14;
    }
    *(ulong **)(*puVar22 + uVar9 * 8) = puVar16;
  }
  while (puVar27 != (ulong *)0x0) {
    uVar14 = *puVar27;
    plVar24 = (long *)puVar27[4];
    local_a8 = ppuVar5;
    if (plVar24 != (long *)0x0) {
      plVar8 = plVar24 + 1;
      do {
        lVar26 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar26 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_710392eb40((ulong)puVar27);
    puVar27 = (ulong *)uVar14;
    ppuVar5 = local_a8;
  }
  local_a8 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  puVar31 = DAT_71052c3910;
  if (DAT_71052c3910 != (undefined8 *)0x0) {
    puVar22 = (ulong *)*DAT_71052c3910;
    *DAT_71052c3910 = 0;
    if (puVar22 != (ulong *)0x0) {
      puVar27 = (ulong *)puVar22[2];
      while (puVar27 != (ulong *)0x0) {
        uVar14 = *puVar27;
        plVar24 = (long *)puVar27[4];
        if (plVar24 != (long *)0x0) {
          plVar8 = plVar24 + 1;
          do {
            lVar26 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar26 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_710392eb40((ulong)puVar27);
        puVar27 = (ulong *)uVar14;
      }
      uVar14 = *puVar22;
      *puVar22 = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40((ulong)puVar22);
    }
    FUN_710392eb40((ulong)puVar31);
    DAT_71052c3910 = (undefined8 *)0x0;
  }
  if (DAT_71052c3620 != (long *)0x0) {
    (**(code **)(*DAT_71052c3620 + 8))();
    DAT_71052c3620 = (long *)0x0;
  }
  *(undefined ***)*DAT_71052c3760 = &PTR_PTR_7105062768;
  *(undefined2 *)*DAT_7105314510 = 0;
  DAT_710593b448 = 0;
  puVar21 = *(undefined4 **)(*(long *)(DAT_7105337ce8 + 8) + 8);
  *puVar21 = 1;
  lVar26 = *(long *)(puVar21 + 0x24);
  puVar21[3] = 0;
  puVar21[0x14] = 0;
  puVar21[0x19] = 0;
  puVar21[0x23] = 0;
  if (*(long *)(puVar21 + 0x26) != lVar26) {
    lVar20 = 0;
    uVar14 = 0;
    do {
      *(undefined4 *)(lVar26 + lVar20) = 0;
      uVar14 = uVar14 + 1;
      lVar26 = *(long *)(puVar21 + 0x24);
      uVar9 = (*(long *)(puVar21 + 0x26) - lVar26 >> 2) * -0x1111111111111111;
      lVar20 = lVar20 + 0x3c;
    } while (uVar14 <= uVar9 && uVar9 - uVar14 != 0);
  }
  puVar21[0x2a] = 0;
  puVar21[0x34] = 0;
  puVar21[0x51] = 1;
  puVar21[0x37] = 0;
  puVar21[0x62] = 0;
  plVar24 = (long *)(DAT_7105335e90 + 8);
  lVar26 = *plVar24;
  if (*(ulong *)(lVar26 + 0x1d10) != 0) {
    FUN_710392eb40(*(ulong *)(lVar26 + 0x1d10));
    *(undefined8 *)(lVar26 + 0x1d10) = 0;
    plVar24 = (long *)(DAT_7105335e90 + 8);
  }
  *(undefined8 *)(lVar26 + 0x1404) = 0;
  *(undefined4 *)(lVar26 + 0x1400) = 0;
  *(undefined4 *)(*plVar24 + 0x1ee0) = 0x3f800000;
  *(undefined4 *)(*plVar24 + 0x1ee4) = 0x3f800000;
  if (DAT_7105329f50 != (long *)0x0) {
    *(undefined1 *)(*DAT_7105329f50 + 1) = 0;
  }
  lVar26 = *(long *)(DAT_71053398d8 + 8);
  lVar20 = *(long *)(lVar26 + 8);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x10);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x18);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x20);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x28);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x30);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x38);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x40);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar20 = *(long *)(lVar26 + 0x48);
  if ((*(int *)(lVar20 + 0xa8) == 1) || (*(char *)(lVar20 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar20 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar20 + 0xa4)) goto LAB_710134f5bc;
    *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xa4) * 4 + 0x58) = 2;
  }
  lVar26 = *(long *)(lVar26 + 0x50);
  if ((*(int *)(lVar26 + 0xa8) == 1) || (*(char *)(lVar26 + 0xdd) != '\0')) {
    *(undefined2 *)(lVar26 + 0xdd) = 0x100;
    if (0x12 < *(uint *)(lVar26 + 0xa4)) {
LAB_710134f5bc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar26 + 0xa4) * 4 + 0x58) = 2;
  }
  FUN_710366ac20(1);
  **(undefined1 **)(DAT_71053398d8 + 8) = 0;
  plVar24 = lib::Singleton<app::FighterManager>::instance_;
  if (lib::Singleton<app::FighterManager>::instance_ != (long *)0x0) {
    lVar26 = *lib::Singleton<app::FighterManager>::instance_;
    iVar7 = *(int *)(lVar26 + 0xa0);
    if (iVar7 != 0) {
      iVar17 = 0;
      do {
        iVar4 = iVar17;
        if (*(long *)(lVar26 + 0x20) == 0) {
LAB_710134eca0:
          if (*(long *)(lVar26 + 0x28) != 0) {
            if (iVar4 == 0) {
              uVar19 = 1;
              goto LAB_710134ed5c;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar26 + 0x30) != 0) {
            if (iVar4 == 0) {
              uVar19 = 2;
              goto LAB_710134ed5c;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar26 + 0x38) != 0) {
            if (iVar4 == 0) {
              uVar19 = 3;
              goto LAB_710134ed5c;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar26 + 0x40) != 0) {
            if (iVar4 == 0) {
              uVar19 = 4;
              goto LAB_710134ed5c;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar26 + 0x48) != 0) {
            if (iVar4 == 0) {
              uVar19 = 5;
              goto LAB_710134ed5c;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar26 + 0x50) != 0) {
            if (iVar4 == 0) {
              uVar19 = 6;
              goto LAB_710134ed5c;
            }
            iVar4 = iVar4 + -1;
          }
          uVar19 = 7;
          if (iVar4 == 0 && *(long *)(lVar26 + 0x58) != 0) goto LAB_710134ed5c;
        }
        else {
          if (iVar17 != 0) {
            iVar4 = iVar17 + -1;
            goto LAB_710134eca0;
          }
          uVar19 = 0;
LAB_710134ed5c:
          if (*(long *)(lVar26 + ((long)((ulong)uVar19 << 0x20) >> 0x1d) + 0x20) != 0) {
            if (7 < uVar19) goto LAB_710134f5bc;
            lVar26 = *(long *)(*plVar24 + (long)(int)uVar19 * 8 + 0x20);
            if (lVar26 != 0) {
              *(undefined8 *)(lVar26 + 0x68) = 0;
            }
          }
        }
        if (iVar7 + -1 == iVar17) break;
        lVar26 = *plVar24;
        iVar17 = iVar17 + 1;
      } while( true );
    }
  }
  plVar24 = DAT_71052b6fd8;
  uVar12 = extraout_x1_37;
  if (DAT_71052b6fd8 == (long *)0x0) goto LAB_710134eedc;
  lVar20 = *DAT_71052b6fd8;
  lVar26 = *(long *)(lVar20 + 0x90);
  *(undefined8 *)(lVar20 + 0x90) = 0;
  if (lVar26 != 0) {
    FUN_710392eb40(lVar26 - 0x10);
    uVar12 = extraout_x1_38;
  }
  lVar26 = *(long *)(lVar20 + 0x98);
  *(undefined8 *)(lVar20 + 0x98) = 0;
  if (lVar26 != 0) {
    lVar32 = *(long *)(lVar26 + -8);
    if (lVar32 != 0) {
      lVar32 = lVar32 << 3;
      do {
        uVar14 = *(ulong *)(lVar26 + lVar32 + -8);
        *(undefined8 *)(lVar26 + lVar32 + -8) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        lVar32 = lVar32 + -8;
      } while (lVar32 != 0);
    }
    FUN_710392eb40((ulong)(lVar26 + -8));
    uVar12 = extraout_x1_39;
  }
  uVar14 = *(ulong *)(lVar20 + 0xa0);
  *(undefined8 *)(lVar20 + 0xa0) = 0;
  if (uVar14 != 0) {
    uVar9 = *(ulong *)(uVar14 + 0x2800);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x2808) = uVar9;
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar14);
    uVar12 = extraout_x1_40;
  }
  uVar14 = *(ulong *)(lVar20 + 0xa8);
  *(undefined8 *)(lVar20 + 0xa8) = 0;
  if (uVar14 != 0) {
    uVar9 = *(ulong *)(uVar14 + 0x328);
    if (uVar9 != 0) {
      *(ulong *)(uVar14 + 0x330) = uVar9;
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar14);
    uVar12 = extraout_x1_41;
  }
  puVar22 = *(ulong **)(lVar20 + 0xb0);
  *(undefined8 *)(lVar20 + 0xb0) = 0;
  if (puVar22 != (ulong *)0x0) {
    uVar14 = *puVar22;
    *puVar22 = 0;
    if (uVar14 != 0) {
      uVar9 = *(ulong *)(uVar14 + 8);
      if (uVar9 != 0) {
        *(ulong *)(uVar14 + 0x10) = uVar9;
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar22);
    uVar12 = extraout_x1_42;
  }
  uVar14 = *(ulong *)(lVar20 + 0xc0);
  *(undefined8 *)(lVar20 + 0xc0) = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
    uVar12 = extraout_x1_43;
  }
  pcVar18 = *(char **)(lVar20 + 200);
  if (pcVar18 != (char *)0x0) {
    if (*pcVar18 == '\0') {
      *(undefined8 *)(lVar20 + 200) = 0;
    }
    else {
      **(undefined1 **)(pcVar18 + 0x1048) = 0;
      pcVar18 = *(char **)(lVar20 + 200);
      *(undefined8 *)(lVar20 + 200) = 0;
      if (pcVar18 == (char *)0x0) goto LAB_710134eec4;
    }
    FUN_71002fb290((long)pcVar18);
    FUN_710392eb40((ulong)pcVar18);
    uVar12 = extraout_x1_44;
  }
LAB_710134eec4:
  *(undefined4 *)(lVar20 + 0x1fc) = 0;
  FUN_71003402b0((uint *)*DAT_71052b70e8,uVar12,ppppppppplVar13,param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined2 *)(plVar24 + 1) = 0;
  uVar12 = extraout_x1_45;
LAB_710134eedc:
  plVar24 = lib::Singleton<app::ItemManager>::instance_;
  if (lib::Singleton<app::ItemManager>::instance_ != (long *)0x0) {
    FUN_71015d3d30(lib::Singleton<app::ItemManager>::instance_,uVar12,ppppppppplVar13,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710392eb40((ulong)plVar24);
    lib::Singleton<app::ItemManager>::instance_ = (long *)0x0;
  }
  plVar24 = FUN_710356a030((long *)(DAT_7105338018 + 0x18),&DAT_71053395f8);
  *(ulong *)(*(long *)(plVar24[5] + 0x10) + 0x48) =
       *(ulong *)(*(long *)(plVar24[5] + 0x10) + 0x48) & 0xfffffffffffffffd;
  plVar24 = lib::Singleton<lib::EffectManager>::instance_;
  *(undefined1 *)(*lib::Singleton<lib::EffectManager>::instance_ + 0x194b8) = 0;
  *(undefined4 *)(*plVar24 + 0x19484) = 8;
  if (plVar24 != (long *)0x0) {
    FUN_7103563cd0(*plVar24,0x100);
    FUN_7103563cd0(*lib::Singleton<lib::EffectManager>::instance_,0x101);
  }
  if (DAT_710532a9d0 != 0) {
    FUN_71025f7b10(DAT_710532a9d0,7,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  }
  if (DAT_71053381c0 != 0) {
    *(undefined4 *)(DAT_71053381c0 + 0x754) = 3;
  }
  FUN_71035a0460(0);
  if (((DAT_71052b92e0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71052b92e0), iVar7 != 0)) {
    __cxa_guard_release(&DAT_71052b92e0);
  }
  DAT_71052b92e8._4_4_ = 0;
  DAT_71052b92f0._0_1_ = 0;
  DAT_71052b92f0._2_2_ = 1;
  uVar14 = FUN_71017eb140(DAT_7105324680);
  plVar24 = DAT_7105324680;
  while (DAT_7105324680 = plVar24, (uVar14 & 1) == 0) {
    nn::os::SleepThread(10000000);
    uVar14 = FUN_71017eb140(DAT_7105324680);
    plVar24 = DAT_7105324680;
  }
  if ((long *)*plVar24 != (long *)0x0) {
    (**(code **)(*(long *)*plVar24 + 0x20))();
  }
  if ((long *)plVar24[1] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[1] + 0x20))();
  }
  if ((long *)plVar24[2] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[2] + 0x20))();
  }
  if ((long *)plVar24[3] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[3] + 0x20))();
  }
  if ((long *)plVar24[4] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[4] + 0x20))();
  }
  if ((long *)plVar24[5] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[5] + 0x20))();
  }
  if ((long *)plVar24[6] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[6] + 0x20))();
  }
  if ((long *)plVar24[7] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[7] + 0x20))();
  }
  if ((long *)plVar24[8] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[8] + 0x20))();
  }
  if ((long *)plVar24[9] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[9] + 0x20))();
  }
  if ((long *)plVar24[10] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[10] + 0x20))();
  }
  if ((long *)plVar24[0xb] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0xb] + 0x20))();
  }
  if ((long *)plVar24[0xc] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0xc] + 0x20))();
  }
  if ((long *)plVar24[0xd] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0xd] + 0x20))();
  }
  if ((long *)plVar24[0xe] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0xe] + 0x20))();
  }
  if ((long *)plVar24[0xf] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0xf] + 0x20))();
  }
  if ((long *)plVar24[0x10] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x10] + 0x20))();
  }
  if ((long *)plVar24[0x11] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x11] + 0x20))();
  }
  if ((long *)plVar24[0x12] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x12] + 0x20))();
  }
  if ((long *)plVar24[0x13] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x13] + 0x20))();
  }
  if ((long *)plVar24[0x14] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x14] + 0x20))();
  }
  if ((long *)plVar24[0x15] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x15] + 0x20))();
  }
  if ((long *)plVar24[0x16] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x16] + 0x20))();
  }
  if ((long *)plVar24[0x17] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x17] + 0x20))();
  }
  if ((long *)plVar24[0x18] != (long *)0x0) {
    (**(code **)(*(long *)plVar24[0x18] + 0x20))();
  }
  plVar24 = DAT_7105324680;
  lVar26 = 0;
  do {
    std::recursive_mutex::lock();
    if (*(long **)((long)plVar24 + lVar26) != (long *)0x0) {
      (**(code **)(**(long **)((long)plVar24 + lVar26) + 0x18))();
      plVar8 = *(long **)((long)plVar24 + lVar26);
      *(undefined8 *)((long)plVar24 + lVar26) = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    std::recursive_mutex::unlock();
    lVar26 = lVar26 + 8;
  } while (lVar26 != 200);
  plVar24[0x24] = 0;
  plVar24[0x25] = 0;
  plVar24[0x22] = 0;
  plVar24[0x23] = 0;
  plVar24[0x1d] = 0;
  plVar24[0x20] = 0;
  plVar24[0x21] = 0;
  plVar24[0x1e] = 0;
  plVar24[0x1f] = 0;
  lVar26 = DAT_7105332f20;
  uVar14 = (ulong)DAT_71052b9378;
  if (DAT_71052b9378 != 0xffffff) {
    if (DAT_71052b9378 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar20 = *(long *)(lVar26 + 0x40);
      if ((*(byte *)(lVar20 + uVar14 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar26,(int *)(lVar20 + uVar14 * 0x48),(long ****)ppppppppplVar13,param_4,
                       param_5,param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
    }
    DAT_71052b9378 = 0xffffff;
  }
  lVar26 = DAT_7105333fe8;
  *(undefined4 *)(DAT_7105333fe8 + 100) = 0;
  lVar20 = DAT_7105335e90;
  if ((*(int *)(*(long *)(DAT_7105335e90 + 8) + 0x1158) != 0) &&
     (*(char *)(DAT_7105337ce8 + 0x58d) == '\0')) {
    *(undefined4 *)(*(long *)(DAT_7105335e90 + 8) + 0x1158) = 0;
    *(undefined1 *)(**(long **)(*(long *)(lVar20 + 8) + 0x20b8) + 0x321) = 1;
  }
  *(undefined4 *)(lVar26 + 100) = 0;
  if (DAT_710532f7f0 != 0) {
    lVar20 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
    FUN_7103776910(&local_a8,**(long **)(lVar20 + 0x130) + 8,(long ****)"set_txt_key",
                   ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
    plVar24 = local_a0;
    lVar26 = *local_a0;
    if (lVar26 != 0) {
      *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 1;
    }
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar24);
    }
    *(undefined1 *)(lVar20 + 0x200) = 1;
  }
  plVar24 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
  if ((plVar24 != (long *)0x0) &&
     (uVar14 = (**(code **)(*plVar24 + 0x48))(plVar24), (uVar14 & 1) != 0)) {
    (**(code **)(*plVar24 + 0x40))(plVar24,0);
  }
  nn::os::ChangeThreadPriority((ThreadType *)&DAT_7106dd5cc0,1);
  puVar22 = DAT_71052c3760;
  if (DAT_71052c3760 != (ulong *)0x0) {
    uVar14 = *DAT_71052c3760;
    *DAT_71052c3760 = 0;
    if (uVar14 != 0) {
      FUN_71014a2920((undefined8 *)(uVar14 + 0x1e010),extraout_x1_46,ppppppppplVar13,param_4,param_5
                     ,param_6,param_7,param_8);
      plVar24 = *(long **)(uVar14 + 0x1e008);
      *(undefined8 *)(uVar14 + 0x1e008) = 0;
      uVar12 = extraout_x1_47;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 8))();
        uVar12 = extraout_x1_48;
      }
      uVar9 = *(ulong *)(uVar14 + 0x1dff8);
      *(undefined8 *)(uVar14 + 0x1dff8) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
        uVar12 = extraout_x1_49;
      }
      FUN_71014e5070(uVar14 + 8,uVar12,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)puVar22);
    DAT_71052c3760 = (ulong *)0x0;
  }
  puVar31 = DAT_71052c35b0;
  puVar22 = (ulong *)*DAT_71052c35b0;
  uVar14 = *puVar22;
  puVar22[1] = 0;
  puVar22[2] = 0;
  *puVar22 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
    puVar31 = DAT_71052c35b0;
  }
  if (puVar31 != (undefined8 *)0x0) {
    puVar22 = (ulong *)*puVar31;
    *puVar31 = 0;
    if (puVar22 != (ulong *)0x0) {
      uVar14 = *puVar22;
      if (uVar14 != 0) {
        puVar22[1] = uVar14;
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40((ulong)puVar22);
    }
    FUN_710392eb40((ulong)puVar31);
    DAT_71052c35b0 = (undefined8 *)0x0;
  }
  std::recursive_mutex::unlock();
  return;
}

