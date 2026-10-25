// addr:      7102a94430
// offset:    0x2a94430
// name:      FUN_7102a94430
// mangled:   
// signature: undefined __cdecl FUN_7102a94430(byte * * param_1, undefined8 param_2, undefined * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102a94430(byte **param_1,undefined8 param_2,undefined **param_3,undefined1 (*param_4) [16]
                   ,undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ******param_7,
                   long ***param_8)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *__s2;
  byte ***pppbVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar8;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  long ****pppplVar9;
  byte ****ppppbVar10;
  undefined4 uVar11;
  byte *pbVar12;
  float *pfVar13;
  byte **ppbVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  long ***ppplVar19;
  uint *puVar20;
  byte *pbVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  long ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long ***local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 local_7c;
  undefined2 uStack_7a;
  undefined8 local_78;
  
  FUN_71025d9250((long *)param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)((long)param_1 + 0x9ea) = 0;
  if ((*(byte *)(param_1 + 0x1b) >> 4 & 1) != 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51ba != '\0') {
      *(undefined1 *)((long)param_1 + 0x9ea) = 8;
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71052c51b0 & 0xfe) == 4) {
    *(undefined1 *)((long)param_1 + 0x9ea) = 8;
  }
  *(undefined8 *)((long)param_1 + 0xaf4) = 0x3f800000bf800000;
  *(undefined8 *)((long)param_1 + 0xafc) = 0x42000000;
  *(undefined4 *)((long)param_1 + 0xb04) = 0;
  *(undefined8 *)((long)param_1 + 0xac4) = 0x42dc0000c2dc0000;
  *(undefined8 *)((long)param_1 + 0xacc) = 0x44340000;
  *(undefined4 *)((long)param_1 + 0xad4) = 0;
  *(undefined8 *)((long)param_1 + 0xadc) = 0x42dc0000c2dc0000;
  *(undefined8 *)((long)param_1 + 0xae4) = 0x44340000;
  pbVar12 = param_1[0x14d];
  *(undefined4 *)((long)param_1 + 0xaec) = 0;
  pbVar12[0] = 0x49;
  pbVar12[1] = 0x92;
  pbVar12[2] = 100;
  pbVar12[3] = 0x41;
  pbVar12 = param_1[0x14d];
  pbVar12[4] = 0x49;
  pbVar12[5] = 0x92;
  pbVar12[6] = 100;
  pbVar12[7] = 0x41;
  pbVar12 = param_1[0x14d];
  pbVar12[8] = 0x49;
  pbVar12[9] = 0x92;
  pbVar12[10] = 100;
  pbVar12[0xb] = 0x41;
  pbVar12 = param_1[0x14d];
  pbVar12[0xc] = 0x49;
  pbVar12[0xd] = 0x92;
  pbVar12[0xe] = 100;
  pbVar12[0xf] = 0x41;
  pbVar12 = param_1[0x14d];
  pbVar12[0x10] = 0x49;
  pbVar12[0x11] = 0x92;
  pbVar12[0x12] = 100;
  pbVar12[0x13] = 0x41;
  pbVar12 = param_1[0x14d];
  pbVar12[0x14] = 0x49;
  pbVar12[0x15] = 0x92;
  pbVar12[0x16] = 100;
  pbVar12[0x17] = 0x41;
  pbVar12 = param_1[0x14d];
  pbVar12[0x18] = 0x49;
  pbVar12[0x19] = 0x92;
  pbVar12[0x1a] = 100;
  pbVar12[0x1b] = 0x41;
  pfVar13 = (float *)param_1[0xf5];
  lVar15 = (long)param_1[0xf6] - (long)pfVar13;
  if (((lVar15 == 0) || ((ulong)(lVar15 >> 2) < 2)) || (lVar15 == 8)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_7103177e00(*pfVar13 / 255.0,pfVar13[1] / 255.0,(uint)(pfVar13[2] / 255.0),
                 *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0),
                 *(ulong *)(param_1[99] + 8));
  switch(*(undefined1 *)((long)param_1 + 0x53)) {
  case 0:
    *(undefined4 *)((long)param_1 + 0x9f4) = 8;
    goto switchD_7102a945c4_default;
  case 1:
    *(undefined4 *)((long)param_1 + 0x9f4) = 0;
    *(undefined4 *)((long)param_1 + 0x9ec) = 0;
    goto switchD_7102a945c4_default;
  case 2:
    uVar11 = 1;
    break;
  case 3:
    uVar11 = 2;
    break;
  case 4:
    uVar11 = 3;
    break;
  case 5:
    uVar11 = 6;
    break;
  default:
    goto switchD_7102a945c4_default;
  }
  *(undefined4 *)((long)param_1 + 0x9f4) = uVar11;
  *(undefined4 *)((long)param_1 + 0x9ec) = uVar11;
switchD_7102a945c4_default:
  uVar25 = 0;
  uVar8 = extraout_x1;
  do {
    param_1[uVar25 * 3 + 0x123] = param_1[uVar25 * 3 + 0x122];
    if (((&DAT_710510b750)[uVar25 * 3] & 0xffffffffff) != 0) {
      for (puVar1 = *(undefined8 **)(param_1[0x62] + 0xd0);
          puVar1 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar1 = puVar1 + 2) {
        if ((*(uint *)(puVar1 + 1) < 2) &&
           (pbVar12 = (byte *)*puVar1,
           ((&DAT_710510b750)[uVar25 * 3] & 0xffffffffff) == *(ulong *)(pbVar12 + 0x68))) {
          ppbVar14 = param_1 + uVar25 + 0x10e;
          param_1[uVar25 + 0x10e] = pbVar12;
          if (pbVar12 == (byte *)0x0) goto LAB_7102a94680;
          if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
            *(undefined2 *)(*(long *)(pbVar12 + 200) + 0x32) = 0;
          }
          if (*(long *)(pbVar12 + 0xd8) == 0) goto LAB_7102a94680;
          *(undefined1 *)(*(long *)(pbVar12 + 0xd8) + 0x22) = 0;
          pbVar12 = *ppbVar14;
          goto joined_r0x007102a94b3c;
        }
      }
    }
    ppbVar14 = param_1 + uVar25 + 0x10e;
    param_1[uVar25 + 0x10e] = (byte *)0x0;
LAB_7102a94680:
    pbVar12 = *ppbVar14;
joined_r0x007102a94b3c:
    if (pbVar12 != (byte *)0x0) {
      if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar12 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(pbVar12 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(pbVar12 + 0xd8) + 0x21) = 1;
      }
      if (pbVar12[0xe0] != 0) {
        *(undefined1 *)(*(long *)(pbVar12 + 0xb0) + 0x10) = 0;
      }
      pbVar12 = *ppbVar14;
      if (pbVar12 != (byte *)0x0) {
        pbVar12[0x110] = 0;
        FUN_71025e9d50((long *)(pbVar12 + 0x108),uVar8,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
    }
    if (uVar25 == 7) break;
    if (uVar25 == 6) {
      pbVar12 = (byte *)FUN_710392e290(0x10,0x170,(long ****)param_3,(byte ****)param_4,
                                       (long ****)param_5,param_6,param_7,param_8);
      if (pbVar12 == (byte *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
          local_b0 = (long ***)&DAT_00000170;
          pppplVar9 = &local_b0;
          uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
          if (((uVar5 & 1) != 0) &&
             (pbVar12 = (byte *)FUN_710392e290(0x10,0x170,pppplVar9,(byte ****)param_4,
                                               (long ****)param_5,param_6,param_7,param_8),
             pbVar12 != (byte *)0x0)) goto LAB_7102a94748;
        }
        pbVar12 = (byte *)0x0;
      }
LAB_7102a94748:
      param_4 = (undefined1 (*) [16])0x0;
      param_5 = (undefined1 (*) [16])0x0;
      param_6 = (undefined1 (*) [16])0x0;
      param_7 = (long ******)0x0;
      param_3 = (undefined **)PTR_s_s22_bg_mtdedede3_stg_710510b7e8;
      FUN_7102a996d0((undefined8 *)pbVar12,(long)param_1,PTR_s_s22_bg_mtdedede3_stg_710510b7e8,0,
                     (long ****)0x0,(byte *)0x0,(long ***)0x0,param_8);
      param_1[0x11c] = pbVar12;
      ppbVar14 = param_1 + 0x11c;
    }
    else {
      pbVar12 = (byte *)FUN_710392e290(0x10,0x170,(long ****)param_3,(byte ****)param_4,
                                       (long ****)param_5,param_6,param_7,param_8);
      if (pbVar12 == (byte *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
          local_b0 = (long ***)&DAT_00000170;
          pppplVar9 = &local_b0;
          uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
          if (((uVar5 & 1) != 0) &&
             (pbVar12 = (byte *)FUN_710392e290(0x10,0x170,pppplVar9,(byte ****)param_4,
                                               (long ****)param_5,param_6,param_7,param_8),
             pbVar12 != (byte *)0x0)) goto LAB_7102a947d8;
        }
        pbVar12 = (byte *)0x0;
      }
LAB_7102a947d8:
      param_3 = (undefined **)(&PTR_s_s22_bg_greengreens_stg_710510b758)[uVar25 * 3];
      param_6 = (undefined1 (*) [16])(&PTR_s_s22_bg_greengreens_stg01_710510b760)[uVar25 * 3];
      param_4 = (undefined1 (*) [16])0x0;
      param_5 = (undefined1 (*) [16])0x0;
      param_7 = (long ******)0x0;
      FUN_7102a996d0((undefined8 *)pbVar12,(long)param_1,(byte *)param_3,0,(long ****)0x0,
                     (byte *)param_6,(long ***)0x0,param_8);
      ppbVar14 = param_1 + uVar25 + 0x116;
      param_1[uVar25 + 0x116] = pbVar12;
    }
    (**(code **)(*(long *)pbVar12 + 0x90))(pbVar12);
    lVar15 = *(long *)(*ppbVar14 + 0x70);
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar15 + 200) + 0x32) = 0;
      }
      if (*(long *)(lVar15 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x22) = 0;
      }
    }
    lVar15 = *(long *)(*ppbVar14 + 0x70);
    uVar8 = extraout_x1_00;
    if (((lVar15 != 0) && (*(char *)(lVar15 + 0xe0) != '\0')) &&
       (iVar3 = (**(code **)(**(long **)(lVar15 + 0x90) + 0x220))(), uVar8 = extraout_x1_01,
       iVar3 != 0)) {
      uVar24 = 0;
      ppbVar14 = param_1 + uVar25 * 3 + 0x123;
      do {
        if ((*(char *)(lVar15 + 0xe0) == '\0') ||
           (uVar4 = (**(code **)(**(long **)(lVar15 + 0x90) + 0x220))(), uVar4 <= uVar24)) {
          __s2 = (char *)0x0;
        }
        else {
          __s2 = (char *)(**(code **)(**(long **)(lVar15 + 0x90) + 0x228))
                                   (*(long **)(lVar15 + 0x90),uVar24);
        }
        param_3 = (undefined **)&DAT_00000007;
        iVar3 = strncmp("inkMesh",__s2,7);
        uVar8 = extraout_x1_06;
        if (iVar3 == 0) {
          puVar20 = (uint *)*ppbVar14;
          puVar16 = (uint *)param_1[uVar25 * 3 + 0x124];
          if (puVar20 == puVar16) {
            pbVar12 = param_1[uVar25 * 3 + 0x122];
            pppplVar9 = (long ****)((long)puVar20 - (long)pbVar12);
            lVar22 = (long)pppplVar9 >> 2;
            uVar5 = lVar22 + 1;
            if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar17 = (long)puVar16 - (long)pbVar12;
            if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
              uVar18 = lVar17 >> 1;
              if (uVar5 <= uVar18) {
                uVar5 = uVar18;
              }
              if (uVar5 != 0) {
                if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                goto LAB_7102a9490c;
              }
              pbVar21 = (byte *)0x0;
            }
            else {
              uVar5 = 0x3fffffffffffffff;
LAB_7102a9490c:
              ppplVar19 = (long ***)(uVar5 * 4);
              if (ppplVar19 == (long ***)0x0) {
                ppplVar19 = (long ***)0x1;
              }
              pbVar21 = (byte *)FUN_710392e290(0x10,ppplVar19,(long ****)param_3,(byte ****)param_4,
                                               (long ****)param_5,param_6,param_7,param_8);
              uVar8 = extraout_x1_02;
              if (pbVar21 == (byte *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
                  param_3 = (undefined **)&local_b0;
                  local_b0 = ppplVar19;
                  auVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
                  uVar8 = auVar26._8_8_;
                  if (((auVar26._0_8_ & 1) != 0) &&
                     (pbVar21 = (byte *)FUN_710392e290(0x10,ppplVar19,(long ****)param_3,
                                                       (byte ****)param_4,(long ****)param_5,param_6
                                                       ,param_7,param_8), uVar8 = extraout_x1_03,
                     pbVar21 != (byte *)0x0)) goto LAB_7102a94974;
                }
                pbVar21 = (byte *)0x0;
              }
            }
LAB_7102a94974:
            *(uint *)(pbVar21 + lVar22 * 4) = uVar24;
            if (0 < (long)pppplVar9) {
              memcpy(pbVar21,pbVar12,(size_t)pppplVar9);
              uVar8 = extraout_x1_04;
              param_3 = (undefined **)pppplVar9;
            }
            param_1[uVar25 * 3 + 0x122] = pbVar21;
            *ppbVar14 = (byte *)((long)(pbVar21 + lVar22 * 4) + 4);
            param_1[uVar25 * 3 + 0x124] = pbVar21 + uVar5 * 4;
            if (pbVar12 == (byte *)0x0) goto LAB_7102a94a30;
            FUN_710392eb40((ulong)pbVar12);
            cVar2 = *(char *)(lVar15 + 0xe0);
            uVar8 = extraout_x1_05;
          }
          else {
            *puVar20 = uVar24;
            *ppbVar14 = *ppbVar14 + 4;
            cVar2 = *(char *)(lVar15 + 0xe0);
          }
        }
        else {
LAB_7102a94a30:
          cVar2 = *(char *)(lVar15 + 0xe0);
        }
        if (cVar2 == '\0') break;
        uVar24 = uVar24 + 1;
        uVar4 = (**(code **)(**(long **)(lVar15 + 0x90) + 0x220))();
        uVar8 = extraout_x1_07;
      } while (uVar24 < uVar4);
    }
    if (uVar25 == 2) {
      for (puVar1 = *(undefined8 **)(param_1[0x62] + 0xd0);
          puVar1 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar1 = puVar1 + 2) {
        if ((*(uint *)(puVar1 + 1) < 2) &&
           (pbVar12 = (byte *)*puVar1, *(long *)(pbVar12 + 0x68) == 0x167df5213b)) {
          param_1[0x13a] = pbVar12;
          if (pbVar12 == (byte *)0x0) goto LAB_7102a94aa4;
          if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
            *(undefined2 *)(*(long *)(pbVar12 + 200) + 0x32) = 0;
          }
          if (*(long *)(pbVar12 + 0xd8) == 0) goto LAB_7102a94aa4;
          *(undefined1 *)(*(long *)(pbVar12 + 0xd8) + 0x22) = 0;
          pbVar12 = param_1[0x13a];
          goto joined_r0x007102a94b70;
        }
      }
      param_1[0x13a] = (byte *)0x0;
LAB_7102a94aa4:
      pbVar12 = param_1[0x13a];
joined_r0x007102a94b70:
      if (pbVar12 != (byte *)0x0) {
        if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar12 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(pbVar12 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar12 + 0xd8) + 0x21) = 1;
        }
        if (pbVar12[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar12 + 0xb0) + 0x10) = 0;
        }
        pbVar12 = param_1[0x13a];
        if (pbVar12 != (byte *)0x0) {
          pbVar12[0x110] = 0;
          FUN_71025e9d50((long *)(pbVar12 + 0x108),uVar8,(long ****)param_3,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          uVar8 = extraout_x1_08;
        }
      }
    }
    uVar25 = uVar25 + 1;
  } while (uVar25 < 8);
  pbVar12 = param_1[0x62];
  for (puVar1 = *(undefined8 **)(pbVar12 + 0xd0); puVar1 != *(undefined8 **)(pbVar12 + 0xd8);
      puVar1 = puVar1 + 2) {
    if ((*(uint *)(puVar1 + 1) < 2) &&
       (pbVar21 = (byte *)*puVar1, *(long *)(pbVar21 + 0x68) == 0xb8c8c65c2)) goto LAB_7102a94bc0;
  }
  pbVar21 = (byte *)0x0;
LAB_7102a94bc0:
  param_1[0x11e] = pbVar21;
  for (puVar1 = *(undefined8 **)(pbVar12 + 0xd0); puVar1 != *(undefined8 **)(pbVar12 + 0xd8);
      puVar1 = puVar1 + 2) {
    if ((*(uint *)(puVar1 + 1) < 2) &&
       (pbVar21 = (byte *)*puVar1, *(long *)(pbVar21 + 0x68) == 0xd7039ae73)) goto LAB_7102a94c08;
  }
  pbVar21 = (byte *)0x0;
LAB_7102a94c08:
  param_1[0x11f] = pbVar21;
  for (puVar1 = *(undefined8 **)(pbVar12 + 0xd0); puVar1 != *(undefined8 **)(pbVar12 + 0xd8);
      puVar1 = puVar1 + 2) {
    if ((*(uint *)(puVar1 + 1) < 2) &&
       (pbVar21 = (byte *)*puVar1, *(long *)(pbVar21 + 0x68) == 0xd825bae3d)) goto LAB_7102a94c50;
  }
  pbVar21 = (byte *)0x0;
LAB_7102a94c50:
  param_1[0x120] = pbVar21;
  for (puVar1 = *(undefined8 **)(pbVar12 + 0xd0); puVar1 != *(undefined8 **)(pbVar12 + 0xd8);
      puVar1 = puVar1 + 2) {
    if ((*(uint *)(puVar1 + 1) < 2) &&
       (pbVar21 = (byte *)*puVar1, *(long *)(pbVar21 + 0x68) == 0xeb32e4ad5)) {
      param_1[0x121] = pbVar21;
      if (pbVar21 == (byte *)0x0) goto LAB_7102a94c9c;
      if ((pbVar21[0xe0] != 0) && (*(long *)(pbVar21 + 200) != 0)) {
        *(undefined2 *)(*(long *)(pbVar21 + 200) + 0x32) = 0;
      }
      if (*(long *)(pbVar21 + 0xd8) == 0) goto LAB_7102a94c9c;
      *(undefined1 *)(*(long *)(pbVar21 + 0xd8) + 0x22) = 0;
      pbVar12 = param_1[0x121];
      goto joined_r0x007102a95220;
    }
  }
  param_1[0x121] = (byte *)0x0;
LAB_7102a94c9c:
  pbVar12 = param_1[0x121];
joined_r0x007102a95220:
  if (pbVar12 != (byte *)0x0) {
    if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
      *(undefined2 *)(*(long *)(pbVar12 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(pbVar12 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(pbVar12 + 0xd8) + 0x21) = 1;
    }
    if (pbVar12[0xe0] != 0) {
      *(undefined1 *)(*(long *)(pbVar12 + 0xb0) + 0x10) = 0;
    }
  }
  pppbVar6 = (byte ***)
             FUN_710392e290(0x10,0x110,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                            param_6,param_7,param_8);
  if (pppbVar6 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000110;
      pppplVar9 = &local_b0;
      uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar25 & 1) != 0) &&
         (pppbVar6 = (byte ***)
                     FUN_710392e290(0x10,0x110,pppplVar9,(byte ****)param_4,(long ****)param_5,
                                    param_6,param_7,param_8), pppbVar6 != (byte ***)0x0))
      goto LAB_7102a94d38;
    }
    pppbVar6 = (byte ***)0x0;
  }
LAB_7102a94d38:
  ppppbVar10 = (byte ****)0x0;
  FUN_7103140260(pppbVar6,param_1,(byte *)0x0,(byte ****)0x0,(long ****)param_5,param_6,
                 (long ***)param_7,param_8);
  param_1[0x13c] = (byte *)pppbVar6;
  local_90 = 0;
  local_88 = 0x50000000;
  uStack_84 = 0xffffffff;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = (long ***)0xc160000043480000;
  local_7c = 0;
  local_78 = CONCAT44(local_78._4_4_,0x50000000);
  uStack_98 = 0;
  local_a0 = 0x40800000442f0000;
  pppplVar9 = (long ****)0x0;
  (*(code *)(*pppbVar6)[0x13])(pppbVar6,&local_b0);
  (**(code **)(*(long *)param_1[0x13c] + 0x90))();
  FUN_710313ef20((long *)param_1[0x13c]);
  pbVar12 = param_1[0x13c];
  if (pbVar12[0x40] != 0) {
    plVar23 = *(long **)(pbVar12 + 0x30);
    if (((plVar23 != (long *)0x0) && ((char)plVar23[2] != '\0')) &&
       (*(undefined1 *)(plVar23 + 2) = 0, (char)plVar23[10] != '\0')) {
      plVar7 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar23 + 8));
      (**(code **)(*plVar7 + 0x48))(plVar7,0);
      *(undefined1 *)(plVar23 + 10) = 0;
    }
    (**(code **)(*(long *)pbVar12 + 0x30))(pbVar12);
  }
  pbVar12[0x40] = 0;
  pppbVar6 = (byte ***)
             FUN_710392e290(0x10,0x110,pppplVar9,ppppbVar10,(long ****)param_5,param_6,param_7,
                            param_8);
  if (pppbVar6 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000110;
      pppplVar9 = &local_b0;
      uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar25 & 1) != 0) &&
         (pppbVar6 = (byte ***)
                     FUN_710392e290(0x10,0x110,pppplVar9,ppppbVar10,(long ****)param_5,param_6,
                                    param_7,param_8), pppbVar6 != (byte ***)0x0))
      goto LAB_7102a94e6c;
    }
    pppbVar6 = (byte ***)0x0;
  }
LAB_7102a94e6c:
  ppppbVar10 = (byte ****)0x0;
  FUN_7103140260(pppbVar6,param_1,(byte *)0x0,(byte ****)0x0,(long ****)param_5,param_6,
                 (long ***)param_7,param_8);
  param_1[0x157] = (byte *)pppbVar6;
  local_90 = 0;
  uStack_84 = 0xffffffff;
  uStack_80 = 0;
  local_88 = 0x50000000;
  uStack_a8 = 0;
  local_b0 = (long ***)0x4248000000000000;
  local_7c = 0;
  local_78 = CONCAT44(local_78._4_4_,0x50000000);
  uStack_98 = 0;
  local_a0 = 0x4302000043200000;
  pppplVar9 = (long ****)0x0;
  (*(code *)(*pppbVar6)[0x13])(pppbVar6,&local_b0);
  (**(code **)(*(long *)param_1[0x157] + 0x90))();
  FUN_710313ef20((long *)param_1[0x157]);
  for (puVar1 = *(undefined8 **)(param_1[0x62] + 0xd0);
      puVar1 != *(undefined8 **)(param_1[0x62] + 0xd8); puVar1 = puVar1 + 2) {
    if ((*(uint *)(puVar1 + 1) < 2) &&
       (pbVar12 = (byte *)*puVar1, *(long *)(pbVar12 + 0x68) == 0x8cf20f51a)) goto LAB_7102a94f2c;
  }
  pbVar12 = (byte *)0x0;
LAB_7102a94f2c:
  param_1[0x13b] = pbVar12;
  uStack_e8 = 0;
  local_f0 = (long ***)&DAT_3f800000;
  local_d8 = 0;
  local_e0 = 0x3f80000000000000;
  uStack_c8 = 0x3f800000;
  local_d0 = 0;
  local_b8 = 0x3f800000c0a00000;
  local_c0 = 0;
  uVar8 = extraout_x1_09;
  if (pbVar12 != (byte *)0x0) {
    (**(code **)(**(long **)(pbVar12 + 0x90) + 0x148))(*(long **)(pbVar12 + 0x90),&local_f0);
    lVar15 = *(long *)(pbVar12 + 0xd8);
    uVar8 = extraout_x1_10;
    if (lVar15 != 0) {
      uStack_98 = local_d8;
      local_a0 = local_e0;
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      local_78 = local_b8;
      uStack_80 = (undefined4)local_c0;
      local_7c = (undefined2)((ulong)local_c0 >> 0x20);
      uStack_7a = (undefined2)((ulong)local_c0 >> 0x30);
      local_88 = (undefined4)uStack_c8;
      uStack_84 = (undefined4)((ulong)uStack_c8 >> 0x20);
      local_90 = local_d0;
      if (*(char *)(*(long *)(lVar15 + 8) + 0xa8) != '\0') {
        plVar23 = *(long **)(*(long *)(lVar15 + 8) + 0x48);
        (**(code **)(*plVar23 + 0x20))(plVar23,&local_b0);
        uVar8 = extraout_x1_11;
      }
      *(undefined1 *)(lVar15 + 0x20) = 1;
    }
  }
  pbVar12 = param_1[0x13b];
  if (pbVar12 != (byte *)0x0) {
    if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
      *(undefined2 *)(*(long *)(pbVar12 + 200) + 0x30) = 0x101;
      pbVar12 = param_1[0x13b];
      if (pbVar12 == (byte *)0x0) goto LAB_7102a95014;
    }
    pbVar12[0x110] = 0;
    FUN_71025e9d50((long *)(pbVar12 + 0x108),uVar8,pppplVar9,ppppbVar10,(long ****)param_5,param_6,
                   param_7,param_8);
    uVar8 = extraout_x1_12;
  }
LAB_7102a95014:
  pbVar12 = param_1[0x60];
  plVar23 = (long *)**(long **)(pbVar12 + 0x18);
  while ((*(ulong *)(*plVar23 + 0xa0) & 0xffffffffff) != 0x7b569df99) {
    plVar23 = plVar23 + 1;
  }
  param_1[0x154] = *(byte **)(*plVar23 + 0x130);
  if (*(char *)((long)param_1 + 0x9ea) == '\0') {
    pbVar12 = param_1[0x115];
    *(undefined1 *)((long)param_1 + 0xa04) = 1;
    *(undefined1 *)((long)param_1 + 0x9ea) = 1;
    if (pbVar12 != (byte *)0x0) {
      pbVar12[0x110] = 1;
      FUN_71025e9d50((long *)(pbVar12 + 0x108),uVar8,pppplVar9,ppppbVar10,(long ****)param_5,param_6
                     ,param_7,param_8);
      pbVar12 = param_1[0x115];
      if (pbVar12 != (byte *)0x0) {
        if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
          *(undefined2 *)(*(long *)(pbVar12 + 200) + 0x30) = 0;
        }
        if (*(long *)(pbVar12 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(pbVar12 + 0xd8) + 0x21) = 0;
        }
        if (pbVar12[0xe0] != 0) {
          *(undefined1 *)(*(long *)(pbVar12 + 0xb0) + 0x10) = 1;
        }
        pbVar12 = param_1[0x115];
        if (pbVar12 != (byte *)0x0) {
          uVar11 = *(undefined4 *)(param_1 + 0xe8);
          if ((pbVar12[0xe0] != 0) && (*(long *)(pbVar12 + 200) != 0)) {
            *(undefined4 *)(*(long *)(pbVar12 + 200) + 8) = uVar11;
          }
          if (*(long *)(pbVar12 + 0xd8) != 0) {
            *(undefined4 *)(*(long *)(pbVar12 + 0xd8) + 0x24) = uVar11;
          }
          if (pbVar12[0xe0] != 0) {
            *(undefined4 *)(*(long *)(pbVar12 + 0xb0) + 0x14) = uVar11;
          }
        }
      }
    }
    if (*(int *)(param_1[0x116] + 0x138) != 0) {
      plVar23 = *(long **)(param_1[0x116] + 0xe8);
      plVar7 = (long *)plVar23[1];
      for (plVar23 = (long *)*plVar23; plVar23 != plVar7; plVar23 = plVar23 + 1) {
        lVar15 = *plVar23;
        *(undefined1 *)(lVar15 + 0x128) = 1;
        if (*(long *)(lVar15 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar15 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar15 + 8),0);
        }
      }
    }
    FUN_7102a98fe0((long)param_1,*(undefined4 *)((long)param_1 + 0x9ec));
    FUN_71025f55b0(*(undefined8 **)param_1[0x154],*(undefined8 **)(param_1[0x154] + 8),"IPP0017");
    pbVar12 = param_1[0x60];
    *(undefined2 *)(param_1 + 0x153) = 0;
  }
  pbVar21 = *(byte **)(*(long *)(pbVar12 + 0x60) + 0x50);
  param_1[0x163] = (byte *)(*(ulong *)(*(long *)(pbVar12 + 0x60) + 0x58) & 0xffffffff);
  param_1[0x162] = pbVar21;
  pbVar21 = *(byte **)(*(long *)(pbVar12 + 0x60) + 0x60);
  param_1[0x165] = (byte *)(*(ulong *)(*(long *)(pbVar12 + 0x60) + 0x68) & 0xffffffff);
  param_1[0x164] = pbVar21;
  pbVar21 = param_1[(ulong)((*(uint *)((long)param_1 + 0x9ec) & 0xfffffffe) == 2) * 2 + 0x162];
  lVar15 = *(long *)(pbVar12 + 0x60);
  uVar25 = (ulong)(param_1 +
                  (ulong)((*(uint *)((long)param_1 + 0x9ec) & 0xfffffffe) == 2) * 2 + 0x162)[1] &
           0xffffffff;
  *(ulong *)(lVar15 + 0x58) = uVar25;
  *(byte **)(lVar15 + 0x50) = pbVar21;
  lVar15 = *(long *)(param_1[0x60] + 0x60);
  *(ulong *)(lVar15 + 0x68) = uVar25;
  *(byte **)(lVar15 + 0x60) = pbVar21;
  return;
}

