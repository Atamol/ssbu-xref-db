// addr:      71018b5d60
// offset:    0x18b5d60
// name:      FUN_71018b5d60
// mangled:   
// signature: undefined __cdecl FUN_71018b5d60(undefined1[16] param_1, float param_2, undefined8 param_3, undefined8 param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


/* WARNING: Type propagation algorithm not settling */

void FUN_71018b5d60(undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6,long ****param_7,byte ****param_8,
                   long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  float *pfVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  float extraout_s0;
  float fVar20;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined4 extraout_var;
  undefined4 uVar21;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 uVar22;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined8 extraout_var_09;
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined **local_c8;
  long *local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  
  if (*(int *)(param_5 + 0x11c) != 0) {
    if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
       (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) {
      if (*(char *)(param_5 + 0x5cd) != '\0') {
        lVar18 = *(long *)(DAT_710532f820 + 8);
        uVar8 = FUN_7101eefe30(*(long *)(*(long *)(lVar18 + 0x110) + 0x80));
        if ((*(int *)(lVar18 + 0xf8) != 0 || (((uint)uVar8 ^ 0xffffffff) & 1) != 0) ||
            *(char *)(lVar18 + 0x142) != '\0') {
          return;
        }
        if (*(int *)(*(long *)(DAT_710532f820 + 8) + 0x118) == 2) {
          *(undefined4 *)(param_5 + 0x130) = 2;
          if (*(uint *)(param_5 + 0x114) < 0x13) {
            *(undefined4 *)(param_5 + (long)(int)*(uint *)(param_5 + 0x114) * 4 + 200) = 6;
            return;
          }
          goto LAB_71018b67c4;
        }
      }
      lVar18 = *(long *)(DAT_7105329740 + 8) +
               (ulong)(*(int *)(*(long *)(DAT_7105329740 + 8) + 4) - 1) * 0x18;
      plVar14 = *(long **)(lVar18 + 8);
      if (*(long **)(lVar18 + 0x10) == plVar14) goto LAB_71018b67b8;
      lVar18 = *plVar14;
      plVar14 = (long *)plVar14[1];
      if (plVar14 != (long *)0x0) {
        plVar9 = plVar14 + 1;
        do {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      bVar6 = *(int *)(lVar18 + 0x50) != -1;
      if ((DAT_7105325d10 & 1) == 0) {
        uVar21 = 3;
        if (bVar6) {
          uVar21 = 4;
        }
      }
      else if (bVar6) {
        uVar21 = 5;
      }
      else {
        uVar21 = 3;
      }
      if (plVar14 != (long *)0x0) {
        plVar9 = plVar14 + 1;
        do {
          lVar18 = *plVar9;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (0x12 < *(uint *)(param_5 + 0x114)) {
LAB_71018b67c4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_5 + (long)(int)*(uint *)(param_5 + 0x114) * 4 + 200) = uVar21;
    }
    return;
  }
  lVar18 = *(long *)(DAT_7105329740 + 8) +
           (ulong)(*(int *)(*(long *)(DAT_7105329740 + 8) + 4) - 1) * 0x18;
  plVar14 = *(long **)(lVar18 + 8);
  if (*(long **)(lVar18 + 0x10) == plVar14) {
LAB_71018b67b8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar18 = *plVar14;
  plVar14 = (long *)plVar14[1];
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (DAT_7105325d10 == 1) {
    if (*(int *)(lVar18 + 0x50) != -1) {
      iVar19 = 5;
      goto joined_r0x0071018b5ea8;
    }
  }
  else if (*(int *)(lVar18 + 0x50) != -1) {
    iVar19 = 4;
    goto joined_r0x0071018b5ea8;
  }
  iVar19 = 3;
joined_r0x0071018b5ea8:
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      lVar18 = *plVar9;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(param_1._0_4_,plVar14);
      std::__shared_weak_count::__release_weak();
      param_6 = extraout_x1;
    }
  }
  if ((**(ulong **)(DAT_710532f8d0 + 8) & 0xff0000ffffffffff) != 0xd90000190cdf8dca) {
    if (iVar19 == 5) {
      uVar10 = 0xd9ffff1ff7fa8277;
    }
    else if (iVar19 == 4) {
      uVar10 = 0xd9ffff0000000000;
    }
    else {
      uVar10 = 0xd9ffff1eb3ece83c;
      if (*(int *)(*(long *)(DAT_7105329740 + 8) + 4) + -1 != *(int *)(param_5 + 0x5c8)) {
        uVar10 = 0xd9ffff17d8a015fc;
      }
    }
    param_7 = (long ****)0x1;
    FUN_71033145d0(DAT_710532f8d0,uVar10,1,param_8,param_9,param_10,param_11,param_12);
    param_6 = extraout_x1_00;
  }
  FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),param_6,param_7,param_8,param_9,param_10,param_11,
                 param_12);
  lVar18 = *(long *)(param_5 + 0x138);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x80),0,(long ****)&DAT_00001000,param_8,param_9
                 ,param_10,param_11,param_12);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x88),0,(long ****)0x1001,param_8,param_9,
                 param_10,param_11,param_12);
  lVar18 = *(long *)(param_5 + 0x140);
  *(undefined1 *)(lVar18 + 0x70) = 0;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x80),1,(long ****)0x10004,param_8,param_9,
                 param_10,param_11,param_12);
  lVar18 = *(long *)(param_5 + 0x148);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x90),0,(long ****)0x1003,param_8,param_9,
                 param_10,param_11,param_12);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x98),1,(long ****)&DAT_00010001,param_8,param_9
                 ,param_10,param_11,param_12);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0xa0),0,(long ****)0x1004,param_8,param_9,
                 param_10,param_11,param_12);
  FUN_7103775dc0((long *)**(undefined8 **)(*(long *)(param_5 + 0x150) + 0x80),1,(long ****)0x10000,
                 param_8,param_9,param_10,param_11,param_12);
  lVar18 = *(long *)(param_5 + 0x160);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x188),1,(long ****)0x10002,param_8,param_9,
                 param_10,param_11,param_12);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x88),0,(long ****)0x1002,param_8,param_9,
                 param_10,param_11,param_12);
  uVar10 = 0x10003;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x90),1,(long ****)0x10003,param_8,param_9,
                 param_10,param_11,param_12);
  FUN_7101d0ae40(*(long *)(param_5 + 0x148),extraout_x1_01,uVar10,param_8,param_9,param_10,param_11,
                 param_12);
  pfVar1 = (float *)(param_5 + 0x210);
  FUN_7101cf7590(*(long *)(param_5 + 0x138),pfVar1);
  FUN_7101d0b070(*(long *)(param_5 + 0x148),pfVar1);
  lVar18 = *(long *)(param_5 + 0x150);
  fVar20 = extraout_s0;
  uVar21 = extraout_var;
  uVar8 = extraout_var_06;
  if (((DAT_7105325d60 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&DAT_7105325d60), fVar20 = extraout_s0_04,
     uVar21 = extraout_var_04, uVar8 = extraout_var_11, iVar7 != 0)) {
    DAT_7105325d70 = 0;
    DAT_7105325d78 = 0;
    __cxa_guard_release(&DAT_7105325d60);
    fVar20 = extraout_s0_05;
    uVar21 = extraout_var_05;
    uVar8 = extraout_var_12;
  }
  lVar18 = *(long *)(**(long **)(lVar18 + 0x80) + 0x10);
  lVar15 = **(long **)(lVar18 + 0x18);
  if (lVar15 != 0) {
    fVar20 = *(float *)(param_5 + 0x210) / (*(float *)(param_5 + 0x210) * 0.0 + 1.0);
    uVar21 = 0;
    uVar8 = 0;
    param_4 = *(undefined8 *)(param_5 + 0x220);
    fVar23 = (float)DAT_7105325d70 - (float)param_4;
    fVar24 = (float)((ulong)DAT_7105325d70 >> 0x20) - (float)((ulong)param_4 >> 0x20);
    param_3 = CONCAT44(fVar24,fVar23);
    param_2 = fVar23 * fVar20;
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
    *(ulong *)(lVar15 + 0x30) = CONCAT44(fVar24 * fVar20,param_2);
    lVar18 = **(long **)(lVar18 + 0x18);
    if (lVar18 != 0) {
      *(float *)(lVar18 + 0x48) = fVar20;
      *(float *)(lVar18 + 0x4c) = fVar20;
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
    }
  }
  fVar24 = (float)param_3;
  fVar23 = (float)param_4;
  lVar18 = *(long *)(param_5 + 0x160);
  plVar14 = *(long **)(lVar18 + 0x198);
joined_r0x0071018b61a8:
  if (plVar14 != (long *)(lVar18 + 0x1a0)) {
    do {
      lVar15 = *(long *)(lVar18 + 0x80);
      uVar10 = plVar14[4];
      local_c8 = (undefined **)(lVar15 + 0xc0);
      local_c0 = (long *)(lVar15 + 0xd8);
      lStack_b8 = lVar15 + 0xf0;
      local_b0 = lVar15 + 0x108;
      lStack_a8 = lVar15 + 0x120;
      if ((uint)uVar10 < 5) {
        plVar9 = *(long **)((long)&local_c8 +
                           (-(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (uVar10 & 0xffffffff) << 3)
                           );
        fVar20 = param_2;
        uVar8 = param_3;
        uVar25 = param_4;
      }
      else if (((DAT_7105325d40 & 1) == 0) &&
              (iVar7 = __cxa_guard_acquire(&DAT_7105325d40), iVar7 != 0)) {
        plVar9 = &DAT_7105325d28;
        DAT_7105325d28 = 0;
        DAT_7105325d30 = 0;
        DAT_7105325d38 = 0;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_7105325d40);
        fVar20 = param_2;
        uVar8 = param_3;
        uVar25 = param_4;
      }
      else {
        plVar9 = &DAT_7105325d28;
        fVar20 = param_2;
        uVar8 = param_3;
        uVar25 = param_4;
      }
      uVar17 = (plVar9[1] - *plVar9 >> 5) * 0x4ec4ec4ec4ec4ec5;
      uVar11 = (long)uVar10 >> 0x20;
      if (uVar17 < uVar11 || uVar17 - uVar11 == 0) goto LAB_71018b67b8;
      param_8 = (byte ****)(uVar10 >> 0x20);
      fVar23 = FUN_710379e030(**(long **)(*(long *)(*plVar9 + uVar11 * 0x1a0 + 0xf8) + 0x78));
      uVar10 = uVar10 & 0xffffffff;
      param_2 = fVar20;
      param_3 = uVar8;
      param_4 = uVar25;
      FUN_7103776910(&local_c8,**(long **)(lVar18 + 0x188) + 8,(long ****)"set_replaybtn_%d_%02d",
                     uVar10,param_8,param_9,param_10,param_11,param_12);
      plVar9 = local_c0;
      lVar15 = *local_c0;
      if (lVar15 == 0) {
        local_c8 = &PTR_FUN_710523d9a8;
        local_c0 = (long *)0x0;
        fVar20 = extraout_s0_00;
        uVar21 = extraout_var_00;
        uVar8 = extraout_var_07;
        if (plVar9 != (long *)0x0) goto LAB_71018b6368;
      }
      else {
        param_2 = 540.0 - ((float)uVar8 + ((float)uVar25 - (float)uVar8) * 0.5);
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
        *(float *)(lVar15 + 0x30) = fVar23 + (fVar20 - fVar23) * 0.5 + -960.0;
        *(float *)(lVar15 + 0x34) = param_2;
        lVar15 = *local_c0;
        if (lVar15 != 0) {
          fVar20 = *pfVar1;
          *(float *)(lVar15 + 0x48) = fVar20;
          *(float *)(lVar15 + 0x4c) = fVar20;
          *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
        }
LAB_71018b6368:
        local_c0 = (long *)0x0;
        local_c8 = &PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)plVar9);
        fVar20 = extraout_s0_01;
        uVar21 = extraout_var_01;
        uVar8 = extraout_var_08;
      }
      fVar24 = (float)param_3;
      fVar23 = (float)param_4;
      plVar9 = (long *)plVar14[1];
      if ((long *)plVar14[1] != (long *)0x0) goto LAB_71018b6374;
      plVar9 = plVar14 + 2;
      plVar16 = (long *)*plVar9;
      if ((long *)*plVar16 != plVar14) goto LAB_71018b6398;
      plVar14 = plVar16;
      if (plVar16 == (long *)(lVar18 + 0x1a0)) break;
    } while( true );
  }
  if (iVar19 == 3) {
    auVar4._4_4_ = uVar21;
    auVar4._0_4_ = fVar20;
    auVar4._8_8_ = uVar8;
    FUN_7101d02530(auVar4,param_2,fVar24,fVar23,*(long *)(param_5 + 0x160),
                   *(uint *)(param_5 + 0x5c8),uVar10,param_8,param_9,param_10,param_11,param_12);
    lVar18 = *(long *)(param_5 + 0x160);
    lVar15 = *(long *)(lVar18 + 0x1a0);
    if (lVar15 == 0) {
LAB_71018b647c:
      puVar12 = &DAT_7105325d20;
    }
    else {
      iVar7 = *(int *)(*(long *)(lVar18 + 400) + 0x254);
      lVar18 = lVar18 + 0x1a0;
      lVar13 = lVar18;
      do {
        if (iVar7 <= *(int *)(lVar15 + 0x1c)) {
          lVar13 = lVar15;
        }
        lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < iVar7) * 8);
      } while (lVar15 != 0);
LAB_71018b6468:
      if ((lVar13 == lVar18) || (iVar7 < *(int *)(lVar13 + 0x1c))) goto LAB_71018b647c;
      puVar12 = (ulong *)(lVar13 + 0x20);
    }
    uVar11 = *puVar12;
    uVar10 = uVar11 >> 0x20;
    iVar7 = (int)(uVar11 >> 0x20);
    if ((-1 < iVar7 + (int)uVar11 * 100) &&
       ((*(int *)(param_5 + 0x5c0) != (int)uVar11 || (*(int *)(param_5 + 0x5c4) != iVar7)))) {
      *(ulong *)(param_5 + 0x5c0) = uVar11;
      FUN_7101d0a1c0(*(long *)(param_5 + 0x148),uVar11,uVar10,param_8,param_9,param_10,param_11,
                     param_12);
    }
  }
  else if (iVar19 == 5) {
    auVar3._4_4_ = uVar21;
    auVar3._0_4_ = fVar20;
    auVar3._8_8_ = uVar8;
    FUN_7101d02530(auVar3,param_2,fVar24,fVar23,*(long *)(param_5 + 0x160),
                   *(uint *)(*(long *)(DAT_7105329740 + 8) + 4),uVar10,param_8,param_9,param_10,
                   param_11,param_12);
    lVar18 = *(long *)(param_5 + 0x160);
    lVar15 = *(long *)(lVar18 + 0x1a0);
    if (lVar15 != 0) {
      iVar7 = *(int *)(*(long *)(lVar18 + 400) + 0x254);
      lVar18 = lVar18 + 0x1a0;
      lVar13 = lVar18;
      do {
        if (iVar7 <= *(int *)(lVar15 + 0x1c)) {
          lVar13 = lVar15;
        }
        lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x1c) < iVar7) * 8);
      } while (lVar15 != 0);
      goto LAB_71018b6468;
    }
    goto LAB_71018b647c;
  }
  lVar18 = *(long *)(param_5 + 0x140);
  FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x90),0x710438b28f);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar18 + 0x80) + 0x10),0x71043f0bad);
  lVar18 = *(long *)(param_5 + 0x140);
  if (iVar19 == 5) {
    *(undefined1 *)(lVar18 + 0xc1) = 1;
    FUN_7103776910(&local_c8,**(long **)(lVar18 + 0x80) + 8,(long ****)"set_txt_tnmt_progress",
                   uVar10,param_8,param_9,param_10,param_11,param_12);
    FUN_710377a120((long)&local_c8,"mel_tournament_chart_final_result",uVar10,param_8,param_9,
                   param_10,param_11,param_12);
    plVar14 = local_c0;
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = (long *)0x0;
    uVar21 = extraout_s0_02;
    uVar22 = extraout_var_02;
    uVar8 = extraout_var_09;
    if (plVar14 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar14);
      uVar21 = extraout_s0_03;
      uVar22 = extraout_var_03;
      uVar8 = extraout_var_10;
    }
    lVar18 = DAT_7105329740;
    lVar15 = *(long *)(DAT_7105329740 + 8);
    lVar13 = lVar15 + (ulong)(*(int *)(lVar15 + 4) - 1) * 0x18;
    plVar14 = *(long **)(lVar13 + 8);
    if (*(long **)(lVar13 + 0x10) == plVar14) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar13 = *plVar14;
    plVar14 = (long *)plVar14[1];
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 1;
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar15 = *(long *)(lVar18 + 8);
    }
    uVar10 = (ulong)*(uint *)(lVar13 + 0x50);
    uVar11 = (*(long *)(lVar15 + 0x88) - *(long *)(lVar15 + 0x80) >> 5) * 0xfc0fc0fc0fc0fc1;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) goto LAB_71018b67b8;
    uVar10 = *(long *)(lVar15 + 0x80) + uVar10 * 0x820;
    auVar5._4_4_ = uVar22;
    auVar5._0_4_ = uVar21;
    auVar5._8_8_ = uVar8;
    FUN_7101d0fd10(auVar5,param_2,fVar24,*(long *)(param_5 + 0x150),(long *)(param_5 + 0x128),uVar10
                   ,param_8,param_9,param_10,param_11,param_12);
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 1;
      do {
        lVar18 = *plVar9;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
        goto LAB_71018b6678;
      }
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar18 + 0x80) + 0x10),0x710425f655);
  }
  if ((iVar19 == 3) &&
     (*(int *)(param_5 + 0x5c8) == *(int *)(*(long *)(DAT_7105329740 + 8) + 4) + -1)) {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(*(long *)(param_5 + 0x150) + 0x80) + 0x10),
                   0x710436c5fe);
  }
LAB_71018b6678:
  lVar18 = DAT_710532f820;
  if (*(char *)(param_5 + 0x5cd) == '\0') {
    return;
  }
  uVar11 = 0x58ffff1e930c7765;
  if (DAT_7105325d10 == 0) {
    uVar11 = 0x58ffff247c7bbd9d;
  }
  bVar6 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),uVar11);
  if (bVar6) {
    FUN_71032edf70(*(uint **)(lVar18 + 0x10),uVar11);
    FUN_71032f1bb0(*(long *)(lVar18 + 8),*(uint **)(lVar18 + 0x10),uVar10,param_8,param_9,param_10,
                   param_11,param_12);
    return;
  }
  *(undefined4 *)(*(long *)(lVar18 + 8) + 0x118) = 0;
  return;
LAB_71018b6374:
  do {
    plVar14 = plVar9;
    plVar9 = (long *)*plVar14;
  } while ((long *)*plVar14 != (long *)0x0);
  goto joined_r0x0071018b61a8;
LAB_71018b6398:
  do {
    lVar15 = *plVar9;
    plVar9 = (long *)(lVar15 + 0x10);
    plVar14 = (long *)*plVar9;
  } while (*plVar14 != lVar15);
  goto joined_r0x0071018b61a8;
}

