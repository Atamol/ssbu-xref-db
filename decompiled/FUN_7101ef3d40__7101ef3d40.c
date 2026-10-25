// addr:      7101ef3d40
// offset:    0x1ef3d40
// name:      FUN_7101ef3d40
// mangled:   
// signature: undefined __cdecl FUN_7101ef3d40(undefined1[16] param_1, undefined4 param_2, float param_3, long param_4, undefined8 param_5, undefined * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


void FUN_7101ef3d40(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,
                   undefined8 param_5,undefined **param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long ****pppplVar14;
  long *plVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined4 local_a0 [2];
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  ulong local_58;
  
  plVar10 = DAT_7105328e18;
  if (*(int *)(param_4 + 0x24c) == 0) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(param_1._0_4_,&DAT_71053144d8), iVar11 != 0)) {
      FUN_7101764000();
      param_6 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x260),0x710434ab9c);
    FUN_7103778760(*(long *)(param_4 + 0x260),0x710432a7e8);
    auVar4._4_4_ = extraout_var;
    auVar4._0_4_ = extraout_s0;
    auVar4._8_8_ = extraout_var_04;
    FUN_7101f05110(auVar4,param_2,param_3,*(uint **)(*(long *)(param_4 + 0x270) + 8),
                   *(long **)(param_4 + 8),param_6,param_7,param_8,param_9,param_10,param_11);
    auVar5._4_4_ = extraout_var_00;
    auVar5._0_4_ = extraout_s0_00;
    auVar5._8_8_ = extraout_var_05;
    FUN_7101f05110(auVar5,param_2,param_3,*(uint **)(*(long *)(param_4 + 0x278) + 8),
                   *(long **)(param_4 + 8),param_6,param_7,param_8,param_9,param_10,param_11);
    uVar12 = FUN_71023489d0(*plVar10);
    if ((uVar12 & 1) == 0) {
      FUN_7103778760(*(long *)(param_4 + 0x260),0x71042e7af5);
      FUN_7101f06b90((uint *)**(undefined8 **)(param_4 + 0x280),*(uint *)(*DAT_7105328e18 + 0x30),
                     param_6,param_7,param_8,param_9,param_10,param_11);
      FUN_7101f06b90((uint *)**(undefined8 **)(param_4 + 0x288),*(uint *)(*DAT_7105328e18 + 0x1e8),
                     param_6,param_7,param_8,param_9,param_10,param_11);
      FUN_7101ef6750(param_4,*(int *)(*DAT_7105328e18 + 0x398) + 1,param_6,(ulong)param_7,param_8,
                     param_9,param_10,param_11);
      lVar19 = *(long *)*DAT_7105328e18;
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      lVar20 = *(long *)**(undefined8 **)(lVar19 + 0x80);
      if (DAT_710530a976 != '\0') {
        FUN_7103778630(0,*(long *)(lVar20 + 0x10),0x710437cd49);
      }
      FUN_7103778630(0,*(long *)(lVar20 + 0x10),0x710425fcff);
      FUN_7103778630(0,*(long *)(lVar20 + 0x10),0x71042707a9);
      uVar18 = extraout_s0_01;
      uVar8 = extraout_var_01;
      uVar9 = extraout_var_06;
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), uVar18 = extraout_s0_02,
         uVar8 = extraout_var_02, uVar9 = extraout_var_07, iVar11 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
        uVar18 = extraout_s0_03;
        uVar8 = extraout_var_03;
        uVar9 = extraout_var_08;
      }
      if (DAT_710530a976 == '\0') {
        auVar6._4_4_ = uVar8;
        auVar6._0_4_ = uVar18;
        auVar6._8_8_ = uVar9;
        FUN_7101ef0c30(auVar6,param_2,param_3,*(undefined8 **)(lVar19 + 0x80),DAT_710530d560,
                       *(long **)(param_4 + 8),param_7,param_8,param_9,param_10,param_11);
      }
      else {
        uVar13 = *(uint *)(*DAT_7105328e18 + 0x28);
        uVar1 = *(uint *)(*DAT_7105328e18 + 0x1e0);
        plVar15 = *(long **)(param_4 + 8);
        pppplVar14 = (long ****)(ulong)uVar1;
        auVar7._4_4_ = uVar8;
        auVar7._0_4_ = uVar18;
        auVar7._8_8_ = uVar9;
        FUN_7101ef1110(auVar7,param_2,param_3,*(undefined8 **)(lVar19 + 0x80),0,(ulong)uVar13,1,
                       pppplVar14,plVar15,param_10,param_11);
        FUN_7101ef68a0(param_4,uVar13,uVar1,1,pppplVar14,plVar15,param_10,param_11);
      }
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x260),0x710439dc6a);
      FUN_7103776910(&local_60,param_4 + 600,(long ****)"set_txt_l",param_6,param_7,param_8,param_9,
                     param_10,param_11);
      FUN_710377a120((long)&local_60,"mel_team_competition_progress_result",param_6,param_7,param_8,
                     param_9,param_10,param_11);
      uVar12 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
        FUN_7101764000();
        param_6 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_710530a976 == '\0') {
        FUN_7101f06b90((uint *)**(undefined8 **)(param_4 + 0x280),*(uint *)(*DAT_7105328e18 + 0x30),
                       param_6,param_7,param_8,param_9,param_10,param_11);
        puVar16 = *(undefined8 **)(param_4 + 0x288);
        uVar13 = *(uint *)(*DAT_7105328e18 + 0x1e8);
      }
      else {
        FUN_7101f06b90((uint *)**(undefined8 **)(param_4 + 0x280),*(uint *)(*DAT_7105328e18 + 0x34),
                       param_6,param_7,param_8,param_9,param_10,param_11);
        puVar16 = *(undefined8 **)(param_4 + 0x288);
        uVar13 = *(uint *)(*DAT_7105328e18 + 0x1ec);
      }
      FUN_7101f06b90((uint *)*puVar16,uVar13,param_6,param_7,param_8,param_9,param_10,param_11);
      if (*(char *)(param_4 + 0x2a4) != '\0') {
        lVar19 = *(long *)*DAT_7105328e18;
        FUN_7103778430(*(long *)**(undefined8 **)(lVar19 + 0x80) + 8,"chara_out_%s",&DAT_710438b71d,
                       param_7,param_8,param_9,param_10,param_11);
        FUN_7103778430(*(long *)**(undefined8 **)(lVar19 + 0x80) + 8,"chara_out_%s",&DAT_71043cdb7b,
                       param_7,param_8,param_9,param_10,param_11);
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x164947be6b,
                                    (long ****)&DAT_00000004,param_7,param_8,param_9,param_10,
                                    param_11), (uVar12 & 1) != 0)) {
          FUN_71024076d0(local_a0,0x164947be6b);
          if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac))
          {
            piVar17 = (int *)(local_90 + 0x38);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar3) {
                *piVar17 = *piVar17 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        else {
          local_88 = 0x87650000000000;
          local_78 = 0xffffffffffffffff;
          uStack_70 = 0;
          local_a0[0] = 0;
          local_68 = 0;
        }
        local_98 = &PTR_FUN_7104f73d50;
        local_90 = 0;
        local_80 = 0;
      }
      FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x260),0x710425fd28);
      if ((((*(long **)(param_4 + 0x2c8) != (long *)0x0) &&
           (uVar12 = (**(code **)(**(long **)(param_4 + 0x2c8) + 0x20))(), (uVar12 & 1) == 0)) &&
          ((*(char *)(*DAT_710593b438 + 1) != '\0' &&
           ((*(int *)(param_4 + 0x2d4) == 0x876500 && (DAT_7106dd53a8 == '\x01')))))) &&
         ((*(int *)(param_4 + 0x2d0) == DAT_7106dd53ac &&
          ((((*(char *)(param_4 + 0x2d8) == '\0' && (*(long **)(param_4 + 0x2c8) != (long *)0x0)) &&
            (uVar12 = (**(code **)(**(long **)(param_4 + 0x2c8) + 0x20))(), (uVar12 & 1) == 0)) &&
           (uVar12 = (**(code **)(**(long **)(param_4 + 0x2c8) + 0x68))(), (uVar12 & 1) == 0)))))) {
        FUN_710373b540(param_4 + 0x2b8,0x1e);
      }
    }
    uVar12 = FUN_71023489d0(*plVar10);
    if ((uVar12 & 1) != 0) {
      uVar13 = *(uint *)(param_4 + 0x244);
      if (*(char *)(*plVar10 + 0x3a5) == '\0') {
        if (0x12 < uVar13) goto LAB_7101ef436c;
        uVar18 = 0x11;
      }
      else {
        if (0x12 < uVar13) {
LAB_7101ef436c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar18 = 0x13;
      }
      *(undefined4 *)(param_4 + (long)(int)uVar13 * 4 + 0x1f8) = uVar18;
    }
  }
  else if (0x1e < *(int *)(param_4 + 0x24c)) {
    if (0x12 < *(uint *)(param_4 + 0x244)) goto LAB_7101ef436c;
    *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0x244) * 4 + 0x1f8) = 0xc;
    if (*(int *)(param_4 + 0x244) < 0x12) {
      uVar13 = *(int *)(param_4 + 0x244) + 1;
      *(uint *)(param_4 + 0x244) = uVar13;
      if (0x12 < uVar13) goto LAB_7101ef436c;
      *(undefined4 *)(param_4 + (long)(int)uVar13 * 4 + 0x1f8) = 0x1b;
    }
    fVar21 = (float)FUN_71033112b0(0,*(long *)(DAT_710532f8c0 + 8),0xd9fce4292);
    *(int *)(param_4 + 0x2b0) = (int)fVar21;
  }
  return;
}

