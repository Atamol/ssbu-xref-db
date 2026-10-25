// addr:      7101a5a480
// offset:    0x1a5a480
// name:      FUN_7101a5a480
// mangled:   
// signature: undefined __cdecl FUN_7101a5a480(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a5a480(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  ulong uVar12;
  ushort *puVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  long *********ppppppppplVar18;
  long ********pppppppplVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  byte ***local_108;
  float local_100;
  undefined **local_f8;
  undefined8 *local_f0;
  undefined **local_e8;
  undefined8 *local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 local_b2;
  
  if (*(int *)(param_1 + 0xc) <= param_2) {
    return;
  }
  lVar20 = *(long *)(param_1 + 0xa8);
  uVar23 = (ulong)param_2;
  uVar12 = (*(long *)(param_1 + 0xb0) - lVar20 >> 4) * -0x1041041041041041;
  if (uVar12 < uVar23 || uVar12 - uVar23 == 0) {
LAB_7101a5b570:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppppppppplVar11 = param_3;
  FUN_71016b6a10((undefined8 *)(lVar20 + uVar23 * 0x3f0 + 8),param_3);
  if (*(int *)(param_3 + 1) == 3) {
    bVar5 = false;
  }
  else {
    bVar5 = ((ulong)param_3[3] & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)param_3[3] & 0xffffffffff) != 0;
  }
  *(bool *)(lVar20 + uVar23 * 0x3f0 + 0x3ed) = bVar5;
  if ((ulong)(*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 4) <= uVar23) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar21 = (long *)(*(long *)(param_1 + 0xc0) + uVar23 * 0x10 + 8);
  FUN_7101a58f40(*plVar21,*(int *)(param_3 + 1),(long ****)ppppppppplVar11,param_4,param_5,param_6,
                 param_7,param_8);
  puVar22 = (undefined8 *)*plVar21;
  pppppppplVar19 = param_3[2];
  ppppppppplVar18 = (long *********)(ulong)*(byte *)(param_3 + 4);
  FUN_7103776910(&local_e8,(long)(puVar22 + 0xe),(long ****)"set_rep_chara",ppppppppplVar11,param_4,
                 param_5,param_6,param_7,param_8);
  iVar1 = *(int *)((long)puVar22 + 0xac);
  if ((((ulong)pppppppplVar19 & 0xff00000000000000) == 0xc100000000000000) &&
     (((ulong)pppppppplVar19 & 0xffffffffff) != 0)) {
    if (iVar1 == 1) {
      lVar7 = puVar22[0xf];
      pcVar10 = "cp";
    }
    else if (iVar1 == 2) {
      FUN_7103778300(0x3f800000,puVar22[7],0x7104400e8e);
      FUN_7103778300(0x3f800000,puVar22[0x11],0x7104400e8e);
      FUN_7103778300(0x3f800000,puVar22[0x13],0x7104400e8e);
      lVar7 = puVar22[0xf];
      pcVar10 = "amiibo";
    }
    else {
      lVar7 = puVar22[0xf];
      pcVar10 = "entry_on";
    }
    FUN_7103778300(0x3f800000,lVar7,(long)pcVar10);
    lVar24 = *(long *)(DAT_710532f730 + 8);
    lVar7 = lVar24 + 0x160;
    bVar5 = FUN_7103264990(lVar7,(ulong)pppppppplVar19);
    if (bVar5) {
      uVar12 = 0xb28d453e;
LAB_7101a5a74c:
      pppppppplVar19 =
           (long ********)FUN_71032631a0(*(long *)(lVar24 + 0x168),uVar12 | 0x1300000000);
    }
    else {
      bVar5 = FUN_7103264ab0(lVar7,(ulong)pppppppplVar19);
      if (bVar5) {
        uVar12 = 0xb3e567a6;
        goto LAB_7101a5a74c;
      }
    }
    param_4 = (byte ****)0x1;
    ppppppppplVar11 = ppppppppplVar18;
    plVar8 = FUN_710323f330((long *)*puVar22,(ulong)pppppppplVar19,(ulong)ppppppppplVar18,1,param_5,
                            param_6,param_7,param_8);
    puVar9 = local_e0;
    FUN_7103778b80((long)local_e0,(long)plVar8,ppppppppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
    lVar7 = *(long *)(DAT_710532f730 + 8);
    uVar6 = FUN_7103280ec0(*(long *)(lVar7 + 0x2a8),(ulong)pppppppplVar19,(ulong)ppppppppplVar18,
                           param_4,param_5,param_6,param_7,param_8);
    uVar12 = 0;
    lVar7 = *(long *)(*(long *)(lVar7 + 0x2a8) + 8);
    auVar26 = FUN_710326ad60(ZEXT816(0),lVar7,uVar6,0x120ae7cf4f);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar12;
    auVar27 = FUN_710326ad60(auVar27 << 0x40,lVar7,uVar6,0x127de0ffd9);
    ppppppppplVar11 = (long *********)0xf95a1c649;
    auVar28 = FUN_710326ad60(ZEXT816(0x3f800000),lVar7,uVar6,0xf95a1c649);
    puVar22 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar22 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
        local_d0 = (undefined **)&SUB_00000020;
        ppppppppplVar11 = (long *********)&local_d0;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_150);
        if (((uVar12 & 1) != 0) &&
           (puVar22 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                     param_7,param_8), puVar22 != (undefined8 *)0x0))
        goto LAB_7101a5a864;
      }
      puVar22 = (undefined8 *)0x0;
    }
LAB_7101a5a864:
    puVar22[2] = 0;
    puVar22[3] = 0;
    *puVar22 = 0;
    puVar22[1] = 0;
    *puVar22 = *puVar9;
    puVar22[1] = puVar9[1];
    local_d0 = (undefined **)CONCAT44(auVar27._0_4_,auVar26._0_4_);
    puVar22[2] = local_e0[2];
    puVar22[3] = local_e0[3];
    uStack_c8 = 0;
    FUN_7103779770(auVar28._0_4_,(long)puVar22,&local_d0);
    puVar9 = local_e0;
  }
  else {
    lVar7 = puVar22[0xf];
    if (iVar1 == 2) {
      uVar16 = 0x811c9dc5;
      FUN_7103778300(0x3f800000,lVar7,0x71042f8480);
      local_148 = 0x635f726579616c70;
      local_140 = 0x70665f726f6c6f;
      uVar15 = 0x70;
      pbVar14 = (byte *)((long)&local_148 + 1);
      uVar6 = uVar16;
      do {
        uVar6 = uVar6 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (uVar15 != 0);
      local_150 = (undefined **)CONCAT44(0xf,uVar6);
      uVar12 = 0;
      cVar17 = 'p';
      local_d0 = (undefined **)0x0;
      do {
        *(char *)((long)&uStack_c8 + uVar12) = cVar17;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar17 = *(char *)((long)&local_148 + uVar12 + 1);
        if (cVar17 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)&uStack_c8 + uVar12 + 1) = cVar17;
        cVar17 = *(char *)((long)&local_148 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar17 != '\0');
      pcVar10 = (char *)&uStack_c8;
      pcVar10[uVar12 & 0xffffffff] = '\0';
      uVar6 = (uint)(byte)uStack_c8;
      local_d0 = (undefined **)(uVar12 << 0x20);
      if ((byte)uStack_c8 != 0) {
        pbVar14 = (byte *)((long)&uStack_c8 + 1);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar6 != 0);
      }
      local_d0 = (undefined **)CONCAT44((int)uVar12,uVar16);
      FUN_7103778300(0x3f800000,puVar22[7],(long)pcVar10);
      lVar7 = puVar22[0x13];
    }
    else {
      pcVar10 = "entry_off";
    }
    FUN_7103778300(0x3f800000,lVar7,(long)pcVar10);
    puVar9 = local_e0;
    FUN_71037790a0((long)local_e0,1,ppppppppplVar11,param_4,param_5,param_6,param_7,param_8);
    puVar22 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar22 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
        local_d0 = (undefined **)&SUB_00000020;
        ppppppppplVar11 = (long *********)&local_d0;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_150);
        if (((uVar12 & 1) != 0) &&
           (puVar22 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                     param_7,param_8), puVar22 != (undefined8 *)0x0))
        goto LAB_7101a5a990;
      }
      puVar22 = (undefined8 *)0x0;
    }
LAB_7101a5a990:
    puVar22[2] = 0;
    puVar22[3] = 0;
    *puVar22 = 0;
    puVar22[1] = 0;
    *puVar22 = *puVar9;
    puVar22[1] = puVar9[1];
    puVar22[2] = local_e0[2];
    puVar22[3] = local_e0[3];
    FUN_71037799d0((long)puVar22);
    puVar9 = local_e0;
  }
  if (puVar22 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar22);
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  lVar7 = *plVar21;
  bVar2 = *(byte *)((long)param_3 + 0x21);
  ppppppppplVar18 = (long *********)(ulong)bVar2;
  *(uint *)(lVar7 + 0xb4) = (uint)bVar2;
  if (*(int *)(lVar7 + 0xac) == 1) {
    param_4 = (byte ****)(ulong)(uint)bVar2;
    FUN_710377a280(lVar7 + 0x50,(byte *)"mel_chara_select_lv_n",1);
    FUN_7103778430(lVar7 + 0x30,"cp_level_%d",ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
    ppppppppplVar11 = ppppppppplVar18;
  }
  if (*(int *)(lVar20 + uVar23 * 0x3f0 + 0x10) != 2) {
    puVar22 = (undefined8 *)*plVar21;
    if (*(int *)((long)puVar22 + 0xac) == 2) goto LAB_7101a5b038;
    bVar2 = *(byte *)(param_3 + 0x30);
    puVar9 = puVar22 + 0x10;
    lVar20 = *(long *)(DAT_710532f730 + 8);
    FUN_7103776640(&local_150,(long)puVar9,(byte ****)"set_parts_icon_s",ppppppppplVar11,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_e8,(long)puVar9,(long ****)"set_rep_sp",ppppppppplVar11,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_f8,(long)puVar9,(long ****)"set_rep_sp_sd",ppppppppplVar11,param_4,param_5
                   ,param_6,param_7,param_8);
    if (*(short *)((long)param_3 + 0x18e) == -1) {
      FUN_7103778300(0x3f800000,puVar22[0x11],0x71043be6a5);
      FUN_7103778300(0x3f800000,local_148,0x710428109c);
      puVar22 = local_e0;
      FUN_71037790a0((long)local_e0,1,ppppppppplVar11,param_4,param_5,param_6,param_7,param_8);
      FUN_71037790a0((long)local_f0,1,ppppppppplVar11,param_4,param_5,param_6,param_7,param_8);
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                              param_8);
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_108 = (byte ***)((ulong)local_108 & 0xffffffff00000000);
          local_d0 = (undefined **)&SUB_00000020;
          ppppppppplVar11 = (long *********)&local_d0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
          if (((uVar12 & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                      param_7,param_8), puVar9 != (undefined8 *)0x0))
          goto LAB_7101a5b310;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_7101a5b310:
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *puVar9 = *puVar22;
      puVar9[1] = puVar22[1];
      puVar9[2] = local_e0[2];
      puVar9[3] = local_e0[3];
      FUN_71037799d0((long)puVar9);
      if (puVar9 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar9);
      }
      puVar22 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                               param_8);
      if (puVar22 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_108 = (byte ***)((ulong)local_108 & 0xffffffff00000000);
          local_d0 = (undefined **)&SUB_00000020;
          ppppppppplVar11 = (long *********)&local_d0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
          if (((uVar12 & 1) != 0) &&
             (puVar22 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                       param_7,param_8), puVar22 != (undefined8 *)0x0))
          goto LAB_7101a5b3ac;
        }
        puVar22 = (undefined8 *)0x0;
      }
LAB_7101a5b3ac:
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = 0;
      puVar22[1] = 0;
      *puVar22 = *local_f0;
      puVar22[1] = local_f0[1];
      puVar22[2] = local_f0[2];
      puVar22[3] = local_f0[3];
      FUN_71037799d0((long)puVar22);
      puVar9 = local_f0;
    }
    else {
      FUN_7103778300(0x3f800000,puVar22[0x11],0x71043e01a5);
      uVar3 = (undefined1)(0x20301 >> (ulong)((bVar2 - 1 & 3) << 3));
      if (2 < bVar2 - 1) {
        uVar3 = 0;
      }
      FUN_710339dde0((uint *)&local_d0,uVar3,'\0');
      FUN_7103778300(0x3f800000,local_148,(long)&uStack_c8);
      plVar8 = (long *)*puVar22;
      uVar12 = FUN_71032a9470(*(long *)(lVar20 + 0x1d8),*(ushort *)((long)param_3 + 0x18e));
      ppppppppplVar11 = (long *********)&SUB_00000018;
      plVar8 = FUN_710323faf0(plVar8,uVar12,(undefined **)&SUB_00000018,param_4,param_5,param_6,
                              param_7,param_8);
      if (*(long *)plVar8[1] == 0) {
        uVar4 = *(ushort *)((long)param_3 + 0x18e);
        lVar7 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if ((long)(short)uVar4 == -1) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)*(ushort *)(lVar7 + (long)(short)uVar4 * 2 + 0x60);
        }
        if ((uVar6 < (uint)((int)((ulong)(*(long *)(lVar7 + 0x28) - *(long *)(lVar7 + 0x20)) >> 6) *
                           -0x33333333)) &&
           (*(char *)(*(long *)(lVar7 + 0x20) + (ulong)uVar6 * 0x140 + 0x5a) != '\0')) {
          lVar7 = *DAT_7105329f98;
          ppppppppplVar11 = (long *********)(ulong)uVar4;
          param_4 = (byte ****)&SUB_00000020;
          FUN_710259c150(*(long *)(lVar7 + 0x20),1,uVar4,(byte ****)&SUB_00000020,param_5,param_6,
                         param_7,param_8);
          uVar4 = *(ushort *)((long)param_3 + 0x18e);
          lVar7 = *(long *)(lVar7 + 0x20);
          if (uVar4 != 0xffff) {
            puVar13 = *(ushort **)(lVar7 + 0x28);
            lVar24 = *(long *)(lVar7 + 0x30) - (long)puVar13;
            uVar12 = lVar24 >> 3;
            if (0 < (int)uVar12) {
              uVar23 = 0;
              do {
                if (uVar12 <= uVar23) goto LAB_7101a5b570;
                if (*puVar13 == uVar4) {
                  if (-1 < (int)uVar23) {
                    uVar12 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar4);
                    ppppppppplVar11 = (long *********)&SUB_00000018;
                    plVar8 = FUN_710323faf0((long *)(lVar7 + 8),uVar12,(undefined **)&SUB_00000018,
                                            param_4,param_5,param_6,param_7,param_8);
                    goto LAB_7101a5ac30;
                  }
                  break;
                }
                uVar23 = uVar23 + 1;
                puVar13 = puVar13 + 4;
              } while ((long)uVar23 < lVar24 * 0x20000000 >> 0x20);
            }
          }
          plVar8 = (long *)(lVar7 + 0x70);
          goto LAB_7101a5ac30;
        }
        uVar12 = FUN_71032a9470(lVar7,uVar4);
        uVar12 = FUN_7103239160(uVar12,0x18);
        if ((uVar12 & 0xffffffffff) == 0) {
          uVar6 = 0xffffff;
          local_d0 = (undefined **)CONCAT44(local_d0._4_4_,0xffffff);
        }
        else {
          FUN_710353da30((uint *)&local_d0,uVar12);
          uVar6 = (uint)local_d0;
        }
        puVar22 = local_e0;
        FUN_7103778c70((long)local_e0,(uint *)&local_d0,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        FUN_7103778c70((long)local_f0,(uint *)&local_d0,ppppppppplVar11,param_4,param_5,param_6,
                       param_7,param_8);
        if (uVar6 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,uVar6,ppppppppplVar11,param_4,param_5,param_6,param_7,
                         param_8);
          local_d0 = (undefined **)CONCAT44(local_d0._4_4_,0xffffff);
        }
      }
      else {
LAB_7101a5ac30:
        puVar22 = local_e0;
        FUN_7103778b80((long)local_e0,(long)plVar8,ppppppppplVar11,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103778b80((long)local_f0,(long)plVar8,ppppppppplVar11,param_4,param_5,param_6,param_7,
                       param_8);
      }
      local_100 = 1.0;
      local_108 = (byte ***)0x0;
      lVar7 = *(long *)(DAT_710532f730 + 8);
      uVar12 = FUN_71032a9470(*(long *)(lVar20 + 0x1d8),*(ushort *)((long)param_3 + 0x18e));
      ppppppppplVar11 = (long *********)0x3;
      param_4 = &local_108;
      FUN_71032abaf0(lVar7 + 0x1e0,uVar12,(long *********)0x3,param_4,param_5,param_6,param_7,
                     param_8);
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                              param_8);
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d4 = 0;
          local_d0 = (undefined **)&SUB_00000020;
          ppppppppplVar11 = (long *********)&local_d0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d4);
          if (((uVar12 & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                      param_7,param_8), puVar9 != (undefined8 *)0x0))
          goto LAB_7101a5ace4;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_7101a5ace4:
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *puVar9 = *puVar22;
      puVar9[1] = puVar22[1];
      puVar9[2] = local_e0[2];
      puVar9[3] = local_e0[3];
      pppppppplVar19 =
           (long ********)CONCAT44(*(undefined4 *)((ulong)&local_108 | 4),local_108._0_4_);
      uStack_c8 = 0;
      local_d0 = (undefined **)pppppppplVar19;
      FUN_7103779770(local_100,(long)puVar9,&local_d0);
      if (puVar9 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar9);
      }
      puVar22 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                               param_8);
      if (puVar22 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d4 = 0;
          local_d0 = (undefined **)&SUB_00000020;
          ppppppppplVar11 = (long *********)&local_d0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d4);
          if (((uVar12 & 1) != 0) &&
             (puVar22 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                       param_7,param_8), puVar22 != (undefined8 *)0x0))
          goto LAB_7101a5ada0;
        }
        puVar22 = (undefined8 *)0x0;
      }
LAB_7101a5ada0:
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = 0;
      puVar22[1] = 0;
      *puVar22 = *local_f0;
      puVar22[1] = local_f0[1];
      puVar22[2] = local_f0[2];
      puVar22[3] = local_f0[3];
      uStack_c8 = 0;
      local_d0 = (undefined **)pppppppplVar19;
      FUN_7103779770(local_100,(long)puVar22,&local_d0);
      puVar9 = local_f0;
    }
    if (puVar22 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar22);
    }
    local_f8 = &PTR_FUN_710523d9a8;
    local_f0 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar9);
    }
    puVar22 = local_e0;
    local_e8 = &PTR_FUN_710523d9a8;
    local_e0 = (undefined8 *)0x0;
    uVar12 = local_148;
    if (puVar22 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar22);
      uVar12 = local_148;
    }
    goto LAB_7101a5b00c;
  }
  *(uint *)(*plVar21 + 0xb8) = (uint)*(byte *)(param_3 + 0x1e);
  FUN_7103776910(&local_d0,*plVar21 + 0x30,(long ****)"set_txt_01",ppppppppplVar11,param_4,param_5,
                 param_6,param_7,param_8);
  uVar12 = uStack_c8;
  if (*(long **)(uStack_c8 + 0x10) != (long *)0x0) {
    ppppppppplVar11 = (long *********)&DAT_ffffffff;
    param_4 = (byte ****)0x1;
    FUN_71037a2270(*(long **)(uStack_c8 + 0x10),(ushort *)(param_3 + 0x1a),0xffffffff,1);
  }
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  uVar3 = *(undefined1 *)(param_3 + 0x21);
  FUN_7103776640(&local_150,*plVar21 + 0x30,(byte ****)"set_parts_icon_s",ppppppppplVar11,param_4,
                 param_5,param_6,param_7,param_8);
  uVar12 = local_148;
  switch(uVar3) {
  case 0:
    local_d0 = (undefined **)0x1300000000;
    uStack_c8 = 0x615f746972697073;
    local_c0 = 0x5f72656b63617474;
    local_b8 = 0x6f6e;
    uStack_b6 = 0x6e;
    uVar6 = 0x811c9dc5;
    uVar16 = 0x73;
    pbVar14 = (byte *)((long)&uStack_c8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar16 != 0);
    goto LAB_7101a5aff8;
  case 1:
    local_d0 = (undefined **)0x1700000000;
    uStack_c8 = 0x615f746972697073;
    local_c0 = 0x5f72656b63617474;
    local_b8 = 0x666f;
    uStack_b6 = 0x6566;
    uStack_b4 = 0x736e;
    uVar6 = 0x811c9dc5;
    local_b2 = 0x65;
    uVar16 = 0x73;
    pbVar14 = (byte *)((long)&uStack_c8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar16 != 0);
    break;
  case 2:
    local_d0 = (undefined **)0x1700000000;
    uStack_c8 = 0x615f746972697073;
    local_c0 = 0x5f72656b63617474;
    local_b8 = 0x6564;
    uStack_b6 = 0x6566;
    uStack_b4 = 0x736e;
    uVar6 = 0x811c9dc5;
    local_b2 = 0x65;
    uVar16 = 0x73;
    pbVar14 = (byte *)((long)&uStack_c8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar16 != 0);
    break;
  case 3:
    local_d0 = (undefined **)0x1500000000;
    uStack_c8 = 0x615f746972697073;
    local_c0 = 0x5f72656b63617474;
    local_b8 = 0x6874;
    uStack_b6 = 0x6f72;
    uStack_b4 = 0x77;
    uVar6 = 0x811c9dc5;
    uVar16 = 0x73;
    pbVar14 = (byte *)((long)&uStack_c8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar16 != 0);
    break;
  default:
    local_d0 = (undefined **)0x1300000000;
    uStack_c8 = 0x615f746972697073;
    local_c0 = 0x5f72656b63617474;
    local_b8 = 0x6f6e;
    uStack_b6 = 0x6e;
    uVar6 = 0x811c9dc5;
    uVar16 = 0x73;
    pbVar14 = (byte *)((long)&uStack_c8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar16 != 0);
LAB_7101a5aff8:
    uStack_b6 = 0x6e;
    local_b8 = 0x6f6e;
    local_d0 = (undefined **)CONCAT44(0x13,uVar6);
    goto LAB_7101a5affc;
  }
  local_d0 = (undefined **)CONCAT44(local_d0._4_4_,uVar6);
LAB_7101a5affc:
  local_c0 = 0x5f72656b63617474;
  uStack_c8 = 0x615f746972697073;
  FUN_7103778300(0x3f800000,local_148,(long)&uStack_c8);
LAB_7101a5b00c:
  local_150 = &PTR_FUN_710523d988;
  local_148 = 0;
  if (uVar12 != 0) {
    uVar23 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar12);
  }
LAB_7101a5b038:
  lVar20 = *plVar21;
  uVar4 = *(ushort *)((long)param_3 + 0x26);
  uVar12 = (ulong)uVar4;
  FUN_7103776910(&local_d0,lVar20 + 0x90,(long ****)"set_txt_hp_00",ppppppppplVar11,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a310((long)&local_d0,1);
  lVar7 = *(long *)(DAT_710532f8c0 + 8);
  fVar25 = (float)FUN_71033112b0(0,lVar7,0xe7e193f84);
  uVar6 = (int)fVar25;
  if ((int)fVar25 <= (int)(uint)uVar4) {
    uVar6 = (uint)uVar4;
  }
  uVar6 = FUN_71033115f0((float)(int)uVar6,*(float **)(lVar7 + 0xe0),*(float **)(lVar7 + 0xe8));
  uVar23 = uStack_c8;
  local_150 = (undefined **)CONCAT44(local_150._4_4_,uVar6);
  FUN_710377a5b0(*(long *)(uStack_c8 + 0x10),(char *)&local_150);
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = 0;
  if (uVar23 != 0) {
    FUN_710392eb40(uVar23);
  }
  FUN_7103776910(&local_d0,lVar20 + 0x90,(long ****)"set_txt_hp_01",uVar12,param_4,param_5,param_6,
                 param_7,param_8);
  uVar12 = (ulong)(uint)uVar4;
  FUN_710377a310((long)&local_d0,1);
  lVar20 = *(long *)(DAT_710532f8c0 + 8);
  fVar25 = (float)FUN_71033112b0(0,lVar20,0xe7e193f84);
  uVar6 = (int)fVar25;
  if ((int)fVar25 <= (int)(uint)uVar4) {
    uVar6 = (uint)uVar4;
  }
  uVar6 = FUN_71033115f0((float)(int)uVar6,*(float **)(lVar20 + 0xe0),*(float **)(lVar20 + 0xe8));
  uVar23 = uStack_c8;
  local_150 = (undefined **)CONCAT44(local_150._4_4_,uVar6);
  FUN_710377a5b0(*(long *)(uStack_c8 + 0x10),(char *)&local_150);
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = 0;
  if (uVar23 != 0) {
    FUN_710392eb40(uVar23);
  }
  lVar20 = *plVar21;
  uVar4 = *(ushort *)((long)param_3 + 0x22);
  uVar23 = (ulong)uVar4;
  FUN_7103776910(&local_d0,lVar20 + 0x90,(long ****)"set_txt_dmg_00",uVar12,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a310((long)&local_d0,1);
  lVar7 = *(long *)(DAT_710532f8c0 + 8);
  fVar25 = (float)FUN_71033112b0(0,lVar7,0xf1d09d008);
  uVar16 = (uint)uVar4;
  uVar6 = (int)fVar25;
  if ((int)(uint)uVar4 <= (int)fVar25) {
    uVar6 = uVar16;
  }
  uVar6 = FUN_71033114a0((float)(int)uVar6,*(float **)(lVar7 + 200),*(float **)(lVar7 + 0xd0));
  uVar12 = uStack_c8;
  local_150 = (undefined **)CONCAT44(local_150._4_4_,uVar6);
  FUN_710377a5b0(*(long *)(uStack_c8 + 0x10),(char *)&local_150);
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_7103776910(&local_d0,lVar20 + 0x90,(long ****)"set_txt_dmg_01",uVar23,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a310((long)&local_d0,1);
  lVar20 = *(long *)(DAT_710532f8c0 + 8);
  fVar25 = (float)FUN_71033112b0(0,lVar20,0xf1d09d008);
  uVar6 = (int)fVar25;
  if ((int)uVar16 <= (int)fVar25) {
    uVar6 = uVar16;
  }
  uVar6 = FUN_71033114a0((float)(int)uVar6,*(float **)(lVar20 + 200),*(float **)(lVar20 + 0xd0));
  uVar12 = uStack_c8;
  local_150 = (undefined **)CONCAT44(local_150._4_4_,uVar6);
  FUN_710377a5b0(*(long *)(uStack_c8 + 0x10),(char *)&local_150);
  local_d0 = &PTR_FUN_710523d9a8;
  uStack_c8 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  return;
}

