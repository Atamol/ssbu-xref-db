// addr:      71023a8cc0
// offset:    0x23a8cc0
// name:      FUN_71023a8cc0
// mangled:   
// signature: undefined __cdecl FUN_71023a8cc0(undefined1[16] param_1, ulong param_2, float param_3, long * param_4, ulong param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, ulong param_9, long * * * param_10, long * * * param_11)


void FUN_71023a8cc0(undefined1 param_1 [16],ulong param_2,float param_3,long *param_4,ulong param_5,
                   long *********param_6,byte ****param_7,long ****param_8,ulong param_9,
                   long ***param_10,long ***param_11)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar4;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  uint uVar5;
  long lVar6;
  short *psVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined4 local_c6;
  undefined2 local_c2;
  byte ***local_98;
  bool local_90;
  undefined1 local_8f;
  undefined8 local_88;
  byte local_80 [64];
  
  FUN_71024ce3e0(param_1,param_2,param_3,(char *)*DAT_710532a860,param_5,param_6,param_7,param_8,
                 param_9,param_10,param_11);
  puVar2 = DAT_710532f7a0;
  if (*(int *)((long)param_4 + 0x324) == 0) {
    *(undefined1 *)(*DAT_710532a860 + 0x5f3d1) = 0;
    FUN_710259c9b0(*(long *)(*DAT_7105329f98 + 0x20),1,param_6,param_7,param_8,param_9,param_10,
                   param_11);
    psVar7 = (short *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x88d68);
    lVar6 = 8000;
    do {
      if ((((psVar7[-0x50] != -1) || (psVar7[-0x28] != -1)) || (*psVar7 != -1)) ||
         (psVar7[0x28] != -1)) goto switchD_71023a95c4_caseD_75;
      lVar6 = lVar6 + -0x140;
      psVar7 = psVar7 + 0xa0;
    } while (lVar6 != 0);
    if (*(char *)*DAT_710532a860 == '\x0e') {
      lVar6 = *(long *)(DAT_710532f7d8 + 8);
      if (*(char *)(lVar6 + 0xf1) == '\0') {
        std::mutex::lock();
        *(uint *)(lVar6 + 0xe8) = *(uint *)(lVar6 + 0xe8) | 1;
        *(undefined1 *)(lVar6 + 0xf1) = 1;
        *(undefined1 *)(lVar6 + 0xf5) = 0;
        *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0xa0) + 0x80) + 0x1cc) =
             *(undefined1 *)(lVar6 + 0xf4);
        *(undefined4 *)(lVar6 + 0xec) = 0xffffffff;
        *(undefined8 *)(lVar6 + 0xf8) = 0x8ffff0000000000;
        *(undefined4 *)(lVar6 + 0x100) = 7;
        std::mutex::unlock();
      }
      FUN_7103308390(0);
      FUN_71033092c0(*(long *)(DAT_710532f8b0 + 8));
      *(undefined4 *)(*DAT_710532a860 + 0x20) = *(undefined4 *)(*DAT_710532a860 + 0x1c);
      lVar6 = *param_4;
      if (*(int *)(lVar6 + 0x44) == 0x320ef3e8) {
        iVar3 = strcmp((char *)(lVar6 + 0x4c),"SpiritsCampaignMenuScene");
        local_90 = iVar3 != 0;
      }
      else {
        local_90 = true;
      }
      local_d8 = 0x4373746972697053;
      local_98 = (byte ***)&PTR_FUN_71050ba180;
      uVar5 = 0x811c9dc5;
      local_8f = (char)param_4[0x66];
      local_d0 = 0x4d6e676961706d61;
      local_c8 = 0x7061;
      uVar13 = 0x53;
      lVar10 = 9;
      local_c6 = 0x6e656353;
      local_c2 = 0x65;
      uVar14 = uVar5;
      do {
        uVar14 = uVar14 * 0x89 ^ uVar13;
        uVar13 = (uint)*(byte *)((long)&local_e0 + lVar10);
        lVar10 = lVar10 + 1;
      } while (uVar13 != 0);
      _local_e0 = CONCAT44(0x17,uVar14);
      lVar10 = *(long *)(lVar6 + 0x38);
      if (lVar10 == 0) {
        local_80[0] = 0;
        local_88 = (long ***)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pbVar12 = (byte *)(lVar10 + 0x10 + uVar11);
          bVar1 = *pbVar12;
          if (bVar1 == 0) break;
          local_80[uVar11] = bVar1;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          bVar1 = pbVar12[1];
          if (bVar1 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar1;
          uVar11 = uVar11 + 2;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        uVar14 = (uint)local_80[0];
        local_88 = (long ***)(uVar11 << 0x20);
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar5 = uVar5 * 0x89 ^ uVar14;
            uVar14 = (uint)*pbVar12;
          } while (uVar14 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar5);
      }
      FUN_71037266d0(*(long *)(lVar6 + 0x20),(undefined8 *)&local_e0,(long ****)&local_88,&local_98,
                     param_8,param_9,param_10,param_11);
      *(undefined4 *)(lVar6 + 0x30) = 1;
      *(undefined1 *)(param_4 + 0x66) = 0;
      return;
    }
    goto switchD_71023a95c4_caseD_66;
  }
  lVar6 = *param_4;
  lVar10 = *(long *)(lVar6 + 0x28);
  if (*(long *)(lVar10 + 0x60) != 0) {
    return;
  }
  if (*(long *)(lVar10 + 0x30) != *(long *)(lVar10 + 0x38)) {
    return;
  }
  if (*(long *)(*(long *)(lVar6 + 0x20) + 0x10) != 0) {
    return;
  }
  iVar3 = *(int *)(lVar6 + 0x40);
  if (iVar3 == 0x66) goto switchD_71023a95c4_caseD_66;
  uVar4 = extraout_x1;
  if (DAT_710532f7a0 != (undefined8 *)0x0) {
    puVar16 = (uint *)*DAT_710532f7a0;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_00;
      }
      puVar16[0x12] = 3;
      if ((((puVar16[0x26] != 2) && (puVar16[0x3a] != 2)) &&
          ((puVar16[0x4e] != 2 &&
           (((puVar16[0x62] != 2 && (puVar16[0x76] != 2)) && (puVar16[0x8a] != 2)))))) &&
         (puVar16[0x9e] != 2)) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
    puVar16 = (uint *)*puVar2;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x28);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_01;
      }
      puVar16[0x26] = 3;
      if (((puVar16[0x12] != 2) && (puVar16[0x3a] != 2)) &&
         ((puVar16[0x4e] != 2 &&
          ((((puVar16[0x62] != 2 && (puVar16[0x76] != 2)) && (puVar16[0x8a] != 2)) &&
           (puVar16[0x9e] != 2)))))) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
    puVar16 = (uint *)*puVar2;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x30);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_02;
      }
      puVar16[0x3a] = 3;
      if ((((puVar16[0x12] != 2) && (puVar16[0x26] != 2)) &&
          ((puVar16[0x4e] != 2 &&
           (((puVar16[0x62] != 2 && (puVar16[0x76] != 2)) && (puVar16[0x8a] != 2)))))) &&
         (puVar16[0x9e] != 2)) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
    puVar16 = (uint *)*puVar2;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x38);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_03;
      }
      puVar16[0x4e] = 3;
      if ((((puVar16[0x12] != 2) && (puVar16[0x26] != 2)) &&
          ((puVar16[0x3a] != 2 &&
           (((puVar16[0x62] != 2 && (puVar16[0x76] != 2)) && (puVar16[0x8a] != 2)))))) &&
         (puVar16[0x9e] != 2)) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
    puVar16 = (uint *)*puVar2;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x40);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_04;
      }
      puVar16[0x62] = 3;
      if (((puVar16[0x12] != 2) && (puVar16[0x26] != 2)) &&
         ((puVar16[0x3a] != 2 &&
          ((((puVar16[0x4e] != 2 && (puVar16[0x76] != 2)) && (puVar16[0x8a] != 2)) &&
           (puVar16[0x9e] != 2)))))) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
    puVar16 = (uint *)*puVar2;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x48);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_05;
      }
      puVar16[0x76] = 3;
      if ((((puVar16[0x12] != 2) && (puVar16[0x26] != 2)) &&
          ((puVar16[0x3a] != 2 &&
           (((puVar16[0x4e] != 2 && (puVar16[0x62] != 2)) && (puVar16[0x8a] != 2)))))) &&
         (puVar16[0x9e] != 2)) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
    puVar16 = (uint *)*puVar2;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x50);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_06;
      }
      puVar16[0x8a] = 3;
      if ((((puVar16[0x12] != 2) && (puVar16[0x26] != 2)) &&
          ((puVar16[0x3a] != 2 &&
           (((puVar16[0x4e] != 2 && (puVar16[0x62] != 2)) && (puVar16[0x76] != 2)))))) &&
         (puVar16[0x9e] != 2)) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
    puVar16 = (uint *)*puVar2;
    if (((byte)*puVar16 >> 1 & 1) != 0) {
      lVar6 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x58);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar6,0);
        uVar4 = extraout_x1_07;
      }
      puVar16[0x9e] = 3;
      if (((puVar16[0x12] != 2) && (puVar16[0x26] != 2)) &&
         ((puVar16[0x3a] != 2 &&
          ((((puVar16[0x4e] != 2 && (puVar16[0x62] != 2)) && (puVar16[0x76] != 2)) &&
           (puVar16[0x8a] != 2)))))) {
        *puVar16 = *puVar16 | 0x20;
      }
    }
  }
  if (iVar3 == 0x76) {
    if (*(uint *)((long)param_4 + 0x31c) < 0x13) {
      *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4 + 0x2d0) = 0xd
      ;
      *(undefined1 *)((long)param_4 + 0x334) = 0;
      *(undefined4 *)(param_4 + 0x67) = 0;
      return;
    }
    goto LAB_71023a98f0;
  }
  uVar14 = iVar3 - 0x77;
  if (uVar14 < 0xf) {
    if (*(uint *)((long)param_4 + 0x31c) < 0x13) {
      *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4 + 0x2d0) = 0xe
      ;
      uVar8 = 1;
LAB_71023a959c:
      *(undefined1 *)((long)param_4 + 0x334) = uVar8;
      *(uint *)(param_4 + 0x67) = uVar14;
      return;
    }
    goto LAB_71023a98f0;
  }
  uVar14 = iVar3 - 0x86;
  if (uVar14 < 3) {
    if (*(uint *)((long)param_4 + 0x31c) < 0x13) {
      *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4 + 0x2d0) = 0xf
      ;
      uVar8 = 2;
      goto LAB_71023a959c;
    }
    goto LAB_71023a98f0;
  }
  uVar14 = iVar3 - 0x89;
  if (uVar14 < 5) {
    if (*(uint *)((long)param_4 + 0x31c) < 0x13) {
      *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4 + 0x2d0) = 0xc
      ;
      uVar8 = 3;
      goto LAB_71023a959c;
    }
    goto LAB_71023a98f0;
  }
  switch(iVar3) {
  case 0:
    uVar11 = FUN_71024d10c0((undefined1 *)*DAT_710532a860,uVar4,param_6,param_7,param_8,param_9,
                            param_10,param_11);
    if ((uVar11 & 1) == 0) {
      return;
    }
  case 0x66:
switchD_71023a95c4_caseD_66:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) {
LAB_71023a98f0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 6;
    break;
  default:
    goto switchD_71023a95c4_caseD_1;
  case 2:
    puVar15 = (undefined1 *)*DAT_710532a860;
    if (*(int *)(puVar15 + 0x18) != 0) {
      if (*(int *)(puVar15 + 0x18) == 2) {
        FUN_71024c6cb0((long)puVar15,uVar4,param_6,param_7,param_8,param_9,param_10,param_11);
        uVar4 = extraout_x1_08;
      }
      *puVar15 = 0xd;
    }
    if (*(int *)(puVar15 + 0x14) == 0) {
      FUN_71024c6f50((long)puVar15,uVar4,(long ****)param_6,param_7,param_8,param_9,param_10,
                     param_11);
    }
    else if (*(int *)(puVar15 + 0x14) == 2) {
      if (*(int *)(puVar15 + 0x78) != 0xffff) {
        FUN_71024c6f50((long)puVar15,uVar4,(long ****)param_6,param_7,param_8,param_9,param_10,
                       param_11);
      }
      *puVar15 = 0xd;
    }
    *(undefined4 *)(puVar15 + 0x78) = 0xffff;
    *(undefined4 *)(puVar15 + 0x80) = 0;
switchD_71023a95c4_caseD_1:
    if (*(uint *)((long)param_4 + 0x31c) < 0x13) {
      lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
      uVar9 = 3;
      break;
    }
    goto LAB_71023a98f0;
  case 100:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 10;
    break;
  case 0x65:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x10;
    break;
  case 0x67:
    if (0x11 < *(int *)((long)param_4 + 0x31c)) {
      return;
    }
    uVar14 = *(int *)((long)param_4 + 0x31c) + 1;
    *(uint *)((long)param_4 + 0x31c) = uVar14;
    if (0x12 < uVar14) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)uVar14 * 4;
    uVar9 = 0x11;
    break;
  case 0x68:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x16;
    break;
  case 0x69:
    goto switchD_71023a95c4_caseD_69;
  case 0x6a:
    if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) goto LAB_71023a98f0;
    *(undefined2 *)((long)param_4 + 0x346) =
         *(undefined2 *)
          (*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
           (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700 + 0x3d6e0);
    *(undefined1 *)((long)param_4 + 0x344) = 1;
switchD_71023a95c4_caseD_69:
    if (0x11 < *(int *)((long)param_4 + 0x31c)) {
      return;
    }
    uVar14 = *(int *)((long)param_4 + 0x31c) + 1;
    *(uint *)((long)param_4 + 0x31c) = uVar14;
    if (uVar14 < 0x13) {
      lVar6 = (long)param_4 + (long)(int)uVar14 * 4;
      uVar9 = 0x13;
      break;
    }
    goto LAB_71023a98f0;
  case 0x6b:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x17;
    break;
  case 0x6c:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x14;
    break;
  case 0x6d:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x15;
    break;
  case 0x6e:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x1a;
    break;
  case 0x6f:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x18;
    break;
  case 0x70:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x1b;
    break;
  case 0x71:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x1c;
    break;
  case 0x72:
    FUN_710323e4f0(*(long *)(*(long *)(DAT_710532f870 + 8) + 8),1,param_6,param_7,param_8,param_9,
                   param_10,param_11);
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x20;
    break;
  case 0x74:
    puVar15 = (undefined1 *)*DAT_710532a860;
    if (*(int *)(puVar15 + 0x18) != 0) {
      if (*(int *)(puVar15 + 0x18) == 2) {
        FUN_71024c6cb0((long)puVar15,uVar4,param_6,param_7,param_8,param_9,param_10,param_11);
        uVar4 = extraout_x1_09;
      }
      *puVar15 = 0xd;
    }
    if (*(int *)(puVar15 + 0x14) == 0) {
      FUN_71024c6f50((long)puVar15,uVar4,(long ****)param_6,param_7,param_8,param_9,param_10,
                     param_11);
    }
    else if (*(int *)(puVar15 + 0x14) == 2) {
      if (*(int *)(puVar15 + 0x78) != 0xffff) {
        FUN_71024c6f50((long)puVar15,uVar4,(long ****)param_6,param_7,param_8,param_9,param_10,
                       param_11);
      }
      *puVar15 = 0xd;
    }
    *(undefined4 *)(puVar15 + 0x78) = 0xffff;
    *(undefined4 *)(puVar15 + 0x80) = 0;
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x28;
    break;
  case 0x75:
switchD_71023a95c4_caseD_75:
    if (0x12 < *(uint *)((long)param_4 + 0x31c)) goto LAB_71023a98f0;
    lVar6 = (long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x31c) * 4;
    uVar9 = 0x27;
  }
  *(undefined4 *)(lVar6 + 0x2d0) = uVar9;
  return;
}

