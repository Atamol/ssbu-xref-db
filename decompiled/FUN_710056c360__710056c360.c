// addr:      710056c360
// offset:    0x56c360
// name:      FUN_710056c360
// mangled:   
// signature: int __cdecl FUN_710056c360(long param_1, uint * param_2, long * * * * * * * * * param_3, byte * * * * param_4, undefined * param_5, ulong param_6, long * * * param_7, long * * * param_8)


/* WARNING: Type propagation algorithm not settling */

int FUN_710056c360(long param_1,uint *param_2,long *********param_3,byte ****param_4,
                  undefined *param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  ulong extraout_x1_21;
  ulong extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  ulong extraout_x1_25;
  ulong extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 uVar20;
  undefined8 extraout_x1_32;
  ulong extraout_x1_33;
  ulong extraout_x1_34;
  char *pcVar21;
  long ****pppplVar22;
  code *pcVar23;
  long lVar24;
  long ********pppppppplVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  void *__src;
  long *plVar31;
  long *plVar32;
  int *piVar33;
  size_t __n;
  int *piVar34;
  ulong uVar35;
  uint *puVar36;
  long lVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 local_a9;
  undefined7 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  uint local_90 [2];
  uint local_88 [2];
  uint local_80 [2];
  uint local_78 [2];
  uint local_70 [4];
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    return -1;
  }
  uVar8 = param_2[2];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar6 = *(undefined8 *)(param_2 + 10);
  uVar7 = *(undefined8 *)(param_2 + 0xc);
  pauVar1 = (undefined1 (*) [16])(param_2 + 4);
  uVar38 = *(undefined8 *)*pauVar1;
  uVar3 = param_2[8];
  uVar5 = param_2[9];
  uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x37) >> 8);
  local_a9 = (undefined1)((ulong)uVar7 >> 0x38);
  puVar36 = (uint *)(param_1 + 0xf0);
  uVar9 = *(uint *)(param_1 + 0x57c);
  if (*puVar36 == 0) {
    lVar37 = 0;
  }
  else if (*(int *)(param_1 + 0x138) == 0) {
    puVar36 = (uint *)(param_1 + 0x138);
    lVar37 = 1;
  }
  else if (*(int *)(param_1 + 0x180) == 0) {
    puVar36 = (uint *)(param_1 + 0x180);
    lVar37 = 2;
  }
  else if (*(int *)(param_1 + 0x1c8) == 0) {
    puVar36 = (uint *)(param_1 + 0x1c8);
    lVar37 = 3;
  }
  else if (*(int *)(param_1 + 0x210) == 0) {
    puVar36 = (uint *)(param_1 + 0x210);
    lVar37 = 4;
  }
  else if (*(int *)(param_1 + 600) == 0) {
    puVar36 = (uint *)(param_1 + 600);
    lVar37 = 5;
  }
  else if (*(int *)(param_1 + 0x2a0) == 0) {
    puVar36 = (uint *)(param_1 + 0x2a0);
    lVar37 = 6;
  }
  else if (*(int *)(param_1 + 0x2e8) == 0) {
    puVar36 = (uint *)(param_1 + 0x2e8);
    lVar37 = 7;
  }
  else if (*(int *)(param_1 + 0x330) == 0) {
    puVar36 = (uint *)(param_1 + 0x330);
    lVar37 = 8;
  }
  else if (*(int *)(param_1 + 0x378) == 0) {
    puVar36 = (uint *)(param_1 + 0x378);
    lVar37 = 9;
  }
  else if (*(int *)(param_1 + 0x3c0) == 0) {
    puVar36 = (uint *)(param_1 + 0x3c0);
    lVar37 = 10;
  }
  else if (*(int *)(param_1 + 0x408) == 0) {
    puVar36 = (uint *)(param_1 + 0x408);
    lVar37 = 0xb;
  }
  else if (*(int *)(param_1 + 0x450) == 0) {
    puVar36 = (uint *)(param_1 + 0x450);
    lVar37 = 0xc;
  }
  else if (*(int *)(param_1 + 0x498) == 0) {
    puVar36 = (uint *)(param_1 + 0x498);
    lVar37 = 0xd;
  }
  else if (*(int *)(param_1 + 0x4e0) == 0) {
    puVar36 = (uint *)(param_1 + 0x4e0);
    lVar37 = 0xe;
  }
  else {
    if (*(int *)(param_1 + 0x528) != 0) {
      return -1;
    }
    puVar36 = (uint *)(param_1 + 0x528);
    lVar37 = 0xf;
  }
  auVar39 = NEON_ext(*pauVar1,*pauVar1,8,1);
  plVar30 = (long *)(param_1 + 0x60);
  plVar31 = (long *)*plVar30;
  plVar17 = plVar30;
  plVar28 = plVar31;
  if (plVar31 == (long *)0x0) {
LAB_710056c550:
    plVar17 = (long *)FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,(long ****)param_5,param_6
                                     ,param_7,param_8);
    if (plVar17 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70[0] = 0;
        local_a0 = (long ********)&DAT_00000028;
        param_3 = (long *********)&local_a0;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
        if (((uVar18 & 1) != 0) &&
           (plVar17 = (long *)FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,(long ****)param_5
                                             ,param_6,param_7,param_8), plVar17 != (long *)0x0))
        goto LAB_710056c5ac;
      }
      plVar17 = (long *)0x0;
    }
LAB_710056c5ac:
    *(uint *)((long)plVar17 + 0x1c) = uVar2;
    plVar17[4] = 0xffffffff;
    plVar28 = plVar30;
    plVar32 = plVar30;
    if (plVar31 != (long *)0x0) {
      plVar28 = (long *)(param_1 + 0x60);
      do {
        while (plVar32 = plVar31, uVar2 < *(uint *)((long)plVar32 + 0x1c)) {
          plVar28 = plVar32;
          plVar31 = (long *)*plVar32;
          if ((long *)*plVar32 == (long *)0x0) {
            lVar27 = *plVar32;
            goto joined_r0x00710056c62c;
          }
        }
        if (uVar2 <= *(uint *)((long)plVar32 + 0x1c)) break;
        plVar28 = plVar32 + 1;
        plVar31 = (long *)*plVar28;
      } while ((long *)*plVar28 != (long *)0x0);
    }
    lVar27 = *plVar28;
joined_r0x00710056c62c:
    if (lVar27 == 0) {
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[2] = (long)plVar32;
      *plVar28 = (long)plVar17;
      if (**(long **)(param_1 + 0x58) != 0) {
        *(long *)(param_1 + 0x58) = **(long **)(param_1 + 0x58);
        plVar17 = (long *)*plVar28;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(long **)(param_1 + 0x60),plVar17);
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    }
    else if (plVar17 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar17);
    }
    plVar28 = (long *)*plVar30;
    plVar17 = plVar30;
    if (plVar28 != (long *)0x0) {
      do {
        bVar14 = *(uint *)((long)plVar28 + 0x1c) < uVar2;
        if (!bVar14) {
          plVar17 = plVar28;
        }
        plVar28 = (long *)plVar28[bVar14];
      } while (plVar28 != (long *)0x0);
      if ((plVar17 != plVar30) && (*(uint *)((long)plVar17 + 0x1c) <= uVar2)) goto LAB_710056c6a4;
    }
    plVar17 = plVar30;
  }
  else {
    do {
      bVar14 = *(uint *)((long)plVar28 + 0x1c) < uVar2;
      if (!bVar14) {
        plVar17 = plVar28;
      }
      plVar32 = plVar28 + bVar14;
      plVar28 = (long *)*plVar32;
    } while ((long *)*plVar32 != (long *)0x0);
    if ((plVar17 == plVar30) || (uVar2 < *(uint *)((long)plVar17 + 0x1c))) goto LAB_710056c550;
  }
LAB_710056c6a4:
  lVar27 = param_1 + lVar37 * 0x48;
  *(long **)(lVar27 + 0x110) = plVar17 + 4;
  *(uint *)(lVar27 + 0xf4) = uVar2;
  *(undefined1 *)(lVar27 + 0x118) = 0;
  *puVar36 = 3;
  std::recursive_mutex::lock();
  lVar27 = DAT_7105324680;
  if ((*puVar36 | 2) == 3) {
    std::recursive_mutex::lock();
    lVar27 = *(long *)(lVar27 + 0xb8);
    std::recursive_mutex::unlock();
    FUN_71017e31f0(lVar27,puVar36[1],param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
    lVar27 = DAT_7105324680;
    std::recursive_mutex::lock();
    plVar17 = *(long **)(lVar27 + 0xb8);
    std::recursive_mutex::unlock();
    uVar18 = (**(code **)(*plVar17 + 0x30))(plVar17);
    lVar27 = DAT_7105324680;
    if ((uVar18 & 1) == 0) {
      std::recursive_mutex::lock();
      plVar17 = *(long **)(lVar27 + 0xb8);
      std::recursive_mutex::unlock();
      uVar18 = (**(code **)(*plVar17 + 0x30))(plVar17);
      while ((uVar18 & 1) == 0) {
        nn::os::SleepThread(1000000);
        lVar27 = DAT_7105324680;
        std::recursive_mutex::lock();
        plVar17 = *(long **)(lVar27 + 0xb8);
        std::recursive_mutex::unlock();
        uVar18 = (**(code **)(*plVar17 + 0x30))(plVar17);
      }
    }
    uVar16 = 2;
  }
  else {
    uVar16 = 1;
  }
  lVar27 = DAT_7105324680;
  if ((*puVar36 & 0xfffffffe) == 2) {
    std::recursive_mutex::lock();
    lVar27 = *(long *)(lVar27 + 0xb8);
    std::recursive_mutex::unlock();
    plVar28 = (long *)(lVar27 + 0x10);
    plVar17 = (long *)*plVar28;
    if (plVar17 == (long *)0x0) {
LAB_710056c868:
      local_a0 = (long ********)&SUB_ffffff00ffffff;
      uVar18 = extraout_x1;
LAB_710056c870:
      uVar26 = puVar36[6];
      puVar36[6] = 0xffffff;
    }
    else {
      uVar18 = (ulong)(puVar36[1] * 10);
      plVar31 = plVar28;
      do {
        if ((ulong)plVar17[4] >= uVar18) {
          plVar31 = plVar17;
        }
        plVar17 = (long *)plVar17[(ulong)plVar17[4] < uVar18];
      } while (plVar17 != (long *)0x0);
      if ((plVar31 == plVar28) || (uVar18 < (ulong)plVar31[4])) goto LAB_710056c868;
      uVar16 = *(uint *)((long)plVar31 + 0x2c);
      uVar18 = (ulong)uVar16;
      local_a0 = (long ********)CONCAT44(local_a0._4_4_,uVar16);
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar18 = extraout_x1_09;
      }
      lVar27 = DAT_7105332f20;
      uVar16 = *(uint *)(plVar31 + 6);
      uVar35 = (ulong)uVar16;
      local_a0 = (long ********)CONCAT44(uVar16,(uint)local_a0);
      if (uVar16 == 0xffffff) goto LAB_710056c870;
      if (uVar16 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar24 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar24 + uVar35 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar27,uVar16,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
          uVar18 = extraout_x1_10;
        }
        else {
          FUN_71035432d0((int *)(lVar24 + uVar35 * 0x48));
          std::recursive_mutex::unlock();
          uVar18 = extraout_x1_21;
        }
        uVar26 = puVar36[6];
        puVar36[6] = uVar16;
        if (uVar16 != 0xffffff) goto LAB_710056d480;
      }
      else {
        uVar26 = puVar36[6];
        puVar36[6] = uVar16;
LAB_710056d480:
        lVar27 = DAT_7105332f20;
        if (uVar16 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar24 = *(long *)(lVar27 + 0x40);
          if ((*(byte *)(lVar24 + uVar35 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar27,uVar16,param_3,param_4,(long ****)param_5,param_6,param_7,param_8)
            ;
            uVar18 = extraout_x1_22;
          }
          else {
            FUN_71035432d0((int *)(lVar24 + uVar35 * 0x48));
            std::recursive_mutex::unlock();
            uVar18 = extraout_x1_33;
          }
        }
      }
    }
    lVar27 = DAT_7105332f20;
    if ((uVar26 != 0xffffff) && (uVar26 < *(uint *)(DAT_7105332f20 + 0x48))) {
      std::recursive_mutex::lock();
      lVar24 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar24 + (ulong)uVar26 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar27,(int *)(lVar24 + (ulong)uVar26 * 0x48),(long ****)param_3,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
      uVar18 = extraout_x1_00;
    }
    FUN_710353f120((uint *)&local_a0,uVar18,param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    plVar17 = (long *)*plVar28;
    uVar20 = extraout_x1_01;
    if (plVar17 == (long *)0x0) {
LAB_710056c92c:
      local_a0 = (long ********)&SUB_ffffff00ffffff;
      uVar16 = puVar36[7];
      puVar36[7] = 0xffffff;
    }
    else {
      uVar18 = (ulong)(puVar36[1] * 10 + 4);
      plVar31 = plVar28;
      do {
        if ((ulong)plVar17[4] >= uVar18) {
          plVar31 = plVar17;
        }
        plVar17 = (long *)plVar17[(ulong)plVar17[4] < uVar18];
      } while (plVar17 != (long *)0x0);
      if ((plVar31 == plVar28) || (uVar18 < (ulong)plVar31[4])) goto LAB_710056c92c;
      uVar26 = *(uint *)((long)plVar31 + 0x2c);
      local_a0 = (long ********)CONCAT44(local_a0._4_4_,uVar26);
      if (uVar26 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar26);
        uVar20 = extraout_x1_11;
      }
      lVar27 = DAT_7105332f20;
      uVar16 = *(uint *)(plVar31 + 6);
      local_a0 = (long ********)CONCAT44(uVar16,(uint)local_a0);
      if ((uVar16 != 0xffffff) && (uVar16 < *(uint *)(DAT_7105332f20 + 0x48))) {
        std::recursive_mutex::lock();
        lVar24 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar24 + (ulong)uVar16 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar27,uVar16,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
          uVar20 = extraout_x1_12;
        }
        else {
          FUN_71035432d0((int *)(lVar24 + (ulong)uVar16 * 0x48));
          std::recursive_mutex::unlock();
          uVar20 = extraout_x1_23;
        }
      }
      uVar16 = puVar36[7];
      puVar36[7] = uVar26;
      if (uVar26 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar26);
        uVar20 = extraout_x1_24;
      }
    }
    if (uVar16 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar16,param_3,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      uVar20 = extraout_x1_02;
    }
    FUN_710353f120((uint *)&local_a0,uVar20,param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    plVar17 = (long *)*plVar28;
    if (plVar17 == (long *)0x0) {
LAB_710056c9a8:
      local_a0 = (long ********)&SUB_ffffff00ffffff;
      uVar18 = extraout_x1_03;
LAB_710056c9b0:
      local_78[0] = 0xffffff;
    }
    else {
      uVar18 = (ulong)(puVar36[1] * 10 + 5);
      plVar31 = plVar28;
      do {
        if ((ulong)plVar17[4] >= uVar18) {
          plVar31 = plVar17;
        }
        plVar17 = (long *)plVar17[(ulong)plVar17[4] < uVar18];
      } while (plVar17 != (long *)0x0);
      if ((plVar31 == plVar28) || (uVar18 < (ulong)plVar31[4])) goto LAB_710056c9a8;
      uVar16 = *(uint *)((long)plVar31 + 0x2c);
      uVar18 = (ulong)uVar16;
      local_a0 = (long ********)CONCAT44(local_a0._4_4_,uVar16);
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar18 = extraout_x1_13;
      }
      lVar27 = DAT_7105332f20;
      uVar16 = *(uint *)(plVar31 + 6);
      uVar35 = (ulong)uVar16;
      local_a0 = (long ********)CONCAT44(uVar16,(uint)local_a0);
      if (uVar16 == 0xffffff) goto LAB_710056c9b0;
      local_78[0] = uVar16;
      if (uVar16 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar24 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar24 + uVar35 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar27,uVar16,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
          uVar18 = extraout_x1_14;
        }
        else {
          FUN_71035432d0((int *)(lVar24 + uVar35 * 0x48));
          std::recursive_mutex::unlock();
          uVar18 = extraout_x1_25;
        }
        if (uVar16 != 0xffffff) goto LAB_710056d538;
      }
      else {
LAB_710056d538:
        lVar27 = DAT_7105332f20;
        if (uVar16 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar24 = *(long *)(lVar27 + 0x40);
          if ((*(byte *)(lVar24 + uVar35 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar27,uVar16,param_3,param_4,(long ****)param_5,param_6,param_7,param_8)
            ;
            uVar18 = extraout_x1_26;
          }
          else {
            FUN_71035432d0((int *)(lVar24 + uVar35 * 0x48));
            std::recursive_mutex::unlock();
            uVar18 = extraout_x1_34;
          }
        }
      }
    }
    FUN_710353f120((uint *)&local_a0,uVar18,param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    plVar17 = (long *)*plVar28;
    uVar20 = extraout_x1_04;
    if (plVar17 == (long *)0x0) {
LAB_710056ca08:
      local_a0 = (long ********)&SUB_ffffff00ffffff;
      local_80[0] = 0xffffff;
    }
    else {
      uVar18 = (ulong)(puVar36[1] * 10 + 7);
      plVar31 = plVar28;
      do {
        if ((ulong)plVar17[4] >= uVar18) {
          plVar31 = plVar17;
        }
        plVar17 = (long *)plVar17[(ulong)plVar17[4] < uVar18];
      } while (plVar17 != (long *)0x0);
      if ((plVar31 == plVar28) || (uVar18 < (ulong)plVar31[4])) goto LAB_710056ca08;
      uVar16 = *(uint *)((long)plVar31 + 0x2c);
      local_a0 = (long ********)CONCAT44(local_a0._4_4_,uVar16);
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar20 = extraout_x1_15;
      }
      lVar27 = DAT_7105332f20;
      uVar26 = *(uint *)(plVar31 + 6);
      local_a0 = (long ********)CONCAT44(uVar26,(uint)local_a0);
      if ((uVar26 != 0xffffff) && (uVar26 < *(uint *)(DAT_7105332f20 + 0x48))) {
        std::recursive_mutex::lock();
        lVar24 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar24 + (ulong)uVar26 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar27,uVar26,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
          uVar20 = extraout_x1_16;
        }
        else {
          FUN_71035432d0((int *)(lVar24 + (ulong)uVar26 * 0x48));
          std::recursive_mutex::unlock();
          uVar20 = extraout_x1_27;
        }
      }
      local_80[0] = uVar16;
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar20 = extraout_x1_28;
      }
    }
    FUN_710353f120((uint *)&local_a0,uVar20,param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    plVar17 = (long *)*plVar28;
    uVar20 = extraout_x1_05;
    if (plVar17 == (long *)0x0) {
LAB_710056ca64:
      local_a0 = (long ********)&SUB_ffffff00ffffff;
      local_88[0] = 0xffffff;
    }
    else {
      uVar18 = (ulong)(puVar36[1] * 10 + 8);
      plVar31 = plVar28;
      do {
        if ((ulong)plVar17[4] >= uVar18) {
          plVar31 = plVar17;
        }
        plVar17 = (long *)plVar17[(ulong)plVar17[4] < uVar18];
      } while (plVar17 != (long *)0x0);
      if ((plVar31 == plVar28) || (uVar18 < (ulong)plVar31[4])) goto LAB_710056ca64;
      uVar16 = *(uint *)((long)plVar31 + 0x2c);
      local_a0 = (long ********)CONCAT44(local_a0._4_4_,uVar16);
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar20 = extraout_x1_17;
      }
      lVar27 = DAT_7105332f20;
      uVar26 = *(uint *)(plVar31 + 6);
      local_a0 = (long ********)CONCAT44(uVar26,(uint)local_a0);
      if ((uVar26 != 0xffffff) && (uVar26 < *(uint *)(DAT_7105332f20 + 0x48))) {
        std::recursive_mutex::lock();
        lVar24 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar24 + (ulong)uVar26 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar27,uVar26,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
          uVar20 = extraout_x1_18;
        }
        else {
          FUN_71035432d0((int *)(lVar24 + (ulong)uVar26 * 0x48));
          std::recursive_mutex::unlock();
          uVar20 = extraout_x1_29;
        }
      }
      local_88[0] = uVar16;
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar20 = extraout_x1_30;
      }
    }
    FUN_710353f120((uint *)&local_a0,uVar20,param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    plVar17 = (long *)*plVar28;
    uVar20 = extraout_x1_06;
    if (plVar17 == (long *)0x0) {
LAB_710056cac0:
      local_a0 = (long ********)&SUB_ffffff00ffffff;
      local_90[0] = 0xffffff;
    }
    else {
      uVar18 = (ulong)(puVar36[1] * 10 + 9);
      plVar31 = plVar28;
      do {
        if ((ulong)plVar17[4] >= uVar18) {
          plVar31 = plVar17;
        }
        plVar17 = (long *)plVar17[(ulong)plVar17[4] < uVar18];
      } while (plVar17 != (long *)0x0);
      if ((plVar31 == plVar28) || (uVar18 < (ulong)plVar31[4])) goto LAB_710056cac0;
      uVar16 = *(uint *)((long)plVar31 + 0x2c);
      local_a0 = (long ********)CONCAT44(local_a0._4_4_,uVar16);
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar20 = extraout_x1_19;
      }
      lVar27 = DAT_7105332f20;
      uVar26 = *(uint *)(plVar31 + 6);
      local_a0 = (long ********)CONCAT44(uVar26,(uint)local_a0);
      if ((uVar26 != 0xffffff) && (uVar26 < *(uint *)(DAT_7105332f20 + 0x48))) {
        std::recursive_mutex::lock();
        lVar24 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar24 + (ulong)uVar26 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar27,uVar26,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
          uVar20 = extraout_x1_20;
        }
        else {
          FUN_71035432d0((int *)(lVar24 + (ulong)uVar26 * 0x48));
          std::recursive_mutex::unlock();
          uVar20 = extraout_x1_31;
        }
      }
      local_90[0] = uVar16;
      if (uVar16 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar16);
        uVar20 = extraout_x1_32;
      }
    }
    FUN_710353f120((uint *)&local_a0,uVar20,param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    if (puVar36[6] == 0xffffff) {
      FUN_71035c30f0(&local_a0,extraout_x1_07,(long ****)param_3,param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      plVar17 = local_98;
      pppppppplVar25 = local_a0;
      local_a0 = (long ********)0x0;
      local_98 = (long *)0x0;
      plVar28 = *(long **)(puVar36 + 4);
      *(long *********)(puVar36 + 2) = pppppppplVar25;
      *(long **)(puVar36 + 4) = plVar17;
      if (plVar28 != (long *)0x0) {
        plVar17 = plVar28 + 1;
        do {
          lVar27 = *plVar17;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = lVar27 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_98 != (long *)0x0) {
        plVar17 = local_98 + 1;
        do {
          lVar27 = *plVar17;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = lVar27 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
          std::__shared_weak_count::__release_weak();
        }
      }
      piVar34 = *(int **)(puVar36 + 8);
      lVar27 = DAT_7105332f20;
    }
    else {
      pcVar21 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_a0,puVar36 + 6,(byte *)"model.numdlb");
      uVar16 = (uint)local_a0;
      uVar18 = (ulong)local_a0 & 0xffffffff;
      if ((uint)local_a0 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_a0,(long *********)pcVar21,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      if ((uVar16 == 0xffffff) ||
         (lVar27 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar27 + 0x40) + 4) <= uVar16)) {
        local_a0 = (long ********)0x0;
      }
      else {
        local_a0 = (long ********)
                   (*(ulong *)(*(long *)(lVar27 + 0x60) + uVar18 * 0x20) & 0xffffffffff);
      }
      lVar27 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      pcVar23 = FUN_7103542240;
      param_4 = (byte ****)&DAT_00000008;
      puVar19 = bsearch(&local_a0,*(void **)(lVar27 + 0x20),
                        (ulong)*(uint *)(*(long *)(lVar27 + 8) + 8),8,FUN_7103542240);
      local_70[0] = 0xffffff;
      if (puVar19 != (undefined8 *)0x0) {
        uVar16 = (uint)((ulong)*puVar19 >> 0x20);
        uVar26 = uVar16 >> 8;
        if ((uVar26 != 0xffffff) &&
           (uVar10 = *(uint *)(*(long *)(lVar27 + 8) + 4), local_70[0] = uVar16 >> 8,
           uVar10 < uVar26 || uVar10 == local_70[0])) {
          local_70[0] = 0xffffff;
        }
      }
      param_3 = (long *********)0x1;
      FUN_71035c2890(&local_a0,local_70,(long *********)0x1,param_4,(long ****)pcVar23,param_6,
                     param_7,param_8);
      plVar17 = local_98;
      pppppppplVar25 = local_a0;
      local_a0 = (long ********)0x0;
      local_98 = (long *)0x0;
      plVar28 = *(long **)(puVar36 + 4);
      *(long *********)(puVar36 + 2) = pppppppplVar25;
      *(long **)(puVar36 + 4) = plVar17;
      if (plVar28 != (long *)0x0) {
        plVar17 = plVar28 + 1;
        do {
          lVar27 = *plVar17;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = lVar27 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_98 != (long *)0x0) {
        plVar17 = local_98 + 1;
        do {
          lVar27 = *plVar17;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = lVar27 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (puVar36[1] == 0) {
        (**(code **)(**(long **)(puVar36 + 2) + 0x140))(*(long **)(puVar36 + 2),1);
      }
      piVar34 = *(int **)(puVar36 + 8);
      param_5 = pcVar23;
      lVar27 = DAT_7105332f20;
    }
    DAT_7105332f20 = lVar27;
    if (piVar34 != (int *)0x0) {
      iVar11 = puVar36[1] + 0x700;
      if ((*piVar34 == iVar11) && (iVar15 = piVar34[1], 0 < iVar15)) {
LAB_710056cd28:
        piVar34[1] = iVar15 + 1;
      }
      else {
        uVar18 = (ulong)local_78[0];
        if ((local_78[0] != 0xffffff) && (local_78[0] < *(uint *)(lVar27 + 0x48))) {
          std::recursive_mutex::lock();
          piVar33 = (int *)(*(long *)(lVar27 + 0x40) + uVar18 * 0x48);
          bVar12 = *(byte *)(piVar33 + 2);
          std::recursive_mutex::unlock();
          if (((((bVar12 & 1) != 0) && (piVar33 != (int *)0x0)) && (*piVar33 != 0xffffff)) &&
             (iVar15 = FUN_7103543080((long)piVar33), iVar15 == 3)) {
            param_3 = (long *********)local_78;
            uVar16 = FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar11,param_3,
                                    param_4,(long ****)param_5,param_6,param_7,param_8);
            if ((uVar16 & 1) != 0) {
              iVar15 = piVar34[1];
              *piVar34 = iVar11;
              goto LAB_710056cd28;
            }
          }
        }
      }
    }
    if (((char)puVar36[10] != '\0') && (local_80[0] != 0xffffff)) {
      if (local_90[0] == 0xffffff) {
        param_3 = (long *********)local_80;
        param_4 = (byte ****)local_88;
        FUN_7103739eb0(&local_a0,(long *)*DAT_710593b3d8,param_3,param_4,(long ****)param_5,param_6,
                       param_7,param_8);
      }
      else {
        param_3 = (long *********)local_80;
        param_4 = (byte ****)local_90;
        param_5 = (undefined *)local_88;
        FUN_710373a140(&local_a0,(long *)*DAT_710593b3d8,param_3,param_4,(long ****)param_5,param_6,
                       param_7,param_8);
      }
      FUN_7103738660((undefined8 *)(puVar36 + 0xc),&local_a0,param_3,param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      FUN_7103737e70(&local_a0,extraout_x1_08,param_3,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
    }
    if (local_90[0] != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,local_90[0],param_3,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      local_90[0] = 0xffffff;
    }
    if (local_88[0] != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,local_88[0],param_3,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      local_88[0] = 0xffffff;
    }
    if (local_80[0] != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,local_80[0],param_3,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      local_80[0] = 0xffffff;
    }
    lVar27 = DAT_7105332f20;
    uVar18 = (ulong)local_78[0];
    if (local_78[0] != 0xffffff) {
      if (local_78[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar24 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar24 + uVar18 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar27,(int *)(lVar24 + uVar18 * 0x48),(long ****)param_3,param_4,
                         (long ****)param_5,param_6,param_7,param_8);
        }
        std::recursive_mutex::unlock();
      }
      local_78[0] = 0xffffff;
    }
    uVar16 = 4;
  }
  *puVar36 = uVar16;
  std::recursive_mutex::unlock();
  puVar36 = *(uint **)(param_1 + 0x10);
  if (puVar36 != *(uint **)(param_1 + 0x18)) {
    *puVar36 = uVar2;
    puVar36[1] = uVar4;
    puVar36[8] = uVar3;
    puVar36[9] = uVar5;
    *(ulong *)(puVar36 + 6) = (ulong)auVar39._0_4_;
    *(undefined8 *)(puVar36 + 4) = uVar38;
    puVar36[2] = uVar8;
    *(ulong *)((long)puVar36 + 0x37) = CONCAT71(uStack_a8,local_a9);
    puVar36[0x10] = (uint)lVar37;
    puVar36[0x11] = uVar9;
    *(undefined8 *)(puVar36 + 10) = uVar6;
    *(undefined8 *)(puVar36 + 0xc) = uVar7;
    puVar36[0x12] = 0x1000000;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x50;
    goto LAB_710056d0e4;
  }
  __src = *(void **)(param_1 + 8);
  __n = (long)puVar36 - (long)__src;
  uVar35 = 0x333333333333333;
  uVar18 = ((long)__n >> 4) * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar18) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar27 = (long)*(uint **)(param_1 + 0x18) - (long)__src >> 4;
  if ((ulong)(lVar27 * -0x3333333333333333) < 0x199999999999999) {
    uVar29 = lVar27 * -0x6666666666666666;
    uVar35 = uVar18;
    if (uVar18 <= uVar29) {
      uVar35 = uVar29;
    }
    if (uVar35 != 0) goto LAB_710056cfe8;
    lVar27 = 0;
  }
  else {
LAB_710056cfe8:
    pppppppplVar25 = (long ********)(uVar35 * 0x50);
    if (pppppppplVar25 == (long ********)0x0) {
      pppppppplVar25 = (long ********)0x1;
    }
    lVar27 = FUN_710392e290(0x10,pppppppplVar25,(long ****)param_3,param_4,(long ****)param_5,
                            param_6,param_7,param_8);
    if (lVar27 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70[0] = 0;
        pppplVar22 = (long ****)&local_a0;
        local_a0 = pppppppplVar25;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
        if (((uVar18 & 1) != 0) &&
           (lVar27 = FUN_710392e290(0x10,pppppppplVar25,pppplVar22,param_4,(long ****)param_5,
                                    param_6,param_7,param_8), lVar27 != 0)) goto LAB_710056d058;
      }
      lVar27 = 0;
    }
  }
LAB_710056d058:
  puVar36 = (uint *)(lVar27 + ((long)__n >> 4) * 0x10);
  *puVar36 = uVar2;
  puVar36[1] = uVar4;
  *(ulong *)(puVar36 + 6) = (ulong)auVar39._0_4_;
  *(undefined8 *)(puVar36 + 4) = uVar38;
  puVar36[8] = uVar3;
  puVar36[9] = uVar5;
  puVar36[2] = uVar8;
  *(ulong *)((long)puVar36 + 0x37) = CONCAT71(uStack_a8,local_a9);
  *(undefined8 *)(puVar36 + 10) = uVar6;
  *(undefined8 *)(puVar36 + 0xc) = uVar7;
  lVar24 = SUB168(SEXT816((long)__n) * SEXT816(-0x6666666666666667),8);
  puVar36[0x10] = (uint)lVar37;
  puVar36[0x11] = uVar9;
  puVar36[0x12] = 0x1000000;
  if (0 < (long)__n) {
    memcpy(puVar36 + ((lVar24 >> 5) - (lVar24 >> 0x3f)) * 0x14,__src,__n);
  }
  *(uint **)(param_1 + 8) = puVar36 + ((lVar24 >> 5) - (lVar24 >> 0x3f)) * 0x14;
  *(uint **)(param_1 + 0x10) = puVar36 + 0x14;
  *(ulong *)(param_1 + 0x18) = lVar27 + uVar35 * 0x50;
  if (__src != (void *)0x0) {
    FUN_710392eb40((ulong)__src);
  }
LAB_710056d0e4:
  iVar11 = *(int *)(param_1 + 0x57c);
  *(int *)(param_1 + 0x57c) = iVar11 + 1;
  return iVar11;
}

