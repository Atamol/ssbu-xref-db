// addr:      7102338110
// offset:    0x2338110
// name:      FUN_7102338110
// mangled:   
// signature: undefined __cdecl FUN_7102338110(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102338110(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  undefined4 **ppuVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long *********ppppppppplVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  uint uVar24;
  ushort *puVar25;
  undefined1 uVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined1 auVar29 [16];
  undefined4 *local_480;
  undefined4 *local_478;
  undefined1 *local_470;
  ushort *local_468;
  undefined8 *local_460;
  ulong local_458;
  undefined8 *local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  uint uStack_43c;
  undefined8 local_438;
  undefined2 local_430;
  undefined8 local_42c;
  undefined2 local_424;
  undefined8 local_420;
  ushort local_418 [24];
  undefined4 local_3e8;
  undefined1 uStack_3e4;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined1 *local_3d8;
  undefined1 *puStack_3d0;
  undefined2 local_3c8;
  undefined8 auStack_3c0 [52];
  undefined1 local_220;
  undefined7 uStack_21f;
  undefined8 local_218;
  undefined1 local_210;
  undefined4 local_208 [2];
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  char local_1e7;
  uint local_140;
  uint local_13c;
  ushort local_138 [4];
  short local_130;
  short local_12e;
  short local_12c;
  short local_12a;
  short local_128;
  short local_126;
  undefined2 local_11c;
  undefined1 local_118;
  undefined2 local_7a;
  undefined4 local_70;
  
  plVar12 = (long *)FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar12 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208[0] = 0;
      local_448 = 0xe0;
      uStack_444 = 0;
      param_3 = (undefined **)&local_448;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
      if (((uVar13 & 1) != 0) &&
         (plVar12 = (long *)FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8), plVar12 != (long *)0x0))
      goto LAB_7102338198;
    }
    plVar12 = (long *)0x0;
  }
LAB_7102338198:
  *plVar12 = param_1 + 0x50;
  plVar12[1] = (long)plVar12;
  *(undefined4 *)(plVar12 + 0x19) = 0xffffffff;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *(undefined1 *)((long)plVar12 + 0xcc) = 0;
  plVar12[6] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = 0xffffffff;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0xf] = 0;
  plVar12[0x10] = 0;
  plVar12[0xd] = 0;
  plVar12[0xe] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_208[0] = 0;
      local_448 = 0x80;
      uStack_444 = 0;
      param_3 = (undefined **)&local_448;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
      if (((uVar13 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar14 != (undefined8 *)0x0)) goto LAB_710233822c;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_710233822c:
  *puVar14 = &PTR_FUN_7105181b40;
  puVar14[2] = 0;
  puVar14[1] = puVar14 + 2;
  puVar14[5] = 0;
  puVar14[3] = 0;
  puVar14[4] = puVar14 + 5;
  puVar14[8] = 0;
  puVar14[6] = 0;
  puVar14[7] = puVar14 + 8;
  puVar14[0xb] = 0;
  puVar14[9] = 0;
  puVar14[10] = puVar14 + 0xb;
  puVar14[0xc] = 0;
  *(undefined4 *)(puVar14 + 0xd) = 2;
  *(undefined4 *)(puVar14 + 0xf) = 0;
  puVar14[0xe] = 0;
  plVar12[0x1a] = (long)puVar14;
  *(undefined4 *)(plVar12 + 0x1b) = 0;
  auVar29 = FUN_7103723a90(*plVar12,&DAT_7105328b48,(long ****)param_3,param_4,param_5,param_6,
                           param_7,param_8);
  plVar12[6] = (long)FUN_7102337710;
  plVar12[7] = 0;
  plVar12[8] = (long)FUN_71023378e0;
  plVar12[9] = 0;
  plVar12[10] = (long)FUN_7102337920;
  plVar12[0xb] = 0;
  plVar12[0xc] = (long)FUN_7102337bb0;
  plVar12[0xd] = 0;
  if (((DAT_71053144d8 & 1) == 0) &&
     (auVar29 = __cxa_guard_acquire(&DAT_71053144d8), auVar29._0_4_ != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    auVar29 = __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71052c51b0 & 0xfe) == 2) && (DAT_71052c51e9 == '\x03')) {
    if (DAT_71052c3628 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)
                FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      uVar20 = extraout_x1;
      if (puVar14 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_208[0] = 0;
          local_448 = 8;
          uStack_444 = 0;
          param_3 = (undefined **)&local_448;
          auVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
          uVar20 = auVar29._8_8_;
          if (((auVar29._0_8_ & 1) != 0) &&
             (puVar14 = (undefined8 *)
                        FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8), uVar20 = extraout_x1_00,
             puVar14 != (undefined8 *)0x0)) goto LAB_7102338360;
        }
        puVar14 = (undefined8 *)0x0;
      }
LAB_7102338360:
      auVar29 = FUN_71014a8a40(puVar14,uVar20,(long ****)param_3,param_4,param_5,param_6,param_7,
                               param_8);
      DAT_71052c3628 = puVar14;
    }
    if (DAT_7105328e18 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)
                FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      uVar20 = extraout_x1_02;
      if (puVar14 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_208[0] = 0;
          local_448 = 8;
          uStack_444 = 0;
          param_3 = (undefined **)&local_448;
          auVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_208);
          uVar20 = auVar29._8_8_;
          if (((auVar29._0_8_ & 1) != 0) &&
             (puVar14 = (undefined8 *)
                        FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8), uVar20 = extraout_x1_03,
             puVar14 != (undefined8 *)0x0)) goto LAB_7102338460;
        }
        puVar14 = (undefined8 *)0x0;
      }
LAB_7102338460:
      auVar29 = FUN_71023498d0(puVar14,uVar20,(long ****)param_3,param_4,param_5,param_6,param_7,
                               param_8);
      puVar27 = *(undefined8 **)(param_2 + 0xa8);
      DAT_7105328e18 = puVar14;
      goto joined_r0x007102338470;
    }
  }
  puVar27 = *(undefined8 **)(param_2 + 0xa8);
joined_r0x007102338470:
  if (puVar27 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_7105328150), iVar11 != 0))
    {
      if (((DAT_7105324750 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&DAT_7105324750), iVar11 != 0)) {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    auVar29 = (**(code **)*puVar27)(puVar27);
    uVar13 = auVar29._8_8_;
    puVar14 = auVar29._0_8_;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar13;
    auVar29 = auVar9 << 0x40;
    if (puVar14 != (undefined8 *)0x0) {
      do {
        if ((undefined8 **)puVar14 == &DAT_7105328158) {
          auVar29._8_8_ = uVar13;
          auVar29._0_8_ = (ulong)&DAT_7105328158;
          if (*(int *)(puVar27 + 1) != 0x64769d67) goto LAB_7102338474;
          uVar24 = strcmp((char *)(puVar27 + 2),"MeleeScene");
          auVar29._4_4_ = 0;
          auVar29._0_4_ = uVar24;
          auVar29._8_8_ = extraout_x1_01;
          if (uVar24 != 0) goto LAB_7102338474;
          *(undefined4 *)(plVar12 + 0x1b) = 2;
          uVar24 = *(uint *)((long)plVar12 + 0xbc);
          if (0x12 < uVar24) goto LAB_7102339174;
          uVar22 = 1;
          goto LAB_7102338484;
        }
        puVar14 = (undefined8 *)*puVar14;
      } while (puVar14 != (undefined8 *)0x0);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar13;
      auVar29 = auVar10 << 0x40;
    }
  }
LAB_7102338474:
  uVar24 = *(uint *)((long)plVar12 + 0xbc);
  if (uVar24 < 0x13) {
    uVar22 = 0;
LAB_7102338484:
    *(undefined4 *)((long)plVar12 + (long)(int)uVar24 * 4 + 0x70) = uVar22;
    plVar28 = *(long **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xe8) = plVar12;
    if (plVar28 != (long *)0x0) {
      FUN_7102337e90(auVar29._0_8_,auVar29._8_8_,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103723e70(*plVar28,&DAT_7105328b48,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710323b9e0(plVar28[0x1a],extraout_x1_04,(long *********)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar12 = (long *)plVar28[0x1a];
      plVar28[0x1a] = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      FUN_710392eb40((ulong)plVar28);
      plVar12 = *(long **)(param_1 + 0xe8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    local_458 = (ulong)DAT_71052cadc0;
    if (local_458 != 0) {
      local_468 = local_418;
      local_450 = auStack_3c0;
      local_460 = (undefined8 *)&local_3e8;
      local_470 = &DAT_710530bdf0;
      local_478 = &DAT_710530c6d8;
      local_480 = &DAT_710530b2b0;
      uVar13 = 0;
      do {
        if (4 < uVar13) goto LAB_7102339174;
        FUN_71017abd00((undefined8 *)local_208);
        local_208[0] = (&DAT_71052cadd8)[uVar13 * 0x9a];
        if ((&DAT_71052cadd2)[uVar13 * 0x268] == '\x01') {
          local_200 = 1;
          if ((&DAT_71052caf82)[uVar13 * 0x268] != '\0') {
            local_200 = 2;
          }
        }
        else {
          local_200 = 0;
        }
        iVar11 = (&DAT_71052cadec)[uVar13 * 0x9a];
        local_1f8 = (&DAT_71052cadc8)[uVar13 * 0x4d];
        local_1e8 = (&DAT_71052cade1)[uVar13 * 0x268];
        local_1fc = (uint)(iVar11 != 0);
        bVar4 = (&DAT_71052cae41)[uVar13 * 0x268];
        if (bVar4 == 0) {
          local_1e7 = '\0';
        }
        else if (bVar4 < 0x10) {
          local_1e7 = '\x01';
        }
        else if (bVar4 < 0x16) {
          local_1e7 = '\x02';
        }
        else if (bVar4 < 0x20) {
          local_1e7 = '\x03';
        }
        else if (bVar4 < 0x2b) {
          local_1e7 = '\x04';
        }
        else {
          local_1e7 = '\x05';
          if (0x30 < bVar4) {
            if (bVar4 < 0x3d) {
              local_1e7 = '\x06';
            }
            else if (bVar4 < 0x4c) {
              local_1e7 = '\a';
            }
            else {
              local_1e7 = '\0';
              if (bVar4 < 0x65) {
                local_1e7 = '\b';
              }
            }
          }
        }
        local_1e7 = local_1e7 + '\x01';
        local_7a = (&DAT_71052cb000)[uVar13 * 0x134];
        uVar5 = (&DAT_71052caefe)[uVar13 * 0x134];
        local_13c = (uint)uVar5;
        local_70 = (&DAT_71052cb018)[uVar13 * 0x9a];
        if (uVar5 != 0) {
          sVar6 = (&DAT_71052caf00)[uVar13 * 0x134];
          local_138[0] = uVar5;
          if (sVar6 == 0) {
            local_13c = 1;
          }
          else {
            sVar7 = (&DAT_71052caf02)[uVar13 * 0x134];
            local_138[1] = sVar6;
            if (sVar7 == 0) {
              local_13c = 2;
            }
            else {
              sVar6 = (&DAT_71052caf04)[uVar13 * 0x134];
              local_138[2] = sVar7;
              if (sVar6 == 0) {
                local_13c = 3;
              }
              else {
                sVar7 = (&DAT_71052caf06)[uVar13 * 0x134];
                local_138[3] = sVar6;
                if (sVar7 == 0) {
                  local_13c = 4;
                }
                else {
                  sVar6 = (&DAT_71052caf08)[uVar13 * 0x134];
                  local_130 = sVar7;
                  if (sVar6 == 0) {
                    local_13c = 5;
                  }
                  else {
                    sVar7 = (&DAT_71052caf0a)[uVar13 * 0x134];
                    local_12e = sVar6;
                    if (sVar7 == 0) {
                      local_13c = 6;
                    }
                    else {
                      sVar6 = (&DAT_71052caf0c)[uVar13 * 0x134];
                      local_12c = sVar7;
                      if (sVar6 == 0) {
                        local_13c = 7;
                      }
                      else {
                        sVar7 = (&DAT_71052caf0e)[uVar13 * 0x134];
                        local_12a = sVar6;
                        if (sVar7 == 0) {
                          local_13c = 8;
                        }
                        else {
                          local_128 = sVar7;
                          if ((&DAT_71052caf10)[uVar13 * 0x134] == 0) {
                            local_13c = 9;
                          }
                          else {
                            local_13c = 10;
                            local_126 = (&DAT_71052caf10)[uVar13 * 0x134];
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_138[local_13c] = 0;
        uVar24 = (uint)local_138[0];
        local_140 = 0x811c9dc5;
        if (local_138[0] != 0) {
          local_140 = 0x811c9dc5;
          puVar25 = local_138;
          do {
            puVar25 = puVar25 + 1;
            local_140 = local_140 * 0x89 ^ uVar24;
            uVar24 = (uint)*puVar25;
          } while (uVar24 != 0);
        }
        local_11c = (&DAT_71052caf86)[uVar13 * 0x134];
        local_118 = (&DAT_71052caf85)[uVar13 * 0x268];
        local_1f0 = local_1f8;
        if (4 < (uint)uVar13) goto LAB_7102339174;
        puVar3 = &DAT_710530a9c8;
        if (iVar11 != 0) {
          puVar3 = local_470;
        }
        iVar18 = 0xc;
        if (iVar11 != 0) {
          iVar18 = 0x11;
        }
        FUN_71016b6a10((undefined8 *)(puVar3 + uVar13 * 0x1c8 + 0x28),(undefined8 *)local_208);
        lVar21 = DAT_71052c4c58;
        lVar19 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
        uVar24 = iVar18 + (uint)uVar13;
        if ((0x15 < uVar24) || (*(char *)(lVar19 + 0x26a62) == '\0')) {
          *(ulong *)(lVar19 + 0x26a90) = *(ulong *)(lVar19 + 0x26a90) | 1L << ((ulong)uVar24 & 0x3f)
          ;
        }
        local_430 = 0;
        local_448 = 0xffffffff;
        uStack_444 = 0;
        uStack_440 = 0;
        uStack_43c = 0;
        local_438 = 0xffffffffffffffff;
        local_42c = 0xffffffffffffffff;
        local_424 = 0xffff;
        local_420 = 0;
        local_418[0] = 0;
        local_3e8 = 0xffffffff;
        uStack_3e4 = 0;
        local_3e0 = 0;
        local_3dc = 0;
        local_3c8 = 0;
        local_3d8 = &DAT_3f8000003f800000;
        puStack_3d0 = &DAT_3f8000003f800000;
        FUN_71017abd00(local_450);
        local_218 = 0xb95d0753f;
        local_210 = 0xff;
        ppuVar8 = &local_480;
        if ((&DAT_71052cadec)[uVar13 * 0x9a] != 0) {
          ppuVar8 = &local_478;
        }
        puVar2 = *ppuVar8;
        puVar14 = (undefined8 *)(puVar2 + uVar13 * 0x90);
        uStack_444 = 0xffffffff;
        uStack_440 = 0;
        local_42c._0_4_ = CONCAT22((&DAT_71052cb01c)[uVar13 * 0x134],(undefined2)local_42c);
        local_220 = 0;
        *(undefined2 *)(puVar14 + 3) = local_430;
        *puVar14 = CONCAT44(0xffffffff,local_448);
        puVar14[1] = (ulong)uStack_43c << 0x20;
        puVar14[2] = local_438;
        *(undefined2 *)((long)puVar14 + 0x24) = local_424;
        *(undefined8 *)((long)puVar14 + 0x1c) = local_42c;
        if (puVar14 != (undefined8 *)&local_448) {
          FUN_7101696040(puVar2 + uVar13 * 0x90 + 10,local_468);
        }
        uVar20 = *local_460;
        uVar23 = *(undefined8 *)((long)local_460 + 5);
        *(undefined1 **)(puVar2 + uVar13 * 0x90 + 0x1c) = local_3d8;
        *(undefined1 **)(puVar2 + uVar13 * 0x90 + 0x1e) = puStack_3d0;
        *(undefined8 *)((long)puVar2 + uVar13 * 0x240 + 0x65) = uVar23;
        *(undefined8 *)(puVar2 + uVar13 * 0x90 + 0x18) = uVar20;
        *(undefined2 *)(puVar2 + uVar13 * 0x90 + 0x20) = local_3c8;
        FUN_71016b6a10((undefined8 *)(puVar2 + uVar13 * 0x90 + 0x22),local_450);
        *(ulong *)(puVar2 + uVar13 * 0x90 + 0x8a) = CONCAT71(uStack_21f,local_220);
        uVar1 = uVar13 + 1;
        *(undefined1 *)(puVar2 + uVar13 * 0x90 + 0x8e) = local_210;
        *(undefined8 *)(puVar2 + uVar13 * 0x90 + 0x8c) = local_218;
        uVar13 = uVar1;
      } while (uVar1 < local_458);
      local_470 = &DAT_710530bdf0;
      local_478 = &DAT_710530c6d8;
      local_480 = &DAT_710530b2b0;
      uVar13 = 0;
      do {
        if (4 < uVar13) goto LAB_7102339174;
        FUN_71017abd00((undefined8 *)local_208);
        local_208[0] = (&DAT_71052cb9e0)[uVar13 * 0x9a];
        if ((&DAT_71052cb9da)[uVar13 * 0x268] == '\x01') {
          local_200 = 1;
          if ((&DAT_71052cbb8a)[uVar13 * 0x268] != '\0') {
            local_200 = 2;
          }
        }
        else {
          local_200 = 0;
        }
        iVar11 = (&DAT_71052cb9f4)[uVar13 * 0x9a];
        local_1f8 = (&DAT_71052cb9d0)[uVar13 * 0x4d];
        local_1e8 = (&DAT_71052cb9e9)[uVar13 * 0x268];
        local_1fc = (uint)(iVar11 != 0);
        bVar4 = (&DAT_71052cba49)[uVar13 * 0x268];
        if (bVar4 == 0) {
          local_1e7 = '\0';
        }
        else if (bVar4 < 0x10) {
          local_1e7 = '\x01';
        }
        else if (bVar4 < 0x16) {
          local_1e7 = '\x02';
        }
        else if (bVar4 < 0x20) {
          local_1e7 = '\x03';
        }
        else if (bVar4 < 0x2b) {
          local_1e7 = '\x04';
        }
        else {
          local_1e7 = '\x05';
          if (0x30 < bVar4) {
            if (bVar4 < 0x3d) {
              local_1e7 = '\x06';
            }
            else if (bVar4 < 0x4c) {
              local_1e7 = '\a';
            }
            else {
              local_1e7 = '\0';
              if (bVar4 < 0x65) {
                local_1e7 = '\b';
              }
            }
          }
        }
        local_1e7 = local_1e7 + '\x01';
        local_7a = (&DAT_71052cbc08)[uVar13 * 0x134];
        uVar5 = (&DAT_71052cbb06)[uVar13 * 0x134];
        local_13c = (uint)uVar5;
        local_70 = (&DAT_71052cbc20)[uVar13 * 0x9a];
        if (uVar5 != 0) {
          sVar6 = (&DAT_71052cbb08)[uVar13 * 0x134];
          local_138[0] = uVar5;
          if (sVar6 == 0) {
            local_13c = 1;
          }
          else {
            sVar7 = (&DAT_71052cbb0a)[uVar13 * 0x134];
            local_138[1] = sVar6;
            if (sVar7 == 0) {
              local_13c = 2;
            }
            else {
              sVar6 = (&DAT_71052cbb0c)[uVar13 * 0x134];
              local_138[2] = sVar7;
              if (sVar6 == 0) {
                local_13c = 3;
              }
              else {
                sVar7 = (&DAT_71052cbb0e)[uVar13 * 0x134];
                local_138[3] = sVar6;
                if (sVar7 == 0) {
                  local_13c = 4;
                }
                else {
                  sVar6 = (&DAT_71052cbb10)[uVar13 * 0x134];
                  local_130 = sVar7;
                  if (sVar6 == 0) {
                    local_13c = 5;
                  }
                  else {
                    sVar7 = (&DAT_71052cbb12)[uVar13 * 0x134];
                    local_12e = sVar6;
                    if (sVar7 == 0) {
                      local_13c = 6;
                    }
                    else {
                      sVar6 = (&DAT_71052cbb14)[uVar13 * 0x134];
                      local_12c = sVar7;
                      if (sVar6 == 0) {
                        local_13c = 7;
                      }
                      else {
                        sVar7 = (&DAT_71052cbb16)[uVar13 * 0x134];
                        local_12a = sVar6;
                        if (sVar7 == 0) {
                          local_13c = 8;
                        }
                        else {
                          local_128 = sVar7;
                          if ((&DAT_71052cbb18)[uVar13 * 0x134] == 0) {
                            local_13c = 9;
                          }
                          else {
                            local_13c = 10;
                            local_126 = (&DAT_71052cbb18)[uVar13 * 0x134];
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_138[local_13c] = 0;
        uVar24 = (uint)local_138[0];
        local_140 = 0x811c9dc5;
        if (local_138[0] != 0) {
          local_140 = 0x811c9dc5;
          puVar25 = local_138;
          do {
            puVar25 = puVar25 + 1;
            local_140 = local_140 * 0x89 ^ uVar24;
            uVar24 = (uint)*puVar25;
          } while (uVar24 != 0);
        }
        local_11c = (&DAT_71052cbb8e)[uVar13 * 0x134];
        local_118 = (&DAT_71052cbb8d)[uVar13 * 0x268];
        local_1f0 = local_1f8;
        if (4 < (uint)uVar13) goto LAB_7102339174;
        puVar3 = &DAT_710530a9c8;
        if (iVar11 != 0) {
          puVar3 = local_470;
        }
        iVar18 = 0xc;
        if (iVar11 != 0) {
          iVar18 = 0x11;
        }
        FUN_71016b6a10((undefined8 *)(puVar3 + uVar13 * 0x1c8 + 0x28),(undefined8 *)local_208);
        lVar19 = *(long *)(*(long *)(lVar21 + 8) + 0x88);
        uVar24 = iVar18 + (uint)uVar13;
        if ((0x15 < uVar24) || (*(char *)(lVar19 + 0x26a62) == '\0')) {
          *(ulong *)(lVar19 + 0x26a90) = *(ulong *)(lVar19 + 0x26a90) | 1L << ((ulong)uVar24 & 0x3f)
          ;
        }
        local_430 = 0;
        local_448 = 0xffffffff;
        uStack_444 = 0;
        uStack_440 = 0;
        uStack_43c = 0;
        local_438 = 0xffffffffffffffff;
        local_42c = 0xffffffffffffffff;
        local_424 = 0xffff;
        local_420 = 0;
        local_418[0] = 0;
        local_3e8 = 0xffffffff;
        uStack_3e4 = 0;
        local_3e0 = 0;
        local_3dc = 0;
        local_3c8 = 0;
        local_3d8 = &DAT_3f8000003f800000;
        puStack_3d0 = &DAT_3f8000003f800000;
        FUN_71017abd00(local_450);
        local_218 = 0xb95d0753f;
        local_210 = 0xff;
        ppuVar8 = &local_480;
        if ((&DAT_71052cb9f4)[uVar13 * 0x9a] != 0) {
          ppuVar8 = &local_478;
        }
        puVar2 = *ppuVar8;
        puVar14 = (undefined8 *)(puVar2 + uVar13 * 0x90);
        uStack_444 = 0xffffffff;
        uStack_440 = 0;
        local_42c._0_4_ = CONCAT22((&DAT_71052cbc24)[uVar13 * 0x134],(undefined2)local_42c);
        local_220 = 0;
        *(undefined2 *)(puVar14 + 3) = local_430;
        *puVar14 = CONCAT44(0xffffffff,local_448);
        puVar14[1] = (ulong)uStack_43c << 0x20;
        puVar14[2] = local_438;
        *(undefined2 *)((long)puVar14 + 0x24) = local_424;
        *(undefined8 *)((long)puVar14 + 0x1c) = local_42c;
        if (puVar14 != (undefined8 *)&local_448) {
          FUN_7101696040(puVar2 + uVar13 * 0x90 + 10,local_468);
        }
        uVar20 = *local_460;
        uVar23 = *(undefined8 *)((long)local_460 + 5);
        *(undefined1 **)(puVar2 + uVar13 * 0x90 + 0x1c) = local_3d8;
        *(undefined1 **)(puVar2 + uVar13 * 0x90 + 0x1e) = puStack_3d0;
        *(undefined8 *)((long)puVar2 + uVar13 * 0x240 + 0x65) = uVar23;
        *(undefined8 *)(puVar2 + uVar13 * 0x90 + 0x18) = uVar20;
        *(undefined2 *)(puVar2 + uVar13 * 0x90 + 0x20) = local_3c8;
        FUN_71016b6a10((undefined8 *)(puVar2 + uVar13 * 0x90 + 0x22),local_450);
        *(ulong *)(puVar2 + uVar13 * 0x90 + 0x8a) = CONCAT71(uStack_21f,local_220);
        uVar1 = uVar13 + 1;
        *(undefined1 *)(puVar2 + uVar13 * 0x90 + 0x8e) = local_210;
        *(undefined8 *)(puVar2 + uVar13 * 0x90 + 0x8c) = local_218;
        uVar13 = uVar1;
      } while (uVar1 < local_458);
    }
    DAT_710530d560 = (uint)((int)local_458 != 3);
    DAT_710530d564 = 0;
    uVar26 = 1;
    if (DAT_71052c51b2 != '\x01') {
      uVar26 = 2;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_710530a978 = 0x3c;
    _DAT_710530a97a = 0x200000503;
    _DAT_710530a982 = 0x100000a;
    DAT_710530a974 = 1;
    DAT_710530a976 = 0;
    _DAT_710530a986 = 1;
    _DAT_710530a988 = 0x1000103;
    lVar21 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    DAT_710530a975 = uVar26;
    if (*(char *)(lVar21 + 0x26a62) == '\0') {
      *(ulong *)(lVar21 + 0x26a90) = *(ulong *)(lVar21 + 0x26a90) | 1;
    }
    plVar12 = plVar12 + 0x1a;
    lVar21 = *plVar12;
    pppplVar17 = (long ****)0x0;
    FUN_710323beb0(lVar21,(ulong *)&DAT_7104545de8,(long)*(int *)(lVar21 + 0x70),
                   (ulong)*(uint *)(lVar21 + 0x68),(long ****)0x0,param_6,param_7,param_8);
    lVar21 = *plVar12;
    ppppppppplVar15 = (long *********)(long)*(int *)(lVar21 + 0x70);
    ppppbVar16 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
    FUN_710323c1c0(lVar21,(ulong *)&DAT_7104545de0,ppppppppplVar15,ppppbVar16,pppplVar17,param_6,
                   param_7,param_8);
    lVar21 = *plVar12;
    uVar13 = FUN_710323cb80(lVar21,extraout_x1_05,ppppppppplVar15,ppppbVar16,pppplVar17,param_6,
                            param_7,param_8);
    while ((uVar13 & 1) == 0) {
      nn::os::SleepThread(1000000);
      uVar13 = FUN_710323cb80(lVar21,extraout_x1_06,ppppppppplVar15,ppppbVar16,pppplVar17,param_6,
                              param_7,param_8);
    }
    FUN_710234a3e0((long *)*DAT_7105328e18,plVar12,(long ****)ppppppppplVar15,ppppbVar16,pppplVar17,
                   param_6,param_7,param_8);
    return;
  }
LAB_7102339174:
                    /* WARNING: Subroutine does not return */
  abort();
}

