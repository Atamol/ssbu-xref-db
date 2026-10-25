// addr:      7102f6f820
// offset:    0x2f6f820
// name:      FUN_7102f6f820
// mangled:   
// signature: undefined __cdecl FUN_7102f6f820(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102f6f820(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  long *plVar10;
  undefined4 uVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  long ***ppplVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar16;
  undefined8 extraout_x1_03;
  byte ***pppbVar17;
  long lVar18;
  long **pplVar19;
  long ****pppplVar20;
  long lVar21;
  ulong uVar22;
  long **pplVar23;
  byte *pbVar24;
  long *plVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  long **local_a8;
  ulong *local_a0;
  long **local_98;
  long ***local_90;
  long **local_88;
  long **local_80;
  undefined4 local_74;
  
  param_1[2] = (long)param_3;
  *param_1 = (long)&PTR_FUN_7105158488;
  param_1[1] = param_2;
  pppbVar17 = *param_4;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[3] = (long)pppbVar17;
  pcVar12 = (char *)FUN_710392e290(0x10,0xd8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pcVar12 == (char *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long **)((ulong)local_a8 & 0xffffffff00000000);
      local_90 = (long ***)&DAT_000000d8;
      param_3 = &local_90;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar13 & 1) != 0) &&
         (pcVar12 = (char *)FUN_710392e290(0x10,0xd8,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), pcVar12 != (char *)0x0)) goto LAB_7102f6f8c4;
    }
    pcVar12 = (char *)0x0;
  }
LAB_7102f6f8c4:
  pcVar12[0] = '\0';
  pcVar12[1] = '\0';
  pcVar12[0xd0] = '\0';
  pcVar12[0xd1] = '\0';
  pcVar12[0xd2] = '\0';
  pcVar12[0xd3] = '\0';
  pcVar12[8] = '\0';
  pcVar12[9] = '\0';
  pcVar12[10] = '\0';
  pcVar12[0xb] = '\0';
  pcVar12[0xc] = '\0';
  pcVar12[0xd] = '\0';
  pcVar12[0xe] = '\0';
  pcVar12[0xf] = '\0';
  pcVar12[0xc0] = '\0';
  pcVar12[0xc1] = '\0';
  pcVar12[0xc2] = '\0';
  pcVar12[0xc3] = '\0';
  pcVar12[0xc4] = '\0';
  pcVar12[0xc5] = '\0';
  pcVar12[0xc6] = '\0';
  pcVar12[199] = '\0';
  pcVar12[200] = '\0';
  pcVar12[0xc9] = '\0';
  pcVar12[0xca] = '\0';
  pcVar12[0xcb] = '\0';
  pcVar12[0xcc] = '\0';
  pcVar12[0xcd] = '\0';
  pcVar12[0xce] = '\0';
  pcVar12[0xcf] = '\0';
  pcVar12[0xb0] = '\0';
  pcVar12[0xb1] = '\0';
  pcVar12[0xb2] = '\0';
  pcVar12[0xb3] = '\0';
  pcVar12[0xb4] = '\0';
  pcVar12[0xb5] = '\0';
  pcVar12[0xb6] = '\0';
  pcVar12[0xb7] = '\0';
  pcVar12[0xb8] = '\0';
  pcVar12[0xb9] = '\0';
  pcVar12[0xba] = '\0';
  pcVar12[0xbb] = '\0';
  pcVar12[0xbc] = '\0';
  pcVar12[0xbd] = '\0';
  pcVar12[0xbe] = '\0';
  pcVar12[0xbf] = '\0';
  pcVar12[0xa0] = '\0';
  pcVar12[0xa1] = '\0';
  pcVar12[0xa2] = '\0';
  pcVar12[0xa3] = '\0';
  pcVar12[0xa4] = '\0';
  pcVar12[0xa5] = '\0';
  pcVar12[0xa6] = '\0';
  pcVar12[0xa7] = '\0';
  pcVar12[0xa8] = '\0';
  pcVar12[0xa9] = '\0';
  pcVar12[0xaa] = '\0';
  pcVar12[0xab] = '\0';
  pcVar12[0xac] = '\0';
  pcVar12[0xad] = '\0';
  pcVar12[0xae] = '\0';
  pcVar12[0xaf] = '\0';
  pcVar12[0x90] = '\0';
  pcVar12[0x91] = '\0';
  pcVar12[0x92] = '\0';
  pcVar12[0x93] = '\0';
  pcVar12[0x94] = '\0';
  pcVar12[0x95] = '\0';
  pcVar12[0x96] = '\0';
  pcVar12[0x97] = '\0';
  pcVar12[0x98] = '\0';
  pcVar12[0x99] = '\0';
  pcVar12[0x9a] = '\0';
  pcVar12[0x9b] = '\0';
  pcVar12[0x9c] = '\0';
  pcVar12[0x9d] = '\0';
  pcVar12[0x9e] = '\0';
  pcVar12[0x9f] = '\0';
  pcVar12[0x80] = '\0';
  pcVar12[0x81] = '\0';
  pcVar12[0x82] = '\0';
  pcVar12[0x83] = '\0';
  pcVar12[0x84] = '\0';
  pcVar12[0x85] = '\0';
  pcVar12[0x86] = '\0';
  pcVar12[0x87] = '\0';
  pcVar12[0x88] = '\0';
  pcVar12[0x89] = '\0';
  pcVar12[0x8a] = '\0';
  pcVar12[0x8b] = '\0';
  pcVar12[0x8c] = '\0';
  pcVar12[0x8d] = '\0';
  pcVar12[0x8e] = '\0';
  pcVar12[0x8f] = '\0';
  pcVar12[0x70] = '\0';
  pcVar12[0x71] = '\0';
  pcVar12[0x72] = '\0';
  pcVar12[0x73] = '\0';
  pcVar12[0x74] = '\0';
  pcVar12[0x75] = '\0';
  pcVar12[0x76] = '\0';
  pcVar12[0x77] = '\0';
  pcVar12[0x78] = '\0';
  pcVar12[0x79] = '\0';
  pcVar12[0x7a] = '\0';
  pcVar12[0x7b] = '\0';
  pcVar12[0x7c] = '\0';
  pcVar12[0x7d] = '\0';
  pcVar12[0x7e] = '\0';
  pcVar12[0x7f] = '\0';
  pcVar12[0x60] = '\0';
  pcVar12[0x61] = '\0';
  pcVar12[0x62] = '\0';
  pcVar12[99] = '\0';
  pcVar12[100] = '\0';
  pcVar12[0x65] = '\0';
  pcVar12[0x66] = '\0';
  pcVar12[0x67] = '\0';
  pcVar12[0x68] = '\0';
  pcVar12[0x69] = '\0';
  pcVar12[0x6a] = '\0';
  pcVar12[0x6b] = '\0';
  pcVar12[0x6c] = '\0';
  pcVar12[0x6d] = '\0';
  pcVar12[0x6e] = '\0';
  pcVar12[0x6f] = '\0';
  pcVar12[0x50] = '\0';
  pcVar12[0x51] = '\0';
  pcVar12[0x52] = '\0';
  pcVar12[0x53] = '\0';
  pcVar12[0x54] = '\0';
  pcVar12[0x55] = '\0';
  pcVar12[0x56] = '\0';
  pcVar12[0x57] = '\0';
  pcVar12[0x58] = '\0';
  pcVar12[0x59] = '\0';
  pcVar12[0x5a] = '\0';
  pcVar12[0x5b] = '\0';
  pcVar12[0x5c] = '\0';
  pcVar12[0x5d] = '\0';
  pcVar12[0x5e] = '\0';
  pcVar12[0x5f] = '\0';
  pcVar12[0x40] = '\0';
  pcVar12[0x41] = '\0';
  pcVar12[0x42] = '\0';
  pcVar12[0x43] = '\0';
  pcVar12[0x44] = '\0';
  pcVar12[0x45] = '\0';
  pcVar12[0x46] = '\0';
  pcVar12[0x47] = '\0';
  pcVar12[0x48] = '\0';
  pcVar12[0x49] = '\0';
  pcVar12[0x4a] = '\0';
  pcVar12[0x4b] = '\0';
  pcVar12[0x4c] = '\0';
  pcVar12[0x4d] = '\0';
  pcVar12[0x4e] = '\0';
  pcVar12[0x4f] = '\0';
  pcVar12[0x30] = '\0';
  pcVar12[0x31] = '\0';
  pcVar12[0x32] = '\0';
  pcVar12[0x33] = '\0';
  pcVar12[0x34] = '\0';
  pcVar12[0x35] = '\0';
  pcVar12[0x36] = '\0';
  pcVar12[0x37] = '\0';
  pcVar12[0x38] = '\0';
  pcVar12[0x39] = '\0';
  pcVar12[0x3a] = '\0';
  pcVar12[0x3b] = '\0';
  pcVar12[0x3c] = '\0';
  pcVar12[0x3d] = '\0';
  pcVar12[0x3e] = '\0';
  pcVar12[0x3f] = '\0';
  pcVar12[0x20] = '\0';
  pcVar12[0x21] = '\0';
  pcVar12[0x22] = '\0';
  pcVar12[0x23] = '\0';
  pcVar12[0x24] = '\0';
  pcVar12[0x25] = '\0';
  pcVar12[0x26] = '\0';
  pcVar12[0x27] = '\0';
  pcVar12[0x28] = '\0';
  pcVar12[0x29] = '\0';
  pcVar12[0x2a] = '\0';
  pcVar12[0x2b] = '\0';
  pcVar12[0x2c] = '\0';
  pcVar12[0x2d] = '\0';
  pcVar12[0x2e] = '\0';
  pcVar12[0x2f] = '\0';
  pcVar12[0x10] = '\0';
  pcVar12[0x11] = '\0';
  pcVar12[0x12] = '\0';
  pcVar12[0x13] = '\0';
  pcVar12[0x14] = '\0';
  pcVar12[0x15] = '\0';
  pcVar12[0x16] = '\0';
  pcVar12[0x17] = '\0';
  pcVar12[0x18] = '\0';
  pcVar12[0x19] = '\0';
  pcVar12[0x1a] = '\0';
  pcVar12[0x1b] = '\0';
  pcVar12[0x1c] = '\0';
  pcVar12[0x1d] = '\0';
  pcVar12[0x1e] = '\0';
  pcVar12[0x1f] = '\0';
  lVar18 = param_1[3];
  lVar21 = *(long *)(lVar18 + 0x1b0);
  lVar3 = *(long *)(lVar18 + 0x1b8);
  if (lVar21 != lVar3) {
    do {
      uVar22 = *(ulong *)(lVar21 + 8);
      uVar13 = FUN_7102f6e8d0(param_1[2],uVar22);
      if (((uVar13 & 1) != 0) && (plVar14 = (long *)(uVar22 & 0xffffffffff), plVar14 != (long *)0x0)
         ) {
        for (plVar25 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
            plVar25 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar25 = plVar25 + 2) {
          if ((*(uint *)(plVar25 + 1) < 2) &&
             (pplVar23 = (long **)*plVar25, plVar14 == pplVar23[0xd])) {
            if (pplVar23 != (long **)0x0) {
              fVar26 = *(float *)(lVar21 + 0x10);
              fVar28 = *(float *)(lVar21 + 0x14);
              local_90 = (long ***)
                         FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
              if (local_90 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_a8 = (long **)((ulong)local_a8 & 0xffffffff00000000);
                  local_90 = (long ***)&DAT_00000010;
                  param_3 = &local_90;
                  uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
                  if (((uVar13 & 1) != 0) &&
                     (local_90 = (long ***)
                                 FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,
                                                param_8), local_90 != (long ***)0x0))
                  goto LAB_7102f6f978;
                }
                local_90 = (long ***)0x0;
              }
LAB_7102f6f978:
              *local_90 = (long **)&PTR_FUN_71051587b0;
              local_90[1] = pplVar23;
              FUN_7102f750a0(fVar26,fVar28,pcVar12,&local_90,param_3,param_4,param_5,param_6,param_7
                             ,param_8);
              ppplVar15 = local_90;
              local_90 = (long ***)0x0;
              if (ppplVar15 != (long ***)0x0) {
                (*(code *)(*ppplVar15)[1])();
              }
            }
            break;
          }
        }
      }
      lVar21 = lVar21 + 0x18;
    } while (lVar21 != lVar3);
    lVar18 = param_1[3];
  }
  lVar21 = *(long *)(lVar18 + 0x1c8);
  lVar3 = *(long *)(lVar18 + 0x1d0);
  if (lVar21 != lVar3) {
    do {
      uVar22 = *(ulong *)(lVar21 + 8);
      uVar13 = FUN_7102f6e8d0(param_1[2],uVar22);
      if (((uVar13 & 1) != 0) && (plVar14 = (long *)(uVar22 & 0xffffffffff), plVar14 != (long *)0x0)
         ) {
        for (plVar25 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
            plVar25 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar25 = plVar25 + 2) {
          if ((*(uint *)(plVar25 + 1) < 2) &&
             (pplVar23 = (long **)*plVar25, plVar14 == pplVar23[0xd])) {
            if (pplVar23 != (long **)0x0) {
              fVar26 = *(float *)(lVar21 + 0x18);
              local_90 = (long ***)
                         FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
              if (local_90 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_a8 = (long **)((ulong)local_a8 & 0xffffffff00000000);
                  local_90 = (long ***)&SUB_00000020;
                  param_3 = &local_90;
                  uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
                  if (((uVar13 & 1) != 0) &&
                     (local_90 = (long ***)
                                 FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,
                                                param_8), local_90 != (long ***)0x0))
                  goto LAB_7102f6fa90;
                }
                local_90 = (long ***)0x0;
              }
LAB_7102f6fa90:
              pplVar19 = *(long ***)(lVar21 + 0x10);
              uVar7 = *(undefined1 *)(lVar21 + 0x1c);
              *local_90 = (long **)&PTR_FUN_71051587e8;
              local_90[1] = pplVar23;
              *(undefined1 *)(local_90 + 3) = uVar7;
              local_90[2] = pplVar19;
              FUN_7102f750a0(fVar26,-1.0,pcVar12,&local_90,param_3,param_4,param_5,param_6,param_7,
                             param_8);
              ppplVar15 = local_90;
              local_90 = (long ***)0x0;
              if (ppplVar15 != (long ***)0x0) {
                (*(code *)(*ppplVar15)[1])();
              }
            }
            break;
          }
        }
      }
      lVar21 = lVar21 + 0x20;
    } while (lVar21 != lVar3);
    lVar18 = param_1[3];
  }
  pbVar24 = *(byte **)(lVar18 + 0x1e0);
  pbVar4 = *(byte **)(lVar18 + 0x1e8);
  if (pbVar24 != pbVar4) {
    do {
      uVar5 = 0xfe;
      if (*pbVar24 != 0) {
        uVar5 = 1 << (ulong)(*pbVar24 & 0x1f);
      }
      if ((uVar5 & *(byte *)(param_1[2] + 0xb1)) != 0) {
        param_3 = *(long *****)(pbVar24 + 8);
        FUN_7102626be0(&local_a8,*(ulong **)(param_1[1] + 800),param_3,param_4,param_5,param_6,
                       param_7,param_8);
        if (local_98 != (long **)0x0) {
          fVar26 = *(float *)(pbVar24 + 0x20);
          local_98[0xf] = (long *)(ulong)(uint)fVar26;
          local_98[0xe] = (long *)CONCAT44(fVar26,fVar26);
          if (*(char *)((long)local_98 + 0x35) == '\0') {
            local_98[9] = (long *)((ulong)local_98[9] | 4);
          }
          else {
            uVar5 = *(uint *)((long)local_98 + 0x3c);
            if (0 < (int)uVar5) {
              lVar21 = *lib::Singleton<lib::EffectManager>::instance_ +
                       (ulong)(uVar5 >> 0x18) * 0x300;
              if ((lVar21 != 0) && (*(uint *)(lVar21 + 4) == uVar5)) {
                lVar21 = *lib::Singleton<lib::EffectManager>::instance_ +
                         (ulong)(uVar5 >> 0x18) * 0x300;
                uVar5 = *(uint *)(lVar21 + 0x26c) | 0x2000;
                if (!NAN(fVar26)) {
                  uVar5 = *(uint *)(lVar21 + 0x26c) & 0xffffdfff;
                }
                *(undefined1 *)(lVar21 + 0x2da) = 1;
                *(uint *)(lVar21 + 0x26c) = uVar5;
                *(ulong *)(lVar21 + 0x108) = (ulong)(uint)fVar26;
                *(ulong *)(lVar21 + 0x100) = CONCAT44(fVar26,fVar26);
              }
            }
          }
          if ((*(ulong *)(pbVar24 + 0x10) & 0xffffffffff) != 0) {
            for (plVar14 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
                plVar14 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar14 = plVar14 + 2)
            {
              if ((*(uint *)(plVar14 + 1) < 2) &&
                 (plVar25 = (long *)*plVar14,
                 (*(ulong *)(pbVar24 + 0x10) & 0xffffffffff) == plVar25[0xd])) {
                if (plVar25 != (long *)0x0) {
                  if (((*(ulong *)(pbVar24 + 0x18) & 0xffffffffff) == 0) || (plVar25[0x1b] == 0)) {
                    uVar11 = 0xffffffff;
                    plVar14 = _ConstantZero;
                  }
                  else {
                    plVar14 = *(long **)(*(long *)(plVar25[0x1b] + 8) + 8);
                    uVar11 = (**(code **)(*plVar14 + 0x20))
                                       (plVar14,*(ulong *)(pbVar24 + 0x18) & 0xffffffffff);
                    plVar14 = _ConstantZero;
                  }
                  _ConstantZero = plVar14;
                  if (local_98 != (long **)0x0) {
                    auVar9._8_8_ = _DAT_7107521008;
                    auVar9._0_8_ = plVar14;
                    auVar27._8_8_ = _DAT_7107521008;
                    auVar27._0_8_ = plVar14;
                    local_98[0x18] = plVar25;
                    *(undefined4 *)(local_98 + 0x19) = uVar11;
                    *(undefined1 *)(local_98 + 0x1e) = 1;
                    auVar27 = NEON_ext(auVar27,auVar9,8,1);
                    local_98[0x1b] = (long *)(ulong)auVar27._0_4_;
                    local_98[0x1a] = plVar14;
                    local_98[0x1d] = (long *)(ulong)auVar27._0_4_;
                    local_98[0x1c] = plVar14;
                  }
                }
                break;
              }
            }
          }
          fVar26 = *(float *)(pbVar24 + 0x24);
          fVar28 = *(float *)(pbVar24 + 0x28);
          ppplVar15 = (long ***)
                      FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
          if (ppplVar15 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_74 = 0;
              local_90 = (long ***)&SUB_00000020;
              param_3 = &local_90;
              uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
              if (((uVar13 & 1) != 0) &&
                 (ppplVar15 = (long ***)
                              FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,
                                             param_8), ppplVar15 != (long ***)0x0))
              goto LAB_7102f6fd4c;
            }
            ppplVar15 = (long ***)0x0;
          }
LAB_7102f6fd4c:
          local_88 = (long **)0x0;
          local_80 = (long **)0x0;
          local_90 = (long ***)0x0;
          if (local_98 != (long **)0x0) {
            local_88 = (long **)local_98[4];
            local_90 = (long ***)(local_98 + 3);
            local_98[4] = (long *)&local_90;
            *local_88 = (long *)&local_90;
            local_98[2] = (long *)((long)local_98[2] + 1);
            local_80 = local_98;
          }
          *ppplVar15 = (long **)&PTR_FUN_7105158820;
          pppplVar20 = (long ****)(ppplVar15 + 1);
          *pppplVar20 = (long ***)0x0;
          ppplVar15[2] = (long **)0x0;
          ppplVar15[3] = (long **)0x0;
          pplVar23 = local_98;
          if (pppplVar20 == &local_90) {
LAB_7102f6fdc4:
            if (pplVar23 != (long **)0x0) {
              *local_88 = (long *)local_90;
              local_90[1] = local_88;
              pplVar23[2] = (long *)((long)pplVar23[2] + -1);
              local_88 = (long **)0x0;
              local_80 = (long **)0x0;
            }
          }
          else if (local_98 != (long **)0x0) {
            pplVar23 = (long **)local_98[4];
            ppplVar15[1] = local_98 + 3;
            ppplVar15[2] = pplVar23;
            local_98[4] = (long *)pppplVar20;
            *pplVar23 = (long *)pppplVar20;
            local_98[2] = (long *)((long)local_98[2] + 1);
            ppplVar15[3] = local_98;
            pplVar23 = local_80;
            goto LAB_7102f6fdc4;
          }
          local_90 = ppplVar15;
          FUN_7102f750a0(fVar26,fVar28,pcVar12,&local_90,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          ppplVar15 = local_90;
          local_90 = (long ***)0x0;
          if (ppplVar15 != (long ***)0x0) {
            (*(code *)(*ppplVar15)[1])();
          }
        }
        if (local_98 != (long **)0x0) {
          *local_a0 = (ulong)local_a8;
          local_a8[1] = (long *)local_a0;
          local_98[2] = (long *)((long)local_98[2] + -1);
          local_a0 = (ulong *)0x0;
          local_98 = (long **)0x0;
          local_a8 = (long **)0x0;
        }
      }
      pbVar24 = pbVar24 + 0x30;
    } while (pbVar24 != pbVar4);
  }
  pplVar23 = *(long ***)(param_1[1] + 0x338);
  local_90 = (long ***)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_90 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long **)((ulong)local_a8 & 0xffffffff00000000);
      local_90 = (long ***)&SUB_00000018;
      param_3 = &local_90;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar13 & 1) != 0) &&
         (local_90 = (long ***)
                     FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         local_90 != (long ***)0x0)) goto LAB_7102f6fea8;
    }
    local_90 = (long ***)0x0;
  }
LAB_7102f6fea8:
  *local_90 = (long **)&PTR_FUN_7105158858;
  local_90[1] = pplVar23;
  local_90[2] = (long **)0x900000001;
  FUN_7102f750a0(0.0,-1.0,pcVar12,&local_90,param_3,param_4,param_5,param_6,param_7,param_8);
  ppplVar15 = local_90;
  local_90 = (long ***)0x0;
  uVar16 = extraout_x1;
  if (ppplVar15 != (long ***)0x0) {
    (*(code *)(*ppplVar15)[1])();
    uVar16 = extraout_x1_00;
  }
  FUN_7102f753a0(pcVar12,uVar16,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = param_1[5];
  param_1[5] = (long)pcVar12;
  uVar16 = extraout_x1_01;
  if (uVar13 != 0) {
    FUN_7102f74e50(uVar13);
    FUN_710392eb40(uVar13);
    uVar16 = extraout_x1_02;
  }
  plVar14 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
  plVar25 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8);
  if (plVar14 != plVar25) {
    iVar6 = (int)plVar14[1];
    plVar10 = plVar14;
    while ((plVar14 = plVar10, iVar6 - 2U < 3 && (plVar14 = plVar25, plVar25 != plVar10 + 2))) {
      iVar6 = (int)plVar10[3];
      plVar10 = plVar10 + 2;
    }
  }
LAB_7102f6ff6c:
  if (plVar14 != plVar25) {
    lVar21 = *plVar14;
    plVar10 = plVar14;
    if (lVar21 != 0) {
      *(undefined1 *)(lVar21 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar21 + 0x108),uVar16,param_3,param_4,param_5,param_6,param_7,param_8
                    );
      uVar16 = extraout_x1_03;
    }
    do {
      plVar10 = plVar10 + 2;
      plVar14 = plVar25;
      if (plVar10 == plVar25) break;
      plVar14 = plVar10;
    } while ((int)plVar10[1] - 2U < 3);
    goto LAB_7102f6ff6c;
  }
  if (*(char *)(param_1[2] + 0x10) != '\0') {
    bVar8 = *(byte *)(param_1[2] + 0xa4);
    if (bVar8 - 1 < 7) {
      uVar5 = (uint)bVar8 + (bVar8 / 10) * -10;
      if (6 < uVar5) {
        uVar5 = 7;
      }
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      lVar21 = (long)(int)(uVar5 - 1);
      goto LAB_7102f7000c;
    }
  }
  lVar21 = 0;
LAB_7102f7000c:
  FUN_71025f7350(*(long *)(*(long *)(param_1[1] + 0x318) + 0x10),
                 (&PTR_s_light00_dth_sora_71051584e0)[lVar21]);
  *(undefined1 *)(*(long *)(*(long *)(param_1[1] + 0x318) + 0x10) + 0x4c) = 0;
  iVar6 = *(int *)(param_1[1] + 8);
  ppuVar1 = &PTR_s_E_chara_dth_sora_71051585a0;
  if (iVar6 != 0x16a) {
    ppuVar1 = &PTR_s_chara_dth_sora_71051585e0;
  }
  ppuVar2 = &PTR_s_B_chara_dth_sora_7105158560;
  if (iVar6 != 0x16b) {
    ppuVar2 = ppuVar1;
  }
  FUN_7102633a10(*(long *)(param_1[1] + 0x318),(long *********)ppuVar2[lVar21],0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7102633b90(*(long *)(param_1[1] + 0x318),
                 (long *********)(&PTR_s_stage_dth_sora_7105158620)[lVar21],0,param_4,param_5,
                 param_6,param_7,param_8);
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}

