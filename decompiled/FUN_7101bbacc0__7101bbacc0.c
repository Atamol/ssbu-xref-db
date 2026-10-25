// addr:      7101bbacc0
// offset:    0x1bbacc0
// name:      FUN_7101bbacc0
// mangled:   
// signature: undefined __cdecl FUN_7101bbacc0(long param_1, uint * param_2, uint * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bbacc0(long param_1,uint *param_2,uint *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  char *pcVar8;
  byte *pbVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 local_1098 [2];
  undefined **local_1090;
  long local_1088;
  undefined8 local_1080;
  undefined1 local_1078;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  ulong local_1058;
  undefined **local_1050;
  long local_1048;
  undefined8 local_1040;
  ulong local_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined8 local_1020;
  int local_58 [2];
  
  if (0xc < *param_2) {
    return;
  }
  lVar11 = *(long *)(param_1 + 8);
  uVar3 = *param_3;
  switch(*param_2) {
  case 0:
    if (2 < (int)uVar3) {
      uVar3 = 3;
    }
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
    if (*(uint *)(lVar11 + 0xb40) != uVar3) {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x175c743153,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) {
        FUN_71024076d0(local_1098,0x175c743153);
        if (((local_1088 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1080 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1088 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
        local_1080 = 0x87650000000000;
        local_1070 = 0xffffffffffffffff;
        uStack_1068 = 0;
        local_1098[0] = 0;
        local_1060 = 0;
      }
      local_1090 = &PTR_FUN_7104f73d50;
      local_1088 = 0;
      local_1078 = 0;
    }
    *(uint *)(lVar11 + 0xb40) = uVar3;
    plVar12 = *(long **)(*(long *)(lVar11 + 0x3b0) + 0x10);
    if (plVar12 == (long *)0x0) {
      return;
    }
    goto LAB_7101bbb324;
  case 1:
    if (0x3e6 < (int)uVar3) {
      uVar3 = 999;
    }
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (*(uint *)(lVar11 + 0xb44) != uVar3) {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x175c743153,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) {
        FUN_71024076d0(local_1098,0x175c743153);
        if (((local_1088 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1080 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1088 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
        local_1080 = 0x87650000000000;
        local_1070 = 0xffffffffffffffff;
        uStack_1068 = 0;
        local_1098[0] = 0;
        local_1060 = 0;
      }
      local_1090 = &PTR_FUN_7104f73d50;
      local_1088 = 0;
      local_1078 = 0;
    }
    *(uint *)(lVar11 + 0xb44) = uVar3;
    plVar12 = *(long **)(*(long *)(lVar11 + 0x400) + 0x10);
    goto joined_r0x007101bbb320;
  case 2:
    bVar2 = uVar3 != 0;
    if (bVar2 == (bool)*(char *)(lVar11 + 0xb48)) {
      *(bool *)(lVar11 + 0xb48) = bVar2;
      pcVar8 = "mel_training_on";
      if (uVar3 == 0) {
        pcVar8 = "mel_training_off";
      }
      FUN_710377a120(lVar11 + 0x448,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      pcVar8 = "mel_training_off";
      if (*(char *)(lVar11 + 0xb48) != '\0') {
        pcVar8 = "mel_training_on";
      }
      FUN_710377a120(lVar11 + 0x458,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar8 = "mel_training_on";
      if (uVar3 == 0) {
        pcVar8 = "mel_training_off";
      }
      FUN_710377a120(lVar11 + 0x448,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (uVar3 == 0) {
        lVar6 = lVar11 + 0x478;
      }
      else {
        lVar6 = lVar11 + 0x468;
      }
      FUN_710377aee0(0x3f800000,lVar6);
      *(bool *)(lVar11 + 0xb48) = bVar2;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (uint *)&DAT_00000004;
        uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        if ((uVar5 & 1) == 0) goto LAB_7101bbb4d0;
        FUN_71024076d0((undefined4 *)&local_1058,0x151ca6c028);
        if (((local_1048 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1040 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1048 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101bbb4d0:
        local_1038 = local_1038 & 0xffffffffffffff00;
        local_1040 = 0x87650000000000;
        local_1030 = 0xffffffffffffffff;
        local_1028 = 0;
        local_1058 = local_1058 & 0xffffffff00000000;
        local_1020 = 0;
      }
      local_1050 = &PTR_FUN_7104f73d50;
      local_1048 = 0;
      local_1038 = local_1038 & 0xffffffffffffff00;
    }
    *(undefined1 *)(lVar11 + 0xbc8) = 0;
    FUN_710377aee0(0x3f800000,lVar11 + 0x1a8);
    pcVar8 = "mel_training_help_cp_dmg_fixing_off";
    if (*(char *)(lVar11 + 0xb48) != '\0') {
      pcVar8 = "mel_training_help_cp_dmg_fixing";
    }
    FUN_710377a120(lVar11 + 0x348,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar11 + 0xbb0) = 2;
    break;
  case 3:
    bVar2 = uVar3 != 0;
    if (bVar2 == (bool)*(char *)(lVar11 + 0xb49)) {
      *(bool *)(lVar11 + 0xb49) = bVar2;
      pcVar8 = "mel_training_on";
      if (uVar3 == 0) {
        pcVar8 = "mel_training_off";
      }
      FUN_710377a120(lVar11 + 0x498,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      pcVar8 = "mel_training_off";
      if (*(char *)(lVar11 + 0xb49) != '\0') {
        pcVar8 = "mel_training_on";
      }
      FUN_710377a120(lVar11 + 0x4a8,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar8 = "mel_training_on";
      if (uVar3 == 0) {
        pcVar8 = "mel_training_off";
      }
      FUN_710377a120(lVar11 + 0x498,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (uVar3 == 0) {
        lVar6 = lVar11 + 0x4c8;
      }
      else {
        lVar6 = lVar11 + 0x4b8;
      }
      FUN_710377aee0(0x3f800000,lVar6);
      *(bool *)(lVar11 + 0xb49) = bVar2;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (uint *)&DAT_00000004;
        uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        if ((uVar5 & 1) == 0) goto LAB_7101bbb5e4;
        FUN_71024076d0((undefined4 *)&local_1058,0x151ca6c028);
        if (((local_1048 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1040 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1048 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101bbb5e4:
        local_1038 = local_1038 & 0xffffffffffffff00;
        local_1040 = 0x87650000000000;
        local_1030 = 0xffffffffffffffff;
        local_1028 = 0;
        local_1058 = local_1058 & 0xffffffff00000000;
        local_1020 = 0;
      }
      local_1050 = &PTR_FUN_7104f73d50;
      local_1048 = 0;
      local_1038 = local_1038 & 0xffffffffffffff00;
    }
    *(undefined1 *)(lVar11 + 0xbc8) = 0;
    FUN_710377aee0(0x3f800000,lVar11 + 0x1a8);
    pcVar8 = "mel_training_help_trajectory_off";
    if (*(char *)(lVar11 + 0xb49) != '\0') {
      pcVar8 = "mel_training_help_trajectory";
    }
    FUN_710377a120(lVar11 + 0x348,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar11 + 0xbb0) = 3;
    break;
  case 4:
    if (*(uint *)(lVar11 + 0xb4c) == uVar3) {
      *(uint *)(lVar11 + 0xb4c) = uVar3;
      FUN_7101bbbf80(lVar11,uVar3,lVar11 + 0x4e8,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7101bbbf80(lVar11,*(uint *)(lVar11 + 0xb4c),lVar11 + 0x4f8,param_4,param_5,param_6,param_7
                     ,param_8);
      FUN_7101bbbf80(lVar11,uVar3,lVar11 + 0x4e8,param_4,param_5,param_6,param_7,param_8);
      if (*(int *)(lVar11 + 0xb4c) < (int)uVar3) {
        lVar6 = lVar11 + 0x508;
      }
      else {
        lVar6 = lVar11 + 0x518;
      }
      FUN_710377aee0(0x3f800000,lVar6);
      *(uint *)(lVar11 + 0xb4c) = uVar3;
      if (((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
          (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
          (uVar5 & 1) != 0)) &&
         ((FUN_71024076d0((undefined4 *)&local_1058,0x151ca6c028), local_1048 != 0 &&
          ((DAT_7106dd53a8 == '\x01' && ((int)local_1040 == DAT_7106dd53ac)))))) {
        piVar10 = (int *)(local_1048 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    break;
  case 7:
    if (*(uint *)(lVar11 + 0xb54) == uVar3) {
      *(uint *)(lVar11 + 0xb54) = uVar3;
      FUN_7101bbbd30(lVar11,uVar3,lVar11 + 0x538,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    switch(*(uint *)(lVar11 + 0xb54)) {
    case 2:
      uVar13 = *(int *)(lVar11 + 0x30) - 3;
      if (uVar13 < 4) {
        uVar13 = *(uint *)(&DAT_71044681a0 + (long)(int)uVar13 * 4);
      }
      else {
        uVar13 = 0xc;
      }
      plVar12 = *(long **)(*(long *)(lVar11 + 0x550) + 0x10);
      if (plVar12 != (long *)0x0) {
        pbVar9 = (byte *)plVar12[0x1c];
        *(int *)((long)plVar12 + 0x25c) = *(int *)(lVar11 + 0x30);
        if (((pbVar9 != (byte *)0x0) && (*pbVar9 != 0x23)) && (*pbVar9 != 0x40)) {
          puVar7 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar9);
          local_58[0] = *(int *)((long)plVar12 + 0x25c);
          memset(&local_1058,0,0x1000);
          uVar4 = FUN_71037ae170((long)&local_1058,puVar7,local_58);
          FUN_71037a2270(plVar12,(ushort *)&local_1058,uVar4,0);
        }
      }
      param_4 = (byte ****)(ulong)uVar13;
      FUN_710377a280(lVar11 + 0x548,(byte *)"mel_training_speed1",1);
      goto LAB_7101bbbb70;
    case 3:
      pcVar8 = "mel_training_speed2";
      break;
    case 4:
      pcVar8 = "mel_training_speed3";
      break;
    case 5:
      pcVar8 = "mel_training_speed4";
      break;
    case 6:
      pcVar8 = "mel_training_speed7";
      break;
    default:
      pcVar8 = "mel_training_speed0";
    }
    FUN_710377a120(lVar11 + 0x548,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101bbbb70:
    FUN_7101bbbd30(lVar11,uVar3,lVar11 + 0x538,param_4,param_5,param_6,param_7,param_8);
    if (*(int *)(lVar11 + 0xb54) < (int)uVar3) {
      lVar6 = lVar11 + 0x558;
    }
    else {
      lVar6 = lVar11 + 0x568;
    }
    FUN_710377aee0(0x3f800000,lVar6);
    *(uint *)(lVar11 + 0xb54) = uVar3;
    if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) &&
        (FUN_71024076d0(local_1098,0x151ca6c028), local_1088 != 0)) &&
       ((DAT_7106dd53a8 == '\x01' && ((int)local_1080 == DAT_7106dd53ac)))) {
      piVar10 = (int *)(local_1088 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    break;
  case 8:
    bVar2 = uVar3 != 0;
    lVar6 = lVar11 + 0x588;
    if ((bool)*(char *)(lVar11 + 0xb6c) == bVar2) {
      *(bool *)(lVar11 + 0xb6c) = bVar2;
      if (uVar3 == 0) {
        pcVar8 = "mel_training_hit1";
      }
      else {
        pcVar8 = "mel_training_hit0";
      }
      FUN_710377a120(lVar6,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if (*(char *)(lVar11 + 0xb6c) == '\0') {
        FUN_710377a120(lVar11 + 0x598,"mel_training_hit1",param_3,param_4,param_5,param_6,param_7,
                       param_8);
        if (uVar3 != 0) goto LAB_7101bbb1ac;
LAB_7101bbb668:
        FUN_710377a120(lVar6,"mel_training_hit1",param_3,param_4,param_5,param_6,param_7,param_8);
        lVar6 = lVar11 + 0x5b8;
      }
      else {
        FUN_710377a120(lVar11 + 0x598,"mel_training_hit0",param_3,param_4,param_5,param_6,param_7,
                       param_8);
        if (uVar3 == 0) goto LAB_7101bbb668;
LAB_7101bbb1ac:
        FUN_710377a120(lVar6,"mel_training_hit0",param_3,param_4,param_5,param_6,param_7,param_8);
        lVar6 = lVar11 + 0x5a8;
      }
      FUN_710377aee0(0x3f800000,lVar6);
      *(bool *)(lVar11 + 0xb6c) = bVar2;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (uint *)&DAT_00000004;
        uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        if ((uVar5 & 1) == 0) goto LAB_7101bbb718;
        FUN_71024076d0((undefined4 *)&local_1058,0x151ca6c028);
        if (((local_1048 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1040 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1048 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101bbb718:
        local_1038 = local_1038 & 0xffffffffffffff00;
        local_1040 = 0x87650000000000;
        local_1030 = 0xffffffffffffffff;
        local_1028 = 0;
        local_1058 = local_1058 & 0xffffffff00000000;
        local_1020 = 0;
      }
      local_1050 = &PTR_FUN_7104f73d50;
      local_1048 = 0;
      local_1038 = local_1038 & 0xffffffffffffff00;
    }
    *(undefined1 *)(lVar11 + 0xbc8) = 0;
    FUN_710377aee0(0x3f800000,lVar11 + 0x1a8);
    pcVar8 = "mel_training_help_hit_off";
    if (*(char *)(lVar11 + 0xb6c) != '\0') {
      pcVar8 = "mel_training_help_hit";
    }
    FUN_710377a120(lVar11 + 0x348,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar11 + 0xbb4) = 8;
    break;
  case 9:
    bVar2 = uVar3 != 0;
    lVar6 = lVar11 + 0x5d8;
    if ((bool)*(char *)(lVar11 + 0xb58) == bVar2) {
      *(bool *)(lVar11 + 0xb58) = bVar2;
      if (uVar3 == 0) {
        pcVar8 = "mel_training_invincible0";
      }
      else {
        pcVar8 = "mel_training_invincible1";
      }
      FUN_710377a120(lVar6,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if (*(char *)(lVar11 + 0xb58) == '\0') {
        FUN_710377a120(lVar11 + 0x5e8,"mel_training_invincible0",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        if (uVar3 != 0) goto LAB_7101bbb1dc;
LAB_7101bbb79c:
        FUN_710377a120(lVar6,"mel_training_invincible0",param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar6 = lVar11 + 0x608;
      }
      else {
        FUN_710377a120(lVar11 + 0x5e8,"mel_training_invincible1",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        if (uVar3 == 0) goto LAB_7101bbb79c;
LAB_7101bbb1dc:
        FUN_710377a120(lVar6,"mel_training_invincible1",param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar6 = lVar11 + 0x5f8;
      }
      FUN_710377aee0(0x3f800000,lVar6);
      *(bool *)(lVar11 + 0xb58) = bVar2;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (uint *)&DAT_00000004;
        uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        if ((uVar5 & 1) == 0) goto LAB_7101bbb84c;
        FUN_71024076d0((undefined4 *)&local_1058,0x151ca6c028);
        if (((local_1048 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1040 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1048 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101bbb84c:
        local_1038 = local_1038 & 0xffffffffffffff00;
        local_1040 = 0x87650000000000;
        local_1030 = 0xffffffffffffffff;
        local_1028 = 0;
        local_1058 = local_1058 & 0xffffffff00000000;
        local_1020 = 0;
      }
      local_1050 = &PTR_FUN_7104f73d50;
      local_1048 = 0;
      local_1038 = local_1038 & 0xffffffffffffff00;
    }
    *(undefined1 *)(lVar11 + 0xbc8) = 0;
    FUN_710377aee0(0x3f800000,lVar11 + 0x1a8);
    pcVar8 = "mel_training_help_invincible_off";
    if (*(char *)(lVar11 + 0xb58) != '\0') {
      pcVar8 = "mel_training_help_invincible";
    }
    FUN_710377a120(lVar11 + 0x348,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar11 + 0xbb4) = 9;
    break;
  case 10:
    uVar13 = *(uint *)(lVar11 + 0xb5c);
    if (uVar13 == uVar3) {
      *(uint *)(lVar11 + 0xb5c) = uVar3;
      if (uVar3 == 2) {
        pcVar8 = "mel_training_shift1";
      }
      else if (uVar3 == 3) {
        pcVar8 = "mel_training_shift2";
      }
      else {
        pcVar8 = "mel_training_shift0";
      }
      FUN_710377a120(lVar11 + 0x628,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if (uVar13 == 2) {
        pcVar8 = "mel_training_shift1";
      }
      else if (uVar13 == 3) {
        pcVar8 = "mel_training_shift2";
      }
      else {
        pcVar8 = "mel_training_shift0";
      }
      FUN_710377a120(lVar11 + 0x638,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (uVar3 == 2) {
        pcVar8 = "mel_training_shift1";
      }
      else if (uVar3 == 3) {
        pcVar8 = "mel_training_shift2";
      }
      else {
        pcVar8 = "mel_training_shift0";
      }
      FUN_710377a120(lVar11 + 0x628,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(int *)(lVar11 + 0xb5c) < (int)uVar3) {
        lVar6 = lVar11 + 0x648;
      }
      else {
        lVar6 = lVar11 + 0x658;
      }
      FUN_710377aee0(0x3f800000,lVar6);
      *(uint *)(lVar11 + 0xb5c) = uVar3;
      if (((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
          (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
          (uVar5 & 1) != 0)) &&
         ((FUN_71024076d0((undefined4 *)&local_1058,0x151ca6c028), local_1048 != 0 &&
          ((DAT_7106dd53a8 == '\x01' && ((int)local_1040 == DAT_7106dd53ac)))))) {
        piVar10 = (int *)(local_1048 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    break;
  case 0xb:
    bVar2 = uVar3 != 0;
    if ((bool)*(char *)(lVar11 + 0xb60) == bVar2) {
      *(bool *)(lVar11 + 0xb60) = bVar2;
      pcVar8 = "mel_training_on";
      if (uVar3 == 0) {
        pcVar8 = "mel_training_off";
      }
      FUN_710377a120(lVar11 + 0x678,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      pcVar8 = "mel_training_off";
      if (*(char *)(lVar11 + 0xb60) != '\0') {
        pcVar8 = "mel_training_on";
      }
      FUN_710377a120(lVar11 + 0x688,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar8 = "mel_training_on";
      if (uVar3 == 0) {
        pcVar8 = "mel_training_off";
      }
      FUN_710377a120(lVar11 + 0x678,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (uVar3 == 0) {
        lVar6 = lVar11 + 0x6a8;
      }
      else {
        lVar6 = lVar11 + 0x698;
      }
      FUN_710377aee0(0x3f800000,lVar6);
      *(bool *)(lVar11 + 0xb60) = bVar2;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (uint *)&DAT_00000004;
        uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        if ((uVar5 & 1) == 0) goto LAB_7101bbb960;
        FUN_71024076d0((undefined4 *)&local_1058,0x151ca6c028);
        if (((local_1048 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1040 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1048 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101bbb960:
        local_1038 = local_1038 & 0xffffffffffffff00;
        local_1040 = 0x87650000000000;
        local_1030 = 0xffffffffffffffff;
        local_1028 = 0;
        local_1058 = local_1058 & 0xffffffff00000000;
        local_1020 = 0;
      }
      local_1050 = &PTR_FUN_7104f73d50;
      local_1048 = 0;
      local_1038 = local_1038 & 0xffffffffffffff00;
    }
    *(undefined1 *)(lVar11 + 0xbc8) = 0;
    FUN_710377aee0(0x3f800000,lVar11 + 0x1a8);
    pcVar8 = "mel_training_help_same_offset_off";
    if (*(char *)(lVar11 + 0xb60) != '\0') {
      pcVar8 = "mel_training_help_same_offset";
    }
    FUN_710377a120(lVar11 + 0x348,pcVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar11 + 0xbb4) = 0xb;
    break;
  case 0xc:
    if (0x3e6 < (int)uVar3) {
      uVar3 = 999;
    }
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (*(uint *)(lVar11 + 0xb64) != uVar3) {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x175c743153,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) {
        FUN_71024076d0(local_1098,0x175c743153);
        if (((local_1088 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1080 == DAT_7106dd53ac)
           ) {
          piVar10 = (int *)(local_1088 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
        local_1080 = 0x87650000000000;
        local_1070 = 0xffffffffffffffff;
        uStack_1068 = 0;
        local_1098[0] = 0;
        local_1060 = 0;
      }
      local_1090 = &PTR_FUN_7104f73d50;
      local_1088 = 0;
      local_1078 = 0;
    }
    *(uint *)(lVar11 + 0xb64) = uVar3;
    plVar12 = *(long **)(*(long *)(lVar11 + 0x6d0) + 0x10);
joined_r0x007101bbb320:
    if (plVar12 != (long *)0x0) {
LAB_7101bbb324:
      local_1028 = 0;
      local_1020 = 0;
      local_1038 = 0;
      local_1030 = 0;
      local_1048 = 0;
      local_1040 = 0;
      local_1058 = 0;
      local_1050 = (undefined **)0x0;
      uVar3 = FUN_71037ad940((long)&local_1058,0x20,0,uVar3,0,0);
      FUN_71037a2270(plVar12,(ushort *)&local_1058,uVar3,0);
    }
  }
  return;
}

