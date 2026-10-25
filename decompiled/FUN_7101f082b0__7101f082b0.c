// addr:      7101f082b0
// offset:    0x1f082b0
// name:      FUN_7101f082b0
// mangled:   
// signature: undefined __cdecl FUN_7101f082b0(undefined1[16] param_1, undefined4 param_2, float param_3, undefined8 * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


void FUN_7101f082b0(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar10;
  undefined *puVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  byte ****ppppbVar21;
  uint uVar22;
  long *plVar23;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar24;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar25;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  undefined8 *local_80;
  long ***local_78;
  undefined4 local_64;
  
  lVar19 = **(long **)param_4[0x1c];
  memset(*(void **)(lVar19 + 0x600),0,0x198);
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x10) = 0x20;
  lVar20 = *(long *)param_4[0x1c];
  lVar19 = lVar20 + 8;
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_710530d560 == 0) {
    pcVar9 = "count_3vs3";
  }
  else {
    pcVar9 = "count_5vs5";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x10),(long)pcVar9);
  FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x10),0x7104328277);
  FUN_7103778300(0x3f800000,*(long *)(lVar20 + 0x10),0x710436cbff);
  uVar5 = (uint)(*(int *)(*DAT_7105328e18 + 0x34) < *(int *)(*DAT_7105328e18 + 0x1ec));
  *(uint *)(param_4 + 0x1e) = uVar5;
  FUN_7103778430(lVar19,"color_%s",(&PTR_DAT_71050b3e88)[uVar5],param_7,param_8,param_9,param_10,
                 param_11);
  uVar5 = 3;
  if (DAT_710530d560 != 0) {
    uVar5 = 5;
  }
  if (1 < *(uint *)(param_4 + 0x1e)) {
LAB_7101f08510:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pppplVar10 = (long ****)(&PTR_DAT_71050b3e88)[*(uint *)(param_4 + 0x1e)];
  ppppbVar13 = (byte ****)(ulong)uVar5;
  pppplVar14 = (long ****)0x0;
  FUN_7103776910(&local_88,lVar19,(long ****)"set_rep_chara_%s%d_%02d",pppplVar10,ppppbVar13,
                 (long ****)0x0,param_9,param_10,param_11);
  pppplVar15 = (long ****)0x1;
  do {
    plVar23 = (long *)*param_4;
    uVar22 = (uint)pppplVar15;
    local_98 = &PTR_FUN_710523d9a8;
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x20,pppplVar10,ppppbVar13,pppplVar14,param_9,param_10,param_11);
    uVar24 = extraout_s0;
    uVar25 = extraout_var;
    uVar16 = extraout_var_04;
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&SUB_00000020;
        pppplVar10 = &local_78;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        uVar24 = extraout_s0_00;
        uVar25 = extraout_var_00;
        uVar16 = extraout_var_05;
        if (((uVar8 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,pppplVar10,ppppbVar13,pppplVar14,param_9,param_10,
                                    param_11), uVar24 = extraout_s0_01, uVar25 = extraout_var_01,
           uVar16 = extraout_var_06, puVar7 != (undefined8 *)0x0)) goto LAB_7101f08484;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_7101f08484:
    puVar4 = local_80;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    pppplVar14 = (long ****)0x1;
    param_9 = 1;
    param_10 = 2;
    *puVar7 = *local_80;
    puVar7[1] = local_80[1];
    puVar7[2] = local_80[2];
    puVar7[3] = local_80[3];
    ppppbVar13 = (byte ****)(ulong)(uVar22 - 1);
    auVar1._4_4_ = uVar25;
    auVar1._0_4_ = uVar24;
    auVar1._8_8_ = uVar16;
    local_90 = puVar7;
    FUN_7101f09020(auVar1,param_2,param_3,plVar23,&local_98,
                   (long *********)(ulong)*(uint *)(param_4 + 0x1e),ppppbVar13,(long ****)0x1,1,2,
                   param_11);
    puVar7 = local_90;
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
    if (uVar5 == uVar22) {
      uVar5 = FUN_710234cc40(*DAT_7105328e18,*(uint *)(param_4 + 0x1e));
      if (*(uint *)(param_4 + 0x1e) < 2) {
        puVar11 = (&PTR_DAT_71050b3e88)[*(uint *)(param_4 + 0x1e)];
        ppppbVar21 = (byte ****)(ulong)uVar5;
        FUN_7103776640(&local_88,lVar19,(byte ****)"set_part_rep_%s",puVar11,ppppbVar13,pppplVar14,
                       param_9,param_10,param_11);
        plVar23 = (long *)*param_4;
        FUN_7103776910(&local_a8,(long)&local_88,(long ****)"set_rep_red",puVar11,ppppbVar13,
                       pppplVar14,param_9,param_10,param_11);
        ppppppppplVar12 = (long *********)(ulong)*(uint *)(param_4 + 0x1e);
        pppplVar14 = (long ****)0x3;
        uVar16 = 7;
        uVar17 = 3;
        auVar2._4_4_ = extraout_var_02;
        auVar2._0_4_ = extraout_s0_02;
        ppppbVar13 = ppppbVar21;
        auVar2._8_8_ = extraout_var_07;
        FUN_7101f09020(auVar2,param_2,param_3,plVar23,&local_a8,ppppppppplVar12,ppppbVar21,
                       (long ****)0x3,7,3,param_11);
        uVar8 = local_a0;
        local_a8 = &PTR_FUN_710523d9a8;
        local_a0 = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        plVar23 = (long *)*param_4;
        FUN_7103776910(&local_b8,(long)&local_88,(long ****)"set_rep_red_sd",ppppppppplVar12,
                       ppppbVar13,pppplVar14,uVar16,uVar17,param_11);
        ppppppppplVar12 = (long *********)(ulong)*(uint *)(param_4 + 0x1e);
        pppplVar14 = (long ****)0x3;
        uVar17 = 7;
        uVar18 = 3;
        auVar3._4_4_ = extraout_var_03;
        auVar3._0_4_ = extraout_s0_03;
        auVar3._8_8_ = extraout_var_08;
        FUN_7101f09020(auVar3,param_2,param_3,plVar23,&local_b8,ppppppppplVar12,ppppbVar21,
                       (long ****)0x3,7,3,param_11);
        uVar8 = local_b0;
        local_b8 = &PTR_FUN_710523d9a8;
        local_b0 = 0;
        uVar16 = extraout_x1;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
          uVar16 = extraout_x1_00;
        }
        if (*(uint *)(param_4 + 0x1e) < 2) {
          *(undefined4 *)(param_4 + 0x1d) =
               *(undefined4 *)(*DAT_7105328e18 + (ulong)*(uint *)(param_4 + 0x1e) * 0x1b8 + 0x1d8);
          FUN_7101f08040((long)param_4,uVar16,ppppppppplVar12,ppppbVar21,pppplVar14,uVar17,uVar18,
                         param_11);
          puVar7 = local_80;
          lVar19 = *(long *)(*(long *)(*(long *)param_4[0x1c] + 0x10) + 8);
          if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
            *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
          }
          if (*(uint *)((long)param_4 + 0xcc) < 0x13) {
            *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0xcc) * 4 + 0x80) =
                 1;
            local_88 = &PTR_FUN_710523d988;
            local_80 = (undefined8 *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
              uVar8 = puVar7[3];
              puVar7[2] = &PTR_FUN_710523d9a8;
              puVar7[3] = 0;
              if (uVar8 != 0) {
                FUN_710392eb40(uVar8);
              }
              FUN_710392eb40((ulong)puVar7);
            }
            return;
          }
        }
      }
      goto LAB_7101f08510;
    }
    if (1 < *(uint *)(param_4 + 0x1e)) goto LAB_7101f08510;
    pppplVar10 = (long ****)(&PTR_DAT_71050b3e88)[*(uint *)(param_4 + 0x1e)];
    ppppbVar13 = (byte ****)(ulong)uVar5;
    FUN_7103776910(&local_88,lVar19,(long ****)"set_rep_chara_%s%d_%02d",pppplVar10,ppppbVar13,
                   pppplVar15,param_9,param_10,param_11);
    pppplVar14 = pppplVar15;
    pppplVar15 = (long ****)(ulong)(uVar22 + 1);
  } while( true );
}

