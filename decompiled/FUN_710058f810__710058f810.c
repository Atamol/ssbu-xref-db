// addr:      710058f810
// offset:    0x58f810
// name:      FUN_710058f810
// mangled:   
// signature: ulong __cdecl FUN_710058f810(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710058f810(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  bool bVar16;
  long lVar17;
  uint local_68 [2];
  undefined8 local_58;
  
  lVar13 = DAT_7105324680;
  lVar15 = *(long *)(param_1 + 8);
  std::recursive_mutex::lock();
  lVar13 = *(long *)(lVar13 + 0xb8);
  std::recursive_mutex::unlock();
  plVar14 = (long *)(lVar13 + 0x10);
  plVar9 = (long *)*plVar14;
  if (plVar9 == (long *)0x0) {
LAB_710058f89c:
    local_58 = &SUB_ffffff00ffffff;
    uVar10 = 0xffffff;
    bVar16 = true;
    uVar6 = extraout_x1;
  }
  else {
    uVar6 = (ulong)(*(int *)(lVar15 + 0x10) * 10 + 6);
    plVar11 = plVar14;
    do {
      if ((ulong)plVar9[4] >= uVar6) {
        plVar11 = plVar9;
      }
      plVar9 = (long *)plVar9[(ulong)plVar9[4] < uVar6];
    } while (plVar9 != (long *)0x0);
    if ((plVar11 == plVar14) || (uVar6 < (ulong)plVar11[4])) goto LAB_710058f89c;
    uVar10 = *(uint *)((long)plVar11 + 0x2c);
    uVar6 = (ulong)uVar10;
    local_58 = (undefined1 *)CONCAT44(local_58._4_4_,uVar10);
    if (uVar10 != 0xffffff) {
      FUN_7103540a00(DAT_7105332f20,uVar10);
      uVar6 = extraout_x1_00;
    }
    uVar3 = DAT_7105332f20;
    uVar10 = *(uint *)(plVar11 + 6);
    uVar12 = (ulong)uVar10;
    local_58 = (undefined1 *)CONCAT44(uVar10,(uint)local_58);
    if (uVar10 == 0xffffff) {
      bVar16 = true;
      uVar10 = 0xffffff;
    }
    else {
      if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar13 = *(long *)(uVar3 + 0x40);
        if ((*(byte *)(lVar13 + uVar12 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(uVar3,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar6 = extraout_x1_01;
        }
        else {
          FUN_71035432d0((int *)(lVar13 + uVar12 * 0x48));
          std::recursive_mutex::unlock();
          uVar6 = extraout_x1_02;
        }
        bVar16 = true;
        if (uVar10 == 0xffffff) goto LAB_710058f8ac;
      }
      uVar3 = DAT_7105332f20;
      bVar16 = uVar10 == 0xffffff;
      if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar13 = *(long *)(uVar3 + 0x40);
        if ((*(byte *)(lVar13 + uVar12 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(uVar3,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar6 = extraout_x1_03;
        }
        else {
          FUN_71035432d0((int *)(lVar13 + uVar12 * 0x48));
          std::recursive_mutex::unlock();
          uVar6 = extraout_x1_04;
        }
      }
    }
  }
LAB_710058f8ac:
  uVar6 = FUN_710353f120((uint *)&local_58,uVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = DAT_7105332f20;
  uVar5 = 0xffffff;
  local_68[0] = 0xffffff;
  if (!bVar16) {
    if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar13 = *(long *)(uVar3 + 0x40);
      lVar17 = lVar13 + (ulong)uVar10 * 0x48;
      bVar2 = *(byte *)(lVar17 + 8);
      uVar6 = std::recursive_mutex::unlock();
      uVar5 = 0xffffff;
      if (((bVar2 & 1) != 0) && (lVar17 != 0)) {
        lVar13 = lVar13 + (ulong)uVar10 * 0x48;
        puVar8 = *(uint **)(lVar13 + 0x10);
        puVar1 = *(uint **)(lVar13 + 0x18);
        uVar5 = 0xffffff;
        if (puVar8 != puVar1) {
          do {
            uVar5 = *puVar8;
            if (((uVar5 != 0xffffff) &&
                (uVar5 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
               (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar5 * 0x20
                         + 0x18) == 0x752afba84)) {
              uVar6 = FUN_7103540a00(DAT_7105332f20,uVar5);
              goto LAB_710058f978;
            }
            puVar8 = puVar8 + 1;
            uVar6 = DAT_7105332f20;
          } while (puVar1 != puVar8);
          goto LAB_710058f974;
        }
      }
    }
    else {
LAB_710058f974:
      uVar5 = 0xffffff;
    }
  }
LAB_710058f978:
  puVar7 = *(undefined8 **)(lVar15 + 0x18);
  local_68[0] = uVar5;
  if (*(char *)(puVar7 + 0x53) == '\0') {
    if ((long *)*puVar7 != (long *)0x0) {
      lVar13 = *(long *)*puVar7;
      uVar6 = 0;
      if (lVar13 != 0) {
        param_3 = (long *********)0x1;
        uVar4 = FUN_710372ca20(lVar13,local_68,1,param_4,param_5,param_6,param_7,param_8);
        uVar6 = (ulong)uVar4;
        puVar7 = *(undefined8 **)(lVar15 + 0x18);
        if (*(char *)(puVar7 + 0x53) != '\0') goto LAB_710058f9d0;
      }
    }
    if ((long *)*puVar7 != (long *)0x0) {
      param_3 = (long *********)(puVar7 + 0x4c);
      uVar6 = FUN_71037271e0(*(ulong *)(*(long *)*puVar7 + 8),"game_",(ulong *)param_3,param_4,
                             param_5,param_6,param_7,param_8);
    }
  }
LAB_710058f9d0:
  uVar4 = 0xffffff;
  if (uVar5 != 0xffffff) {
    uVar6 = FUN_7103540b10(DAT_7105332f20,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar3 = DAT_7105332f20;
  local_68[0] = 0xffffff;
  if (!bVar16) {
    if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar13 = *(long *)(uVar3 + 0x40);
      lVar17 = lVar13 + (ulong)uVar10 * 0x48;
      bVar2 = *(byte *)(lVar17 + 8);
      uVar6 = std::recursive_mutex::unlock();
      uVar4 = 0xffffff;
      if (((bVar2 & 1) != 0) && (lVar17 != 0)) {
        lVar13 = lVar13 + (ulong)uVar10 * 0x48;
        puVar8 = *(uint **)(lVar13 + 0x10);
        puVar1 = *(uint **)(lVar13 + 0x18);
        uVar4 = 0xffffff;
        if (puVar8 != puVar1) {
          do {
            uVar4 = *puVar8;
            if (((uVar4 != 0xffffff) &&
                (uVar4 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
               (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar4 * 0x20
                         + 0x18) == 0x943c9dbba)) {
              uVar6 = FUN_7103540a00(DAT_7105332f20,uVar4);
              goto LAB_710058fab0;
            }
            puVar8 = puVar8 + 1;
            uVar6 = DAT_7105332f20;
          } while (puVar1 != puVar8);
          goto LAB_710058faac;
        }
      }
    }
    else {
LAB_710058faac:
      uVar4 = 0xffffff;
    }
  }
LAB_710058fab0:
  puVar7 = *(undefined8 **)(lVar15 + 0x20);
  local_68[0] = uVar4;
  if (*(char *)(puVar7 + 0x53) == '\0') {
    if ((long *)*puVar7 != (long *)0x0) {
      lVar13 = *(long *)*puVar7;
      uVar6 = 0;
      if (lVar13 != 0) {
        param_3 = (long *********)0x1;
        uVar5 = FUN_710372ca20(lVar13,local_68,1,param_4,param_5,param_6,param_7,param_8);
        uVar6 = (ulong)uVar5;
        puVar7 = *(undefined8 **)(lVar15 + 0x20);
        if (*(char *)(puVar7 + 0x53) != '\0') goto LAB_710058fb08;
      }
    }
    if ((long *)*puVar7 != (long *)0x0) {
      param_3 = (long *********)(puVar7 + 0x4c);
      uVar6 = FUN_71037271e0(*(ulong *)(*(long *)*puVar7 + 8),"effect_",(ulong *)param_3,param_4,
                             param_5,param_6,param_7,param_8);
    }
  }
LAB_710058fb08:
  uVar5 = 0xffffff;
  if (uVar4 != 0xffffff) {
    uVar6 = FUN_7103540b10(DAT_7105332f20,uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar3 = DAT_7105332f20;
  local_68[0] = 0xffffff;
  if (!bVar16) {
    if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar13 = *(long *)(uVar3 + 0x40);
      lVar17 = lVar13 + (ulong)uVar10 * 0x48;
      bVar2 = *(byte *)(lVar17 + 8);
      uVar6 = std::recursive_mutex::unlock();
      uVar5 = 0xffffff;
      if (((bVar2 & 1) != 0) && (lVar17 != 0)) {
        lVar13 = lVar13 + (ulong)uVar10 * 0x48;
        puVar8 = *(uint **)(lVar13 + 0x10);
        puVar1 = *(uint **)(lVar13 + 0x18);
        uVar5 = 0xffffff;
        if (puVar8 != puVar1) {
          do {
            uVar5 = *puVar8;
            if (((uVar5 != 0xffffff) &&
                (uVar5 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
               (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar5 * 0x20
                         + 0x18) == 0x8dc8a3fbf)) {
              uVar6 = FUN_7103540a00(DAT_7105332f20,uVar5);
              goto LAB_710058fbe8;
            }
            puVar8 = puVar8 + 1;
            uVar6 = DAT_7105332f20;
          } while (puVar1 != puVar8);
          goto LAB_710058fbe4;
        }
      }
    }
    else {
LAB_710058fbe4:
      uVar5 = 0xffffff;
    }
  }
LAB_710058fbe8:
  puVar7 = *(undefined8 **)(lVar15 + 0x28);
  local_68[0] = uVar5;
  if (*(char *)(puVar7 + 0x53) == '\0') {
    if ((long *)*puVar7 != (long *)0x0) {
      lVar13 = *(long *)*puVar7;
      uVar6 = 0;
      if (lVar13 != 0) {
        param_3 = (long *********)0x1;
        uVar4 = FUN_710372ca20(lVar13,local_68,1,param_4,param_5,param_6,param_7,param_8);
        uVar6 = (ulong)uVar4;
        puVar7 = *(undefined8 **)(lVar15 + 0x28);
        if (*(char *)(puVar7 + 0x53) != '\0') goto LAB_710058fc40;
      }
    }
    if ((long *)*puVar7 != (long *)0x0) {
      param_3 = (long *********)(puVar7 + 0x4c);
      uVar6 = FUN_71037271e0(*(ulong *)(*(long *)*puVar7 + 8),"sound_",(ulong *)param_3,param_4,
                             param_5,param_6,param_7,param_8);
    }
  }
LAB_710058fc40:
  if (uVar5 != 0xffffff) {
    uVar6 = FUN_7103540b10(DAT_7105332f20,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
    local_68[0] = 0xffffff;
  }
  uVar3 = DAT_7105332f20;
  if ((!bVar16) && (uVar10 < *(uint *)(DAT_7105332f20 + 0x48))) {
    std::recursive_mutex::lock();
    lVar13 = *(long *)(uVar3 + 0x40);
    if ((*(byte *)(lVar13 + (ulong)uVar10 * 0x48 + 8) & 1) != 0) {
      FUN_710353f5a0(uVar3,(int *)(lVar13 + (ulong)uVar10 * 0x48),(long ****)param_3,param_4,param_5
                     ,param_6,param_7,param_8);
    }
    uVar6 = std::recursive_mutex::unlock();
  }
  return uVar6;
}

