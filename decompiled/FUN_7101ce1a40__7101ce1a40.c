// addr:      7101ce1a40
// offset:    0x1ce1a40
// name:      FUN_7101ce1a40
// mangled:   
// signature: undefined __cdecl FUN_7101ce1a40(long param_1, int param_2, uint param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ce1a40(long param_1,int param_2,uint param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar12;
  undefined8 extraout_x1_08;
  undefined8 *puVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  byte *pbVar23;
  int *piVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  long lVar28;
  undefined4 uVar29;
  long *plVar30;
  long *plVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined4 local_220 [2];
  undefined **local_218;
  long local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  long ***local_1e0;
  long *local_1d8;
  undefined4 local_1d0 [2];
  undefined **local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  uint local_190 [2];
  undefined8 local_188;
  undefined8 local_148;
  byte local_140 [64];
  uint local_100 [2];
  undefined8 uStack_f8;
  byte abStack_f7 [7];
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e6;
  undefined4 local_de;
  undefined1 local_da;
  undefined8 local_b8;
  byte local_b0 [68];
  undefined4 local_6c [3];
  
  if (*(int *)(param_1 + 0x228) == 0x1a) {
    return;
  }
  pppplVar14 = (long ****)(param_1 + 0x288);
  uVar1 = (uint)param_4;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  pppplVar16 = param_5;
  uVar18 = param_6;
  FUN_7101ce0260(param_1,(int *)pppplVar14);
  uVar20 = 0;
  ppppbVar15 = (byte ****)(param_1 + 0x300);
  pcVar3 = "mnu_share_detail_owner_follow";
  if (*(char *)(param_1 + 0x300) != '\0') {
    pcVar3 = "mnu_share_detail_owner_unfollow";
  }
  while( true ) {
    bVar5 = pcVar3[uVar20];
    if (bVar5 == 0) break;
    local_b0[uVar20] = bVar5;
    if (0x3e < (int)uVar20 + 1U) {
      uVar20 = (ulong)((int)uVar20 + 1);
      break;
    }
    bVar5 = (pcVar3 + uVar20)[1];
    if (bVar5 == 0) {
      uVar20 = uVar20 + 1;
      break;
    }
    local_b0[uVar20 + 1] = bVar5;
    uVar20 = uVar20 + 2;
  }
  uVar32 = 0x811c9dc5;
  local_b0[uVar20 & 0xffffffff] = 0;
  local_b8 = uVar20 << 0x20;
  uVar19 = (uint)local_b0[0];
  uVar26 = uVar32;
  if (local_b0[0] != 0) {
    pbVar23 = local_b0;
    do {
      pbVar23 = pbVar23 + 1;
      uVar26 = uVar26 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar23;
    } while (uVar19 != 0);
  }
  local_b8 = CONCAT44((int)uVar20,uVar26);
  FUN_71032d65d0(*(long *)(param_1 + 0x2f0),1,(long)&local_b8,param_4,pppplVar16,uVar18,param_7,
                 param_8);
  local_100[0] = 0;
  local_100[1] = 0x1e;
  uStack_f8 = 0x726168735f756e6d;
  local_f0 = 0x6c69617465645f65;
  local_e8 = 0x6f5f;
  local_e6 = 0x6f72705f72656e77;
  uVar26 = 0x6d;
  local_de = 0x656c6966;
  local_da = 0;
  lVar21 = 9;
  local_100[0] = uVar32;
  do {
    local_100[0] = local_100[0] * 0x89 ^ uVar26;
    uVar26 = (uint)*(byte *)((long)local_100 + lVar21);
    lVar21 = lVar21 + 1;
  } while (uVar26 != 0);
  local_100[1] = 0x1e;
  FUN_71032d65d0(*(long *)(param_1 + 0x2f0),0,(long)local_100,param_4,pppplVar16,uVar18,param_7,
                 param_8);
  uVar20 = 0;
  pcVar3 = "mnu_share_detail_owner_report";
  if (*(char *)(param_1 + 0x301) != '\0') {
    pcVar3 = "mnu_share_detail_reported";
  }
  while( true ) {
    bVar5 = pcVar3[uVar20];
    if (bVar5 == 0) break;
    local_140[uVar20] = bVar5;
    if (0x3e < (int)uVar20 + 1U) {
      uVar20 = (ulong)((int)uVar20 + 1);
      break;
    }
    bVar5 = (pcVar3 + uVar20)[1];
    if (bVar5 == 0) {
      uVar20 = uVar20 + 1;
      break;
    }
    local_140[uVar20 + 1] = bVar5;
    uVar20 = uVar20 + 2;
  }
  local_140[uVar20 & 0xffffffff] = 0;
  local_148 = uVar20 << 0x20;
  uVar19 = (uint)local_140[0];
  uVar26 = uVar32;
  if (local_140[0] != 0) {
    pbVar23 = local_140;
    do {
      pbVar23 = pbVar23 + 1;
      uVar26 = uVar26 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar23;
    } while (uVar19 != 0);
  }
  local_148 = CONCAT44((int)uVar20,uVar26);
  puVar13 = &local_148;
  FUN_71032d65d0(*(long *)(param_1 + 0x2f0),2,(long)puVar13,param_4,pppplVar16,uVar18,param_7,
                 param_8);
  lVar21 = *(long *)(param_1 + 0x2f0);
  uVar12 = extraout_x1;
  if (*(char *)(param_1 + 0x301) == '\0') {
    if (2 < *(int *)(lVar21 + 200)) {
      uVar12 = 0;
      if (*(long *)(lVar21 + 0xe0) != 0) {
        puVar13 = (undefined8 *)0x2;
        FUN_7103771d60((undefined8 *)local_190,*(long *)(lVar21 + 0xe0),(long ****)0x2,param_4,
                       pppplVar16,uVar18,param_7,param_8);
        lVar21 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
        uVar12 = extraout_x1_01;
        if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar21 >> 3) < 3)
        goto LAB_7101ce1d4c;
        local_1e0 = *(long ****)(lVar21 + 0x10);
        goto LAB_7101ce1d50;
      }
    }
  }
  else if (2 < *(int *)(lVar21 + 200)) {
    uVar12 = 0;
    if (*(long *)(lVar21 + 0xe0) != 0) {
      puVar13 = (undefined8 *)0x2;
      FUN_7103771d60((undefined8 *)local_190,*(long *)(lVar21 + 0xe0),(long ****)0x2,param_4,
                     pppplVar16,uVar18,param_7,param_8);
      lVar21 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
      uVar12 = extraout_x1_00;
      if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar21 >> 3) < 5) {
LAB_7101ce1d4c:
        local_1e0 = (long ***)0x0;
      }
      else {
        local_1e0 = *(long ****)(lVar21 + 0x20);
      }
LAB_7101ce1d50:
      plVar30 = (long *)CONCAT17(local_188._7_1_,
                                 CONCAT16(local_188._6_1_,
                                          CONCAT15(local_188._5_1_,
                                                   CONCAT14(local_188._4_1_,(undefined4)local_188)))
                                );
      plVar10 = (long *)*plVar30;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2b0))(plVar10,&local_1e0);
        uVar12 = extraout_x1_02;
      }
      local_190[0] = 0x523d9c8;
      local_190[1] = 0x71;
      local_188._0_4_ = 0;
      local_188._4_1_ = 0;
      local_188._5_1_ = 0;
      local_188._6_1_ = 0;
      local_188._7_1_ = 0;
      if (plVar30 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar30);
        uVar12 = extraout_x1_03;
      }
    }
  }
  lVar21 = *(long *)(param_1 + 0x2f0);
  iVar9 = *(int *)(lVar21 + 200);
  if (1 < iVar9) {
    uVar12 = 0;
    if (*(long *)(lVar21 + 0xe0) != 0) {
      puVar13 = (undefined8 *)0x1;
      FUN_7103771d60((undefined8 *)local_190,*(long *)(lVar21 + 0xe0),(long ****)0x1,param_4,
                     pppplVar16,uVar18,param_7,param_8);
      puVar4 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
      if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar4) {
        local_1e0 = (long ***)0x0;
      }
      else {
        local_1e0 = (long ***)*puVar4;
      }
      plVar30 = (long *)CONCAT17(local_188._7_1_,
                                 CONCAT16(local_188._6_1_,
                                          CONCAT15(local_188._5_1_,
                                                   CONCAT14(local_188._4_1_,(undefined4)local_188)))
                                );
      plVar10 = (long *)*plVar30;
      uVar12 = extraout_x1_04;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2b0))(plVar10,&local_1e0);
        uVar12 = extraout_x1_05;
      }
      local_190[0] = 0x523d9c8;
      local_190[1] = 0x71;
      local_188._0_4_ = 0;
      local_188._4_1_ = 0;
      local_188._5_1_ = 0;
      local_188._6_1_ = 0;
      local_188._7_1_ = 0;
      if (plVar30 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar30);
        uVar12 = extraout_x1_06;
      }
      lVar21 = *(long *)(param_1 + 0x2f0);
      iVar9 = *(int *)(lVar21 + 200);
    }
    if (((2 < iVar9) && (lVar21 = *(long *)(lVar21 + 0xe0), lVar21 != 0)) &&
       (lVar28 = *(long *)(lVar21 + 0x1b8), lVar28 != 0)) {
      lVar25 = lVar21 + 0x1b8;
      do {
        if (1 < *(int *)(lVar28 + 0x20)) {
          lVar25 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 2) * 8);
      } while (lVar28 != 0);
      if (((lVar25 != lVar21 + 0x1b8) && (*(int *)(lVar25 + 0x20) < 3)) &&
         (plVar30 = *(long **)(lVar25 + 0x28), plVar30 != (long *)0x0)) {
        bVar7 = *(char *)(param_1 + 0x301) == '\0';
        (**(code **)(*plVar30 + 0x1f8))(plVar30,bVar7);
        puVar13 = (undefined8 *)0x0;
        (**(code **)(*plVar30 + 0x388))(plVar30,!bVar7);
        uVar12 = extraout_x1_07;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  FUN_7101ce1840(param_1,uVar12,puVar13,param_4,pppplVar16,uVar18,param_7,param_8);
  FUN_7101cdf560(param_1,extraout_x1_08,puVar13,param_4,pppplVar16,uVar18,param_7,param_8);
  puVar4 = (undefined8 *)(param_1 + 0x250);
  FUN_7103776910((undefined8 *)local_190,(long)puVar4,(long ****)"set_rep_bgshot",puVar13,param_4,
                 pppplVar16,uVar18,param_7,param_8);
  uVar20 = CONCAT17(local_188._7_1_,
                    CONCAT16(local_188._6_1_,
                             CONCAT15(local_188._5_1_,
                                      CONCAT14(local_188._4_1_,(undefined4)local_188))));
  FUN_7103779650(uVar20);
  local_190[0] = 0x523d9a8;
  local_190[1] = 0x71;
  local_188._0_4_ = 0;
  local_188._4_1_ = 0;
  local_188._5_1_ = 0;
  local_188._6_1_ = 0;
  local_188._7_1_ = 0;
  if (uVar20 != 0) {
    FUN_710392eb40(uVar20);
  }
  puVar33 = (undefined8 *)(param_1 + 0x260);
  ppppbVar17 = (byte ****)(param_1 + 0x2f8);
  FUN_7103776910((undefined8 *)local_190,(long)puVar33,(long ****)"set_rep_bgshot",puVar13,param_4,
                 pppplVar16,uVar18,param_7,param_8);
  uVar20 = CONCAT17(local_188._7_1_,
                    CONCAT16(local_188._6_1_,
                             CONCAT15(local_188._5_1_,
                                      CONCAT14(local_188._4_1_,(undefined4)local_188))));
  FUN_7103779650(uVar20);
  local_190[0] = 0x523d9a8;
  local_190[1] = 0x71;
  local_188._0_4_ = 0;
  local_188._4_1_ = 0;
  local_188._5_1_ = 0;
  local_188._6_1_ = 0;
  local_188._7_1_ = 0;
  if (uVar20 != 0) {
    FUN_710392eb40(uVar20);
  }
  if (param_2 != 0) {
    FUN_7101ce2ec0(param_1,puVar33,(long ****)(param_1 + 0x298),(byte ****)(param_1 + 0x306),
                   (byte ****)(param_1 + 0x2fc),uVar18,param_7,param_8);
  }
  FUN_7101ce2ec0(param_1,puVar4,pppplVar14,ppppbVar15,ppppbVar17,uVar18,param_7,param_8);
  if (*(ulong *)(param_1 + 0x290) == 0) {
    uVar26 = 0xffff;
  }
  else {
    uVar8 = FUN_710334c7d0(*(long *)(DAT_710532f8f8 + 8),*(ulong *)(param_1 + 0x290),
                           *(int *)pppplVar14);
    uVar26 = (uint)uVar8;
  }
  FUN_7101ce5140(param_1,0,(ushort)uVar26,ppppbVar15,(long ****)ppppbVar17,uVar18,param_7,param_8);
  pppplVar14 = (long ****)(ulong)uVar26;
  FUN_7101ce5140(param_1,1,(ushort)uVar26,ppppbVar15,(long ****)ppppbVar17,uVar18,param_7,param_8);
  lVar21 = *(long *)(param_1 + 0x2b8);
  plVar30 = *(long **)(lVar21 + 0x1c8);
  while (plVar30 != (long *)(lVar21 + 0x1d0)) {
    *(undefined4 *)(plVar30 + 5) = 0;
    plVar10 = (long *)plVar30[1];
    if ((long *)plVar30[1] == (long *)0x0) {
      plVar10 = plVar30 + 2;
      bVar7 = *(long **)*plVar10 != plVar30;
      plVar30 = (long *)*plVar10;
      if (bVar7) {
        do {
          lVar28 = *plVar10;
          plVar10 = (long *)(lVar28 + 0x10);
          plVar30 = (long *)*plVar10;
        } while (*plVar30 != lVar28);
      }
    }
    else {
      do {
        plVar30 = plVar10;
        plVar10 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar21 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar21 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + 0x280) = 0;
  *(undefined4 *)(lVar21 + 0x282) = 0;
  FUN_71037780e0((undefined8 *)local_190,(long)puVar4,(long ****)"slide_in",pppplVar14,ppppbVar15,
                 (long ****)ppppbVar17,uVar18,param_7,param_8);
  plVar30 = (long *)CONCAT17(local_188._7_1_,
                             CONCAT16(local_188._6_1_,
                                      CONCAT15(local_188._5_1_,
                                               CONCAT14(local_188._4_1_,(undefined4)local_188))));
  plVar10 = (long *)plVar30[1];
  if (plVar10 == (long *)0x0) {
    local_190[0] = 0x523d9e8;
    local_190[1] = 0x71;
    local_188._0_4_ = 0;
    local_188._4_1_ = 0;
    local_188._5_1_ = 0;
    local_188._6_1_ = 0;
    local_188._7_1_ = 0;
    if (plVar30 != (long *)0x0) goto LAB_7101ce2148;
  }
  else {
    if ((char)plVar30[2] != '\0') {
      plVar31 = *(long **)(*plVar30 + 0x80);
      plVar2 = (long *)(*plVar30 + 0x88);
      if (plVar31 != plVar2) {
        do {
          while( true ) {
            uVar20 = (**(code **)(*(long *)plVar31[0xd] + 0x148))();
            if (((uVar20 & 1) != 0) &&
               (uVar20 = (**(code **)(*plVar10 + 0x120))(plVar10,plVar31[0xd]), (uVar20 & 1) != 0))
            {
              (**(code **)(*(long *)plVar31[0xd] + 0x178))();
              (**(code **)(*(long *)plVar31[0xd] + 0x140))((long *)plVar31[0xd],0);
            }
            plVar22 = (long *)plVar31[1];
            if ((long *)plVar31[1] == (long *)0x0) break;
            do {
              plVar31 = plVar22;
              plVar22 = (long *)*plVar31;
            } while ((long *)*plVar31 != (long *)0x0);
LAB_7101ce20fc:
            if (plVar31 == plVar2) goto LAB_7101ce2114;
          }
          plVar22 = plVar31 + 2;
          plVar27 = (long *)*plVar22;
          if ((long *)*plVar27 != plVar31) {
            do {
              lVar21 = *plVar22;
              plVar22 = (long *)(lVar21 + 0x10);
              plVar31 = (long *)*plVar22;
            } while (*plVar31 != lVar21);
            goto LAB_7101ce20fc;
          }
          plVar31 = plVar27;
        } while (plVar27 != plVar2);
LAB_7101ce2114:
        plVar10 = (long *)plVar30[1];
      }
    }
    (**(code **)(*plVar10 + 0x188))(plVar10);
LAB_7101ce2148:
    local_188._7_1_ = 0;
    local_188._6_1_ = 0;
    local_188._5_1_ = 0;
    local_188._4_1_ = 0;
    local_188._0_4_ = 0;
    local_190[1] = 0x71;
    local_190[0] = 0x523d9e8;
    FUN_710392eb40((ulong)plVar30);
  }
  FUN_71037780e0((undefined8 *)local_190,(long)puVar33,(long ****)"slide_in",pppplVar14,ppppbVar15,
                 (long ****)ppppbVar17,uVar18,param_7,param_8);
  plVar30 = (long *)CONCAT17(local_188._7_1_,
                             CONCAT16(local_188._6_1_,
                                      CONCAT15(local_188._5_1_,
                                               CONCAT14(local_188._4_1_,(undefined4)local_188))));
  plVar10 = (long *)plVar30[1];
  if (plVar10 == (long *)0x0) {
    local_188._5_1_ = 0;
    local_188._6_1_ = 0;
    local_188._7_1_ = 0;
    if (plVar30 != (long *)0x0) goto LAB_7101ce226c;
  }
  else {
    if ((char)plVar30[2] != '\0') {
      plVar31 = *(long **)(*plVar30 + 0x80);
      plVar2 = (long *)(*plVar30 + 0x88);
      if (plVar31 != plVar2) {
        do {
          while( true ) {
            uVar20 = (**(code **)(*(long *)plVar31[0xd] + 0x148))();
            if (((uVar20 & 1) != 0) &&
               (uVar20 = (**(code **)(*plVar10 + 0x120))(plVar10,plVar31[0xd]), (uVar20 & 1) != 0))
            {
              (**(code **)(*(long *)plVar31[0xd] + 0x178))();
              (**(code **)(*(long *)plVar31[0xd] + 0x140))((long *)plVar31[0xd],0);
            }
            plVar22 = (long *)plVar31[1];
            if ((long *)plVar31[1] == (long *)0x0) break;
            do {
              plVar31 = plVar22;
              plVar22 = (long *)*plVar31;
            } while ((long *)*plVar31 != (long *)0x0);
LAB_7101ce2220:
            if (plVar31 == plVar2) goto LAB_7101ce2238;
          }
          plVar22 = plVar31 + 2;
          plVar27 = (long *)*plVar22;
          if ((long *)*plVar27 != plVar31) {
            do {
              lVar21 = *plVar22;
              plVar22 = (long *)(lVar21 + 0x10);
              plVar31 = (long *)*plVar22;
            } while (*plVar31 != lVar21);
            goto LAB_7101ce2220;
          }
          plVar31 = plVar27;
        } while (plVar27 != plVar2);
LAB_7101ce2238:
        plVar10 = (long *)plVar30[1];
      }
    }
    (**(code **)(*plVar10 + 0x188))(plVar10);
LAB_7101ce226c:
    local_188._7_1_ = 0;
    local_188._6_1_ = 0;
    local_188._5_1_ = 0;
    local_188._4_1_ = 0;
    local_188._0_4_ = 0;
    local_190[1] = 0x71;
    local_190[0] = 0x523d9e8;
    FUN_710392eb40((ulong)plVar30);
  }
  if (param_2 == 1) {
    local_188._4_1_ = 0;
    local_188._0_4_ = 0x6c5f6e69;
    uVar19 = 0x69;
    pbVar23 = (byte *)((long)&local_188 + 1);
    do {
      uVar32 = uVar32 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar23;
      pbVar23 = pbVar23 + 1;
    } while (uVar19 != 0);
LAB_7101ce2300:
    local_190[1] = 4;
    local_188._4_1_ = 0;
    bVar7 = true;
  }
  else {
    if (param_2 == 2) {
      local_188._4_1_ = 0;
      local_188._0_4_ = 0x725f6e69;
      uVar19 = 0x69;
      pbVar23 = (byte *)((long)&local_188 + 1);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar19 != 0);
      goto LAB_7101ce2300;
    }
    local_188._4_1_ = 0x69;
    local_188._5_1_ = 0x6e;
    uVar19 = 0x70;
    local_188._6_1_ = 0;
    local_190[1] = 6;
    local_188._0_4_ = 0x5f706f70;
    pbVar23 = (byte *)((long)&local_188 + 1);
    do {
      uVar32 = uVar32 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar23;
      pbVar23 = pbVar23 + 1;
    } while (uVar19 != 0);
    bVar7 = false;
  }
  local_190[0] = uVar32;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,(long ****)ppppbVar17,uVar18,param_7,
                           param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_1e0 = (long ***)&SUB_00000018;
      pppplVar14 = &local_1e0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar20 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,(long ****)ppppbVar17,uVar18,
                                   param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7101ce23a0;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101ce23a0:
  *puVar13 = 0;
  puVar13[1] = 0;
  *(undefined1 *)(puVar13 + 2) = 1;
  uVar20 = *(ulong *)(param_1 + 0x330);
  *(undefined8 **)(param_1 + 0x330) = puVar13;
  if (uVar20 != 0) {
    FUN_710392eb40(uVar20);
  }
  if (((ulong)param_5 & 1) == 0) {
    FUN_7103778760(*(long *)(param_1 + 0x248),(long)&local_188);
  }
  else {
    lVar28 = *(long *)(DAT_710532f8d0 + 8);
    lVar21 = *(long *)(lVar28 + 0x40);
    uVar20 = *(long *)(lVar28 + 0x48) - lVar21 >> 3;
    if (bVar7) {
      if (uVar20 < 9) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(ulong *)(lVar21 + 0x40);
      }
      if (*(char *)(lVar28 + 0x191) == '\0') {
        pppplVar14 = (long ****)&DAT_00000004;
        uVar11 = FUN_7103313f20(lVar28,uVar20,(long ****)&DAT_00000004,ppppbVar15,
                                (long ****)ppppbVar17,uVar18,param_7,param_8);
        if ((uVar11 & 1) == 0) goto LAB_7101ce24a0;
        FUN_71024076d0(local_1d0,uVar20);
        if (((local_1c0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1b8 == DAT_7106dd53ac))
        {
          piVar24 = (int *)(local_1c0 + 0x38);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar7) {
              *piVar24 = *piVar24 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
      else {
LAB_7101ce24a0:
        local_1a8 = 0xffffffffffffffff;
        uStack_1a0 = 0;
        local_1d0[0] = 0;
        local_198 = 0;
        local_1b8 = 0x87650000000000;
      }
      local_1c8 = &PTR_FUN_7104f73d50;
      local_1c0 = 0;
      local_1b0 = 0;
      FUN_71037780e0(&local_1e0,param_1 + 0x240,(long ****)&local_188,pppplVar14,ppppbVar15,
                     (long ****)ppppbVar17,uVar18,param_7,param_8);
      plVar30 = local_1d8;
      if ((long ****)(param_1 + 0x328) != &local_1e0) {
        local_1d8 = (long *)0x0;
        uVar20 = *(ulong *)(param_1 + 0x330);
        *(long **)(param_1 + 0x330) = plVar30;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
      }
      plVar30 = local_1d8;
      local_1e0 = (long ***)&PTR_FUN_710523d9e8;
      local_1d8 = (long *)0x0;
      if (plVar30 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar30);
      }
    }
    else {
      if (uVar20 < 6) {
        uVar20 = 0;
        if (*(char *)(lVar28 + 0x191) == '\0') goto LAB_7101ce2530;
LAB_7101ce25a0:
        local_1f8 = 0xffffffffffffffff;
        uStack_1f0 = 0;
        local_220[0] = 0;
        local_1e8 = 0;
        local_208 = 0x87650000000000;
      }
      else {
        uVar20 = *(ulong *)(lVar21 + 0x28);
        if (*(char *)(lVar28 + 0x191) != '\0') goto LAB_7101ce25a0;
LAB_7101ce2530:
        uVar11 = FUN_7103313f20(lVar28,uVar20,(long ****)&DAT_00000004,ppppbVar15,
                                (long ****)ppppbVar17,uVar18,param_7,param_8);
        if ((uVar11 & 1) == 0) goto LAB_7101ce25a0;
        FUN_71024076d0(local_220,uVar20);
        if (((local_210 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_208 == DAT_7106dd53ac))
        {
          piVar24 = (int *)(local_210 + 0x38);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar7) {
              *piVar24 = *piVar24 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
      local_218 = &PTR_FUN_7104f73d50;
      local_210 = 0;
      local_200 = 0;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x248),(long)&local_188);
    }
  }
  FUN_7101cdfad0((long)puVar4,1,(ulong)uVar26,0,(long ****)ppppbVar17,uVar18,param_7,param_8);
  if (*(ulong *)(param_1 + 0x2a0) == 0) {
    pppplVar14 = (long ****)0xffff;
  }
  else {
    uVar8 = FUN_710334c7d0(*(long *)(DAT_710532f8f8 + 8),*(ulong *)(param_1 + 0x2a0),
                           *(int *)(param_1 + 0x298));
    pppplVar14 = (long ****)(ulong)uVar8;
  }
  ppppbVar15 = (byte ****)0x0;
  FUN_7101cdfad0((long)puVar33,1,pppplVar14,0,(long ****)ppppbVar17,uVar18,param_7,param_8);
  lVar21 = *(long *)(param_1 + 0x2b0);
  plVar30 = *(long **)(lVar21 + 0x1c8);
  while (plVar30 != (long *)(lVar21 + 0x1d0)) {
    *(undefined4 *)(plVar30 + 5) = 0;
    plVar10 = (long *)plVar30[1];
    if ((long *)plVar30[1] == (long *)0x0) {
      plVar10 = plVar30 + 2;
      bVar7 = *(long **)*plVar10 != plVar30;
      plVar30 = (long *)*plVar10;
      if (bVar7) {
        do {
          lVar28 = *plVar10;
          plVar10 = (long *)(lVar28 + 0x10);
          plVar30 = (long *)*plVar10;
        } while (*plVar30 != lVar28);
      }
    }
    else {
      do {
        plVar30 = plVar10;
        plVar10 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar21 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar21 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + 0x280) = 0;
  *(undefined4 *)(lVar21 + 0x282) = 0;
  lVar21 = *(long *)(param_1 + 0x2b8);
  plVar30 = *(long **)(lVar21 + 0x1c8);
  while (plVar30 != (long *)(lVar21 + 0x1d0)) {
    *(undefined4 *)(plVar30 + 5) = 0;
    plVar10 = (long *)plVar30[1];
    if ((long *)plVar30[1] == (long *)0x0) {
      plVar10 = plVar30 + 2;
      bVar7 = *(long **)*plVar10 != plVar30;
      plVar30 = (long *)*plVar10;
      if (bVar7) {
        do {
          lVar28 = *plVar10;
          plVar10 = (long *)(lVar28 + 0x10);
          plVar30 = (long *)*plVar10;
        } while (*plVar30 != lVar28);
      }
    }
    else {
      do {
        plVar30 = plVar10;
        plVar10 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar21 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar21 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + 0x280) = 0;
  *(undefined4 *)(lVar21 + 0x282) = 0;
  if ((param_6 & 1) != 0) {
    if (param_2 == 2) {
      lVar21 = *(long *)(param_1 + 0x2b8);
      puVar13 = (undefined8 *)(lVar21 + 0x1e8);
      puVar4 = *(undefined8 **)(lVar21 + 0x1e8);
      if (*(undefined8 **)(lVar21 + 0x1e8) == (undefined8 *)0x0) {
        plVar30 = (long *)*puVar13;
        puVar33 = puVar13;
      }
      else {
        do {
          while (puVar33 = puVar4, 1 < *(int *)((long)puVar33 + 0x1c)) {
            puVar13 = puVar33;
            puVar4 = (undefined8 *)*puVar33;
            if ((undefined8 *)*puVar33 == (undefined8 *)0x0) goto LAB_7101ce286c;
          }
          if (*(int *)((long)puVar33 + 0x1c) == 1) break;
          puVar13 = puVar33 + 1;
          puVar4 = (undefined8 *)*puVar13;
        } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
LAB_7101ce286c:
        plVar30 = (long *)*puVar13;
      }
      if (plVar30 == (long *)0x0) {
        plVar30 = (long *)FUN_710392e290(0x10,0x28,pppplVar14,ppppbVar15,(long ****)ppppbVar17,
                                         uVar18,param_7,param_8);
        if (plVar30 == (long *)0x0) {
          local_6c[0] = 0;
          local_1e0 = (long ***)&DAT_00000028;
          pppplVar14 = &local_1e0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          plVar30 = (long *)FUN_710392e290(0x10,0x28,pppplVar14,ppppbVar15,(long ****)ppppbVar17,
                                           uVar18,param_7,param_8);
        }
        *(undefined4 *)((long)plVar30 + 0x1c) = 1;
        *plVar30 = 0;
        plVar30[1] = 0;
        plVar30[4] = 0x32;
        plVar30[2] = (long)puVar33;
LAB_7101ce28d8:
        *puVar13 = plVar30;
        plVar10 = plVar30;
        if (**(long **)(lVar21 + 0x1e0) != 0) {
          *(long *)(lVar21 + 0x1e0) = **(long **)(lVar21 + 0x1e0);
          plVar10 = (long *)*puVar13;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(long **)(lVar21 + 0x1e8),plVar10);
        *(long *)(lVar21 + 0x1f0) = *(long *)(lVar21 + 0x1f0) + 1;
      }
    }
    else {
      if (param_2 != 1) goto LAB_7101ce2914;
      lVar21 = *(long *)(param_1 + 0x2b8);
      puVar13 = (undefined8 *)(lVar21 + 0x1e8);
      puVar4 = *(undefined8 **)(lVar21 + 0x1e8);
      if (*(undefined8 **)(lVar21 + 0x1e8) == (undefined8 *)0x0) {
        plVar30 = (long *)*puVar13;
        puVar33 = puVar13;
      }
      else {
        do {
          while (puVar33 = puVar4, 0 < *(int *)((long)puVar33 + 0x1c)) {
            puVar13 = puVar33;
            puVar4 = (undefined8 *)*puVar33;
            if ((undefined8 *)*puVar33 == (undefined8 *)0x0) goto LAB_7101ce27fc;
          }
          if (-1 < *(int *)((long)puVar33 + 0x1c)) break;
          puVar13 = puVar33 + 1;
          puVar4 = (undefined8 *)*puVar13;
        } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
LAB_7101ce27fc:
        plVar30 = (long *)*puVar13;
      }
      if (plVar30 == (long *)0x0) {
        plVar30 = (long *)FUN_710392e290(0x10,0x28,pppplVar14,ppppbVar15,(long ****)ppppbVar17,
                                         uVar18,param_7,param_8);
        if (plVar30 == (long *)0x0) {
          local_6c[0] = 0;
          local_1e0 = (long ***)&DAT_00000028;
          pppplVar14 = &local_1e0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          plVar30 = (long *)FUN_710392e290(0x10,0x28,pppplVar14,ppppbVar15,(long ****)ppppbVar17,
                                           uVar18,param_7,param_8);
        }
        *(undefined4 *)((long)plVar30 + 0x1c) = 0;
        plVar30[2] = (long)puVar33;
        plVar30[4] = 0x32;
        *plVar30 = 0;
        plVar30[1] = 0;
        goto LAB_7101ce28d8;
      }
    }
    *(undefined1 *)((long)plVar30 + 0x25) = 1;
  }
LAB_7101ce2914:
  lVar21 = *(long *)(param_1 + 0x2c0);
  plVar30 = *(long **)(lVar21 + 0x1c8);
  while (plVar30 != (long *)(lVar21 + 0x1d0)) {
    *(undefined4 *)(plVar30 + 5) = 0;
    plVar10 = (long *)plVar30[1];
    if ((long *)plVar30[1] == (long *)0x0) {
      plVar10 = plVar30 + 2;
      bVar7 = *(long **)*plVar10 != plVar30;
      plVar30 = (long *)*plVar10;
      if (bVar7) {
        do {
          lVar28 = *plVar10;
          plVar10 = (long *)(lVar28 + 0x10);
          plVar30 = (long *)*plVar10;
        } while (*plVar30 != lVar28);
      }
    }
    else {
      do {
        plVar30 = plVar10;
        plVar10 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar21 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar21 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + 0x280) = 0;
  *(undefined4 *)(lVar21 + 0x282) = 0;
  lVar21 = *(long *)(param_1 + 0x2c8);
  plVar30 = *(long **)(lVar21 + 0x1c8);
  while (plVar30 != (long *)(lVar21 + 0x1d0)) {
    *(undefined4 *)(plVar30 + 5) = 0;
    plVar10 = (long *)plVar30[1];
    if ((long *)plVar30[1] == (long *)0x0) {
      plVar10 = plVar30 + 2;
      bVar7 = *(long **)*plVar10 != plVar30;
      plVar30 = (long *)*plVar10;
      if (bVar7) {
        do {
          lVar28 = *plVar10;
          plVar10 = (long *)(lVar28 + 0x10);
          plVar30 = (long *)*plVar10;
        } while (*plVar30 != lVar28);
      }
    }
    else {
      do {
        plVar30 = plVar10;
        plVar10 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar21 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar21 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + 0x280) = 0;
  *(undefined4 *)(lVar21 + 0x282) = 0;
  lVar21 = *(long *)(param_1 + 0x2d0);
  plVar30 = *(long **)(lVar21 + 0x1c8);
  while (plVar30 != (long *)(lVar21 + 0x1d0)) {
    *(undefined4 *)(plVar30 + 5) = 0;
    plVar10 = (long *)plVar30[1];
    if ((long *)plVar30[1] == (long *)0x0) {
      plVar10 = plVar30 + 2;
      bVar7 = *(long **)*plVar10 != plVar30;
      plVar30 = (long *)*plVar10;
      if (bVar7) {
        do {
          lVar28 = *plVar10;
          plVar10 = (long *)(lVar28 + 0x10);
          plVar30 = (long *)*plVar10;
        } while (*plVar30 != lVar28);
      }
    }
    else {
      do {
        plVar30 = plVar10;
        plVar10 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar21 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar21 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + 0x280) = 0;
  *(undefined4 *)(lVar21 + 0x282) = 0;
  FUN_7103771d60(&local_1e0,*(long *)(param_1 + 0x2d0),(long ****)&DAT_00000007,ppppbVar15,
                 (long ****)ppppbVar17,uVar18,param_7,param_8);
  plVar30 = local_1d8;
  plVar10 = (long *)*local_1d8;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x2f0))(plVar10,0,0);
  }
  local_1e0 = (long ***)&PTR_FUN_710523d9c8;
  local_1d8 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar30);
  }
  lVar21 = *(long *)(param_1 + 0x2d8);
  plVar30 = *(long **)(lVar21 + 0x1c8);
  while (plVar30 != (long *)(lVar21 + 0x1d0)) {
    *(undefined4 *)(plVar30 + 5) = 0;
    plVar10 = (long *)plVar30[1];
    if ((long *)plVar30[1] == (long *)0x0) {
      plVar10 = plVar30 + 2;
      bVar7 = *(long **)*plVar10 != plVar30;
      plVar30 = (long *)*plVar10;
      if (bVar7) {
        do {
          lVar28 = *plVar10;
          plVar10 = (long *)(lVar28 + 0x10);
          plVar30 = (long *)*plVar10;
        } while (*plVar30 != lVar28);
      }
    }
    else {
      do {
        plVar30 = plVar10;
        plVar10 = (long *)*plVar30;
      } while ((long *)*plVar30 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar21 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar21 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + 0x280) = 0;
  *(undefined4 *)(lVar21 + 0x282) = 0;
  (**(code **)(**(long **)(param_1 + 0x2c0) + 0x60))
            (*(long **)(param_1 + 0x2c0),(uVar26 - 2 & 0xffff) < 3);
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x60))(*(long **)(param_1 + 0x2c8),uVar26 < 2);
  (**(code **)(**(long **)(param_1 + 0x2d0) + 0x60))(*(long **)(param_1 + 0x2d0),(uVar26 | 2) == 2);
  if (param_3 < 8) {
    plVar30 = (long *)(param_1 + 0x2b0);
    switch(param_3) {
    case 2:
      if (2 < (uVar26 - 2 & 0xffff)) goto LAB_7101ce2cdc;
      uVar29 = 2;
      FUN_7103771a80(plVar30,2,0);
      goto LAB_7101ce2cec;
    case 3:
    case 4:
      if (1 < uVar26) goto LAB_7101ce2cdc;
      break;
    case 5:
      if (uVar26 == 3) goto LAB_7101ce2cdc;
      FUN_7103771a80(plVar30,5,0);
      goto LAB_7101ce2e54;
    case 7:
      if ((uVar26 | 2) != 2) goto LAB_7101ce2cdc;
      FUN_7103771a80(plVar30,7,0);
      FUN_7103771a80((long *)(param_1 + 0x2d0),7,1);
      goto LAB_7101ce2ce8;
    }
    FUN_7103771a80(plVar30,param_3,0);
    if (param_3 - 3 < 2) {
      plVar30 = (long *)(param_1 + 0x2c8);
      lVar21 = *(long *)(*plVar30 + 0x1b8);
      if (lVar21 != 0) {
        lVar28 = *plVar30 + 0x1b8;
        lVar25 = lVar28;
        do {
          if ((int)param_3 <= *(int *)(lVar21 + 0x20)) {
            lVar25 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < (int)param_3) * 8);
        } while (lVar21 != 0);
        if (((lVar25 != lVar28) && (*(int *)(lVar25 + 0x20) <= (int)param_3)) &&
           ((*(long **)(lVar25 + 0x28) != (long *)0x0 &&
            (uVar20 = (**(code **)(**(long **)(lVar25 + 0x28) + 0x200))(), (uVar20 & 1) != 0)))) {
          FUN_7103771a80(plVar30,param_3,1);
          goto LAB_7101ce2ce8;
        }
      }
      FUN_7103771a80(plVar30,3,1);
      goto LAB_7101ce2ce8;
    }
    if (param_3 != 5) goto LAB_7101ce2ce8;
LAB_7101ce2e54:
    if (2 < uVar1) goto LAB_7101ce2ce8;
    FUN_71032d6120(param_1 + 0x2e8,uVar1);
    uVar29 = 0xb;
  }
  else {
LAB_7101ce2cdc:
    FUN_7101ce19a0(param_1,uVar26);
LAB_7101ce2ce8:
    uVar29 = 2;
  }
LAB_7101ce2cec:
  if (0x12 < *(uint *)(param_1 + 0x224)) {
LAB_7101ce2eb0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x224) * 4 + 0x1d8) = uVar29;
  if ((*(char *)(param_1 + 0x304) != '\0') && (*(int *)(param_1 + 0x224) < 0x12)) {
    uVar1 = *(int *)(param_1 + 0x224) + 1;
    *(uint *)(param_1 + 0x224) = uVar1;
    if (0x12 < uVar1) goto LAB_7101ce2eb0;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x1d8) = 6;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71052e8b49 != '\0') && (*(int *)(param_1 + 0x224) < 0x12)) {
    uVar1 = *(int *)(param_1 + 0x224) + 1;
    *(uint *)(param_1 + 0x224) = uVar1;
    if (0x12 < uVar1) goto LAB_7101ce2eb0;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x1d8) = 0x14;
  }
  if ((**(long **)(param_1 + 0x330) != 0) && ((*(long **)(param_1 + 0x330))[1] != 0)) {
    if (*(long *)(param_1 + 0x2e0) != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x2e0) + 8) + 0x4aa) = 0;
    }
    if (*(int *)(param_1 + 0x224) < 0x12) {
      uVar1 = *(int *)(param_1 + 0x224) + 1;
      *(uint *)(param_1 + 0x224) = uVar1;
      if (0x12 < uVar1) goto LAB_7101ce2eb0;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x1d8) = 1;
    }
  }
  lVar21 = *(long *)(DAT_7105325ca0 + 8);
  *(undefined1 *)(lVar21 + 0xd8) = 0;
  FUN_7101cc4b30(lVar21);
  bVar7 = FUN_7101cc4970(lVar21);
  if ((bVar7) &&
     (*(char *)(*(long *)(*(long *)(*(long *)(DAT_710532f820 + 8) + 0x110) + 0x80) + 0x14d) == '\0')
     ) {
    FUN_7101cc4b30(lVar21);
  }
  *(undefined8 *)(lVar21 + 0xc0) = *(undefined8 *)(lVar21 + 0xb8);
  *(undefined1 *)(*(long *)(*(long *)(*(long *)(DAT_710532f820 + 8) + 0x110) + 0x80) + 0x14a) = 0;
  return;
}

