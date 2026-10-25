// addr:      7101e4e150
// offset:    0x1e4e150
// name:      FUN_7101e4e150
// mangled:   
// signature: undefined __cdecl FUN_7101e4e150(uint * param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_7101e4e150(uint *param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   long param_6,ulong param_7,ulong param_8)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar14;
  undefined8 extraout_x1_03;
  char *pcVar15;
  undefined8 extraout_x1_04;
  undefined *puVar16;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  ulong uVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  long lVar20;
  ushort *puVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long *********ppppppppplVar28;
  long lVar29;
  undefined **local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ushort local_b0;
  undefined4 local_ae;
  undefined2 local_aa;
  undefined **local_80;
  ulong local_78;
  
  *(undefined2 *)(param_1 + 0x91) = 0;
  FUN_7101e4e050(param_1,5,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2 = param_1 + 0x1e;
  *(uint **)(param_1 + 0x10) = puVar2;
  if ((*(long *)(*(long *)(param_1 + 0x20) + 8) != 0) &&
     (lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18), lVar20 != 0)) {
    *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
  }
  if (param_2 < 0x18) {
    uVar5 = 1;
    if ((1 << (ulong)(param_2 & 0x1f) & 0xfffeU) == 0) {
      uVar8 = 1 << (ulong)(param_2 & 0x1f);
      if ((uVar8 & 0x1f0000) == 0) {
        if ((uVar8 & 0xe00000) == 0) goto LAB_7101e4e244;
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
    }
    uVar13 = 0;
    *(undefined1 *)(param_1 + 0x8b) = uVar5;
    if (param_2 < 0x18) {
      uVar8 = 1 << (ulong)(param_2 & 0x1f);
      if ((uVar8 & 0xfffe) == 0) {
        if ((uVar8 & 0x1f0000) == 0) {
          if ((1 << (ulong)(param_2 & 0x1f) & 0xe00000U) != 0) {
            uVar13 = (ulong)(param_2 - 0x15);
          }
        }
        else {
          uVar13 = (ulong)(param_2 - 0x10);
        }
      }
      else {
        uVar13 = (ulong)(param_2 - 1);
      }
    }
  }
  else {
LAB_7101e4e244:
    uVar5 = 0;
    uVar13 = 0;
    *(undefined1 *)(param_1 + 0x8b) = 0;
  }
  *(char *)((long)param_1 + 0x22d) = (char)uVar13;
  uVar6 = FUN_7102512d40(uVar5,uVar13);
  *(undefined2 *)(param_1 + 0x86) = uVar6;
  FUN_7103776910(&local_80,(long)puVar2,(long ****)"set_txt_facility_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  puVar1 = param_1 + 0x8b;
  switch((char)*puVar1) {
  case '\0':
    local_c8._4_4_ = 0xd;
    local_c0 = 0x5f6d79675f6d6163;
    local_b8 = CONCAT26(local_b8._6_2_,0x656c746974);
    uVar8 = 0x811c9dc5;
    uVar25 = 99;
    pbVar23 = (byte *)((long)&local_c0 + 1);
    do {
      uVar8 = uVar8 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar23;
      pbVar23 = pbVar23 + 1;
    } while (uVar25 != 0);
    break;
  case '\x01':
    local_c8._4_4_ = 0x10;
    local_c0 = 0x6f6863735f6d6163;
    local_b8 = 0x656c7469745f6c6f;
    uVar8 = 0x811c9dc5;
    local_b0 = local_b0 & 0xff00;
    uVar25 = 99;
    pbVar23 = (byte *)((long)&local_c0 + 1);
    do {
      uVar8 = uVar8 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar23;
      pbVar23 = pbVar23 + 1;
    } while (uVar25 != 0);
    break;
  case '\x02':
    local_c8._4_4_ = 0x15;
    local_c0 = 0x726165735f6d6163;
    local_b8 = 0x5f646c6569666863;
    local_b0 = 0x6974;
    local_ae = 0x656c74;
    uVar8 = 0x811c9dc5;
    uVar25 = 99;
    pbVar23 = (byte *)((long)&local_c0 + 1);
    do {
      uVar8 = uVar8 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar23;
      pbVar23 = pbVar23 + 1;
    } while (uVar25 != 0);
    break;
  case '\x03':
    local_c8._4_4_ = 0x17;
    local_c0 = 0x5f6361665f6d6163;
    local_b8 = 0x6f68735f756e656d;
    local_b0 = 0x5f70;
    local_ae = 0x6c746974;
    uVar8 = 0x811c9dc5;
    local_aa = 0x65;
    uVar25 = 99;
    pbVar23 = (byte *)((long)&local_c0 + 1);
    do {
      uVar8 = uVar8 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar23;
      pbVar23 = pbVar23 + 1;
    } while (uVar25 != 0);
    break;
  default:
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_c8 = (undefined **)0x811c9dc5;
    goto LAB_7101e4e44c;
  }
  local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar8);
LAB_7101e4e44c:
  FUN_710377a120((long)&local_80,(char *)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_7103776910(&local_80,(long)puVar2,(long ****)"set_txt_facility_01",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar17 = (ulong)*(byte *)((long)param_1 + 0x22d);
  FUN_7102512ec0((uint *)&local_c8,(char)param_1[0x8b],uVar17,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_80,(char *)&local_c0,uVar17,param_4,param_5,param_6,param_7,param_8);
  uVar13 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_7103776910(&local_c8,(long)(param_1 + 0x12),(long ****)"set_rep_eff_aura_00",uVar17,param_4,
                 param_5,param_6,param_7,param_8);
  uVar13 = local_c0;
  if (param_1 + 0x3a != (uint *)&local_c8) {
    local_c0 = 0;
    uVar17 = *(ulong *)(param_1 + 0x3c);
    *(ulong *)(param_1 + 0x3c) = uVar13;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  uVar13 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  cVar3 = (char)*puVar1;
  if (cVar3 != '\x02') {
    if (cVar3 == '\x01') {
      pppplVar18 = (long ****)(ulong)*(byte *)((long)param_1 + 0x22d);
      FUN_7103778430((long)puVar2,"view_school_%02d",pppplVar18,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_school_owner",pppplVar18,param_4,
                     param_5,param_6,param_7,param_8);
      uVar13 = local_c0;
      if (param_1 + 0x32 != (uint *)&local_c8) {
        local_c0 = 0;
        uVar17 = *(ulong *)(param_1 + 0x34);
        *(ulong *)(param_1 + 0x34) = uVar13;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      uVar13 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_school_shadow",pppplVar18,param_4,
                     param_5,param_6,param_7,param_8);
      uVar13 = local_c0;
      if (param_1 + 0x36 != (uint *)&local_c8) {
        local_c0 = 0;
        uVar17 = *(ulong *)(param_1 + 0x38);
        *(ulong *)(param_1 + 0x38) = uVar13;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      uVar13 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710438d258);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710437cb42);
      lVar20 = *DAT_7105329f98;
      uVar5 = *(undefined1 *)((long)param_1 + 0x22d);
      plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar18,param_4,param_5,param_6,param_7,param_8);
      if (plVar9 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
          local_c8 = (undefined **)&DAT_00000010;
          pppplVar18 = (long ****)&local_c8;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
          if (((uVar13 & 1) != 0) &&
             (plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar18,param_4,param_5,param_6,param_7,
                                              param_8), plVar9 != (long *)0x0)) goto LAB_7101e4e958;
        }
        plVar9 = (long *)0x0;
      }
LAB_7101e4e958:
      *plVar9 = lVar20 + 0x38;
      *(undefined1 *)(plVar9 + 1) = uVar5;
      uVar7 = FUN_7102512d40((char)param_1[0x8b],(ulong)*(byte *)((long)param_1 + 0x22d));
      uVar13 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
      if (((uVar13 & 0xff00000000000000) == 0x7f00000000000000) && ((uVar13 & 0xffffffffff) != 0)) {
        FUN_710323d580((long *)(param_1 + 8),uVar13,(byte ****)&DAT_0000001a,param_4,param_5,param_6
                       ,param_7,param_8);
        ppppppppplVar19 = (long *********)&DAT_0000001a;
        plVar10 = FUN_710323faf0((long *)(param_1 + 8),uVar13,(undefined **)&DAT_0000001a,param_4,
                                 param_5,param_6,param_7,param_8);
        FUN_7103778b80(*(long *)(param_1 + 0x34),(long)plVar10,ppppppppplVar19,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_7103778b80(*(long *)(param_1 + 0x38),(long)plVar10,ppppppppplVar19,param_4,param_5,
                       param_6,param_7,param_8);
      }
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",0,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71044550ce);
      if ((((ulong)*(byte *)(plVar9 + 1) < 0xe) &&
          (*(char *)(*(long *)(*plVar9 + 8) + 0x388) != '\0')) &&
         (lVar20 = *(long *)(*(long *)(*plVar9 + 8) + (ulong)*(byte *)(plVar9 + 1) * 8 + 8),
         lVar20 != 0)) {
        uVar7 = *(ushort *)(lVar20 + 8);
        if ((ulong)uVar7 == 0xffff) goto LAB_7101e4fc1c;
        if (uVar7 >> 4 < 0x177) {
          puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
        }
        else {
          puVar22 = &DAT_710532a878;
          if (((ushort)(uVar7 + 0xe890) < 100) &&
             (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
             *(short *)(lVar20 + 0x88cc8) != -1)) {
            puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
          }
        }
        uVar7 = puVar22[4];
        ppppppppplVar19 = (long *********)(ulong)uVar7;
        if (ppppppppplVar19 == (long *********)0xffff) goto LAB_7101e4fc1c;
        FUN_7103778300(0x3f800000,uVar13,0x710429257e);
        param_4 = (byte ****)0x1;
        FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                       param_7,param_8);
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar19,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e5069c;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e5069c:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",ppppppppplVar19,
                       param_4,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50a10;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50a10:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      else {
LAB_7101e4fc1c:
        FUN_7103778300(0x3f800000,uVar13,0x71043cd335);
      }
      local_c8 = &PTR_FUN_710523d988;
      local_c0 = 0;
      if (uVar13 != 0) {
        uVar17 = *(ulong *)(uVar13 + 0x18);
        *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar13 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar13);
      }
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",1,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71044550ce);
      if ((((ulong)*(byte *)(plVar9 + 1) < 0xe) &&
          (*(char *)(*(long *)(*plVar9 + 8) + 0x388) != '\0')) &&
         (lVar20 = *(long *)(*(long *)(*plVar9 + 8) + (ulong)*(byte *)(plVar9 + 1) * 8 + 8),
         lVar20 != 0)) {
        uVar7 = *(ushort *)(lVar20 + 0x1d0);
        if ((ulong)uVar7 == 0xffff) goto LAB_7101e4fdec;
        if (uVar7 >> 4 < 0x177) {
          puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
        }
        else {
          puVar22 = &DAT_710532a878;
          if (((ushort)(uVar7 + 0xe890) < 100) &&
             (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
             *(short *)(lVar20 + 0x88cc8) != -1)) {
            puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
          }
        }
        uVar7 = puVar22[4];
        ppppppppplVar19 = (long *********)(ulong)uVar7;
        if (ppppppppplVar19 == (long *********)0xffff) goto LAB_7101e4fdec;
        FUN_7103778300(0x3f800000,uVar13,0x710429257e);
        param_4 = (byte ****)0x1;
        FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                       param_7,param_8);
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar19,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50760;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50760:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",ppppppppplVar19,
                       param_4,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50a6c;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50a6c:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      else {
LAB_7101e4fdec:
        FUN_7103778300(0x3f800000,uVar13,0x71043cd335);
      }
      local_c0 = 0;
      local_c8 = &PTR_FUN_710523d988;
      if (uVar13 != 0) {
        local_c0 = 0;
        local_c8 = &PTR_FUN_710523d988;
        uVar17 = *(ulong *)(uVar13 + 0x18);
        *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar13 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar13);
      }
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",2,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71044550ce);
      if ((((ulong)*(byte *)(plVar9 + 1) < 0xe) &&
          (*(char *)(*(long *)(*plVar9 + 8) + 0x388) != '\0')) &&
         (lVar20 = *(long *)(*(long *)(*plVar9 + 8) + (ulong)*(byte *)(plVar9 + 1) * 8 + 8),
         lVar20 != 0)) {
        uVar7 = *(ushort *)(lVar20 + 0x398);
        if ((ulong)uVar7 == 0xffff) goto LAB_7101e4ffb4;
        if (uVar7 >> 4 < 0x177) {
          puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
        }
        else {
          puVar22 = &DAT_710532a878;
          if (((ushort)(uVar7 + 0xe890) < 100) &&
             (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
             *(short *)(lVar20 + 0x88cc8) != -1)) {
            puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
          }
        }
        uVar7 = puVar22[4];
        ppppppppplVar19 = (long *********)(ulong)uVar7;
        if (ppppppppplVar19 == (long *********)0xffff) goto LAB_7101e4ffb4;
        FUN_7103778300(0x3f800000,uVar13,0x710429257e);
        param_4 = (byte ****)0x1;
        FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                       param_7,param_8);
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar19,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50824;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50824:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",ppppppppplVar19,
                       param_4,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50ad0;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50ad0:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      else {
LAB_7101e4ffb4:
        FUN_7103778300(0x3f800000,uVar13,0x71043cd335);
      }
      local_c0 = 0;
      local_c8 = &PTR_FUN_710523d988;
      if (uVar13 != 0) {
        local_c0 = 0;
        local_c8 = &PTR_FUN_710523d988;
        uVar17 = *(ulong *)(uVar13 + 0x18);
        *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar13 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar13);
      }
      ppppppppplVar19 = (long *********)0x3;
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71044550ce);
      if ((((ulong)*(byte *)(plVar9 + 1) < 0xe) &&
          (*(char *)(*(long *)(*plVar9 + 8) + 0x388) != '\0')) &&
         (lVar20 = *(long *)(*(long *)(*plVar9 + 8) + (ulong)*(byte *)(plVar9 + 1) * 8 + 8),
         lVar20 != 0)) {
        uVar7 = *(ushort *)(lVar20 + 0x560);
        if ((ulong)uVar7 != 0xffff) {
          if (uVar7 >> 4 < 0x177) {
            puVar22 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
          }
          else {
            puVar22 = &DAT_710532a878;
            if (((ushort)(uVar7 + 0xe890) < 100) &&
               (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
               *(short *)(lVar20 + 0x88cc8) != -1)) {
              puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
            }
          }
          uVar7 = puVar22[4];
          ppppppppplVar28 = (long *********)(ulong)uVar7;
          if (ppppppppplVar28 != (long *********)0xffff) {
            FUN_7103778300(0x3f800000,uVar13,0x710429257e);
            param_4 = (byte ****)0x1;
            FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                           param_7,param_8);
            FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar28,
                           param_4,param_5,param_6,param_7,param_8);
            lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
            puVar21 = *(ushort **)(lVar29 + 0x28);
            lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
            uVar17 = lVar20 >> 3;
            if (0 < (int)uVar17) {
              uVar24 = 0;
              do {
                if (uVar17 <= uVar24) goto LAB_7101e50b00;
                if (*puVar21 == uVar7) {
                  if (-1 < (int)uVar24) {
                    uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                    ppppppppplVar28 = (long *********)&SUB_00000018;
                    plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018
                                             ,param_4,param_5,param_6,param_7,param_8);
                    goto LAB_7101e508e8;
                  }
                  break;
                }
                uVar24 = uVar24 + 1;
                puVar21 = puVar21 + 4;
              } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
            }
            plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e508e8:
            uVar17 = local_78;
            FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar28,param_4,param_5,param_6,param_7,
                           param_8);
            local_80 = &PTR_FUN_710523d9a8;
            local_78 = 0;
            if (uVar17 != 0) {
              FUN_710392eb40(uVar17);
            }
            FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",
                           ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
            lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
            puVar21 = *(ushort **)(lVar29 + 0x28);
            lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
            uVar17 = lVar20 >> 3;
            if (0 < (int)uVar17) {
              uVar24 = 0;
              do {
                if (uVar17 <= uVar24) goto LAB_7101e50b00;
                if (*puVar21 == uVar7) goto LAB_7101e50978;
                uVar24 = uVar24 + 1;
                puVar21 = puVar21 + 4;
              } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
            }
            goto LAB_7101e509a8;
          }
        }
      }
    }
    else {
      if (cVar3 != '\0') {
        pppplVar18 = (long ****)(ulong)*(byte *)((long)param_1 + 0x22d);
        FUN_7103778430((long)puVar2,"view_shop_%02d",pppplVar18,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_txt_facility_00",pppplVar18,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_c8,"cam_fac_menu_shop_title",pppplVar18,param_4,param_5,param_6,
                       param_7,param_8);
        uVar13 = local_c0;
        local_c8 = &PTR_FUN_710523d9a8;
        local_c0 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_shop_owner",pppplVar18,param_4,
                       param_5,param_6,param_7,param_8);
        uVar13 = local_c0;
        if (param_1 + 0x32 != (uint *)&local_c8) {
          local_c0 = 0;
          uVar17 = *(ulong *)(param_1 + 0x34);
          *(ulong *)(param_1 + 0x34) = uVar13;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
        }
        uVar13 = local_c0;
        local_c8 = &PTR_FUN_710523d9a8;
        local_c0 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_shop_shadow",pppplVar18,param_4,
                       param_5,param_6,param_7,param_8);
        uVar13 = local_c0;
        if (param_1 + 0x36 != (uint *)&local_c8) {
          local_c0 = 0;
          uVar17 = *(ulong *)(param_1 + 0x38);
          *(ulong *)(param_1 + 0x38) = uVar13;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
        }
        uVar13 = local_c0;
        local_c8 = &PTR_FUN_710523d9a8;
        local_c0 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710438d258);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710437cb42);
        uVar13 = (ulong)*(byte *)((long)param_1 + 0x22d);
        if (4 < uVar13) {
LAB_7101e50b04:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar20 = *DAT_7105329f98;
        plVar9 = *(long **)(*(long *)(lVar20 + 0x40) + uVar13 * 8 + 0x90);
        if (plVar9 != (long *)0x0) {
          FUN_7102510b80(plVar9,1,pppplVar18,param_4,param_5,param_6,param_7,param_8);
          uVar13 = (ulong)*(byte *)((long)param_1 + 0x22d);
          if (4 < *(byte *)((long)param_1 + 0x22d)) goto LAB_7101e50b04;
        }
        plVar9 = *(long **)(*(long *)(lVar20 + 0x40) + uVar13 * 8 + 0x90);
        uVar7 = FUN_7102512d40((char)*puVar1,uVar13);
        uVar13 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
        if (((uVar13 & 0xff00000000000000) == 0x7f00000000000000) && ((uVar13 & 0xffffffffff) != 0))
        {
          FUN_710323d580((long *)(param_1 + 8),uVar13,(byte ****)&DAT_0000001a,param_4,param_5,
                         param_6,param_7,param_8);
          ppppppppplVar19 = (long *********)&DAT_0000001a;
          plVar10 = FUN_710323faf0((long *)(param_1 + 8),uVar13,(undefined **)&DAT_0000001a,param_4,
                                   param_5,param_6,param_7,param_8);
          FUN_7103778b80(*(long *)(param_1 + 0x34),(long)plVar10,ppppppppplVar19,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_7103778b80(*(long *)(param_1 + 0x38),(long)plVar10,ppppppppplVar19,param_4,param_5,
                         param_6,param_7,param_8);
        }
        lVar20 = 0;
        uVar13 = 0;
        do {
          uVar17 = uVar13 & 0xffffffff;
          FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_shop_%02d",uVar17,param_4,
                         param_5,param_6,param_7,param_8);
          lVar29 = *plVar9 + lVar20;
          if (*(char *)(lVar29 + 0x18) == '\x04') {
            pcVar15 = "type_00";
LAB_7101e4f348:
            uVar24 = local_c0;
            FUN_7103778300(0x3f800000,local_c0,(long)pcVar15);
            uVar11 = FUN_71025128e0((ulong *)*plVar9,*plVar9 + lVar20 + 0x10,uVar17,param_4,param_5,
                                    param_6,param_7,param_8);
            if ((uVar11 & 1) == 0) {
              FUN_7103778300(0x3f800000,uVar24,0x710429257e);
              pcVar15 = "soldout_off";
            }
            else {
              FUN_7103778300(0x3f800000,uVar24,0x71043cd335);
              pcVar15 = "soldout_on";
            }
            FUN_7103778300(0x3f800000,uVar24,(long)pcVar15);
            FUN_7103776640(&local_80,(long)&local_c8,(byte ****)"set_parts_new",uVar17,param_4,
                           param_5,param_6,param_7,param_8);
            uVar8 = FUN_710338b9b0((ulong *)(*plVar9 + lVar20 + 0x10),extraout_x1_04,uVar17,param_4,
                                   param_5,param_6,param_7,param_8);
            uVar11 = local_78;
            puVar16 = &DAT_71043cd335;
            if ((uVar8 & 1) != 0) {
              puVar16 = &DAT_710429257e;
            }
            FUN_7103778300(0x3f800000,local_78,(long)puVar16);
            FUN_7103776640(&local_d8,(long)&local_c8,(byte ****)"set_parts_excl",uVar17,param_4,
                           param_5,param_6,param_7,param_8);
            lVar29 = *plVar9;
            puVar12 = FUN_71032817a0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8)
                                     ,0x169337cd2e);
            uVar17 = local_d0;
            uVar26 = *(ulong *)(lVar29 + lVar20 + 0x10);
            puVar16 = &DAT_710429257e;
            if (((((uVar26 & 0xff00000000000000) == 0xc100000000000000) &&
                 ((uVar26 & 0xffffffffff) != 0)) &&
                (((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000)) &&
               (((ulong)puVar12 & 0xffffffffff) != 0)) {
              if ((((ulong)puVar12 ^ uVar26) & 0xffffffffff) != 0) {
LAB_7101e4f468:
                puVar16 = &DAT_71043cd335;
              }
            }
            else if ((((ulong)puVar12 & 0xffffffffff) != 0 &&
                     ((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) !=
                     ((uVar26 & 0xff00000000000000) == 0xc100000000000000 &&
                     (uVar26 & 0xffffffffff) != 0)) goto LAB_7101e4f468;
            FUN_7103778300(0x3f800000,local_d0,(long)puVar16);
            local_d8 = &PTR_FUN_710523d988;
            local_d0 = 0;
            if (uVar17 != 0) {
              uVar26 = *(ulong *)(uVar17 + 0x18);
              *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar17 + 0x18) = 0;
              if (uVar26 != 0) {
                FUN_710392eb40(uVar26);
              }
              FUN_710392eb40(uVar17);
            }
            local_80 = &PTR_FUN_710523d988;
            local_78 = 0;
            if (uVar11 != 0) {
              uVar17 = *(ulong *)(uVar11 + 0x18);
              *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar11 + 0x18) = 0;
              if (uVar17 != 0) {
                FUN_710392eb40(uVar17);
              }
              FUN_710392eb40(uVar11);
            }
          }
          else {
            if (*(char *)(lVar29 + 0x18) == '\x05') {
LAB_7101e4f338:
              pcVar15 = "type_01";
              goto LAB_7101e4f348;
            }
            uVar27 = *(ulong *)(lVar29 + 0x20) & 0xffffffffff;
            uVar11 = FUN_710327d930(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8),
                                    0x1ae148d108);
            uVar24 = local_c0;
            uVar26 = uVar11 & 0xffffffffff;
            bVar4 = (uVar11 & 0xff00000000000000) == 0x2d00000000000000;
            if (uVar27 == 0) {
              if (!bVar4 || uVar26 == 0) goto LAB_7101e4f338;
            }
            else if ((bVar4 && uVar26 != 0) && uVar26 == uVar27) goto LAB_7101e4f338;
            FUN_7103778300(0x3f800000,local_c0,0x71043cd335);
            FUN_7103778300(0x3f800000,uVar24,0x710435be11);
          }
          local_c0 = 0;
          local_c8 = &PTR_FUN_710523d988;
          if (uVar24 != 0) {
            local_c0 = 0;
            local_c8 = &PTR_FUN_710523d988;
            uVar17 = *(ulong *)(uVar24 + 0x18);
            *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar24 + 0x18) = 0;
            if (uVar17 != 0) {
              FUN_710392eb40(uVar17);
            }
            FUN_710392eb40(uVar24);
          }
          uVar13 = uVar13 + 1;
          lVar20 = lVar20 + 0x30;
        } while (uVar13 != 4);
        goto LAB_7101e501cc;
      }
      pppplVar18 = (long ****)(ulong)*(byte *)((long)param_1 + 0x22d);
      FUN_7103778430((long)puVar2,"view_gym_%02d",pppplVar18,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_txt_facility_00",pppplVar18,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_c8,"cam_gym_title",pppplVar18,param_4,param_5,param_6,param_7,
                     param_8);
      uVar13 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_gym_owner",pppplVar18,param_4,
                     param_5,param_6,param_7,param_8);
      uVar13 = local_c0;
      if (param_1 + 0x32 != (uint *)&local_c8) {
        local_c0 = 0;
        uVar17 = *(ulong *)(param_1 + 0x34);
        *(ulong *)(param_1 + 0x34) = uVar13;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      uVar13 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_gym_shadow",pppplVar18,param_4,
                     param_5,param_6,param_7,param_8);
      uVar13 = local_c0;
      if (param_1 + 0x36 != (uint *)&local_c8) {
        local_c0 = 0;
        uVar17 = *(ulong *)(param_1 + 0x38);
        *(ulong *)(param_1 + 0x38) = uVar13;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      uVar13 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710438d258);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042810c6);
      lVar20 = *DAT_7105329f98;
      plVar9 = (long *)FUN_710392e290(0x10,8,pppplVar18,param_4,param_5,param_6,param_7,param_8);
      if (plVar9 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
          local_c8 = (undefined **)&DAT_00000008;
          pppplVar18 = (long ****)&local_c8;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
          if (((uVar13 & 1) != 0) &&
             (plVar9 = (long *)FUN_710392e290(0x10,8,pppplVar18,param_4,param_5,param_6,param_7,
                                              param_8), plVar9 != (long *)0x0)) goto LAB_7101e4e6b8;
        }
        plVar9 = (long *)0x0;
      }
LAB_7101e4e6b8:
      *plVar9 = lVar20 + 0x38;
      uVar7 = FUN_7102512d40((char)param_1[0x8b],(ulong)*(byte *)((long)param_1 + 0x22d));
      uVar13 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
      if (((uVar13 & 0xff00000000000000) == 0x7f00000000000000) && ((uVar13 & 0xffffffffff) != 0)) {
        FUN_710323d580((long *)(param_1 + 8),uVar13,(byte ****)&DAT_0000001a,param_4,param_5,param_6
                       ,param_7,param_8);
        ppppppppplVar19 = (long *********)&DAT_0000001a;
        plVar10 = FUN_710323faf0((long *)(param_1 + 8),uVar13,(undefined **)&DAT_0000001a,param_4,
                                 param_5,param_6,param_7,param_8);
        FUN_7103778b80(*(long *)(param_1 + 0x34),(long)plVar10,ppppppppplVar19,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_7103778b80(*(long *)(param_1 + 0x38),(long)plVar10,ppppppppplVar19,param_4,param_5,
                       param_6,param_7,param_8);
      }
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",0,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71042a361a);
      if ((*(char *)(*(undefined8 **)(*plVar9 + 8) + 0x71) == '\0') ||
         (puVar21 = (ushort *)**(undefined8 **)(*plVar9 + 8), puVar21 == (ushort *)0x0)) {
LAB_7101e4f62c:
        FUN_7103778300(0x3f800000,uVar13,0x71043cd335);
      }
      else {
        uVar7 = *puVar21;
        if ((ulong)uVar7 == 0xffff) goto LAB_7101e4f62c;
        if (uVar7 >> 4 < 0x177) {
          puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
        }
        else {
          puVar22 = &DAT_710532a878;
          if (((ushort)(uVar7 + 0xe890) < 100) &&
             (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
             *(short *)(lVar20 + 0x88cc8) != -1)) {
            puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
          }
        }
        uVar7 = puVar22[4];
        ppppppppplVar19 = (long *********)(ulong)uVar7;
        if (ppppppppplVar19 == (long *********)0xffff) goto LAB_7101e4f62c;
        FUN_7103778300(0x3f800000,uVar13,0x710429257e);
        param_4 = (byte ****)0x1;
        FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                       param_7,param_8);
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar19,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50268;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50268:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",ppppppppplVar19,
                       param_4,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50578;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50578:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      local_c8 = &PTR_FUN_710523d988;
      local_c0 = 0;
      if (uVar13 != 0) {
        uVar17 = *(ulong *)(uVar13 + 0x18);
        *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar13 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar13);
      }
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",1,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71042a361a);
      if (((char)(*(long **)(*plVar9 + 8))[0x71] == '\0') ||
         (lVar20 = **(long **)(*plVar9 + 8), lVar20 == 0)) {
LAB_7101e4f7ec:
        FUN_7103778300(0x3f800000,uVar13,0x71043cd335);
      }
      else {
        uVar7 = *(ushort *)(lVar20 + 0x1d8);
        if ((ulong)uVar7 == 0xffff) goto LAB_7101e4f7ec;
        if (uVar7 >> 4 < 0x177) {
          puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
        }
        else {
          puVar22 = &DAT_710532a878;
          if (((ushort)(uVar7 + 0xe890) < 100) &&
             (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
             *(short *)(lVar20 + 0x88cc8) != -1)) {
            puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
          }
        }
        uVar7 = puVar22[4];
        ppppppppplVar19 = (long *********)(ulong)uVar7;
        if (ppppppppplVar19 == (long *********)0xffff) goto LAB_7101e4f7ec;
        FUN_7103778300(0x3f800000,uVar13,0x710429257e);
        param_4 = (byte ****)0x1;
        FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                       param_7,param_8);
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar19,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e5032c;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e5032c:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",ppppppppplVar19,
                       param_4,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e505d4;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e505d4:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      local_c0 = 0;
      local_c8 = &PTR_FUN_710523d988;
      if (uVar13 != 0) {
        local_c0 = 0;
        local_c8 = &PTR_FUN_710523d988;
        uVar17 = *(ulong *)(uVar13 + 0x18);
        *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar13 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar13);
      }
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",2,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71042a361a);
      if (((char)(*(long **)(*plVar9 + 8))[0x71] == '\0') ||
         (lVar20 = **(long **)(*plVar9 + 8), lVar20 == 0)) {
LAB_7101e4f9a4:
        FUN_7103778300(0x3f800000,uVar13,0x71043cd335);
      }
      else {
        uVar7 = *(ushort *)(lVar20 + 0x3b0);
        if ((ulong)uVar7 == 0xffff) goto LAB_7101e4f9a4;
        if (uVar7 >> 4 < 0x177) {
          puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
        }
        else {
          puVar22 = &DAT_710532a878;
          if (((ushort)(uVar7 + 0xe890) < 100) &&
             (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
             *(short *)(lVar20 + 0x88cc8) != -1)) {
            puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
          }
        }
        uVar7 = puVar22[4];
        ppppppppplVar19 = (long *********)(ulong)uVar7;
        if (ppppppppplVar19 == (long *********)0xffff) goto LAB_7101e4f9a4;
        FUN_7103778300(0x3f800000,uVar13,0x710429257e);
        param_4 = (byte ****)0x1;
        FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                       param_7,param_8);
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar19,param_4
                       ,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e503f0;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e503f0:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",ppppppppplVar19,
                       param_4,param_5,param_6,param_7,param_8);
        lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
        puVar21 = *(ushort **)(lVar29 + 0x28);
        lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
        uVar17 = lVar20 >> 3;
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_7101e50b00;
            if (*puVar21 == uVar7) {
              if (-1 < (int)uVar24) {
                uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                ppppppppplVar19 = (long *********)&SUB_00000018;
                plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,
                                         param_4,param_5,param_6,param_7,param_8);
                goto LAB_7101e50638;
              }
              break;
            }
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
        }
        plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e50638:
        uVar17 = local_78;
        FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,param_7,
                       param_8);
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
      }
      local_c0 = 0;
      local_c8 = &PTR_FUN_710523d988;
      if (uVar13 != 0) {
        local_c0 = 0;
        local_c8 = &PTR_FUN_710523d988;
        uVar17 = *(ulong *)(uVar13 + 0x18);
        *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar13 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar13);
      }
      ppppppppplVar19 = (long *********)0x3;
      FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = local_c0;
      FUN_7103778300(0x3f800000,local_c0,0x71042a361a);
      if (((char)(*(long **)(*plVar9 + 8))[0x71] != '\0') &&
         (lVar20 = **(long **)(*plVar9 + 8), lVar20 != 0)) {
        uVar7 = *(ushort *)(lVar20 + 0x588);
        if ((ulong)uVar7 != 0xffff) {
          if (uVar7 >> 4 < 0x177) {
            puVar22 = (undefined2 *)
                      (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
          }
          else {
            puVar22 = &DAT_710532a878;
            if (((ushort)(uVar7 + 0xe890) < 100) &&
               (lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50,
               *(short *)(lVar20 + 0x88cc8) != -1)) {
              puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
            }
          }
          uVar7 = puVar22[4];
          ppppppppplVar28 = (long *********)(ulong)uVar7;
          if (ppppppppplVar28 != (long *********)0xffff) {
            FUN_7103778300(0x3f800000,uVar13,0x710429257e);
            param_4 = (byte ****)0x1;
            FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                           param_7,param_8);
            FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar28,
                           param_4,param_5,param_6,param_7,param_8);
            lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
            puVar21 = *(ushort **)(lVar29 + 0x28);
            lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
            uVar17 = lVar20 >> 3;
            if (0 < (int)uVar17) {
              uVar24 = 0;
              do {
                if (uVar17 <= uVar24) goto LAB_7101e50b00;
                if (*puVar21 == uVar7) {
                  if (-1 < (int)uVar24) {
                    uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
                    ppppppppplVar28 = (long *********)&SUB_00000018;
                    plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018
                                             ,param_4,param_5,param_6,param_7,param_8);
                    goto LAB_7101e504b4;
                  }
                  break;
                }
                uVar24 = uVar24 + 1;
                puVar21 = puVar21 + 4;
              } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
            }
            plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e504b4:
            uVar17 = local_78;
            FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar28,param_4,param_5,param_6,param_7,
                           param_8);
            local_80 = &PTR_FUN_710523d9a8;
            local_78 = 0;
            if (uVar17 != 0) {
              FUN_710392eb40(uVar17);
            }
            FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",
                           ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
            lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
            puVar21 = *(ushort **)(lVar29 + 0x28);
            lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
            uVar17 = lVar20 >> 3;
            if (0 < (int)uVar17) {
              uVar24 = 0;
              do {
                if (uVar17 <= uVar24) {
LAB_7101e50b00:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                if (*puVar21 == uVar7) goto LAB_7101e50978;
                uVar24 = uVar24 + 1;
                puVar21 = puVar21 + 4;
              } while ((long)uVar24 < lVar20 * 0x20000000 >> 0x20);
            }
            goto LAB_7101e509a8;
          }
        }
      }
    }
    FUN_7103778300(0x3f800000,uVar13,0x71043cd335);
    uVar14 = extraout_x1_05;
    goto joined_r0x007101e509d4;
  }
  pppplVar18 = (long ****)(ulong)*(byte *)((long)param_1 + 0x22d);
  FUN_7103778430((long)puVar2,"view_search_%02d",pppplVar18,param_4,param_5,param_6,param_7,param_8)
  ;
  FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_txt_facility_00",pppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_c8,"cam_searchfield_title",pppplVar18,param_4,param_5,param_6,param_7,
                 param_8);
  uVar13 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_search_owner",pppplVar18,param_4,param_5
                 ,param_6,param_7,param_8);
  uVar13 = local_c0;
  if (param_1 + 0x32 != (uint *)&local_c8) {
    local_c0 = 0;
    uVar17 = *(ulong *)(param_1 + 0x34);
    *(ulong *)(param_1 + 0x34) = uVar13;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  uVar13 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_7103776910(&local_c8,(long)puVar2,(long ****)"set_rep_search_shadow",pppplVar18,param_4,
                 param_5,param_6,param_7,param_8);
  uVar13 = local_c0;
  if (param_1 + 0x36 != (uint *)&local_c8) {
    local_c0 = 0;
    uVar17 = *(ulong *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar13;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  uVar13 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710437cb42);
  lVar20 = *DAT_7105329f98;
  uVar5 = *(undefined1 *)((long)param_1 + 0x22d);
  plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar18,param_4,param_5,param_6,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_c8 = (undefined **)&DAT_00000010;
      pppplVar18 = (long ****)&local_c8;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar13 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar18,param_4,param_5,param_6,param_7,
                                          param_8), plVar9 != (long *)0x0)) goto LAB_7101e4ec30;
    }
    plVar9 = (long *)0x0;
  }
LAB_7101e4ec30:
  *plVar9 = lVar20 + 0x38;
  *(undefined1 *)(plVar9 + 1) = uVar5;
  uVar7 = FUN_7102512d40((char)param_1[0x8b],(ulong)*(byte *)((long)param_1 + 0x22d));
  uVar13 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
  if (((uVar13 & 0xff00000000000000) == 0x7f00000000000000) && ((uVar13 & 0xffffffffff) != 0)) {
    FUN_710323d580((long *)(param_1 + 8),uVar13,(byte ****)&DAT_0000001a,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar19 = (long *********)&DAT_0000001a;
    plVar10 = FUN_710323faf0((long *)(param_1 + 8),uVar13,(undefined **)&DAT_0000001a,param_4,
                             param_5,param_6,param_7,param_8);
    FUN_7103778b80(*(long *)(param_1 + 0x34),(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103778b80(*(long *)(param_1 + 0x38),(long)plVar10,ppppppppplVar19,param_4,param_5,param_6,
                   param_7,param_8);
  }
  uVar13 = 0;
  do {
    ppppppppplVar19 = (long *********)(uVar13 & 0xffffffff);
    FUN_7103776640(&local_c8,(long)puVar2,(byte ****)"set_parts_spirit_%02d",ppppppppplVar19,param_4
                   ,param_5,param_6,param_7,param_8);
    uVar17 = local_c0;
    FUN_7103778300(0x3f800000,local_c0,0x710442292d);
    FUN_7103778300(0x3f800000,uVar17,0x71042f893e);
    FUN_7103778300(0x3f800000,uVar17,0x710438d258);
    if ((((ulong)*(byte *)(plVar9 + 1) < 3) && (*(char *)(*(long *)(*plVar9 + 8) + 0x388) != '\0'))
       && (lVar20 = *(long *)(*(long *)(*plVar9 + 8) + (ulong)*(byte *)(plVar9 + 1) * 8 + 0x78),
          lVar20 != 0)) {
      uVar7 = *(ushort *)(lVar20 + uVar13 * 0x18 + 0x20);
      if ((ulong)uVar7 == 0xffff) goto LAB_7101e4eff4;
      if (uVar7 >> 4 < 0x177) {
        puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar7 * 0x50 + 72000);
      }
      else {
        puVar22 = &DAT_710532a878;
        if ((ushort)(uVar7 + 0xe890) < 100) {
          lVar20 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar7 + 0xe890) * 0x50;
          puVar22 = &DAT_710532a878;
          if (*(short *)(lVar20 + 0x88cc8) != -1) {
            puVar22 = (undefined2 *)(lVar20 + 0x88cc0);
          }
        }
      }
      uVar7 = puVar22[4];
      ppppppppplVar28 = (long *********)(ulong)uVar7;
      if (ppppppppplVar28 == (long *********)0xffff) goto LAB_7101e4eff4;
      FUN_7103778300(0x3f800000,uVar17,0x710429257e);
      param_4 = (byte ****)0x1;
      FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),1,uVar7,(byte ****)0x1,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit",ppppppppplVar28,param_4,
                     param_5,param_6,param_7,param_8);
      lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
      puVar21 = *(ushort **)(lVar29 + 0x28);
      lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
      uVar24 = lVar20 >> 3;
      if (0 < (int)uVar24) {
        uVar11 = 0;
        do {
          if (uVar24 <= uVar11) goto LAB_7101e50b00;
          if (*puVar21 == uVar7) {
            if (-1 < (int)uVar11) {
              uVar24 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
              ppppppppplVar28 = (long *********)&SUB_00000018;
              plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar24,(undefined **)&SUB_00000018,
                                       param_4,param_5,param_6,param_7,param_8);
              goto LAB_7101e4ed30;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          puVar21 = puVar21 + 4;
        } while ((long)uVar11 < lVar20 * 0x20000000 >> 0x20);
      }
      plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e4ed30:
      uVar24 = local_78;
      FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8)
      ;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_7103776910(&local_80,(long)&local_c8,(long ****)"set_rep_spirit_shadow",ppppppppplVar28,
                     param_4,param_5,param_6,param_7,param_8);
      lVar29 = *(long *)(*DAT_7105329f98 + 0x20);
      puVar21 = *(ushort **)(lVar29 + 0x28);
      lVar20 = *(long *)(lVar29 + 0x30) - (long)puVar21;
      uVar24 = lVar20 >> 3;
      if (0 < (int)uVar24) {
        uVar11 = 0;
        do {
          if (uVar24 <= uVar11) goto LAB_7101e50b00;
          if (*puVar21 == uVar7) {
            if (-1 < (int)uVar11) {
              uVar24 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
              ppppppppplVar28 = (long *********)&SUB_00000018;
              plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar24,(undefined **)&SUB_00000018,
                                       param_4,param_5,param_6,param_7,param_8);
              goto LAB_7101e4edfc;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          puVar21 = puVar21 + 4;
        } while ((long)uVar11 < lVar20 * 0x20000000 >> 0x20);
      }
      plVar10 = (long *)(lVar29 + 0x70);
LAB_7101e4edfc:
      uVar24 = local_78;
      FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8)
      ;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = 0;
      uVar14 = extraout_x1;
      ppppppppplVar19 = ppppppppplVar28;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
        uVar14 = extraout_x1_00;
        ppppppppplVar19 = ppppppppplVar28;
      }
    }
    else {
LAB_7101e4eff4:
      FUN_7103778300(0x3f800000,uVar17,0x71043cd335);
      uVar14 = extraout_x1_01;
    }
    local_c0 = 0;
    local_c8 = &PTR_FUN_710523d988;
    if (uVar17 != 0) {
      local_c0 = 0;
      local_c8 = &PTR_FUN_710523d988;
      uVar24 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar17);
      uVar14 = extraout_x1_02;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 4);
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
    uVar14 = extraout_x1_03;
  }
LAB_7101e501c8:
  FUN_7101e50b10((long)param_1,uVar14,(long ****)ppppppppplVar19,param_4,param_5,param_6,param_7,
                 param_8);
LAB_7101e501cc:
  if ((*(long *)(*(long *)(param_1 + 0x1c) + 8) != 0) &&
     (lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x1c) + 8) + 0x18), lVar20 != 0)) {
    *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
  }
  if ((*(long *)(*(long *)(param_1 + 0x18) + 8) != 0) &&
     (lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x18), lVar20 != 0)) {
    *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
  }
  return;
LAB_7101e50978:
  if ((int)uVar24 < 0) {
LAB_7101e509a8:
    plVar10 = (long *)(lVar29 + 0x70);
  }
  else {
    uVar17 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar7);
    ppppppppplVar28 = (long *********)&SUB_00000018;
    plVar10 = FUN_710323faf0((long *)(lVar29 + 8),uVar17,(undefined **)&SUB_00000018,param_4,param_5
                             ,param_6,param_7,param_8);
  }
  uVar17 = local_78;
  FUN_7103778b80(local_78,(long)plVar10,ppppppppplVar28,param_4,param_5,param_6,param_7,param_8);
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  uVar14 = extraout_x1_08;
  ppppppppplVar19 = ppppppppplVar28;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
    uVar14 = extraout_x1_09;
    ppppppppplVar19 = ppppppppplVar28;
  }
joined_r0x007101e509d4:
  local_c0 = 0;
  local_c8 = &PTR_FUN_710523d988;
  if (uVar13 != 0) {
    local_c0 = 0;
    local_c8 = &PTR_FUN_710523d988;
    uVar17 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar13);
    uVar14 = extraout_x1_06;
  }
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
    uVar14 = extraout_x1_07;
  }
  goto LAB_7101e501c8;
}

