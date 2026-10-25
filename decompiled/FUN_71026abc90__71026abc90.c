// addr:      71026abc90
// offset:    0x26abc90
// name:      FUN_71026abc90
// mangled:   
// signature: undefined __cdecl FUN_71026abc90(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, undefined8 param_6, undefined * * param_7, undefined1[16] * param_8, undefined1[16] * param_9, undefined1[16] * param_10, long * * * * * * param_11, long * * * param_12)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026abc90(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5,undefined8 param_6,undefined **param_7,
                   undefined1 (*param_8) [16],undefined1 (*param_9) [16],undefined1 (*param_10) [16]
                   ,long ******param_11,long ***param_12)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  long ****pppplVar14;
  undefined1 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  long ***local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long ***local_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long ***local_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  FUN_71025d9250(param_5,param_6,(long *********)param_7,param_8,param_9,param_10,param_11,param_12)
  ;
  bVar2 = *(byte *)((long)param_5 + 0x9d);
  bVar3 = *(byte *)((long)param_5 + 0x9f);
  *(uint *)((long)param_5 + 0x874) = (uint)bVar2;
  *(uint *)(param_5 + 0x10f) = (uint)*(byte *)((long)param_5 + 0x9e);
  *(uint *)((long)param_5 + 0x87c) = (uint)bVar3;
  uVar20 = (uint)bVar2;
  if (bVar2 - 4 < 0x13) {
    if (7 < bVar2) {
      if (bVar2 < 0x10) {
        uVar16 = 1;
      }
      else if (uVar20 < 0x13) {
        uVar16 = 2;
      }
      else {
        uVar16 = 3;
      }
      goto LAB_71026abd64;
    }
    uVar16 = 0;
    *(undefined1 *)((long)param_5 + 0x871) = 0;
    if (bVar3 == 6) goto LAB_71026abcfc;
LAB_71026abd70:
    iVar6 = (int)uVar16;
    uVar15 = (undefined1)(0x404030303020100 >> (uVar16 << 3));
  }
  else {
    uVar16 = 6;
LAB_71026abd64:
    *(char *)((long)param_5 + 0x871) = (char)uVar16;
    if (bVar3 != 6) goto LAB_71026abd70;
LAB_71026abcfc:
    if (uVar20 != 0x13) {
      if (uVar20 - 0x14 < 5) {
        uVar19 = 5;
        if (0x16 < uVar20) {
          uVar19 = 7;
        }
        uVar16 = (ulong)uVar19;
        *(char *)((long)param_5 + 0x871) = (char)uVar19;
      }
      goto LAB_71026abd70;
    }
    if (*(byte *)((long)param_5 + 0x9e) < 0x1e) goto LAB_71026abd70;
    iVar6 = 4;
    *(undefined1 *)((long)param_5 + 0x871) = 4;
    uVar15 = 3;
  }
  *(undefined1 *)(param_5 + 0x10e) = uVar15;
  if ((char)param_5[0x110] == '\0') {
    uVar20 = 0x1020100 >> (ulong)((iVar6 - 4U & 3) << 3);
    if (3 < (iVar6 - 4U & 0xff)) {
      uVar20 = 2;
    }
    *(char *)((long)param_5 + 0x872) = (char)uVar20;
    if (*(char *)((long)param_5 + 0x4b) == '\x02') {
      uVar15 = 1;
      goto LAB_71026abd98;
    }
    if ((*(char *)((long)param_5 + 0x4b) == '\x01') && ((uVar20 & 0xff) != 2)) goto LAB_71026abd94;
  }
  else {
LAB_71026abd94:
    uVar15 = 2;
LAB_71026abd98:
    *(undefined1 *)((long)param_5 + 0x872) = uVar15;
  }
  lVar17 = param_5[0x62];
  uVar16 = *(long *)(lVar17 + 0xd8) - *(long *)(lVar17 + 0xd0);
  if (0 < (int)(uVar16 >> 4)) {
    uVar16 = uVar16 >> 4 & 0xffffffff;
    lVar22 = 0;
    uVar24 = extraout_x1;
    while( true ) {
      uVar16 = uVar16 - 1;
      lVar17 = *(long *)(*(long *)(lVar17 + 0xd0) + lVar22);
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar17 + 0x108),uVar24,(long ****)param_7,(byte ****)param_8,
                       (long ****)param_9,param_10,param_11,param_12);
        *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) | 1;
        if (*(long *)(lVar17 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
        }
        uVar24 = extraout_x1_00;
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (*(long *)(lVar17 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101;
        }
      }
      if (uVar16 == 0) break;
      lVar17 = param_5[0x62];
      lVar22 = lVar22 + 0x10;
    }
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                          param_10,param_11,param_12);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000010;
      param_7 = (undefined **)&local_b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
      if (((uVar16 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_7,(byte ****)param_8,(long ****)param_9
                                  ,param_10,param_11,param_12), puVar7 != (undefined8 *)0x0))
      goto LAB_71026abe7c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71026abe7c:
  *puVar7 = &PTR_FUN_71050ce0a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                          param_10,param_11,param_12);
  uVar24 = extraout_x1_01;
  if (puVar8 == (undefined8 *)0x0) {
    local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
    local_b0 = (long ***)&DAT_00000010;
    param_7 = (undefined **)&local_b0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                            param_10,param_11,param_12);
    uVar24 = extraout_x1_02;
  }
  *puVar8 = param_5;
  *(undefined1 *)(puVar8 + 1) = 0;
  puVar7[1] = puVar8;
  plVar9 = (long *)param_5[0x10c];
  param_5[0x10c] = (long)puVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
    puVar7 = (undefined8 *)param_5[0x10c];
    uVar24 = extraout_x1_03;
  }
  lVar17 = puVar7[1];
  if (lVar17 == 0) goto switchD_71026abf20_default;
  lVar22 = param_5[5];
  *(undefined1 *)(lVar17 + 8) = 0;
  switch((int)lVar22) {
  case 1:
    *(undefined4 *)(lVar17 + 0xc) = 0;
    goto LAB_71026abfb4;
  case 2:
    *(undefined4 *)(lVar17 + 0xc) = 1;
    goto LAB_71026abfb4;
  case 3:
    uVar5 = 2;
    break;
  case 4:
    uVar5 = 3;
    break;
  case 5:
    uVar5 = 4;
    break;
  case 6:
    uVar5 = 5;
    break;
  default:
    goto switchD_71026abf20_default;
  }
  *(undefined4 *)(lVar17 + 0xc) = uVar5;
LAB_71026abfb4:
  *(undefined1 *)(lVar17 + 8) = 1;
switchD_71026abf20_default:
  plVar11 = *(long **)(param_5[0x62] + 0xd0);
  plVar23 = *(long **)(param_5[0x62] + 0xd8);
  plVar9 = plVar11;
  if (plVar11 != plVar23) {
    do {
      if ((*(uint *)(plVar9 + 1) < 2) &&
         (lVar17 = *plVar9, *(long *)(lVar17 + 0x68) == 0x1324f918c0)) {
        if (lVar17 != 0) {
          FUN_71026aea50(lVar17,uVar24,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                         param_10,param_11,param_12);
          plVar11 = *(long **)(param_5[0x62] + 0xd0);
          plVar23 = *(long **)(param_5[0x62] + 0xd8);
          uVar24 = extraout_x1_04;
        }
        break;
      }
      plVar9 = plVar9 + 2;
    } while (plVar23 != plVar9);
    plVar9 = plVar11;
    if (plVar11 != plVar23) {
      do {
        if ((*(uint *)(plVar9 + 1) < 2) &&
           (lVar17 = *plVar9, *(long *)(lVar17 + 0x68) == 0xa3c571c04)) {
          if (lVar17 != 0) {
            FUN_71026aea50(lVar17,uVar24,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                           param_10,param_11,param_12);
            plVar11 = *(long **)(param_5[0x62] + 0xd0);
            plVar23 = *(long **)(param_5[0x62] + 0xd8);
            uVar24 = extraout_x1_05;
          }
          break;
        }
        plVar9 = plVar9 + 2;
      } while (plVar23 != plVar9);
      do {
        if (plVar11 == plVar23) break;
        if ((*(uint *)(plVar11 + 1) < 2) &&
           (lVar17 = *plVar11, *(long *)(lVar17 + 0x68) == 0x11cb38ced2)) {
          if (lVar17 != 0) {
            FUN_71026aea50(lVar17,uVar24,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                           param_10,param_11,param_12);
            uVar24 = extraout_x1_06;
          }
          break;
        }
        plVar11 = plVar11 + 2;
      } while( true );
    }
  }
  uVar16 = (ulong)*(byte *)(param_5 + 0x10e);
  iVar6 = *(int *)(&UNK_7104551494 + uVar16 * 4);
  lVar17 = 0;
  do {
    pbVar21 = *(byte **)(*(long *)(uVar16 * 8 + 0x71050cd900) + lVar17 * 8);
    if ((pbVar21 != (byte *)0x0) && (uVar20 = (uint)*pbVar21, *pbVar21 != 0)) {
      plVar9 = *(long **)(param_5[0x62] + 0xd0);
      plVar11 = *(long **)(param_5[0x62] + 0xd8);
      if (plVar9 != plVar11) {
        uVar16 = 0;
        uVar19 = 0xffffffff;
        do {
          pbVar21 = pbVar21 + 1;
          uVar1 = uVar20 + 0x20;
          if (0x19 < uVar20 - 0x41) {
            uVar1 = uVar20;
          }
          uVar19 = (&DAT_7104754084)[(uVar1 ^ uVar19) & 0xff] ^ uVar19 >> 8;
          uVar20 = (uint)*pbVar21;
          uVar16 = uVar16 + 0x100000000;
        } while (uVar20 != 0);
        do {
          if ((*(uint *)(plVar9 + 1) < 2) &&
             (lVar22 = *plVar9,
             (uVar16 & 0xff00000000 | (ulong)~uVar19) == *(ulong *)(lVar22 + 0x68))) {
            if (lVar22 != 0) {
              FUN_71026aea50(lVar22,uVar24,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                             param_10,param_11,param_12);
              uVar24 = extraout_x1_07;
            }
            break;
          }
          plVar9 = plVar9 + 2;
        } while (plVar11 != plVar9);
      }
    }
    lVar17 = lVar17 + 1;
    if (iVar6 <= lVar17) break;
    uVar16 = (ulong)*(byte *)(param_5 + 0x10e);
  } while( true );
  for (plVar9 = *(long **)(param_5[0x62] + 0xd0); plVar9 != *(long **)(param_5[0x62] + 0xd8);
      plVar9 = plVar9 + 2) {
    if ((*(uint *)(plVar9 + 1) < 2) && (lVar17 = *plVar9, *(long *)(lVar17 + 0x68) == 0x16c4e20978))
    {
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar17 + 0x108),uVar24,(long ****)param_7,(byte ****)param_8,
                       (long ****)param_9,param_10,param_11,param_12);
        *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) | 1;
        if (*(long *)(lVar17 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
        }
        uVar24 = extraout_x1_10;
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (*(long *)(lVar17 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101;
          lVar17 = param_5[0x10c];
          goto joined_r0x0071026ac644;
        }
      }
      break;
    }
  }
  lVar17 = param_5[0x10c];
joined_r0x0071026ac644:
  if (((lVar17 != 0) && (plVar9 = *(long **)(lVar17 + 8), plVar9 != (long *)0x0)) &&
     ((char)plVar9[1] != '\0')) {
    plVar11 = *(long **)(*(long *)(*plVar9 + 0x310) + 0xd0);
    plVar23 = *(long **)(*(long *)(*plVar9 + 0x310) + 0xd8);
    if (plVar11 != plVar23) {
      do {
        if (((int)plVar11[1] == 4) &&
           (lVar17 = *plVar11,
           ((&DAT_7104550e48)[*(int *)((long)plVar9 + 0xc)] & 0xffffffffff) ==
           *(ulong *)(lVar17 + 0x68))) {
          if (lVar17 != 0) {
            *(undefined1 *)(lVar17 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar17 + 0x108),uVar24,(long ****)param_7,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
            *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) & 0xfe;
            if ((*(char *)(lVar17 + 0xe0) != '\0') && (*(long *)(lVar17 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar17 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 0;
            }
            if (((*(char *)(lVar17 + 0xe0) != '\0') &&
                (*(undefined1 *)(*(long *)(lVar17 + 0xb0) + 0x10) = 1,
                *(char *)(lVar17 + 0xe0) != '\0')) && (*(long *)(lVar17 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar17 + 200) + 0x32) = 0x101;
            }
            if (*(long *)(lVar17 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x22) = 1;
            }
          }
          break;
        }
        plVar11 = plVar11 + 2;
      } while (plVar23 != plVar11);
    }
  }
  lVar17 = param_5[0x110];
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x38,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                          param_10,param_11,param_12);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000038;
      param_7 = (undefined **)&local_b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
      if (((uVar16 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x38,(long ****)param_7,(byte ****)param_8,(long ****)param_9
                                  ,param_10,param_11,param_12), puVar7 != (undefined8 *)0x0))
      goto LAB_71026ac298;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71026ac298:
  lVar22 = param_5[0x10e];
  uVar15 = *(undefined1 *)((long)param_5 + 0x872);
  plVar9 = param_5 + 0xe7;
  *(undefined1 *)((long)puVar7 + 0x33) = 0;
  *puVar7 = &PTR_FUN_71050cdf00;
  puVar7[1] = param_5;
  *(char *)((long)puVar7 + 0x34) = (char)lVar17;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(char *)(puVar7 + 6) = (char)lVar22;
  *(undefined1 *)((long)puVar7 + 0x31) = 5;
  *(undefined1 *)((long)puVar7 + 0x32) = uVar15;
  puVar7[2] = plVar9;
  puVar7[3] = 0;
  param_5[0x106] = (long)puVar7;
  FUN_71026b3e10((long)puVar7,*(char *)((long)param_5 + 0x9b),(long ****)param_7,(byte ****)param_8,
                 (long ****)param_9,param_10,(long ***)param_11,param_12);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                          param_10,param_11,param_12);
  uVar24 = extraout_x1_08;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000080;
      param_7 = (undefined **)&local_b0;
      auVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
      uVar24 = auVar26._8_8_;
      if (((auVar26._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_7,(byte ****)param_8,(long ****)param_9
                                  ,param_10,param_11,param_12), uVar24 = extraout_x1_09,
         puVar7 != (undefined8 *)0x0)) goto LAB_71026ac330;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71026ac330:
  puVar7[5] = 0;
  puVar7[4] = 0x3f800000;
  puVar7[7] = 0;
  puVar7[6] = 0x3f80000000000000;
  auVar4 = _DAT_710446a350;
  auVar26 = _DAT_71044656b0;
  *(undefined1 *)(puVar7 + 0xd) = 0;
  puVar7[9] = 0x3f800000;
  puVar7[8] = 0;
  puVar7[0xb] = 0x3f80000000000000;
  puVar7[10] = 0;
  puVar7[0xc] = 0;
  *puVar7 = &PTR_FUN_71050cda20;
  puVar7[1] = param_5;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  param_5[0x107] = (long)puVar7;
  FUN_71026aef60(auVar26,auVar4,param_3,param_4,(long)puVar7,uVar24,(long ****)param_7,
                 (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
  if (*(char *)(*lib::Singleton<app::StageManager>::instance_ + 0x188) == '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      param_7 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if ((DAT_71052c51b0 - 0xd < 0x19) &&
       ((0x1001fefU >> (ulong)(DAT_71052c51b0 - 0xd & 0x1f) & 1) != 0)) goto LAB_71026ac398;
  }
  else {
LAB_71026ac398:
    lVar22 = param_5[0x107];
    bVar2 = *(byte *)((long)param_5 + 0x9d);
    bVar3 = *(byte *)((long)param_5 + 0x9e);
    *(undefined1 *)(lVar22 + 0x68) = 1;
    lVar17 = nn::os::GetSystemTick();
    uVar10 = nn::os::ConvertToTimeSpan(lVar17 - DAT_71074470e8);
    uVar16 = ((long)uVar10 >> 0x20) * 0xe353f7cf + ((uVar10 & 0xffffffff) * 0xe353f7cf >> 0x20);
    *(ulong *)(lVar22 + 0x70) =
         (ulong)((((long)(((long)uVar10 >> 0x20) * 0x20c49ba5 + ((long)uVar16 >> 0x20) +
                         ((uVar10 & 0xffffffff) * 0x20c49ba5 + (uVar16 & 0xffffffff) >> 0x20)) >> 7)
                 - ((long)uVar10 >> 0x3f)) * 1000) / 1000000000;
    *(uint *)(lVar22 + 0x78) = (uint)bVar2;
    *(uint *)(lVar22 + 0x7c) = (uint)bVar3;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_7 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71052c51ba == '\0') && ((char)param_5[3] != '\0')) {
    lVar17 = param_5[0x67];
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0xc0,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                            param_10,param_11,param_12);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
        local_b0 = (long ***)&DAT_000000c0;
        param_7 = (undefined **)&local_b0;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
        if (((uVar16 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0xc0,(long ****)param_7,(byte ****)param_8,
                                    (long ****)param_9,param_10,param_11,param_12),
           puVar7 != (undefined8 *)0x0)) goto LAB_71026ac4e8;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71026ac4e8:
    *puVar7 = &PTR_FUN_71050cd9e0;
    puVar7[1] = param_5;
    *(undefined2 *)(puVar7 + 7) = 0x301;
    *(undefined1 *)((long)puVar7 + 0x3a) = 0;
    puVar7[5] = plVar9;
    puVar7[6] = 0;
    *(undefined4 *)((long)puVar7 + 0x4c) = 0;
    *(undefined8 *)((long)puVar7 + 0x42) = 0;
    *(undefined8 *)((long)puVar7 + 0x3c) = 0;
    *(undefined2 *)(puVar7 + 10) = 1;
    *(undefined8 *)((long)puVar7 + 0x54) = 0x3f800000;
    lVar22 = param_5[0x68];
    *(undefined1 *)((long)puVar7 + 0x74) = 0;
    *(undefined4 *)(puVar7 + 0xe) = 0xffffffff;
    puVar7[0xc] = lVar22;
    puVar7[0xd] = 0xffffffffffffffff;
    lVar18 = _DAT_7107521008;
    lVar22 = _ConstantZero;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    puVar7[0x14] = 0;
    *(undefined1 *)(puVar7 + 0x15) = 1;
    puVar7[0x16] = lVar17;
    *(undefined4 *)(puVar7 + 0x17) = 0xffffffff;
    *(undefined1 *)((long)puVar7 + 0xbc) = 0;
    puVar7[2] = 0;
    *(undefined4 *)((long)puVar7 + 0x9c) = 0xffffffff;
    *(undefined8 *)((long)puVar7 + 0x94) = 0xffffffffffffffff;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[0x11] = lVar18;
    puVar7[0x10] = lVar22;
    plVar11 = (long *)param_5[0x10b];
    param_5[0x10b] = (long)puVar7;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
      puVar7 = (undefined8 *)param_5[0x10b];
    }
    uStack_118 = 0;
    local_120 = (long ***)&DAT_3f800000;
    uStack_108 = 0;
    local_110 = 0x3f80000000000000;
    uStack_f8 = 0x3f800000;
    local_100 = 0;
    uStack_e8 = 0x3f80000000000000;
    local_f0 = 0;
    plVar11 = *(long **)(*(long *)(puVar7[1] + 0x310) + 0xd0);
    plVar23 = *(long **)(*(long *)(puVar7[1] + 0x310) + 0xd8);
    if (plVar11 == plVar23) {
      lVar17 = 0;
LAB_71026ac650:
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 0xffffffff;
      do {
        if ((*(uint *)(plVar11 + 1) < 2) &&
           (lVar17 = *plVar11, *(long *)(lVar17 + 0x68) == 0x101803a2ed)) {
          if (lVar17 == 0) goto LAB_71026ac650;
          (**(code **)(**(long **)(lVar17 + 0x90) + 0x148))(*(long **)(lVar17 + 0x90),&local_120);
          lVar22 = *(long *)(lVar17 + 0xd8);
          uVar24 = extraout_x1_17;
          if (lVar22 != 0) {
            uStack_98 = uStack_108;
            local_a0 = local_110;
            local_a8 = (undefined1 *)uStack_118;
            local_b0 = local_120;
            local_78 = uStack_e8;
            local_80 = local_f0;
            local_88 = uStack_f8;
            local_90 = local_100;
            if (*(char *)(*(long *)(lVar22 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar22 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_b0);
              uVar24 = extraout_x1_18;
            }
            *(undefined1 *)(lVar22 + 0x20) = 1;
          }
          *(undefined1 *)(lVar17 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar17 + 0x108),uVar24,(long ****)param_7,(byte ****)param_8,
                         (long ****)param_9,param_10,param_11,param_12);
          *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) | 1;
          if (*(long *)(lVar17 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
          }
          if ((*(char *)(lVar17 + 0xe0) != '\0') &&
             (((*(long *)(lVar17 + 200) == 0 ||
               (*(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101,
               *(char *)(lVar17 + 0xe0) != '\0')) && (*(long *)(lVar17 + 200) != 0)))) {
            *(undefined2 *)(*(long *)(lVar17 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar17 + 0xd8) == 0) goto LAB_71026ac650;
          *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x22) = 0;
          if (*(long *)(lVar17 + 0xd8) == 0) goto LAB_71026ac650;
          plVar11 = *(long **)(*(long *)(*(long *)(lVar17 + 0xd8) + 8) + 8);
          uVar5 = (**(code **)(*plVar11 + 0x18))(plVar11,"ItemPoint_O_OBJ_O_HIR");
          goto LAB_71026ac654;
        }
        plVar11 = plVar11 + 2;
      } while (plVar23 != plVar11);
      lVar17 = 0;
    }
LAB_71026ac654:
    *(undefined4 *)((long)puVar7 + 0x94) = uVar5;
    puVar7[2] = lVar17;
    plVar11 = *(long **)(*(long *)(puVar7[1] + 0x310) + 0xd0);
    plVar23 = *(long **)(*(long *)(puVar7[1] + 0x310) + 0xd8);
    if (plVar11 == plVar23) {
      lVar17 = 0;
LAB_71026ac6b4:
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 0xffffffff;
      do {
        if ((*(uint *)(plVar11 + 1) < 2) &&
           (lVar17 = *plVar11, *(long *)(lVar17 + 0x68) == 0x105fa3d83d)) {
          if (lVar17 == 0) goto LAB_71026ac6b4;
          (**(code **)(**(long **)(lVar17 + 0x90) + 0x148))(*(long **)(lVar17 + 0x90),&local_120);
          lVar22 = *(long *)(lVar17 + 0xd8);
          uVar24 = extraout_x1_19;
          if (lVar22 != 0) {
            uStack_98 = uStack_108;
            local_a0 = local_110;
            local_a8 = (undefined1 *)uStack_118;
            local_b0 = local_120;
            local_78 = uStack_e8;
            local_80 = local_f0;
            local_88 = uStack_f8;
            local_90 = local_100;
            if (*(char *)(*(long *)(lVar22 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar22 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_b0);
              uVar24 = extraout_x1_20;
            }
            *(undefined1 *)(lVar22 + 0x20) = 1;
          }
          *(undefined1 *)(lVar17 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar17 + 0x108),uVar24,(long ****)param_7,(byte ****)param_8,
                         (long ****)param_9,param_10,param_11,param_12);
          *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) | 1;
          if (*(long *)(lVar17 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
          }
          if (((*(char *)(lVar17 + 0xe0) != '\0') &&
              ((*(long *)(lVar17 + 200) == 0 ||
               (*(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101,
               *(char *)(lVar17 + 0xe0) != '\0')))) && (*(long *)(lVar17 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar17 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar17 + 0xd8) == 0) goto LAB_71026ac6b4;
          *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x22) = 0;
          if (*(long *)(lVar17 + 0xd8) == 0) goto LAB_71026ac6b4;
          plVar11 = *(long **)(*(long *)(*(long *)(lVar17 + 0xd8) + 8) + 8);
          uVar5 = (**(code **)(*plVar11 + 0x18))(plVar11,"ItemPoint_O_OBJ_O_HIR");
          goto LAB_71026ac6b8;
        }
        plVar11 = plVar11 + 2;
      } while (plVar23 != plVar11);
      lVar17 = 0;
    }
LAB_71026ac6b8:
    *(undefined4 *)(puVar7 + 0x13) = uVar5;
    puVar7[3] = lVar17;
    plVar11 = *(long **)(*(long *)(puVar7[1] + 0x310) + 0xd0);
    plVar23 = *(long **)(*(long *)(puVar7[1] + 0x310) + 0xd8);
    if (plVar11 == plVar23) {
      lVar17 = 0;
LAB_71026ac718:
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 0xffffffff;
      do {
        if ((*(uint *)(plVar11 + 1) < 2) &&
           (lVar17 = *plVar11, *(long *)(lVar17 + 0x68) == 0x1062c3f18d)) {
          if (lVar17 == 0) goto LAB_71026ac718;
          (**(code **)(**(long **)(lVar17 + 0x90) + 0x148))(*(long **)(lVar17 + 0x90),&local_120);
          lVar22 = *(long *)(lVar17 + 0xd8);
          uVar24 = extraout_x1_21;
          if (lVar22 != 0) {
            uStack_98 = uStack_108;
            local_a0 = local_110;
            local_a8 = (undefined1 *)uStack_118;
            local_b0 = local_120;
            local_78 = uStack_e8;
            local_80 = local_f0;
            local_88 = uStack_f8;
            local_90 = local_100;
            if (*(char *)(*(long *)(lVar22 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar22 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_b0);
              uVar24 = extraout_x1_22;
            }
            *(undefined1 *)(lVar22 + 0x20) = 1;
          }
          *(undefined1 *)(lVar17 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar17 + 0x108),uVar24,(long ****)param_7,(byte ****)param_8,
                         (long ****)param_9,param_10,param_11,param_12);
          *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) | 1;
          if (*(long *)(lVar17 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
          }
          if ((*(char *)(lVar17 + 0xe0) != '\0') &&
             (((*(long *)(lVar17 + 200) == 0 ||
               (*(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101,
               *(char *)(lVar17 + 0xe0) != '\0')) && (*(long *)(lVar17 + 200) != 0)))) {
            *(undefined2 *)(*(long *)(lVar17 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar17 + 0xd8) == 0) goto LAB_71026ac718;
          *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x22) = 0;
          if (*(long *)(lVar17 + 0xd8) == 0) goto LAB_71026ac718;
          plVar11 = *(long **)(*(long *)(*(long *)(lVar17 + 0xd8) + 8) + 8);
          uVar5 = (**(code **)(*plVar11 + 0x18))(plVar11,"ItemPoint_O_OBJ_O_HIR");
          goto LAB_71026ac71c;
        }
        plVar11 = plVar11 + 2;
      } while (plVar23 != plVar11);
      lVar17 = 0;
    }
LAB_71026ac71c:
    uVar24 = puVar7[1];
    *(undefined4 *)((long)puVar7 + 0x9c) = uVar5;
    puVar7[4] = lVar17;
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                            param_10,param_11,param_12);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_b0 = (long ***)&DAT_00000010;
        param_7 = (undefined **)&local_b0;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar16 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)param_7,(byte ****)param_8,
                                    (long ****)param_9,param_10,param_11,param_12),
           puVar8 != (undefined8 *)0x0)) goto LAB_71026ac784;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_71026ac784:
    uVar25 = puVar7[5];
    *puVar8 = &PTR_FUN_71050cda00;
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x50,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                             param_10,param_11,param_12);
    if (puVar12 == (undefined8 *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000050;
      param_7 = (undefined **)&local_b0;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      puVar12 = (undefined8 *)
                FUN_710392e290(0x10,0x50,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                               param_10,param_11,param_12);
    }
    lVar22 = _DAT_7107521008;
    lVar17 = _ConstantZero;
    *(undefined1 *)(puVar12 + 2) = 0;
    *puVar12 = uVar24;
    puVar12[1] = uVar25;
    *(undefined4 *)((long)puVar12 + 0x14) = 0x50000000;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[7] = lVar22;
    puVar12[6] = lVar17;
    puVar12[9] = lVar22;
    puVar12[8] = lVar17;
    puVar8[1] = puVar12;
    plVar11 = (long *)puVar7[0x14];
    puVar7[0x14] = puVar8;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    lVar17 = puVar7[1];
    plVar11 = (long *)FUN_710392e290(0x10,0x68,(long ****)param_7,(byte ****)param_8,
                                     (long ****)param_9,param_10,param_11,param_12);
    if (plVar11 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_b0 = (long ***)&DAT_00000068;
        pppplVar14 = &local_b0;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar16 & 1) != 0) &&
           (plVar11 = (long *)FUN_710392e290(0x10,0x68,pppplVar14,(byte ****)param_8,
                                             (long ****)param_9,param_10,param_11,param_12),
           plVar11 != (long *)0x0)) goto LAB_71026ac874;
      }
      plVar11 = (long *)0x0;
    }
LAB_71026ac874:
    param_7 = (undefined **)&local_b0;
    local_b0 = (long ***)0x1;
    local_a8 = &DAT_100000001;
    local_a0 = 0x1000000001;
    FUN_710313e6a0(plVar11,lVar17,(long ****)param_7,(byte ****)param_8,(long ****)param_9,param_10,
                   param_11,param_12);
    *plVar11 = (long)&PTR_FUN_7105178a88;
    *(undefined4 *)((long)plVar11 + 0x44) = 1;
    *(undefined2 *)(plVar11 + 9) = 0;
    *(undefined1 *)((long)plVar11 + 0x5c) = 1;
    *(undefined8 *)((long)plVar11 + 0x54) = 0;
    *(undefined8 *)((long)plVar11 + 0x4c) = 0;
    *(undefined1 *)(plVar11 + 0xc) = 0;
    puVar7[6] = plVar11;
    local_c0 = *(undefined4 *)(puVar7[5] + 0x44);
    uVar20 = *(uint *)(puVar7[5] + 0x40);
    local_90 = CONCAT44(2,local_c0);
    local_b0 = (long ***)0x0;
    local_a8 = (undefined1 *)0x0;
    uStack_98 = 0;
    local_a0 = (ulong)uVar20 << 0x20;
    uVar24 = extraout_x1_11;
    if (plVar11[7] != 0) {
      plVar11 = *(long **)(plVar11[7] + 0x130);
      param_7 = (undefined **)&local_b0;
      param_8 = (undefined1 (*) [16])0x0;
      param_9 = (undefined1 (*) [16])0x0;
      param_10 = (undefined1 (*) [16])0x0;
      (**(code **)(*plVar11 + 0x58))(plVar11,0);
      plVar11 = (long *)puVar7[6];
      uVar24 = extraout_x1_12;
    }
    lStack_c8 = _DAT_7107521008;
    lStack_d0 = _ConstantZero;
    uStack_bc = 0;
    uStack_d8 = 0;
    local_e0 = (long ***)((ulong)uVar20 << 0x20);
    if (plVar11[7] != 0) {
      plVar11 = *(long **)(plVar11[7] + 0x130);
      param_7 = (undefined **)&local_e0;
      param_8 = (undefined1 (*) [16])0x1;
      param_9 = (undefined1 (*) [16])0x0;
      param_10 = (undefined1 (*) [16])0x0;
      (**(code **)(*plVar11 + 0x58))(plVar11,0);
      plVar11 = (long *)puVar7[6];
      uVar24 = extraout_x1_13;
    }
    if (plVar11 != (long *)0x0) {
      if (plVar11[7] != 0) {
        plVar11 = *(long **)(plVar11[7] + 0x130);
        (**(code **)(*plVar11 + 0x78))(plVar11,0);
        plVar11 = (long *)puVar7[6];
        uVar24 = extraout_x1_14;
      }
      if ((char)plVar11[8] != '\0') {
        plVar23 = (long *)plVar11[6];
        if (((plVar23 != (long *)0x0) && ((char)plVar23[2] != '\0')) &&
           (*(undefined1 *)(plVar23 + 2) = 0, (char)plVar23[10] != '\0')) {
          plVar13 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar23 + 8));
          (**(code **)(*plVar13 + 0x48))(plVar13,0);
          *(undefined1 *)(plVar23 + 10) = 0;
        }
        (**(code **)(*plVar11 + 0x30))(plVar11);
        uVar24 = extraout_x1_15;
      }
      *(undefined1 *)(plVar11 + 8) = 0;
      *(undefined1 *)(puVar7[6] + 0x60) = 1;
    }
    local_b0 = (long ***)0x0;
    if (*(long *)(*(long *)puVar7[0x16] + 8) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      param_7 = (undefined **)0x0;
      uVar5 = FUN_7102405040(*(long *)(*(long *)puVar7[0x16] + 8),&local_b0,0,(byte ****)param_8,
                             (long ****)param_9,param_10,param_11,param_12);
      uVar24 = extraout_x1_16;
    }
    *(undefined4 *)(puVar7 + 0x17) = uVar5;
    *(undefined1 *)(puVar7 + 7) = 1;
    FUN_71026aec40(param_5[0x10b],uVar24,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                   param_10,param_11,param_12);
  }
  plVar11 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_7,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000038;
      param_7 = (undefined **)&local_b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
      if (((uVar16 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_7,(byte ****)param_8,
                                           (long ****)param_9,param_10,param_11,param_12),
         plVar11 != (long *)0x0)) goto LAB_71026aca7c;
    }
    plVar11 = (long *)0x0;
  }
LAB_71026aca7c:
  *plVar11 = (long)&PTR_FUN_71050cdf20;
  plVar11[1] = (long)param_5;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar9;
  *(undefined2 *)(plVar11 + 4) = 0x20;
  *(undefined1 *)((long)plVar11 + 0x22) = 0;
  *(undefined4 *)((long)plVar11 + 0x24) = 0;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined1 *)((long)plVar11 + 0x2a) = 1;
  *(undefined8 *)((long)plVar11 + 0x2c) = 0;
  *(undefined4 *)((long)plVar11 + 0x34) = 0;
  FUN_71026b5be0(plVar11,(uint)*(byte *)(param_5 + 0x10e),(long ****)param_7,(byte ****)param_8,
                 (long ****)param_9,param_10,param_11,param_12);
  param_5[0x108] = (long)plVar11;
  plVar11 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_7,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000038;
      param_7 = (undefined **)&local_b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
      if (((uVar16 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_7,(byte ****)param_8,
                                           (long ****)param_9,param_10,param_11,param_12),
         plVar11 != (long *)0x0)) goto LAB_71026acb1c;
    }
    plVar11 = (long *)0x0;
  }
LAB_71026acb1c:
  *(undefined2 *)(plVar11 + 4) = 0x20;
  *plVar11 = (long)&PTR_FUN_71050cdf70;
  plVar11[1] = (long)param_5;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar9;
  *(undefined1 *)((long)plVar11 + 0x22) = 0;
  *(undefined4 *)((long)plVar11 + 0x24) = 0;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined1 *)((long)plVar11 + 0x2a) = 1;
  *(undefined8 *)((long)plVar11 + 0x2c) = 0;
  *(undefined4 *)((long)plVar11 + 0x34) = 0;
  FUN_71026b5d70(plVar11,(uint)*(byte *)(param_5 + 0x10e),(long ****)param_7,(byte ****)param_8,
                 (long ****)param_9,param_10,param_11,param_12);
  param_5[0x109] = (long)plVar11;
  plVar11 = (long *)FUN_710392e290(0x10,0x60,(long ****)param_7,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000060;
      param_7 = (undefined **)&local_b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
      if (((uVar16 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x60,(long ****)param_7,(byte ****)param_8,
                                           (long ****)param_9,param_10,param_11,param_12),
         plVar11 != (long *)0x0)) goto LAB_71026acbb4;
    }
    plVar11 = (long *)0x0;
  }
LAB_71026acbb4:
  lVar18 = param_5[0x67];
  *plVar11 = (long)&PTR_FUN_71050cdfc0;
  plVar11[1] = (long)param_5;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar9;
  *(undefined2 *)(plVar11 + 4) = 0x20;
  *(undefined1 *)((long)plVar11 + 0x22) = 0;
  *(undefined4 *)((long)plVar11 + 0x24) = 0;
  *(undefined2 *)(plVar11 + 5) = 0;
  *(undefined1 *)((long)plVar11 + 0x2a) = 1;
  *(undefined8 *)((long)plVar11 + 0x2c) = 0;
  *(undefined8 *)((long)plVar11 + 0x34) = 0;
  lVar22 = _DAT_7107521008;
  lVar17 = _ConstantZero;
  plVar11[10] = lVar18;
  *(undefined4 *)(plVar11 + 0xb) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0x5c) = 0;
  plVar11[9] = lVar22;
  plVar11[8] = lVar17;
  FUN_71026b6120(plVar11,(uint)*(byte *)(param_5 + 0x10e),(long ****)param_7,(byte ****)param_8,
                 (long ****)param_9,param_10,param_11,param_12);
  if (*(byte *)((long)param_5 + 0x872) < 2) {
    *(undefined1 *)((long)plVar11 + 0x29) = 1;
  }
  param_5[0x10a] = (long)plVar11;
  if ((char)param_5[3] == '\0') {
    for (plVar9 = *(long **)(param_5[0x62] + 0xd0); plVar9 != *(long **)(param_5[0x62] + 0xd8);
        plVar9 = plVar9 + 2) {
      if ((*(uint *)(plVar9 + 1) < 2) &&
         (lVar17 = *plVar9, *(long *)(lVar17 + 0x68) == 0x1324f918c0)) goto LAB_71026acc6c;
    }
    lVar17 = 0;
LAB_71026acc6c:
    param_5[0x10d] = lVar17;
  }
  plVar9 = (long *)FUN_710392e290(0x10,0x10,(long ****)param_7,(byte ****)param_8,(long ****)param_9
                                  ,param_10,param_11,param_12);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120 = (long ***)((ulong)local_120 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000010;
      pppplVar14 = &local_b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
      if (((uVar16 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar14,(byte ****)param_8,(long ****)param_9
                                          ,param_10,param_11,param_12), plVar9 != (long *)0x0))
      goto LAB_71026acccc;
    }
    plVar9 = (long *)0x0;
  }
LAB_71026acccc:
  pppplVar14 = (long ****)(ulong)*(byte *)(param_5 + 0x10e);
  FUN_71026afeb0(plVar9,(long)param_5,pppplVar14,(byte ****)param_8,(long ****)param_9,param_10,
                 param_11,param_12);
  plVar11 = *(long **)(param_5[0x62] + 0xd0);
  do {
    if (plVar11 == *(long **)(param_5[0x62] + 0xd8)) {
LAB_71026acd24:
      (**(code **)(*plVar9 + 8))(plVar9);
      if ((*(char *)((long)param_5 + 0x872) == '\x01') &&
         (plVar9 = *(long **)(*(long *)param_5[0x67] + 8), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0071026acd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x58))(plVar9,9,0xffffffff);
        return;
      }
      return;
    }
    if ((*(uint *)(plVar11 + 1) < 2) &&
       (lVar17 = *plVar11, *(long *)(lVar17 + 0x68) == 0x1324f918c0)) {
      if (lVar17 != 0) {
        FUN_71026b0370(plVar9[1],lVar17,pppplVar14,(byte ****)param_8,(long ****)param_9,param_10,
                       param_11,param_12);
      }
      goto LAB_71026acd24;
    }
    plVar11 = plVar11 + 2;
  } while( true );
}

