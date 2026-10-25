// addr:      7101c698d0
// offset:    0x1c698d0
// name:      FUN_7101c698d0
// mangled:   
// signature: undefined __cdecl FUN_7101c698d0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c698d0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined ***pppuVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined1 local_b7;
  undefined **local_80;
  ulong local_78;
  
  if (param_1 + 8 != param_2) {
    **(undefined8 **)(param_1 + 0x10) = **(undefined8 **)(param_2 + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
    lVar13 = *(long *)(param_2 + 8);
    lVar11 = *(long *)(param_1 + 0x10);
    if (lVar11 != lVar13) {
      **(undefined8 **)(lVar11 + 0x18) = **(undefined8 **)(lVar13 + 0x18);
      *(undefined8 *)(*(long *)(lVar11 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18);
    }
  }
  *(bool *)(param_1 + 0x179) = *(char *)((long)param_3 + 0x86) == '\x04';
  *(bool *)(param_1 + 0x17a) = *(char *)((long)param_3 + 0x77) != '\0';
  *(bool *)(param_1 + 0x17b) = *(char *)((long)param_3 + 0x77) == '\x01';
  *(bool *)(param_1 + 0x17c) = *(char *)((long)param_3 + 0x6d) == '\x02';
  *(undefined1 *)(param_1 + 0x17d) = *(undefined1 *)(param_3 + 0x11);
  uVar15 = 0;
  *(undefined1 *)(param_1 + 0x17e) = *(undefined1 *)((long)param_3 + 0x75);
  pbVar1 = (byte *)((long)&local_c0 + 1);
  do {
    FUN_71003a4ca0((uint *)&local_c8,"set_parts_pnl_%02d",uVar15 & 0xffffffff,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_80,param_2,(byte ****)&local_c0,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    uVar9 = local_78;
    lVar11 = param_1 + uVar15 * 0x10;
    pppuVar2 = (undefined ***)(lVar11 + 0x20);
    if (pppuVar2 != &local_80) {
      local_78 = 0;
      uVar17 = *(ulong *)(lVar11 + 0x28);
      *(ulong *)(lVar11 + 0x28) = uVar9;
      if (uVar17 != 0) {
        uVar9 = *(ulong *)(uVar17 + 0x18);
        *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar17 + 0x18) = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_710392eb40(uVar17);
      }
    }
    uVar9 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar9 != 0) {
      uVar17 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar9);
    }
    plVar16 = (long *)(lVar11 + 0x28);
    FUN_7103778300(0x3f800000,*plVar16,0x710437c577);
    FUN_7103778300(0x3f800000,*plVar16,0x71042b4411);
    FUN_7103778300(0x3f800000,*plVar16,0x71043bedd6);
    FUN_7103778300(0x3f800000,*plVar16,0x710435bfbd);
    FUN_7103778300(0x3f800000,*plVar16,0x710438d2e3);
    FUN_7103778300(0x3f800000,*plVar16,0x71043196af);
    pcVar3 = "ol_flag_off";
    if (*(char *)(param_1 + 0x179) != '\0') {
      pcVar3 = "ol_flag_on";
    }
    FUN_7103778300(0x3f800000,*plVar16,(long)pcVar3);
    FUN_7103778300(0x3f800000,*plVar16,0x71043be67f);
    FUN_7103778300(0x3f800000,*plVar16,0x7104443ed4);
    if (*(char *)(param_1 + 0x17e) == '\0') {
      local_c0._0_1_ = 0x6f;
      local_c0._1_1_ = 0x6c;
      local_c0._2_1_ = 0x5f;
      if (*(char *)(param_1 + 0x17a) == '\0') {
        local_c0._3_2_ = 0x6f6e;
        local_c0._5_2_ = 0x6d72;
        local_c0._7_1_ = 0x61;
        uStack_b8 = 0x6c;
        uVar12 = 0x6f;
        uVar10 = 0x811c9dc5;
        local_b7 = 0;
        local_c8._4_4_ = 9;
        pbVar14 = pbVar1;
        do {
          uVar10 = uVar10 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar12 != 0);
      }
      else {
        local_c0._3_2_ = 0x68;
        uVar12 = 0x6f;
        uVar10 = 0x811c9dc5;
        local_c8._4_4_ = 4;
        pbVar14 = pbVar1;
        do {
          uVar10 = uVar10 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar12 != 0);
      }
    }
    else {
      uVar9 = 0;
      puVar4 = &DAT_71044223e2;
      if (*(char *)(param_1 + 0x17a) == '\0') {
        puVar4 = &DAT_71043e01a0;
      }
      do {
        pcVar3 = puVar4 + uVar9;
        uVar17 = uVar9;
        if (*pcVar3 == '\0') break;
        cVar6 = pcVar3[1];
        *(char *)((long)&local_c0 + uVar9) = *pcVar3;
        if (cVar6 == '\0') {
          uVar17 = uVar9 + 1;
          break;
        }
        cVar7 = pcVar3[2];
        *(char *)((long)&local_c0 + uVar9 + 1) = cVar6;
        if (cVar7 == '\0') {
          uVar17 = uVar9 + 2;
          break;
        }
        uVar17 = uVar9 + 3;
        *(char *)((long)&local_c0 + uVar9 + 2) = cVar7;
        uVar9 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)&local_c0 + (uVar17 & 0xffffffff)) = 0;
      uVar12 = (uint)(byte)local_c0;
      local_c8._4_4_ = (undefined4)uVar17;
      uVar10 = 0x811c9dc5;
      if ((byte)local_c0 != 0) {
        uVar10 = 0x811c9dc5;
        pbVar14 = pbVar1;
        do {
          uVar10 = uVar10 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar12 != 0);
      }
    }
    local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar10);
    FUN_7103778300(0x3f800000,*plVar16,(long)&local_c0);
    FUN_7103776910(&local_c8,(long)pppuVar2,(long ****)"txt_06",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_c8,"mnu_online_room_inside_team_change_guide",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar9 = CONCAT17(local_c0._7_1_,
                     CONCAT25(local_c0._5_2_,
                              CONCAT23(local_c0._3_2_,
                                       CONCAT12(local_c0._2_1_,
                                                CONCAT11(local_c0._1_1_,(byte)local_c0)))));
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0._0_1_ = 0;
    local_c0._1_1_ = 0;
    local_c0._2_1_ = 0;
    local_c0._3_2_ = 0;
    local_c0._5_2_ = 0;
    local_c0._7_1_ = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_7103776640(&local_c8,(long)pppuVar2,(byte ****)"set_btn_flag_team",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if ((undefined8 *)(lVar11 + 0x60) != &local_c8) {
      uVar8 = CONCAT17(local_c0._7_1_,
                       CONCAT25(local_c0._5_2_,
                                CONCAT23(local_c0._3_2_,
                                         CONCAT12(local_c0._2_1_,
                                                  CONCAT11(local_c0._1_1_,(byte)local_c0)))));
      local_c0._0_1_ = 0;
      local_c0._1_1_ = 0;
      local_c0._2_1_ = 0;
      local_c0._3_2_ = 0;
      local_c0._5_2_ = 0;
      local_c0._7_1_ = 0;
      uVar9 = *(ulong *)(lVar11 + 0x68);
      *(undefined8 *)(lVar11 + 0x68) = uVar8;
      if (uVar9 != 0) {
        uVar17 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar9);
      }
    }
    uVar9 = CONCAT17(local_c0._7_1_,
                     CONCAT25(local_c0._5_2_,
                              CONCAT23(local_c0._3_2_,
                                       CONCAT12(local_c0._2_1_,
                                                CONCAT11(local_c0._1_1_,(byte)local_c0)))));
    local_c8 = &PTR_FUN_710523d988;
    local_c0._0_1_ = 0;
    local_c0._1_1_ = 0;
    local_c0._2_1_ = 0;
    local_c0._3_2_ = 0;
    local_c0._5_2_ = 0;
    local_c0._7_1_ = 0;
    if (uVar9 != 0) {
      uVar17 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar9);
    }
    FUN_7103776640(&local_c8,(long)pppuVar2,(byte ****)"set_btn_hd",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if ((undefined8 *)(lVar11 + 0xa0) != &local_c8) {
      uVar8 = CONCAT17(local_c0._7_1_,
                       CONCAT25(local_c0._5_2_,
                                CONCAT23(local_c0._3_2_,
                                         CONCAT12(local_c0._2_1_,
                                                  CONCAT11(local_c0._1_1_,(byte)local_c0)))));
      local_c0._0_1_ = 0;
      local_c0._1_1_ = 0;
      local_c0._2_1_ = 0;
      local_c0._3_2_ = 0;
      local_c0._5_2_ = 0;
      local_c0._7_1_ = 0;
      uVar9 = *(ulong *)(lVar11 + 0xa8);
      *(undefined8 *)(lVar11 + 0xa8) = uVar8;
      if (uVar9 != 0) {
        uVar17 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar9);
      }
    }
    uVar9 = CONCAT17(local_c0._7_1_,
                     CONCAT25(local_c0._5_2_,
                              CONCAT23(local_c0._3_2_,
                                       CONCAT12(local_c0._2_1_,
                                                CONCAT11(local_c0._1_1_,(byte)local_c0)))));
    local_c8 = &PTR_FUN_710523d988;
    local_c0._0_1_ = 0;
    local_c0._1_1_ = 0;
    local_c0._2_1_ = 0;
    local_c0._3_2_ = 0;
    local_c0._5_2_ = 0;
    local_c0._7_1_ = 0;
    if (uVar9 != 0) {
      uVar17 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar9);
    }
    puVar5 = &DAT_7104329fc1;
    if (*(char *)(param_1 + 0x17c) != '\0') {
      puVar5 = &DAT_710427e6d1;
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0xa8),(long)puVar5);
    FUN_7103776640(&local_c8,(long)pppuVar2,(byte ****)"set_btn_sp",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if ((undefined8 *)(lVar11 + 0xe0) != &local_c8) {
      uVar8 = CONCAT17(local_c0._7_1_,
                       CONCAT25(local_c0._5_2_,
                                CONCAT23(local_c0._3_2_,
                                         CONCAT12(local_c0._2_1_,
                                                  CONCAT11(local_c0._1_1_,(byte)local_c0)))));
      local_c0._0_1_ = 0;
      local_c0._1_1_ = 0;
      local_c0._2_1_ = 0;
      local_c0._3_2_ = 0;
      local_c0._5_2_ = 0;
      local_c0._7_1_ = 0;
      uVar9 = *(ulong *)(lVar11 + 0xe8);
      *(undefined8 *)(lVar11 + 0xe8) = uVar8;
      if (uVar9 != 0) {
        uVar17 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar9);
      }
    }
    uVar9 = CONCAT17(local_c0._7_1_,
                     CONCAT25(local_c0._5_2_,
                              CONCAT23(local_c0._3_2_,
                                       CONCAT12(local_c0._2_1_,
                                                CONCAT11(local_c0._1_1_,(byte)local_c0)))));
    local_c8 = &PTR_FUN_710523d988;
    local_c0._0_1_ = 0;
    local_c0._1_1_ = 0;
    local_c0._2_1_ = 0;
    local_c0._3_2_ = 0;
    local_c0._5_2_ = 0;
    local_c0._7_1_ = 0;
    if (uVar9 != 0) {
      uVar17 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar9);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0xe8),0x71043be6a5);
    FUN_7103776640(&local_c8,(long)pppuVar2,(byte ****)"set_part_chara_pk",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if ((undefined8 *)(lVar11 + 0x120) != &local_c8) {
      uVar8 = CONCAT17(local_c0._7_1_,
                       CONCAT25(local_c0._5_2_,
                                CONCAT23(local_c0._3_2_,
                                         CONCAT12(local_c0._2_1_,
                                                  CONCAT11(local_c0._1_1_,(byte)local_c0)))));
      local_c0._0_1_ = 0;
      local_c0._1_1_ = 0;
      local_c0._2_1_ = 0;
      local_c0._3_2_ = 0;
      local_c0._5_2_ = 0;
      local_c0._7_1_ = 0;
      uVar9 = *(ulong *)(lVar11 + 0x128);
      *(undefined8 *)(lVar11 + 0x128) = uVar8;
      if (uVar9 != 0) {
        uVar17 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar9);
      }
    }
    uVar9 = CONCAT17(local_c0._7_1_,
                     CONCAT25(local_c0._5_2_,
                              CONCAT23(local_c0._3_2_,
                                       CONCAT12(local_c0._2_1_,
                                                CONCAT11(local_c0._1_1_,(byte)local_c0)))));
    local_c8 = &PTR_FUN_710523d988;
    local_c0._0_1_ = 0;
    local_c0._1_1_ = 0;
    local_c0._2_1_ = 0;
    local_c0._3_2_ = 0;
    local_c0._5_2_ = 0;
    local_c0._7_1_ = 0;
    if (uVar9 != 0) {
      uVar17 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar9);
    }
    FUN_7103778760(*(long *)(lVar11 + 0x128),0x710433a9c5);
    FUN_7103778300(0x3f800000,*plVar16,0x71042c4dcf);
    FUN_7101c5cc00(param_1,uVar15 & 0xffffffff,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar15 = uVar15 + 1;
    if (uVar15 == 4) {
      *(ulong *)(param_1 + 0x170) = *(ulong *)(param_1 + 0x170) & 0xfffffffffffffff0;
      return;
    }
  } while( true );
}

