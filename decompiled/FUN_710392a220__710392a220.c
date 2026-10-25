// addr:      710392a220
// offset:    0x392a220
// name:      FUN_710392a220
// mangled:   
// signature: undefined __cdecl FUN_710392a220(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710392a220(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  ulong extraout_x1_15;
  ulong extraout_x1_16;
  ulong extraout_x1_17;
  ulong extraout_x1_18;
  ulong extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  ulong extraout_x1_22;
  ulong extraout_x1_23;
  ulong extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 uVar25;
  undefined8 extraout_x1_26;
  undefined1 auVar26 [16];
  int local_10e0;
  long local_10d8;
  ulong local_10d0;
  int local_10c8;
  byte local_10c4;
  long local_10c0;
  long local_10b8;
  long local_10b0;
  ulong local_10a8;
  long local_10a0;
  long local_1098;
  long local_1090;
  long local_1088;
  long local_1080;
  ulong local_1078;
  byte local_106c;
  int local_1068;
  byte local_1064;
  char *local_1060;
  undefined8 local_1058;
  long ******local_1050;
  long ******local_1048;
  byte ******local_1040;
  char *local_1038;
  char *local_1030;
  char local_1024 [4100];
  int local_18;
  uint local_14;
  ulong uVar24;
  
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = param_1;
  local_14 = 0;
  do {
    if (3 < local_14) {
      FUN_710392b920();
      return;
    }
    switch(local_14) {
    case 0:
      local_1030 = "";
      break;
    case 1:
      if (DAT_71052b6f18 == (char *)0x0) {
        local_1024[0] = '\0';
        local_1030 = local_1024;
      }
      else {
        local_1030 = DAT_71052b6f18;
      }
      break;
    case 2:
      local_1058 = 0;
      local_1030 = local_1024;
      local_1024[0] = '\0';
      break;
    case 3:
      local_1060 = "JE_MALLOC_CONF";
      auVar26 = FUN_710392b530();
      local_1024[0] = '\0';
      local_1030 = local_1024;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    while( true ) {
      bVar20 = 0;
      if (*local_1030 != '\0') {
        param_3 = (long ****)&local_1048;
        param_4 = (byte ****)&local_1040;
        param_5 = (long ****)&local_1050;
        bVar20 = FUN_710392b540(&local_1030,(long *)&local_1038,(long *)param_3,(long *)param_4,
                                (long *)param_5);
        auVar26._1_7_ = 0;
        auVar26[0] = bVar20;
        auVar26._8_8_ = extraout_x1;
        bVar20 = bVar20 ^ 1;
      }
      if ((bVar20 & 1) == 0) break;
      if (((long *******)local_1048 == (long *******)0x5) &&
         (iVar22 = strncmp("abort",local_1038,5), iVar22 == 0)) {
        if ((local_1050 == (long ******)&DAT_00000004) &&
           (param_3 = (long ****)local_1050, iVar22 = strncmp("true",(char *)local_1040,4),
           iVar22 == 0)) {
          DAT_7106d4b579 = 1;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = extraout_x1_00;
          auVar26 = auVar1 << 0x40;
        }
        else if (((long *******)local_1050 == (long *******)0x5) &&
                (param_3 = (long ****)local_1050, iVar22 = strncmp("false",(char *)local_1040,5),
                iVar22 == 0)) {
          DAT_7106d4b579 = 0;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = extraout_x1_01;
          auVar26 = auVar2 << 0x40;
        }
        else {
          param_3 = (long ****)local_1048;
          param_4 = (byte ****)local_1040;
          param_5 = (long ****)local_1050;
          auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                   (ulong)local_1050,param_6,param_7,param_8);
        }
      }
      else if (((long *******)local_1048 == (long *******)0xa) &&
              (iVar22 = strncmp("abort_conf",local_1038,10), iVar22 == 0)) {
        if ((local_1050 == (long ******)&DAT_00000004) &&
           (param_3 = (long ****)local_1050, iVar22 = strncmp("true",(char *)local_1040,4),
           iVar22 == 0)) {
          DAT_7106d4b588 = '\x01';
          auVar3._8_8_ = 0;
          auVar3._0_8_ = extraout_x1_02;
          auVar26 = auVar3 << 0x40;
        }
        else if (((long *******)local_1050 == (long *******)0x5) &&
                (param_3 = (long ****)local_1050, iVar22 = strncmp("false",(char *)local_1040,5),
                iVar22 == 0)) {
          DAT_7106d4b588 = '\0';
          auVar4._8_8_ = 0;
          auVar4._0_8_ = extraout_x1_03;
          auVar26 = auVar4 << 0x40;
        }
        else {
          param_3 = (long ****)local_1048;
          param_4 = (byte ****)local_1040;
          param_5 = (long ****)local_1050;
          auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                   (ulong)local_1050,param_6,param_7,param_8);
        }
      }
      else {
        param_3 = (long ****)local_1048;
        iVar22 = strncmp("metadata_thp",local_1038,(size_t)local_1048);
        if (iVar22 == 0) {
          local_1064 = 0;
          uVar24 = 0;
          uVar25 = extraout_x1_04;
          for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
            param_3 = (long ****)local_1050;
            uVar23 = strncmp((&PTR_s_disabled_71052945f0)[local_18],(char *)local_1040,
                             (size_t)local_1050);
            uVar24 = (ulong)uVar23;
            uVar25 = extraout_x1_05;
            if (uVar23 == 0) {
              DAT_7106dd4f18 = local_18;
              local_1064 = 1;
              break;
            }
          }
          auVar26._8_8_ = uVar25;
          auVar26._0_8_ = uVar24;
          if ((local_1064 & 1) == 0) {
            param_3 = (long ****)local_1048;
            param_4 = (byte ****)local_1040;
            param_5 = (long ****)local_1050;
            auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                     (ulong)local_1050,param_6,param_7,param_8);
          }
        }
        else if (((long *******)local_1048 == (long *******)0x6) &&
                (iVar22 = strncmp("retain",local_1038,6), iVar22 == 0)) {
          if ((local_1050 == (long ******)&DAT_00000004) &&
             (param_3 = (long ****)local_1050, iVar22 = strncmp("true",(char *)local_1040,4),
             iVar22 == 0)) {
            DAT_7106dd4f1c = 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = extraout_x1_06;
            auVar26 = auVar5 << 0x40;
          }
          else if (((long *******)local_1050 == (long *******)0x5) &&
                  (param_3 = (long ****)local_1050, iVar22 = strncmp("false",(char *)local_1040,5),
                  iVar22 == 0)) {
            DAT_7106dd4f1c = 0;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = extraout_x1_07;
            auVar26 = auVar6 << 0x40;
          }
          else {
            param_3 = (long ****)local_1048;
            param_4 = (byte ****)local_1040;
            param_5 = (long ****)local_1050;
            auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                     (ulong)local_1050,param_6,param_7,param_8);
          }
        }
        else {
          param_3 = (long ****)local_1048;
          iVar22 = strncmp("dss",local_1038,(size_t)local_1048);
          if (iVar22 == 0) {
            local_106c = 0;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = extraout_x1_08;
            auVar26 = auVar19 << 0x40;
            for (local_1068 = 0; local_1068 < 3; local_1068 = local_1068 + 1) {
              param_3 = (long ****)local_1050;
              uVar23 = strncmp((&PTR_s_disabled_7105294610)[local_1068],(char *)local_1040,
                               (size_t)local_1050);
              auVar26._4_4_ = 0;
              auVar26._0_4_ = uVar23;
              auVar26._8_8_ = extraout_x1_09;
              if (uVar23 == 0) {
                bVar21 = FUN_7103946590(local_1068);
                auVar26._1_7_ = 0;
                auVar26[0] = bVar21;
                auVar26._8_8_ = extraout_x1_10;
                if (!bVar21) {
                  PTR_s_secondary_7105294608 = (&PTR_s_disabled_7105294610)[local_1068];
                  local_106c = 1;
                  break;
                }
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Error setting dss",local_1038,(ulong)local_1048,local_1040
                                         ,(ulong)local_1050,param_6,param_7,param_8);
              }
            }
            if ((local_106c & 1) == 0) {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else if ((local_1048 == (long ******)&DAT_00000007) &&
                  (iVar22 = strncmp("narenas",local_1038,7), iVar22 == 0)) {
            FUN_710392b790(0);
            param_3 = (long ****)0x0;
            local_1078 = FUN_7103954660((byte *)local_1040,&local_1080,0);
            iVar22 = FUN_710392b7c0();
            if ((iVar22 == 0) &&
               ((long *******)(local_1080 - (long)local_1040) == (long *******)local_1050)) {
              if (local_1078 == 0) {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Out-of-range conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
              else {
                DAT_7106d4b58c = (undefined4)local_1078;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = extraout_x1_11;
                auVar26 = auVar7 << 0x40;
              }
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else if ((local_1048 == (long ******)&DAT_0000000e) &&
                  (iVar22 = strncmp("dirty_decay_ms",local_1038,0xe), iVar22 == 0)) {
            FUN_710392b790(0);
            param_3 = (long ****)0x0;
            local_1088 = FUN_71039c00b0(local_1040,&local_1090);
            iVar22 = FUN_710392b7c0();
            if ((iVar22 == 0) &&
               ((long *******)(local_1090 - (long)local_1040) == (long *******)local_1050)) {
              if ((local_1088 < -1) || (0x10c6f7a0af40 < local_1088)) {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Out-of-range conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
              else {
                DAT_7105294568 = local_1088;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = extraout_x1_12;
                auVar26 = auVar8 << 0x40;
              }
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else if ((local_1048 == (long ******)&DAT_0000000e) &&
                  (iVar22 = strncmp("muzzy_decay_ms",local_1038,0xe), iVar22 == 0)) {
            FUN_710392b790(0);
            param_3 = (long ****)0x0;
            local_1098 = FUN_71039c00b0(local_1040,&local_10a0);
            iVar22 = FUN_710392b7c0();
            if ((iVar22 == 0) &&
               ((long *******)(local_10a0 - (long)local_1040) == (long *******)local_1050)) {
              if ((local_1098 < -1) || (0x10c6f7a0af40 < local_1098)) {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Out-of-range conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
              else {
                DAT_7105294570 = local_1098;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = extraout_x1_13;
                auVar26 = auVar9 << 0x40;
              }
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else if (((long *******)local_1048 == (long *******)0xb) &&
                  (iVar22 = strncmp("stats_print",local_1038,0xb), iVar22 == 0)) {
            if ((local_1050 == (long ******)&DAT_00000004) &&
               (param_3 = (long ****)local_1050, iVar22 = strncmp("true",(char *)local_1040,4),
               iVar22 == 0)) {
              DAT_7106dd4fd4 = 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = extraout_x1_14;
              auVar26 = auVar10 << 0x40;
            }
            else if (((long *******)local_1050 == (long *******)0x5) &&
                    (param_3 = (long ****)local_1050, iVar22 = strncmp("false",(char *)local_1040,5)
                    , iVar22 == 0)) {
              DAT_7106dd4fd4 = 0;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = extraout_x1_15;
              auVar26 = auVar11 << 0x40;
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else if ((local_1048 == (long ******)&DAT_00000010) &&
                  (param_3 = (long ****)local_1048,
                  iVar22 = strncmp("stats_print_opts",local_1038,0x10), iVar22 == 0)) {
            auVar26 = FUN_710392b7e0((long)local_1040,(ulong)local_1050);
          }
          else if (((long *******)local_1048 == (long *******)0x6) &&
                  (iVar22 = strncmp("tcache",local_1038,6), iVar22 == 0)) {
            if ((local_1050 == (long ******)&DAT_00000004) &&
               (param_3 = (long ****)local_1050, iVar22 = strncmp("true",(char *)local_1040,4),
               iVar22 == 0)) {
              DAT_7106dd4fec = 0;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = extraout_x1_16;
              auVar26 = auVar12 << 0x40;
            }
            else if (((long *******)local_1050 == (long *******)0x5) &&
                    (param_3 = (long ****)local_1050, iVar22 = strncmp("false",(char *)local_1040,5)
                    , iVar22 == 0)) {
              DAT_7106dd4fec = 1;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = extraout_x1_17;
              auVar26 = auVar13 << 0x40;
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else if ((local_1048 == (long ******)&SUB_00000018) &&
                  (iVar22 = strncmp("lg_extent_max_active_fit",local_1038,0x18), iVar22 == 0)) {
            FUN_710392b790(0);
            param_3 = (long ****)0x0;
            local_10a8 = FUN_7103954660((byte *)local_1040,&local_10b0,0);
            iVar22 = FUN_710392b7c0();
            if ((iVar22 == 0) &&
               ((long *******)(local_10b0 - (long)local_1040) == (long *******)local_1050)) {
              if (local_10a8 < 0x41) {
                DAT_71052945e8 = local_10a8;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = extraout_x1_18;
                auVar26 = auVar14 << 0x40;
              }
              else {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Out-of-range conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else if ((local_1048 == (long ******)&DAT_0000000d) &&
                  (iVar22 = strncmp("lg_tcache_max",local_1038,0xd), iVar22 == 0)) {
            FUN_710392b790(0);
            param_3 = (long ****)0x0;
            local_10b8 = FUN_71039c00b0(local_1040,&local_10c0);
            iVar22 = FUN_710392b7c0();
            if ((iVar22 == 0) &&
               ((long *******)(local_10c0 - (long)local_1040) == (long *******)local_1050)) {
              if ((local_10b8 < -1) || (0x3f < local_10b8)) {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Out-of-range conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
              else {
                DAT_7105297190 = local_10b8;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = extraout_x1_19;
                auVar26 = auVar15 << 0x40;
              }
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
          else {
            param_3 = (long ****)local_1048;
            iVar22 = strncmp("percpu_arena",local_1038,(size_t)local_1048);
            if (iVar22 == 0) {
              local_10c4 = 0;
              uVar24 = 0;
              uVar25 = extraout_x1_20;
              for (local_10c8 = 0; local_10c8 < 3; local_10c8 = local_10c8 + 1) {
                param_3 = (long ****)local_1050;
                uVar23 = strncmp((&PTR_s_percpu_7105294578)[local_10c8],(char *)local_1040,
                                 (size_t)local_1050);
                uVar24 = (ulong)uVar23;
                uVar25 = extraout_x1_21;
                if (uVar23 == 0) {
                  DAT_7105294560 = local_10c8;
                  local_10c4 = 1;
                  break;
                }
              }
              auVar26._8_8_ = uVar25;
              auVar26._0_8_ = uVar24;
              if ((local_10c4 & 1) == 0) {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
            }
            else if ((local_1048 == (long ******)&DAT_00000011) &&
                    (iVar22 = strncmp("background_thread",local_1038,0x11), iVar22 == 0)) {
              if ((local_1050 == (long ******)&DAT_00000004) &&
                 (param_3 = (long ****)local_1050, iVar22 = strncmp("true",(char *)local_1040,4),
                 iVar22 == 0)) {
                DAT_7106dd4f1d = 1;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = extraout_x1_22;
                auVar26 = auVar16 << 0x40;
              }
              else if (((long *******)local_1050 == (long *******)0x5) &&
                      (param_3 = (long ****)local_1050,
                      iVar22 = strncmp("false",(char *)local_1040,5), iVar22 == 0)) {
                DAT_7106dd4f1d = 0;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = extraout_x1_23;
                auVar26 = auVar17 << 0x40;
              }
              else {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
            }
            else if (((long *******)local_1048 == (long *******)0x16) &&
                    (iVar22 = strncmp("max_background_threads",local_1038,0x16), iVar22 == 0)) {
              FUN_710392b790(0);
              param_3 = (long ****)0x0;
              local_10d0 = FUN_7103954660((byte *)local_1040,&local_10d8,0);
              iVar22 = FUN_710392b7c0();
              if ((iVar22 == 0) &&
                 ((long *******)(local_10d8 - (long)local_1040) == (long *******)local_1050)) {
                if (local_10d0 == 0) {
                  DAT_7105294630 = 1;
                }
                else if (local_10d0 <= DAT_7105294630) {
                  DAT_7105294630 = local_10d0;
                }
                auVar18._8_8_ = 0;
                auVar18._0_8_ = extraout_x1_24;
                auVar26 = auVar18 << 0x40;
              }
              else {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
            }
            else if (((long *******)local_1048 == (long *******)0x3) &&
                    (param_3 = (long ****)local_1048, iVar22 = strncmp("thp",local_1038,3),
                    iVar22 == 0)) {
              bVar21 = false;
              uVar23 = 0;
              uVar25 = extraout_x1_25;
              for (local_10e0 = 0; auVar26._4_4_ = 0, auVar26._0_4_ = uVar23, auVar26._8_8_ = uVar25
                  , local_10e0 < 3; local_10e0 = local_10e0 + 1) {
                param_3 = (long ****)local_1050;
                uVar23 = strncmp((&PTR_s_default_7105297168)[local_10e0],(char *)local_1040,
                                 (size_t)local_1050);
                if (uVar23 == 0) {
                  param_3 = (long ****)local_1048;
                  param_4 = (byte ****)local_1040;
                  param_5 = (long ****)local_1050;
                  auVar26 = FUN_710392b730("No THP support",local_1038,(ulong)local_1048,local_1040,
                                           (ulong)local_1050,param_6,param_7,param_8);
                  DAT_7106dd4fd0 = local_10e0;
                  bVar21 = true;
                  break;
                }
                uVar25 = extraout_x1_26;
              }
              if (!bVar21) {
                param_3 = (long ****)local_1048;
                param_4 = (byte ****)local_1040;
                param_5 = (long ****)local_1050;
                auVar26 = FUN_710392b730("Invalid conf value",local_1038,(ulong)local_1048,
                                         local_1040,(ulong)local_1050,param_6,param_7,param_8);
              }
            }
            else {
              param_3 = (long ****)local_1048;
              param_4 = (byte ****)local_1040;
              param_5 = (long ****)local_1050;
              auVar26 = FUN_710392b730("Invalid conf pair",local_1038,(ulong)local_1048,local_1040,
                                       (ulong)local_1050,param_6,param_7,param_8);
            }
          }
        }
      }
    }
    if ((DAT_7106d4b588 == '\x01') && (DAT_7106d4b590 == '\x01')) {
      auVar26 = FUN_710392b900(auVar26._0_8_,auVar26._8_8_,param_3,param_4,param_5,param_6,param_7,
                               param_8);
    }
    local_14 = local_14 + 1;
  } while( true );
}

