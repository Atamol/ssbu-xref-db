// addr:      7101b11bd0
// offset:    0x1b11bd0
// name:      FUN_7101b11bd0
// mangled:   
// signature: undefined __cdecl FUN_7101b11bd0(long param_1, ulong * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b11bd0(long param_1,ulong *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  undefined6 uVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 uVar16;
  char *pcVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long *********ppppppppplVar20;
  byte ****ppppbVar21;
  int iVar22;
  long *plVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  int iVar34;
  long ********apppppppplStack_250 [9];
  undefined **local_208;
  ulong local_200;
  ulong local_1f8;
  undefined1 local_1f0 [64];
  undefined **local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_154;
  long ********local_150;
  ulong local_148 [8];
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined2 local_f0;
  undefined4 local_ee;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ushort local_a8;
  undefined8 local_a6;
  undefined2 local_9e;
  
  ppppppppplVar20 = apppppppplStack_250;
  plVar33 = (long *)(param_1 + 8);
  iVar34 = (int)param_3;
  ppppbVar21 = param_4;
  FUN_7103778300(0x3f800000,*plVar33,0x7104454623);
  local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  if (iVar34 == 2) {
    local_b8._4_2_ = 0x6c5f;
    local_b8._6_1_ = 0;
    local_c0._0_4_ = 0x811c9dc5;
    local_c0._4_4_ = 6;
    local_b8._0_4_ = 0x657a6973;
    uVar27 = 0x73;
    pbVar24 = (byte *)((long)&local_b8 + 1);
    do {
      local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar27;
      uVar27 = (uint)*pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (uVar27 != 0);
LAB_7101b11cd8:
    local_b8._6_1_ = 0;
    local_b8._0_4_ = 0x657a6973;
    local_c0._4_4_ = 6;
LAB_7101b11d44:
    FUN_7103776640(&local_108,param_1,(byte ****)"set_parts_text_scroll",param_3,ppppbVar21,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)&local_b8);
    uVar30 = local_100;
    FUN_7103778300(0x3f800000,local_100,(long)&local_b8);
    local_108 = &PTR_FUN_710523d988;
    local_100 = 0;
    if (uVar30 != 0) {
      uVar11 = *(ulong *)(uVar30 + 0x18);
      *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar30 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar30);
    }
  }
  else {
    if (iVar34 == 1) {
      local_b8._4_2_ = 27999;
      local_b8._6_1_ = 0;
      local_c0._0_4_ = 0x811c9dc5;
      local_c0._4_4_ = 6;
      local_b8._0_4_ = 0x657a6973;
      uVar27 = 0x73;
      pbVar24 = (byte *)((long)&local_b8 + 1);
      do {
        local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar27;
        uVar27 = (uint)*pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (uVar27 != 0);
      FUN_7103778300(0x3f800000,*plVar33,0x710437ada1);
      goto LAB_7101b11d44;
    }
    if (iVar34 == 0) {
      local_b8._4_2_ = 0x735f;
      local_b8._6_1_ = 0;
      local_c0._0_4_ = 0x811c9dc5;
      local_c0._4_4_ = 6;
      local_b8._0_4_ = 0x657a6973;
      uVar27 = 0x73;
      pbVar24 = (byte *)((long)&local_b8 + 1);
      do {
        local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar27;
        uVar27 = (uint)*pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (uVar27 != 0);
      goto LAB_7101b11cd8;
    }
  }
  switch((char)param_2[1]) {
  case '\0':
    lVar31 = *(long *)(DAT_710532f730 + 8);
    lVar28 = lVar31 + 0x230;
    FUN_7103289030(&local_c0,lVar28,(long ****)param_2[2],ppppbVar21,param_5,param_6,param_7,param_8
                  );
    param_3 = (long *********)
              CONCAT17(local_b8._7_1_,
                       CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
    uVar30 = FUN_7103289420(lVar28,(ulong *)CONCAT44(local_c0._4_4_,(uint)local_c0),(ulong *)param_3
                           );
    if (CONCAT44(local_c0._4_4_,(uint)local_c0) != 0) {
      local_b8._0_4_ = (uint)local_c0;
      local_b8._4_2_ = (undefined2)local_c0._4_4_;
      local_b8._6_1_ = (undefined1)((uint)local_c0._4_4_ >> 0x10);
      local_b8._7_1_ = (undefined1)((uint)local_c0._4_4_ >> 0x18);
      FUN_710392eb40(CONCAT44(local_c0._4_4_,(uint)local_c0));
    }
    if (((uVar30 & 0xff00000000000000) == 0x5a00000000000000) && ((uVar30 & 0xffffffffff) != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104349eb4);
      FUN_7103776640(&local_c0,param_1,(byte ****)"set_parts_atr_class",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar11 = CONCAT17(local_b8._7_1_,
                        CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
      FUN_7103778300(0x3f800000,uVar11,0x710425f93f);
      local_c0._0_4_ = 0x523d988;
      local_c0._4_4_ = 0x71;
      local_b8._0_4_ = 0;
      local_b8._4_2_ = 0;
      local_b8._6_1_ = 0;
      local_b8._7_1_ = 0;
      if (uVar11 != 0) {
        uVar15 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
        FUN_710392eb40(uVar11);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71043080f9);
      cVar3 = (char)param_2[1];
      FUN_71032888e0((uint *)&local_c0,*(long *)(lVar31 + 0x238),uVar30,ppppbVar21,param_5,param_6,
                     param_7,param_8);
LAB_7101b11fbc:
      param_3 = (long *********)&local_c0;
      ppppbVar21 = (byte ****)0x1;
      param_5 = (long ****)0x0;
      FUN_7101b14390(param_1,cVar3,(long)param_3,1,(long ****)0x0,param_6,param_7,param_8);
      FUN_7103776910(&local_108,param_1,(long ****)"set_txt_num",param_3,ppppbVar21,param_5,param_6,
                     param_7,param_8);
      uVar30 = local_100;
      if (*(long **)(local_100 + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_150 = (long ********)((ulong)local_150 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_100 + 0x10),(ushort *)&local_150,0,0);
      }
      local_108 = &PTR_FUN_710523d9a8;
      local_100 = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_7103776910(&local_108,param_1,(long ****)"set_txt_num_sdw",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar30 = local_100;
      if (*(long **)(local_100 + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_150 = (long ********)((ulong)local_150 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_100 + 0x10),(ushort *)&local_150,0,0);
      }
      local_108 = &PTR_FUN_710523d9a8;
      local_100 = 0;
joined_r0x007101b12d70:
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_7103778300(0x3f800000,*plVar33,0x7104318a40);
    }
    break;
  case '\x01':
    lVar31 = *(long *)(DAT_710532f730 + 8);
    lVar28 = lVar31 + 0x240;
    FUN_7103284fe0(&local_c0,lVar28,(long ****)param_2[2],ppppbVar21,param_5,param_6,param_7,param_8
                  );
    param_3 = (long *********)
              CONCAT17(local_b8._7_1_,
                       CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
    uVar30 = FUN_71032853d0(lVar28,(ulong *)CONCAT44(local_c0._4_4_,(uint)local_c0),(ulong *)param_3
                           );
    if (CONCAT44(local_c0._4_4_,(uint)local_c0) != 0) {
      local_b8._0_4_ = (uint)local_c0;
      local_b8._4_2_ = (undefined2)local_c0._4_4_;
      local_b8._6_1_ = (undefined1)((uint)local_c0._4_4_ >> 0x10);
      local_b8._7_1_ = (undefined1)((uint)local_c0._4_4_ >> 0x18);
      FUN_710392eb40(CONCAT44(local_c0._4_4_,(uint)local_c0));
    }
    if (((uVar30 & 0xff00000000000000) == 0x1300000000000000) && ((uVar30 & 0xffffffffff) != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104349eb4);
      FUN_7103776640(&local_c0,param_1,(byte ****)"set_parts_atr_class",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar11 = CONCAT17(local_b8._7_1_,
                        CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
      FUN_7103778300(0x3f800000,uVar11,0x710425f93f);
      local_c0._0_4_ = 0x523d988;
      local_c0._4_4_ = 0x71;
      local_b8._0_4_ = 0;
      local_b8._4_2_ = 0;
      local_b8._6_1_ = 0;
      local_b8._7_1_ = 0;
      if (uVar11 != 0) {
        uVar15 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
        FUN_710392eb40(uVar11);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71043080f9);
      cVar3 = (char)param_2[1];
      FUN_7103284890((uint *)&local_c0,*(long *)(lVar31 + 0x248),uVar30,ppppbVar21,param_5,param_6,
                     param_7,param_8);
      goto LAB_7101b11fbc;
    }
    break;
  default:
    goto switchD_7101b11dcc_caseD_2;
  case '\x03':
    uVar30 = FUN_71032575c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),param_2[2]);
    if ((uVar30 & 0xff00000000000000) == 0xd900000000000000 && (uVar30 & 0xffffffffff) != 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104349eb4);
      FUN_7103776640(&local_c0,param_1,(byte ****)"set_parts_atr_class",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar11 = CONCAT17(local_b8._7_1_,
                        CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
      FUN_7103778300(0x3f800000,uVar11,0x710425f93f);
      local_c0._0_4_ = 0x523d988;
      local_c0._4_4_ = 0x71;
      local_b8._0_4_ = 0;
      local_b8._4_2_ = 0;
      local_b8._6_1_ = 0;
      local_b8._7_1_ = 0;
      if (uVar11 != 0) {
        uVar15 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
        FUN_710392eb40(uVar11);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x710424f070);
      uVar11 = param_2[1];
      FUN_71032570e0((uint *)&local_c0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),uVar30);
      FUN_71003a4ca0((uint *)&local_108,"bgm_title_%s",&local_b8,uVar30,ppppbVar21,param_5,param_6,
                     param_7,param_8);
      param_3 = (long *********)&local_108;
      ppppbVar21 = (byte ****)0x1;
      param_5 = (long ****)0x0;
      FUN_7101b14390(param_1,(char)uVar11,(long)param_3,1,(long ****)0x0,param_6,param_7,param_8);
      FUN_7103776910(&local_c0,param_1,(long ****)"set_txt_num",param_3,ppppbVar21,param_5,param_6,
                     param_7,param_8);
      uVar30 = CONCAT17(local_b8._7_1_,
                        CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
      if (*(long **)(uVar30 + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_150 = (long ********)((ulong)local_150 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(uVar30 + 0x10),(ushort *)&local_150,0,0);
      }
      local_c0._0_4_ = 0x523d9a8;
      local_c0._4_4_ = 0x71;
      local_b8._0_4_ = 0;
      local_b8._4_2_ = 0;
      local_b8._6_1_ = 0;
      local_b8._7_1_ = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_7103776910(&local_c0,param_1,(long ****)"set_txt_num_sdw",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar30 = CONCAT17(local_b8._7_1_,
                        CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
      if (*(long **)(uVar30 + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_150 = (long ********)((ulong)local_150 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(uVar30 + 0x10),(ushort *)&local_150,0,0);
      }
      local_c0._0_4_ = 0x523d9a8;
      local_c0._4_4_ = 0x71;
      local_b8._0_4_ = 0;
      local_b8._4_2_ = 0;
      local_b8._6_1_ = 0;
      local_b8._7_1_ = 0;
      goto joined_r0x007101b12d70;
    }
    break;
  case '\x04':
    lVar31 = *(long *)(DAT_710532f730 + 8);
    uVar11 = param_2[2];
    lVar28 = *(long *)(lVar31 + 0x1d8);
    uVar30 = FUN_71032a9400(lVar28,uVar11);
    if ((uVar30 & 0xff00000000000000) == 0x7f00000000000000 && (uVar30 & 0xffffffffff) != 0) {
      uVar27 = FUN_71032a7800(lVar28,uVar11);
      if (((uVar27 < (uint)((int)((ulong)(*(long *)(lVar28 + 0x28) - *(long *)(lVar28 + 0x20)) >> 6)
                           * -0x33333333)) &&
          (uVar6 = *(ushort *)(*(long *)(lVar28 + 0x20) + (ulong)uVar27 * 0x140), uVar6 != 0xffff))
         && ((short)uVar6 < 2000)) {
        uVar5 = *(ushort *)(lVar28 + ((long)((ulong)uVar6 << 0x30) >> 0x2f) + 0x60);
        uVar30 = (*(long *)(lVar28 + 0x28) - *(long *)(lVar28 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar5 < (uint)uVar30) {
          uVar11 = 0xffffffff;
          if (uVar6 != 0xffff) {
            uVar11 = (ulong)uVar5;
          }
          puVar2 = (undefined2 *)(*(long *)(lVar28 + 0x20) + uVar11 * 0x140);
          if (uVar30 < uVar11 || uVar30 - uVar11 == 0) {
            puVar2 = &DAT_7105182b08;
          }
          if (*(char *)(puVar2 + 0x2f) == '\0') {
            if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
              uVar16 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3));
            }
            else {
              uVar16 = 0;
            }
          }
          else {
            uVar16 = 4;
          }
          FUN_710339dde0((uint *)&local_108,uVar16,'\0');
          local_190._2_2_ = (undefined2)((uint)local_190 >> 0x18);
          bVar4 = *(byte *)(puVar2 + 0x2f);
          uVar30 = (ulong)bVar4;
          if (bVar4 == 0) {
            uVar16 = 0;
            if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
              uVar16 = (char)(0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3));
            }
          }
          else {
            uVar16 = 4;
          }
          uVar25 = 0x811c9dc5;
          FUN_710339dde0((uint *)&local_150,uVar16,bVar4);
          uVar27 = uVar25;
          switch(*(undefined1 *)(puVar2 + 0x34)) {
          case 0:
            local_1a0._4_4_ = 10;
            local_198 = 0x6f6e5f7373616c63;
            local_190 = CONCAT22((short)(((uint)local_190._3_1_ << 0x18) >> 0x10),0x656e);
            uVar26 = 99;
            pbVar24 = (byte *)((long)&local_198 + 1);
            do {
              uVar27 = uVar27 * 0x89 ^ uVar26;
              uVar26 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar26 != 0);
            break;
          case 1:
            local_1a0._4_4_ = 10;
            local_198 = 0x6f685f7373616c63;
            local_190 = CONCAT22((short)(((uint)local_190._3_1_ << 0x18) >> 0x10),0x6570);
            uVar26 = 99;
            pbVar24 = (byte *)((long)&local_198 + 1);
            do {
              uVar27 = uVar27 * 0x89 ^ uVar26;
              uVar26 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar26 != 0);
            break;
          case 2:
            local_1a0._4_4_ = 9;
            local_198 = 0x63615f7373616c63;
            local_190 = CONCAT22(local_190._2_2_,0x65);
            uVar26 = 99;
            pbVar24 = (byte *)((long)&local_198 + 1);
            do {
              uVar27 = uVar27 * 0x89 ^ uVar26;
              uVar26 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar26 != 0);
            break;
          case 3:
            local_18c = 0;
            local_1a0._4_4_ = 0xc;
            local_198 = 0x656c5f7373616c63;
            local_190 = 0x646e6567;
            uVar26 = 99;
            pbVar24 = (byte *)((long)&local_198 + 1);
            do {
              uVar27 = uVar27 * 0x89 ^ uVar26;
              uVar26 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar26 != 0);
            break;
          default:
            local_1a0._4_4_ = 10;
            local_198 = 0x6f6e5f7373616c63;
            local_190 = CONCAT22((short)(((uint)local_190._3_1_ << 0x18) >> 0x10),0x656e);
            uVar26 = 99;
            pbVar24 = (byte *)((long)&local_198 + 1);
            do {
              uVar27 = uVar27 * 0x89 ^ uVar26;
              uVar26 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar26 != 0);
          }
          local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar27);
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104280621);
          FUN_7103776640(&local_1b0,param_1,(byte ****)"set_parts_atr_class",uVar30,ppppbVar21,
                         param_5,param_6,param_7,param_8);
          uVar11 = local_1a8;
          FUN_7103778300(0x3f800000,local_1a8,0x710438b28f);
          FUN_7103778300(0x3f800000,local_1a8,(long)&local_100);
          local_1f0[0] = 0;
          local_1f8 = 0;
          puVar19 = local_148;
          FUN_710062dc20((uint *)&local_1f8,"bg_%s");
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)local_1f0);
          FUN_7103776640(&local_c0,param_1,(byte ****)"set_parts_spirits_bg",puVar19,ppppbVar21,
                         param_5,param_6,param_7,param_8);
          uVar30 = CONCAT17(local_b8._7_1_,
                            CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
          FUN_7103778300(0x3f800000,uVar30,(long)local_148);
          local_c0._0_4_ = 0x523d988;
          local_c0._4_4_ = 0x71;
          local_b8._0_4_ = 0;
          local_b8._4_2_ = 0;
          local_b8._6_1_ = 0;
          local_b8._7_1_ = 0;
          if (uVar30 != 0) {
            uVar15 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar15 != 0) {
              FUN_710392eb40(uVar15);
            }
            FUN_710392eb40(uVar30);
          }
          FUN_7103778300(0x3f800000,local_1a8,(long)&local_198);
          FUN_7103776640(&local_208,param_1,(byte ****)"set_parts_class",puVar19,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          uVar30 = local_200;
          uVar8 = local_b0._2_6_;
          switch(*(undefined1 *)(puVar2 + 0x34)) {
          case 0:
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 10;
            local_b8._0_4_ = 0x73616c63;
            local_b8._4_2_ = 0x5f73;
            local_b8._6_1_ = 0x6e;
            local_b8._7_1_ = 0x6f;
            uVar27 = 99;
            local_b0 = CONCAT53(local_b0._3_5_,0x656e);
            pbVar24 = (byte *)((long)&local_b8 + 1);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar27 != 0);
            break;
          case 1:
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 10;
            local_b8._0_4_ = 0x73616c63;
            local_b8._4_2_ = 0x5f73;
            local_b8._6_1_ = 0x68;
            local_b8._7_1_ = 0x6f;
            uVar27 = 99;
            local_b0 = CONCAT53(local_b0._3_5_,0x6570);
            pbVar24 = (byte *)((long)&local_b8 + 1);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar27 != 0);
            break;
          case 2:
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 9;
            local_b8._0_4_ = 0x73616c63;
            local_b8._4_2_ = 0x5f73;
            local_b8._6_1_ = 0x61;
            local_b8._7_1_ = 99;
            local_b0 = CONCAT62(uVar8,0x65);
            uVar27 = 99;
            pbVar24 = (byte *)((long)&local_b8 + 1);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar27 != 0);
            break;
          case 3:
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 0xc;
            local_b8._0_4_ = 0x73616c63;
            local_b8._4_2_ = 0x5f73;
            local_b8._6_1_ = 0x6c;
            local_b8._7_1_ = 0x65;
            uVar27 = 99;
            local_b0 = CONCAT35(local_b0._5_3_,0x646e6567);
            pbVar24 = (byte *)((long)&local_b8 + 1);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar27 != 0);
            break;
          default:
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 10;
            local_b8._0_4_ = 0x73616c63;
            local_b8._4_2_ = 0x5f73;
            local_b8._6_1_ = 0x6e;
            local_b8._7_1_ = 0x6f;
            uVar27 = 99;
            local_b0 = CONCAT53(local_b0._3_5_,0x656e);
            pbVar24 = (byte *)((long)&local_b8 + 1);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar27 != 0);
          }
          local_b8._4_2_ = 0x5f73;
          local_b8._0_4_ = 0x73616c63;
          local_c0._0_4_ = uVar25;
          FUN_7103778300(0x3f800000,local_200,(long)&local_b8);
          lVar28 = *(long *)(lVar31 + 0x1d8);
          uVar15 = param_2[1];
          uVar13 = FUN_71032a9470(lVar28,uVar6);
          FUN_71032a9540((uint *)&local_c0,lVar28,uVar13);
          FUN_71003a4ca0((uint *)apppppppplStack_250,"spi_%s",&local_b8,uVar13,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          ppppbVar21 = (byte ****)0x1;
          param_5 = (long ****)0x0;
          FUN_7101b14390(param_1,(char)uVar15,(long)apppppppplStack_250,1,(long ****)0x0,param_6,
                         param_7,param_8);
          FUN_7103776910(&local_c0,param_1,(long ****)"set_txt_num",ppppppppplVar20,ppppbVar21,
                         param_5,param_6,param_7,param_8);
          uVar15 = CONCAT17(local_b8._7_1_,
                            CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
          param_3 = ppppppppplVar20;
          if (*(long **)(uVar15 + 0x10) != (long *)0x0) {
            param_3 = (long *********)0x0;
            ppppbVar21 = (byte ****)0x0;
            local_154 = 0;
            FUN_71037a2270(*(long **)(uVar15 + 0x10),(ushort *)&local_154,0,0);
          }
          local_c0._0_4_ = 0x523d9a8;
          local_c0._4_4_ = 0x71;
          local_b8._0_4_ = 0;
          local_b8._4_2_ = 0;
          local_b8._6_1_ = 0;
          local_b8._7_1_ = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
          FUN_7103776910(&local_c0,param_1,(long ****)"set_txt_num_sdw",param_3,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          uVar15 = CONCAT17(local_b8._7_1_,
                            CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
          if (*(long **)(uVar15 + 0x10) != (long *)0x0) {
            param_3 = (long *********)0x0;
            ppppbVar21 = (byte ****)0x0;
            local_154 = 0;
            FUN_71037a2270(*(long **)(uVar15 + 0x10),(ushort *)&local_154,0,0);
          }
          local_c0._0_4_ = 0x523d9a8;
          local_c0._4_4_ = 0x71;
          local_b8._0_4_ = 0;
          local_b8._4_2_ = 0;
          local_b8._6_1_ = 0;
          local_b8._7_1_ = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
          FUN_7103778300(0x3f800000,*plVar33,0x7104318a40);
          local_208 = &PTR_FUN_710523d988;
          local_200 = 0;
          if (uVar30 != 0) {
            uVar15 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar15 != 0) {
              FUN_710392eb40(uVar15);
            }
            FUN_710392eb40(uVar30);
          }
          local_1b0 = &PTR_FUN_710523d988;
          local_1a8 = 0;
          if (uVar11 != 0) {
            uVar30 = *(ulong *)(uVar11 + 0x18);
            *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar11 + 0x18) = 0;
            if (uVar30 != 0) {
              FUN_710392eb40(uVar30);
            }
            FUN_710392eb40(uVar11);
          }
        }
      }
    }
    break;
  case '\x05':
    lVar31 = *(long *)(DAT_710532f730 + 8);
    lVar28 = *(long *)(lVar31 + 0x318);
    uVar30 = FUN_710327d930(*(long *)(lVar28 + 8),param_2[2]);
    if ((uVar30 & 0xff00000000000000) != 0x2d00000000000000 || (uVar30 & 0xffffffffff) == 0) break;
    uVar11 = FUN_710327d3b0(lVar28,uVar30);
    uVar11 = uVar11 & 0xffffffffff;
    iVar34 = -1;
    if (uVar11 < 0x697117991) {
      if (uVar11 == 0x308a9483a) {
        iVar34 = 4;
      }
      else if (uVar11 == 0x32eb55cc9) {
        iVar34 = 6;
      }
      else if (uVar11 == 0x5b7a5f324) {
        iVar34 = 5;
      }
    }
    else if (uVar11 < 0xe32ae387d) {
      if (uVar11 == 0x697117991) {
        iVar34 = 0;
      }
      else if (uVar11 == 0xdaaec3d9f) {
        iVar34 = 2;
      }
    }
    else if (uVar11 == 0xe32ae387d) {
      iVar34 = 1;
    }
    else if (uVar11 == 0x106cb91611) {
      iVar34 = 3;
    }
    uVar11 = uVar30;
    FUN_710327cd40((uint *)&local_c0,*(long *)(lVar31 + 0x318),uVar30);
    FUN_71003a4ca0((uint *)&local_108,"nam_goods_%s",&local_b8,uVar11,ppppbVar21,param_5,param_6,
                   param_7,param_8);
    uVar27 = (uint)param_2[3];
    uVar25 = 0;
    switch(iVar34) {
    case 0:
      FUN_7103778300(0x3f800000,*plVar33,0x7104349eb4);
      lVar28 = *plVar33;
      pcVar17 = "bg_spirits_energy";
      break;
    case 1:
    case 2:
    case 3:
      FUN_7103778300(0x3f800000,*plVar33,0x7104349eb4);
      lVar28 = *plVar33;
      pcVar17 = "bg_spirits_item";
      break;
    default:
      goto switchD_7101b12aa0_caseD_4;
    case 5:
      lVar29 = *(long *)(DAT_710532f730 + 8);
      lVar28 = *(long *)(*(long *)(lVar31 + 0x318) + 8);
      uVar15 = FUN_710327d930(lVar28,0xd61d998cb);
      if (((uVar15 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar15 & 0xffffffffff) != 0)) {
        if (((uVar15 ^ uVar30) & 0xffffffffff) == 0) goto LAB_7101b12e58;
LAB_7101b12eac:
        uVar15 = FUN_710327d930(lVar28,0x155f9548cb);
        if (((uVar15 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar15 & 0xffffffffff) != 0))
        {
          if (((uVar15 ^ uVar30) & 0xffffffffff) != 0) goto LAB_7101b13054;
LAB_7101b12fac:
          FUN_7103778300(0x3f800000,*plVar33,0x71042c49c8);
          FUN_7103778300(0x3f800000,*plVar33,0x710441252d);
          uVar13 = 0xff1b79f66b54;
          uVar15 = 0xff1b449642e4;
          goto LAB_7101b12ffc;
        }
        if (((uVar15 & 0xffffffffff) != 0) && ((uVar15 & 0xff00000000000000) == 0x2d00000000000000))
        goto LAB_7101b12fac;
LAB_7101b13054:
        lVar28 = *plVar33;
        pcVar17 = "volume_s";
      }
      else {
        if (((uVar15 & 0xffffffffff) == 0) || ((uVar15 & 0xff00000000000000) != 0x2d00000000000000))
        goto LAB_7101b12eac;
LAB_7101b12e58:
        FUN_7103778300(0x3f800000,*plVar33,0x71043dfd0a);
        FUN_7103778300(0x3f800000,*plVar33,0x710424f087);
        uVar13 = 0xff13a3280d31;
        uVar15 = 0xff139e482481;
LAB_7101b12ffc:
        local_100 = local_100 & 0xffffffffffffff00;
        local_108 = (undefined **)0x0;
        uVar7 = param_2[3];
        uVar15 = FUN_7103292b40(*(long *)(lVar29 + 0x2f8),uVar15 | 0xc1ff000000000000);
        uVar13 = FUN_7103292b40(*(long *)(lVar29 + 0x2f8),uVar13 | 0xc1ff000000000000);
        iVar22 = 1;
        if ((uint)uVar13 <= (uint)uVar7) {
          iVar22 = 2;
        }
        iVar1 = 0;
        if ((uint)uVar15 <= (uint)uVar7) {
          iVar1 = iVar22;
        }
        if (iVar1 == 1) {
          lVar28 = *plVar33;
          pcVar17 = "volume_m";
        }
        else {
          if (iVar1 != 2) goto LAB_7101b13054;
          lVar28 = *plVar33;
          pcVar17 = "volume_l";
        }
      }
      FUN_7103778300(0x3f800000,lVar28,(long)pcVar17);
      uVar25 = (uint)param_2[3];
      uVar27 = 0;
      goto switchD_7101b12aa0_caseD_4;
    case 6:
      lVar28 = *(long *)(*(long *)(lVar31 + 0x318) + 8);
      uVar15 = FUN_710327d930(lVar28,0x18723aaa88);
      if (((uVar15 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar15 & 0xffffffffff) != 0)) {
        if (((uVar15 ^ uVar30) & 0xffffffffff) != 0) {
LAB_7101b12f24:
          uVar15 = FUN_710327d930(lVar28,0x1ae148d108);
          if (((uVar15 & 0xff00000000000000) == 0x2d00000000000000) &&
             ((uVar15 & 0xffffffffff) != 0)) {
            FUN_7103778300(0x3f800000,*plVar33,0x7104349eb4);
            if (((uVar15 ^ uVar30) & 0xffffffffff) == 0) {
LAB_7101b13088:
              lVar28 = *plVar33;
              pcVar17 = "bg_skill_ball";
              break;
            }
          }
          else {
            FUN_7103778300(0x3f800000,*plVar33,0x7104349eb4);
            if (((uVar15 & 0xffffffffff) != 0) &&
               ((uVar15 & 0xff00000000000000) == 0x2d00000000000000)) goto LAB_7101b13088;
          }
          lVar28 = *plVar33;
          pcVar17 = "bg_spirits_item";
          break;
        }
      }
      else if (((uVar15 & 0xffffffffff) == 0) ||
              ((uVar15 & 0xff00000000000000) != 0x2d00000000000000)) goto LAB_7101b12f24;
      FUN_7103778300(0x3f800000,*plVar33,0x7104349eb4);
      lVar28 = *plVar33;
      pcVar17 = "bg_standard_ticket";
    }
    FUN_7103778300(0x3f800000,lVar28,(long)pcVar17);
    uVar25 = 0;
switchD_7101b12aa0_caseD_4:
    FUN_7103776640(&local_c0,param_1,(byte ****)"set_parts_atr_class",uVar11,ppppbVar21,param_5,
                   param_6,param_7,param_8);
    uVar15 = CONCAT17(local_b8._7_1_,
                      CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)));
    FUN_7103778300(0x3f800000,uVar15,0x710425f93f);
    local_c0._0_4_ = 0x523d988;
    local_c0._4_4_ = 0x71;
    local_b8._0_4_ = 0;
    local_b8._4_2_ = 0;
    local_b8._6_1_ = 0;
    local_b8._7_1_ = 0;
    if (uVar15 != 0) {
      uVar13 = *(ulong *)(uVar15 + 0x18);
      *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar15 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar15);
    }
    FUN_7103776640(&local_1a0,param_1,(byte ****)"set_parts_gold_sp",uVar11,ppppbVar21,param_5,
                   param_6,param_7,param_8);
    uVar11 = local_198;
    if (iVar34 == 5) {
      lVar28 = *(long *)(*(long *)(lVar31 + 0x318) + 8);
      uVar11 = FUN_710327d930(lVar28,0xd61d998cb);
      if (((uVar11 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar11 & 0xffffffffff) != 0)) {
        bVar9 = ((uVar11 ^ uVar30) & 0xffffffffff) == 0;
      }
      else {
        bVar9 = (uVar11 & 0xffffffffff) != 0 && (uVar11 & 0xff00000000000000) == 0x2d00000000000000;
      }
      uVar11 = FUN_710327d930(lVar28,0x155f9548cb);
      if (((uVar11 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar11 & 0xffffffffff) != 0)) {
        bVar10 = ((uVar11 ^ uVar30) & 0xffffffffff) == 0;
      }
      else {
        bVar10 = (uVar11 & 0xffffffffff) != 0 && (uVar11 & 0xff00000000000000) == 0x2d00000000000000
        ;
      }
      uVar18 = 0;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      if (!bVar9) {
        if (bVar10) {
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 1;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 2;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 3;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 4;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 5;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 6;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 7;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 8;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
          uVar18 = 9;
          local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
          FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                         param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,local_148[0],0x71043f0699);
          uVar30 = local_148[0];
          local_150 = (long ********)&PTR_FUN_710523d988;
          local_148[0] = 0;
          if (uVar30 != 0) {
            uVar11 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            FUN_710392eb40(uVar30);
          }
        }
        goto LAB_7101b13b44;
      }
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 1;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 2;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 3;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 4;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 5;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 6;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 7;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 8;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      uVar18 = 9;
      local_b8._0_4_ = (uint)local_b8 & 0xffffff00;
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      FUN_710062dc20((uint *)&local_c0,"set_parts_%02d");
      FUN_7103776640(&local_150,(long)&local_1a0,(byte ****)&local_b8,uVar18,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,local_148[0],0x710431778d);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      ppppbVar21 = (byte ****)0x1;
    }
    else {
      if ((*(long *)(local_198 + 8) != 0) &&
         (plVar14 = (long *)FUN_71037964b0(*(long *)(local_198 + 8),0x710425eeb2),
         plVar14 != (long *)0x0)) {
        (**(code **)(*plVar14 + 0x140))(plVar14,1);
        lVar28 = *(long *)(uVar11 + 8);
        if (lVar28 != 0) {
          plVar32 = *(long **)(lVar28 + 0x80);
          while (plVar32 != (long *)(lVar28 + 0x88)) {
            uVar30 = (**(code **)(*(long *)plVar32[0xd] + 0x148))();
            if (((uVar30 & 1) != 0) &&
               (uVar30 = (**(code **)(*plVar14 + 0x120))(plVar14,plVar32[0xd]), (uVar30 & 1) != 0))
            {
              (**(code **)(*(long *)plVar32[0xd] + 0x178))();
              (**(code **)(*(long *)plVar32[0xd] + 0x140))((long *)plVar32[0xd],0);
            }
            plVar23 = (long *)plVar32[1];
            if ((long *)plVar32[1] == (long *)0x0) {
              plVar23 = plVar32 + 2;
              bVar9 = *(long **)*plVar23 != plVar32;
              plVar32 = (long *)*plVar23;
              if (bVar9) {
                do {
                  lVar31 = *plVar23;
                  plVar23 = (long *)(lVar31 + 0x10);
                  plVar32 = (long *)*plVar23;
                } while (*plVar32 != lVar31);
              }
            }
            else {
              do {
                plVar32 = plVar23;
                plVar23 = (long *)*plVar32;
              } while ((long *)*plVar32 != (long *)0x0);
            }
          }
        }
        (**(code **)(*plVar14 + 0x178))(plVar14);
      }
LAB_7101b13b44:
      ppppbVar21 = (byte ****)0x0;
    }
    uVar11 = param_2[1];
    local_c0._0_4_ = 0;
    for (uVar30 = 0; *(char *)((long)&local_100 + uVar30) != '\0'; uVar30 = uVar30 + 2) {
      *(char *)((long)&local_b8 + uVar30) = *(char *)((long)&local_100 + uVar30);
      if (0x3e < (int)uVar30 + 1U) {
        uVar30 = (ulong)((int)uVar30 + 1);
        break;
      }
      cVar3 = *(char *)((long)&local_100 + uVar30 + 1);
      if (cVar3 == '\0') {
        uVar30 = uVar30 + 1;
        break;
      }
      *(char *)((long)&local_b8 + uVar30 + 1) = cVar3;
    }
    *(undefined1 *)((long)&local_b8 + (uVar30 & 0xffffffff)) = 0;
    uVar26 = (uint)local_b8 & 0xff;
    local_c0._0_4_ = 0x811c9dc5;
    local_c0._4_4_ = (int)uVar30;
    if ((char)local_b8 != '\0') {
      pbVar24 = (byte *)((long)&local_b8 + 1);
      do {
        local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar26;
        uVar26 = (uint)*pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (uVar26 != 0);
    }
    param_3 = (long *********)&local_c0;
    param_5 = (long ****)(ulong)uVar25;
    FUN_7101b14390(param_1,(char)uVar11,(long)param_3,(ulong)ppppbVar21,param_5,param_6,param_7,
                   param_8);
    if ((int)uVar27 < 2) {
      FUN_7103776910(&local_150,param_1,(long ****)"set_txt_num",param_3,ppppbVar21,param_5,param_6,
                     param_7,param_8);
      uVar30 = local_148[0];
      if (*(long **)(local_148[0] + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_1f8 = local_1f8 & 0xffffffff00000000;
        FUN_71037a2270(*(long **)(local_148[0] + 0x10),(ushort *)&local_1f8,0,0);
      }
      local_150 = (long ********)&PTR_FUN_710523d9a8;
      local_148[0] = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_7103776910(&local_150,param_1,(long ****)"set_txt_num_sdw",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar30 = local_148[0];
      if (*(long **)(local_148[0] + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_1f8 = local_1f8 & 0xffffffff00000000;
        FUN_71037a2270(*(long **)(local_148[0] + 0x10),(ushort *)&local_1f8,0,0);
      }
      local_150 = (long ********)&PTR_FUN_710523d9a8;
      local_148[0] = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      lVar28 = *plVar33;
      pcVar17 = "num_hide";
    }
    else {
      FUN_7103776910(&local_150,param_1,(long ****)"set_txt_num",param_3,ppppbVar21,param_5,param_6,
                     param_7,param_8);
      uVar18 = 1;
      uVar11 = (ulong)uVar27;
      FUN_710377a280((long)&local_150,(byte *)"mnu_reward_item_n",1);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d9a8;
      local_148[0] = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_7103776910(&local_150,param_1,(long ****)"set_txt_num_sdw",uVar18,uVar11,param_5,param_6,
                     param_7,param_8);
      param_3 = (long *********)0x1;
      ppppbVar21 = (byte ****)(ulong)uVar27;
      FUN_710377a280((long)&local_150,(byte *)"mnu_reward_item_n",1);
      uVar30 = local_148[0];
      local_150 = (long ********)&PTR_FUN_710523d9a8;
      local_148[0] = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      lVar28 = *plVar33;
      pcVar17 = "num_show";
    }
    FUN_7103778300(0x3f800000,lVar28,(long)pcVar17);
    uVar30 = local_198;
    local_1a0 = &PTR_FUN_710523d988;
    local_198 = 0;
    if (uVar30 != 0) {
      uVar11 = *(ulong *)(uVar30 + 0x18);
      *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar30 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar30);
    }
    break;
  case '\x06':
    uVar30 = *param_2;
    if (((uVar30 & 0xff00000000000000) == 0xc100000000000000) && ((uVar30 & 0xffffffffff) != 0)) {
      uVar27 = 0x811c9dc5;
      local_b8._0_4_ = (uint)local_b8._1_3_ << 8;
      local_c0._0_4_ = 0x811c9dc5;
      local_c0._4_4_ = 0;
      local_100 = (ulong)local_100._1_7_ << 8;
      local_108 = (undefined **)0x811c9dc5;
      lVar28 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar12 = FUN_71032817a0(lVar28,0x1cd6be4c9b);
      if ((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000 &&
          ((ulong)puVar12 & 0xffffffffff) != 0) && (((ulong)puVar12 ^ uVar30) & 0xffffffffff) == 0)
      {
        local_b8._0_4_ = 0x7a697270;
        local_b8._4_2_ = 0x5f65;
        local_b8._6_1_ = 0x73;
        local_b8._7_1_ = 0x70;
        local_b0 = 0x6f625f7374697269;
        local_a8 = 0x7261;
        local_a6 = 0x64615f6d756e5f64;
        local_9e = 100;
        local_c0._4_4_ = 0x1b;
        uVar25 = 0x70;
        pbVar24 = (byte *)((long)&local_b8 + 1);
        local_c0._0_4_ = uVar27;
        do {
          local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        local_100 = 0x665f69696d5f6762;
        local_f8 = 0x735f726574686769;
        local_f0 = 0x6970;
        local_ee = 0x746972;
        uVar25 = 0x62;
        local_108._4_4_ = 0x15;
        pbVar24 = (byte *)((long)&local_100 + 1);
        do {
          uVar27 = uVar27 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
LAB_7101b12c3c:
        local_b8._4_2_ = 0x5f65;
        local_b8._0_4_ = 0x7a697270;
        local_108 = (undefined **)CONCAT44(local_108._4_4_,uVar27);
LAB_7101b12c44:
        FUN_7103778300(0x3f800000,*plVar33,(long)&local_b8);
        goto LAB_7101b12c50;
      }
      puVar12 = FUN_71032817a0(lVar28,0x22eae490b8);
      if (((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar12 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar12 ^ uVar30) & 0xffffffffff) == 0)) {
        local_b8._0_4_ = 0x7a697270;
        local_b8._4_2_ = 0x5f65;
        local_b8._6_1_ = 0x73;
        local_b8._7_1_ = 0x70;
        local_b0 = 0x6f625f7374697269;
        local_a8 = 0x7261;
        local_a6 = 0x64615f6d756e5f64;
        local_9e = 100;
        local_c0._4_4_ = 0x1b;
        uVar25 = 0x70;
        pbVar24 = (byte *)((long)&local_b8 + 1);
        local_c0._0_4_ = uVar27;
        do {
          local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        local_100 = 0x665f69696d5f6762;
        local_f8 = 0x735f726574686769;
        local_f0 = 0x6970;
        local_ee = 0x746972;
        uVar25 = 0x62;
        local_108._4_4_ = 0x15;
        pbVar24 = (byte *)((long)&local_100 + 1);
        do {
          uVar27 = uVar27 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        goto LAB_7101b12c3c;
      }
      puVar12 = FUN_71032817a0(lVar28,0x18cd5a705b);
      if (((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar12 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar12 ^ uVar30) & 0xffffffffff) == 0)) {
        local_a8 = local_a8 & 0xff00;
        local_b8._0_4_ = 0x7a697270;
        local_b8._4_2_ = 0x5f65;
        local_b8._6_1_ = 0x73;
        local_b8._7_1_ = 0x6f;
        local_b0 = 0x747365745f646e75;
        local_c0._4_4_ = 0x10;
        uVar25 = 0x70;
        pbVar24 = (byte *)((long)&local_b8 + 1);
        local_c0._0_4_ = uVar27;
        do {
          local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        local_100 = 0x646e756f735f6762;
        local_f8 = CONCAT26(local_f8._6_2_,0x747365745f);
        uVar25 = 0x62;
        local_108._4_4_ = 0xd;
        pbVar24 = (byte *)((long)&local_100 + 1);
        do {
          uVar27 = uVar27 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        goto LAB_7101b12c3c;
      }
      puVar12 = FUN_71032817a0(lVar28,0x182fe2e3bf);
      if (((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar12 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar12 ^ uVar30) & 0xffffffffff) == 0)) {
        local_a8 = local_a8 & 0xff00;
        local_b8._0_4_ = 0x7a697270;
        local_b8._4_2_ = 0x5f65;
        local_b8._6_1_ = 99;
        local_b8._7_1_ = 0x68;
        local_b0 = 0x7265676e656c6c61;
        local_c0._4_4_ = 0x10;
        uVar25 = 0x70;
        pbVar24 = (byte *)((long)&local_b8 + 1);
        local_c0._0_4_ = uVar27;
        do {
          local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        local_100 = 0x6c6c6168635f6762;
        local_f8 = CONCAT26(local_f8._6_2_,0x7265676e65);
        uVar25 = 0x62;
        local_108._4_4_ = 0xd;
        pbVar24 = (byte *)((long)&local_100 + 1);
        do {
          uVar27 = uVar27 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        goto LAB_7101b12c3c;
      }
      puVar12 = FUN_71032817a0(lVar28,0x18295f2988);
      if (((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar12 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar12 ^ uVar30) & 0xffffffffff) == 0)) {
        local_b8._0_4_ = 0x7a697270;
        local_b8._4_2_ = 0x5f65;
        local_b8._6_1_ = 0x73;
        local_b8._7_1_ = 0x68;
        uVar25 = 0x70;
        local_c0._4_4_ = 10;
        local_b0 = CONCAT53(local_b0._3_5_,0x706f);
        pbVar24 = (byte *)((long)&local_b8 + 1);
        local_c0._0_4_ = uVar27;
        do {
          local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        local_100 = 0x706f68735f6762;
        uVar25 = 0x62;
        local_108._4_4_ = 7;
        pbVar24 = (byte *)((long)&local_100 + 1);
        do {
          uVar27 = uVar27 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        goto LAB_7101b12c3c;
      }
LAB_7101b12c6c:
      FUN_7103776640(&local_150,param_1,(byte ****)"set_parts_atr_class",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar30 = local_148[0];
      FUN_7103778300(0x3f800000,local_148[0],0x710425f93f);
      local_150 = (long ********)&PTR_FUN_710523d988;
      local_148[0] = 0;
      if (uVar30 != 0) {
        uVar11 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar30);
      }
      param_3 = &local_150;
      ppppbVar21 = (byte ****)0x1;
      param_5 = (long ****)0x0;
      local_148[0] = local_148[0] & 0xffffffffffffff00;
      local_150 = (long ********)0x811c9dc5;
      FUN_7101b14390(param_1,(char)param_2[1],(long)param_3,1,(long ****)0x0,param_6,param_7,param_8
                    );
      FUN_7103776910(&local_1a0,param_1,(long ****)"set_txt_num",param_3,ppppbVar21,param_5,param_6,
                     param_7,param_8);
      uVar30 = local_198;
      if (*(long **)(local_198 + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_1f8 = local_1f8 & 0xffffffff00000000;
        FUN_71037a2270(*(long **)(local_198 + 0x10),(ushort *)&local_1f8,0,0);
      }
      local_1a0 = &PTR_FUN_710523d9a8;
      local_198 = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_7103776910(&local_1a0,param_1,(long ****)"set_txt_num_sdw",param_3,ppppbVar21,param_5,
                     param_6,param_7,param_8);
      uVar30 = local_198;
      if (*(long **)(local_198 + 0x10) != (long *)0x0) {
        param_3 = (long *********)0x0;
        ppppbVar21 = (byte ****)0x0;
        local_1f8 = local_1f8 & 0xffffffff00000000;
        FUN_71037a2270(*(long **)(local_198 + 0x10),(ushort *)&local_1f8,0,0);
      }
      local_1a0 = &PTR_FUN_710523d9a8;
      local_198 = 0;
      goto joined_r0x007101b12d70;
    }
    break;
  case '\a':
    uVar30 = *param_2;
    if (((uVar30 & 0xff00000000000000) == 0xc100000000000000) && ((uVar30 & 0xffffffffff) != 0)) {
      uVar27 = 0x811c9dc5;
      local_b8._0_4_ = (uint)local_b8._1_3_ << 8;
      local_c0._0_4_ = 0x811c9dc5;
      local_c0._4_4_ = 0;
      local_100 = (ulong)local_100._1_7_ << 8;
      local_108 = (undefined **)0x811c9dc5;
      lVar28 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar12 = FUN_71032817a0(lVar28,0x12f8a058c5);
      if ((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000 &&
          ((ulong)puVar12 & 0xffffffffff) != 0) && (((ulong)puVar12 ^ uVar30) & 0xffffffffff) == 0)
      {
        local_b8._0_4_ = 0x7a697270;
        local_b8._4_2_ = 0x5f65;
        local_b8._6_1_ = 0x73;
        local_b8._7_1_ = 0x74;
        local_b0 = CONCAT44(local_b0._4_4_,0x656761);
        uVar25 = 0x70;
        local_c0._4_4_ = 0xb;
        pbVar24 = (byte *)((long)&local_b8 + 1);
        local_c0._0_4_ = uVar27;
        do {
          local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        local_100 = 0x65676174735f6762;
        uVar25 = 0x62;
        local_f8 = local_f8 & 0xffffffffffffff00;
        local_108 = (undefined **)CONCAT44(8,(uint)local_108);
        pbVar24 = (byte *)((long)&local_100 + 1);
        do {
          uVar27 = uVar27 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
        local_108 = (undefined **)CONCAT44(8,uVar27);
        goto LAB_7101b12c44;
      }
      puVar12 = FUN_71032817a0(lVar28,0x10310db94a);
      if (((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar12 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar12 ^ uVar30) & 0xffffffffff) == 0)) {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104349eb4);
        FUN_7103776640(&local_150,param_1,(byte ****)"set_parts_atr_class",param_3,ppppbVar21,
                       param_5,param_6,param_7,param_8);
        uVar30 = local_148[0];
        FUN_7103778300(0x3f800000,local_148[0],0x710425f93f);
        local_150 = (long ********)&PTR_FUN_710523d988;
        local_148[0] = 0;
        if (uVar30 != 0) {
          uVar11 = *(ulong *)(uVar30 + 0x18);
          *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar30 + 0x18) = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40(uVar30);
        }
        FUN_7103778300(0x3f800000,*plVar33,0x710424f070);
        if (local_c0._4_4_ != 0) goto LAB_7101b12c44;
      }
LAB_7101b12c50:
      if (local_108._4_4_ != 0) {
        FUN_7103778300(0x3f800000,*plVar33,(long)&local_100);
      }
      goto LAB_7101b12c6c;
    }
  }
  if ((char)param_2[1] != '\x04') {
    FUN_7101b11920(param_1,0,param_3,ppppbVar21,param_5,param_6,param_7,param_8);
  }
  if (((ulong)param_4 & 1) == 0) {
    pcVar17 = "new_hide";
  }
  else {
    pcVar17 = "new_show";
  }
  FUN_7103778300(0x3f800000,*plVar33,(long)pcVar17);
  FUN_7103776640(&local_c0,param_1,(byte ****)"set_parts_gold_sp",param_3,ppppbVar21,param_5,param_6
                 ,param_7,param_8);
  uVar30 = CONCAT17(local_b8._7_1_,CONCAT16(local_b8._6_1_,CONCAT24(local_b8._4_2_,(uint)local_b8)))
  ;
  FUN_7103778760(uVar30,0x710425eeb2);
  local_c0._0_4_ = 0x523d988;
  local_c0._4_4_ = 0x71;
  local_b8._0_4_ = 0;
  local_b8._4_2_ = 0;
  local_b8._6_1_ = 0;
  local_b8._7_1_ = 0;
  if (uVar30 != 0) {
    uVar11 = *(ulong *)(uVar30 + 0x18);
    *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar30 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar30);
  }
switchD_7101b11dcc_caseD_2:
  return;
}

