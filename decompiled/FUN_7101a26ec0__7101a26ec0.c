// addr:      7101a26ec0
// offset:    0x1a26ec0
// name:      FUN_7101a26ec0
// mangled:   
// signature: undefined __cdecl FUN_7101a26ec0(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a26ec0(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined **local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_9e;
  undefined4 local_96;
  undefined2 local_92;
  undefined4 local_90;
  
  *(int *)(param_1 + 0x164) = param_2;
  if (*(int *)(param_1 + 0x16c) != 10) {
    return;
  }
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_b8 = 0;
  if (param_2 == 0) {
    local_a8 = 0x7463656c65735f61;
    local_a0 = 0x6b5f;
    local_9e = 0x75685f6574696d75;
    local_96 = 0x6572646e;
    local_92 = 100;
    uVar9 = 0x811c9dc5;
    local_b8._4_4_ = 0x1f;
    uVar11 = 0x6d;
    pbVar10 = (byte *)((long)&local_b0 + 1);
    do {
      uVar9 = uVar9 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
  }
  else if (param_2 == 2) {
    local_a8 = 0x7463656c65735f61;
    local_a0 = 0x6b5f;
    local_9e = 0x72635f6574696d75;
    local_96 = 0x5f6c6575;
    local_92 = 0x7262;
    local_90 = 0x6c7761;
    uVar9 = 0x811c9dc5;
    local_b8._4_4_ = 0x23;
    uVar11 = 0x6d;
    pbVar10 = (byte *)((long)&local_b0 + 1);
    do {
      uVar9 = uVar9 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
  }
  else {
    if (param_2 != 1) goto LAB_7101a270d4;
    local_a8 = 0x7463656c65735f61;
    local_a0 = 0x6b5f;
    local_9e = 0x6c615f6574696d75;
    local_96 = 0x6174736c;
    local_92 = 0x72;
    uVar9 = 0x811c9dc5;
    local_b8._4_4_ = 0x1f;
    uVar11 = 0x6d;
    pbVar10 = (byte *)((long)&local_b0 + 1);
    do {
      uVar9 = uVar9 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
  }
  local_a0 = 0x6b5f;
  local_a8 = 0x7463656c65735f61;
  local_b0 = 0x726168635f6c656d;
  local_b8 = CONCAT44(local_b8._4_4_,uVar9);
LAB_7101a270d4:
  if (*(char *)(param_1 + 0xf82) == '\0') {
    FUN_7103776910(&local_c8,**(long **)(param_1 + 0x198) + 8,(long ****)"set_txt_title_00",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_c8,(char *)&local_b0,param_3,param_4,param_5,param_6,param_7,param_8
                  );
    uVar7 = local_c0;
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  else {
    FUN_710377a120(param_1 + 0xe50,(char *)&local_b0,param_3,param_4,param_5,param_6,param_7,param_8
                  );
  }
  plVar5 = *(long **)(param_1 + 0xdd0);
  iVar1 = (int)((ulong)(plVar5[1] - *plVar5) >> 4) * -0x45d1745d;
  if (param_2 == 0) {
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        FUN_71019f0fb0(plVar5,iVar12,(long ****)0x0,param_4,param_5,param_6,param_7,param_8);
        if ((*(int *)(param_1 + 0x170) != 0) || (*(int *)(param_1 + 0x160) != 1))
        goto LAB_7101a27308;
        lVar14 = *(long *)(DAT_710532f730 + 8);
        puVar6 = FUN_71019f1fa0(param_1 + 0xdc8,iVar12,0);
        lVar13 = DAT_710532f730;
        bVar2 = ((ulong)puVar6 & 0xffffffffff) == 0;
        bVar3 = ((ulong)puVar6 & 0xff00000000000000) != 0xc100000000000000;
        bVar4 = false;
        if (!bVar3 && !bVar2) {
          uVar7 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar6);
          if ((int)uVar7 == -1) {
            bVar4 = false;
          }
          else {
            puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x208);
            uVar7 = FUN_7103264270(*(long *)(*(long *)(lVar13 + 8) + 0x168),puVar6);
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(ulong *)(*(long *)*puVar15 + (long)(int)uVar7 * 8 + 0x1290);
            }
            bVar4 = (uVar7 >> 0x30 & 0xff) != 0;
          }
        }
        lVar13 = *(long *)(lVar14 + 0x168);
        puVar8 = FUN_71032631a0(lVar13,0xfd03198f0);
        if (bVar3 || bVar2) {
          if (((ulong)puVar8 & 0xff00000000000000) != 0xc100000000000000 ||
              ((ulong)puVar8 & 0xffffffffff) == 0) goto LAB_7101a27324;
LAB_7101a272f4:
          if (bVar4) {
LAB_7101a272f8:
            FUN_71019f0fb0(*(long **)(param_1 + 0xdd0),iVar12,(long ****)0x1,param_4,param_5,param_6
                           ,param_7,param_8);
          }
        }
        else {
          if ((((ulong)puVar8 & 0xff00000000000000) != 0xc100000000000000 ||
              ((ulong)puVar8 & 0xffffffffff) == 0) ||
              (((ulong)puVar8 ^ (ulong)puVar6) & 0xffffffffff) != 0) goto LAB_7101a272f4;
LAB_7101a27324:
          puVar6 = FUN_71032631a0(lVar13,0x13fdfdfb2b);
          lVar13 = DAT_710532f730;
          bVar2 = false;
          if ((((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) &&
             (((ulong)puVar6 & 0xffffffffff) != 0)) {
            uVar7 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar6);
            if ((int)uVar7 == -1) {
              bVar2 = false;
            }
            else {
              puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x208);
              uVar7 = FUN_7103264270(*(long *)(*(long *)(lVar13 + 8) + 0x168),puVar6);
              if ((int)uVar7 < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(ulong *)(*(long *)*puVar15 + (long)(int)uVar7 * 8 + 0x1290);
              }
              bVar2 = (uVar7 >> 0x30 & 0xff) != 0;
            }
          }
          puVar6 = FUN_71032631a0(*(long *)(lVar14 + 0x168),0x15d7061f77);
          lVar13 = DAT_710532f730;
          bVar3 = false;
          if ((((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) &&
             (((ulong)puVar6 & 0xffffffffff) != 0)) {
            uVar7 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar6);
            if ((int)uVar7 == -1) {
              bVar3 = false;
            }
            else {
              puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x208);
              uVar7 = FUN_7103264270(*(long *)(*(long *)(lVar13 + 8) + 0x168),puVar6);
              if ((int)uVar7 < 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(ulong *)(*(long *)*puVar15 + (long)(int)uVar7 * 8 + 0x1290);
              }
              bVar3 = (uVar7 >> 0x30 & 0xff) != 0;
            }
          }
          puVar6 = FUN_71032631a0(*(long *)(lVar14 + 0x168),0x1257ab1d87);
          lVar13 = DAT_710532f730;
          if (((((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) &&
              (((ulong)puVar6 & 0xffffffffff) != 0)) &&
             (uVar7 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar6),
             (int)uVar7 != -1)) {
            puVar15 = *(undefined8 **)(*DAT_7105314510 + 0x208);
            uVar7 = FUN_7103264270(*(long *)(*(long *)(lVar13 + 8) + 0x168),puVar6);
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(ulong *)(*(long *)*puVar15 + (long)(int)uVar7 * 8 + 0x1290);
            }
            if (((!bVar4 && !bVar2) && !bVar3) && (uVar7 >> 0x30 & 0xff) == 0) goto LAB_7101a27308;
            goto LAB_7101a272f8;
          }
          if ((bVar4 || bVar2) || bVar3) goto LAB_7101a272f8;
        }
LAB_7101a27308:
        if (iVar1 + -1 == iVar12) break;
        plVar5 = *(long **)(param_1 + 0xdd0);
        iVar12 = iVar12 + 1;
      } while( true );
    }
    lVar14 = *(long *)(param_1 + 600);
    for (lVar13 = *(long *)(param_1 + 0x250); lVar13 != lVar14; lVar13 = lVar13 + 0x10) {
      FUN_7101a19eb0(param_1,*(int *)(*(long *)(lVar13 + 8) + 0x150));
    }
  }
  else {
    if (0 < iVar1) {
      for (iVar12 = 0;
          FUN_71019f0fb0(plVar5,iVar12,(long ****)0x0,param_4,param_5,param_6,param_7,param_8),
          iVar1 + -1 != iVar12; iVar12 = iVar12 + 1) {
        plVar5 = *(long **)(param_1 + 0xdd0);
      }
    }
    lVar14 = *(long *)(param_1 + 600);
    for (lVar13 = *(long *)(param_1 + 0x250); lVar13 != lVar14; lVar13 = lVar13 + 0x10) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(*(long *)(lVar13 + 8) + 0x5e8) + 0x10),
                     0x71042b4086);
    }
  }
  return;
}

