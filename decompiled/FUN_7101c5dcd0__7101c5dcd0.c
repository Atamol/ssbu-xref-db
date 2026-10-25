// addr:      7101c5dcd0
// offset:    0x1c5dcd0
// name:      FUN_7101c5dcd0
// mangled:   
// signature: undefined __cdecl FUN_7101c5dcd0(long * * * * * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c5dcd0(long ********param_1,undefined8 param_2,long *********param_3,
                   long *********param_4,long ****param_5,ulong param_6,ulong param_7,
                   undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined **ppuVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ulong uVar17;
  long *******ppppppplVar18;
  long ****pppplVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *******ppppppplVar24;
  char cVar25;
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
  undefined8 uVar26;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  char cVar27;
  undefined4 uVar28;
  uint uVar29;
  long *******ppppppplVar30;
  int *piVar31;
  long *******ppppppplVar32;
  long ********pppppppplVar33;
  long ******pppppplVar34;
  long ********pppppppplVar35;
  long *****ppppplVar36;
  long *******ppppppplVar37;
  char *pcVar38;
  long ****pppplVar39;
  long ******pppppplVar40;
  char cVar41;
  ushort uVar42;
  ulong uVar43;
  long ****pppplVar44;
  long *********unaff_x21;
  long *********ppppppppplVar45;
  long *****ppppplVar46;
  long *********ppppppppplVar47;
  byte bVar48;
  long *****ppppplVar49;
  long *******unaff_x27;
  float fVar50;
  int iVar51;
  float fVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  long ********local_100;
  undefined **local_f8;
  long local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long ********local_c0;
  long ********local_b8;
  long *******local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  long *******local_98;
  long *******ppppppplStack_90;
  long *******local_88;
  undefined4 local_7c [3];
  
  FUN_7101c7d450((long *)param_1[0x8c]);
  ppppppppplVar47 = (long *********)**param_1[2];
  ppppplVar36 = param_1[0x8c][0x1f][0xc];
  if (param_1[0x73] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x73][1]);
  }
  if (param_1[0x74] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x74][1]);
  }
  if (param_1[0x75] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x75][1]);
  }
  if (param_1[0x76] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x76][1]);
  }
  if (param_1[0x77] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x77][1]);
  }
  if (param_1[0x78] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x78][1]);
  }
  if (param_1[0x79] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x79][1]);
  }
  if (param_1[0x7a] != (long *******)0x0) {
    FUN_71032d6e10((long)param_1[0x7a][1]);
  }
  local_a0 = 0;
  local_98 = (long *******)0xffffffffffffffff;
  pppppppplVar33 = ppppppppplVar47[0xc0];
  if ((*(int *)((long)pppppppplVar33 + 0x484) == 0) && (*(int *)(pppppppplVar33 + 0x91) == -1)) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
    if ((*(char *)((long)pppppppplVar33 + 0x4aa) != '\0') &&
       (uVar28 = 1, ((ulong)pppppppplVar33[0x35] & 2) != 0)) {
      uVar28 = 2;
    }
  }
  local_c0 = (long ********)CONCAT44(local_c0._4_4_,uVar28);
  fVar57 = SUB84(ppppplVar36,0) + 960.0;
  fVar50 = 540.0 - (float)((ulong)ppppplVar36 >> 0x20);
  uStack_a8 = 0;
  local_b0 = (long *******)CONCAT44(fVar50,fVar57);
  FUN_710376e330((long *)param_1[0x60],(int *)&local_c0);
  cVar27 = *(char *)((long)param_1 + 0x422);
  uVar29 = *(uint *)((long)param_1[0x60] + 0x254);
  uVar26 = extraout_x1;
  if ((uVar29 == 0xffffffff) || (cVar27 == '\0')) {
    if ((cVar27 != '\0') != (uVar29 != 0xffffffff && cVar27 == '\0')) goto LAB_7101c5de5c;
  }
  else if ((uint)*(byte *)((long)param_1 + 0x423) != (uVar29 & 0xff)) {
LAB_7101c5de5c:
    if (uVar29 != 0xffffffff) {
      if (7 < (uVar29 & 0xff)) goto LAB_7101c60874;
      if (param_1[(ulong)(byte)uVar29 + 0x73] != (long *******)0x0) {
        pppppplVar34 = param_1[(ulong)(byte)uVar29 + 0x73][1];
        if (*(int *)((long)pppppplVar34 + 0x24) != *(int *)(pppppplVar34 + 4)) {
          *(int *)((long)pppppplVar34 + 0x24) = *(int *)(pppppplVar34 + 4);
          *(undefined4 *)(pppppplVar34 + 5) = 0;
          if (((*(char *)((long)pppppplVar34 + 0x2c) != '\0') &&
              (*(char *)((long)pppppplVar34 + 0x2d) != '\0')) &&
             (*(char *)((long)pppppplVar34 + 0x2e) != '\0')) {
            *(undefined2 *)((long)pppppplVar34 + 0x2d) = 0;
          }
        }
        *(undefined1 *)((long)param_1[(ulong)(byte)uVar29 + 0x73][1] + 0x2c) = 1;
      }
      if ((uVar29 & 0xff) != 4) goto LAB_7101c5df3c;
      unaff_x21 = (long *********)param_1[0x5f];
      pppppppplVar33 = *unaff_x21;
      if (*pppppppplVar33[3] == (long ******)0x0) {
LAB_7101c5df28:
        ppppppplVar18 = pppppppplVar33[1];
        pcVar38 = "sel_on";
      }
      else {
        uVar17 = (*(code *)(**pppppppplVar33[3])[0x5f])();
        pppppppplVar33 = *unaff_x21;
        if ((uVar17 & 1) == 0) goto LAB_7101c5df28;
        ppppppplVar18 = pppppppplVar33[1];
        pcVar38 = "sel_off";
      }
      FUN_7103778300(0x3f800000,(long)ppppppplVar18,(long)pcVar38);
      uVar26 = extraout_x1_00;
    }
LAB_7101c5df3c:
    if (*(char *)((long)param_1 + 0x422) != '\0') {
      bVar48 = *(byte *)((long)param_1 + 0x423);
      uVar17 = (ulong)bVar48;
      if (7 < uVar17) goto LAB_7101c60874;
      if (param_1[uVar17 + 0x73] != (long *******)0x0) {
        pppppplVar34 = param_1[uVar17 + 0x73][1];
        if (*(int *)((long)pppppplVar34 + 0x24) != *(int *)(pppppplVar34 + 4)) {
          *(int *)((long)pppppplVar34 + 0x24) = *(int *)(pppppplVar34 + 4);
          *(undefined4 *)(pppppplVar34 + 5) = 0;
          if (((*(char *)((long)pppppplVar34 + 0x2c) != '\0') &&
              (*(char *)((long)pppppplVar34 + 0x2d) != '\0')) &&
             (*(char *)((long)pppppplVar34 + 0x2e) != '\0')) {
            *(undefined2 *)((long)pppppplVar34 + 0x2d) = 0;
          }
        }
        *(undefined1 *)((long)param_1[uVar17 + 0x73][1] + 0x2c) = 0;
      }
      if (bVar48 == 4) {
        unaff_x21 = (long *********)param_1[0x5f];
        pppppppplVar33 = *unaff_x21;
        if (*pppppppplVar33[3] != (long ******)0x0) {
          (*(code *)(**pppppppplVar33[3])[0x5f])();
          pppppppplVar33 = *unaff_x21;
        }
        FUN_7103778300(0x3f800000,(long)pppppppplVar33[1],0x71043e0210);
        uVar26 = extraout_x1_01;
      }
    }
  }
  *(ushort *)((long)param_1 + 0x422) = (ushort)(uVar29 != 0xffffffff) | (ushort)(uVar29 << 8);
  if (((uVar29 != 0xffffffff) && ((uVar29 & 0xff) == 2)) &&
     ((*(char *)((long)ppppppppplVar47[0xc0] + 0x4aa) != '\0' &&
      ((*(byte *)(ppppppppplVar47[0xc0] + 0x38) >> 1 & 1) != 0)))) {
    param_3 = (long *********)0x0;
    FUN_7101c61990((long)(param_1 + 0x5e),*(char *)(param_1 + 0x84) == '\0',(long ****)0x0,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    uVar26 = extraout_x1_02;
  }
  if (*(char *)((long)param_1 + 0x431) == '\0') {
    if (*(char *)(param_1 + 0x86) != '\0') {
      if ((*(char *)((long)ppppppppplVar47[0xc0] + 0x4aa) == '\0') ||
         ((*(byte *)((long)ppppppppplVar47[0xc0] + 0x1ac) >> 1 & 1) == 0)) goto LAB_7101c5e284;
      *(undefined1 *)(param_1 + 0x86) = 0;
    }
    if (((*(char *)((long)ppppppppplVar47[0xc0] + 0x4aa) == '\0') ||
        ((*(byte *)(ppppppppplVar47[0xc0] + 0x4f) >> 4 & 1) == 0)) ||
       (((ulong)param_1[0x85] & 1) == 0)) {
LAB_7101c5e1b0:
      *(undefined2 *)(param_1 + 0x86) = 0;
      pppppplVar34 = *param_1[0x62];
      if (pppppplVar34 != (long ******)0x0) {
        (*(code *)(*pppppplVar34)[0x65])(pppppplVar34,0);
        uVar26 = extraout_x1_06;
      }
      if ((*(int *)(param_1 + 0x80) == -1) && (*(int *)((long)param_1 + 0x404) == -1))
      goto LAB_7101c5e284;
      FUN_710373b540((long)(param_1 + 0x7b),0);
      *(undefined4 *)(param_1 + 0x7b) = 0;
      FUN_71039602c0((long)(param_1 + 0x7c));
      param_1[0x7c] = (long *******)&PTR_FUN_7104f73d50;
      uVar26 = extraout_x1_07;
      if ((param_1[0x7d] != (long *******)0x0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x7e) == DAT_7106dd53ac)))) {
        ppppppplVar18 = param_1[0x7d] + 7;
        do {
          cVar27 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
          if (bVar13) {
            *(int *)ppppppplVar18 = *(int *)ppppppplVar18 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
      }
    }
    else {
      ppppppplVar18 = param_1[0x5f];
      pppplVar19 = *(*ppppppplVar18)[3];
      if (pppplVar19 != (long ****)0x0) {
        auVar61 = (*(code *)(*pppplVar19)[0x5f])();
        uVar26 = auVar61._8_8_;
        if ((auVar61._0_8_ & 1) != 0) goto LAB_7101c5e1b0;
        pppplVar19 = *(*ppppppplVar18)[3];
        if (pppplVar19 != (long ****)0x0) {
          auVar61 = (*(code *)(*pppplVar19)[0x78])();
          uVar26 = auVar61._8_8_;
          if ((auVar61._0_8_ & 1) == 0) goto LAB_7101c5e1b0;
        }
      }
      if (((ulong)param_1[0x85] & 6) == 0) goto LAB_7101c5e1b0;
      pppppplVar34 = *param_1[0x62];
      if (pppppplVar34 != (long ******)0x0) {
        (*(code *)(*pppppplVar34)[100])(pppppplVar34,1);
        uVar26 = extraout_x1_03;
      }
      pppppppplVar33 = param_1 + 0x7b;
      if ((*(int *)(param_1 + 0x80) == -1) && (*(int *)((long)param_1 + 0x404) == -1)) {
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          unaff_x21 = (long *********)0x1a029a90f3;
          param_3 = (long *********)&DAT_00000004;
          uVar17 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1a029a90f3,
                                  (long ****)&DAT_00000004,(byte ****)param_4,param_5,param_6,
                                  param_7,param_8);
          uVar26 = extraout_x1_04;
          if ((uVar17 & 1) == 0) goto LAB_7101c60018;
          FUN_71024076d0((undefined4 *)&local_c0,0x1a029a90f3);
          *(undefined4 *)pppppppplVar33 = local_c0._0_4_;
          uVar26 = extraout_x1_05;
          if (local_b0 == (long *******)0x0) goto LAB_7101c60044;
          if (*(int *)((long)param_1 + 0x3f4) == 0x876500) {
            if (*(int *)(param_1 + 0x7e) == DAT_7106dd53ac) {
              if ((param_1[0x7d] != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) {
                ppppppplVar18 = param_1[0x7d] + 7;
                do {
                  cVar27 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
                  if (bVar13) {
                    *(int *)ppppppplVar18 = *(int *)ppppppplVar18 + -1;
                    cVar27 = ExclusiveMonitorsStatus();
                  }
                } while (cVar27 != '\0');
              }
              param_1[0x7d] = (long *******)0x0;
              *(undefined1 *)(param_1 + 0x7f) = 0;
            }
            else {
              *(int *)(param_1 + 0x7e) = DAT_7106dd53ac;
            }
            param_1[0x7d] = local_b0;
            ppppppplVar18 = local_b0 + 7;
            do {
              cVar27 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
              if (bVar13) {
                *(int *)ppppppplVar18 = *(int *)ppppppplVar18 + 1;
                cVar27 = ExclusiveMonitorsStatus();
              }
            } while (cVar27 != '\0');
            goto LAB_7101c6008c;
          }
          param_1[0x80] = local_98;
          param_1[0x81] = ppppppplStack_90;
          param_1[0x82] = local_88;
LAB_7101c600b4:
          if ((DAT_7106dd53a8 == '\x01') && ((int)uStack_a8 == DAT_7106dd53ac)) {
            local_b0 = local_b0 + 7;
            do {
              cVar27 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(local_b0,0x10);
              if (bVar13) {
                *(int *)local_b0 = *(int *)local_b0 + -1;
                cVar27 = ExclusiveMonitorsStatus();
              }
            } while (cVar27 != '\0');
          }
        }
        else {
LAB_7101c60018:
          local_a0 = local_a0 & 0xffffffffffffff00;
          local_98 = (long *******)0xffffffffffffffff;
          ppppppplStack_90 = (long *******)0x0;
          local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
          local_88 = (long *******)0x0;
          local_b0 = (long *******)0x0;
          uStack_a8 = 0x87650000000000;
          *(undefined4 *)pppppppplVar33 = 0;
LAB_7101c60044:
          if (((param_1[0x7d] != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
             (*(int *)(param_1 + 0x7e) == DAT_7106dd53ac)) {
            ppppppplVar18 = param_1[0x7d] + 7;
            do {
              cVar27 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
              if (bVar13) {
                *(int *)ppppppplVar18 = *(int *)ppppppplVar18 + -1;
                cVar27 = ExclusiveMonitorsStatus();
              }
            } while (cVar27 != '\0');
          }
          param_1[0x7d] = (long *******)0x0;
LAB_7101c6008c:
          *(undefined1 *)(param_1 + 0x7f) = 0;
          param_1[0x80] = local_98;
          param_1[0x81] = ppppppplStack_90;
          param_1[0x82] = local_88;
          if (local_b0 != (long *******)0x0) goto LAB_7101c600b4;
        }
        local_b8 = (long ********)&PTR_FUN_7104f73d50;
        local_b0 = (long *******)0x0;
      }
      if (*param_1[0x62] != (long ******)0x0) {
        auVar61 = (*(code *)(**param_1[0x62])[0x66])();
        uVar26 = auVar61._8_8_;
        if ((auVar61._0_8_ & 1) == 0) goto LAB_7101c5e284;
      }
      *(undefined1 *)((long)param_1 + 0x431) = 1;
      if ((*(int *)(param_1 + 0x80) == -1) && (*(int *)((long)param_1 + 0x404) == -1))
      goto LAB_7101c5e284;
      FUN_710373b540((long)pppppppplVar33,0);
      *(undefined4 *)(param_1 + 0x7b) = 0;
      FUN_71039602c0((long)(param_1 + 0x7c));
      param_1[0x7c] = (long *******)&PTR_FUN_7104f73d50;
      uVar26 = extraout_x1_19;
      if ((param_1[0x7d] != (long *******)0x0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x7e) == DAT_7106dd53ac)))) {
        ppppppplVar18 = param_1[0x7d] + 7;
        do {
          cVar27 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
          if (bVar13) {
            *(int *)ppppppplVar18 = *(int *)ppppppplVar18 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
      }
    }
    param_1[0x7e] = (long *******)0x0;
    param_1[0x7f] = (long *******)0x0;
    param_1[0x7c] = (long *******)0x0;
    param_1[0x7d] = (long *******)0x0;
    param_1[0x7e] = (long *******)0x87650000000000;
    param_1[0x7d] = (long *******)0x0;
    *(undefined1 *)(param_1 + 0x7f) = 0;
    param_1[0x7c] = (long *******)&PTR_FUN_7104f73d30;
    param_1[0x80] = (long *******)0xffffffffffffffff;
    param_1[0x81] = (long *******)0x0;
    *(undefined4 *)((long)param_1 + 0x414) = 0;
  }
LAB_7101c5e284:
  uVar29 = *(uint *)((long)param_1[0x60] + 0x25c);
  pppppppplVar33 = param_1 + 0x324;
  if ((uVar29 != 0xffffffff) && ((uVar29 & 0xff) == 4)) {
    FUN_7101c73860((long *)param_1[0x5f],uVar26,param_3,(byte ****)param_4,param_5,param_6,param_7,
                   param_8);
  }
  *(ushort *)((long)param_1 + 0x424) = (ushort)(uVar29 != 0xffffffff) | (ushort)(uVar29 << 8);
  local_a0 = 0;
  local_98 = (long *******)0xffffffffffffffff;
  pppppppplVar35 = ppppppppplVar47[0xc0];
  if ((*(int *)((long)pppppppplVar35 + 0x484) == 0) && (*(int *)(pppppppplVar35 + 0x91) == -1)) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
    if ((*(char *)((long)pppppppplVar35 + 0x4aa) != '\0') &&
       (uVar28 = 1, ((ulong)pppppppplVar35[0x35] & 2) != 0)) {
      uVar28 = 2;
    }
  }
  local_c0 = (long ********)CONCAT44((int)((ulong)local_c0 >> 0x20),uVar28);
  uStack_a8 = 0;
  local_b0 = (long *******)CONCAT44(fVar50,fVar57);
  FUN_710376e330((long *)param_1[0x91],(int *)&local_c0);
  *(bool *)((long)param_1[0x8c] + 0x15c) = *(char *)((long)param_1 + 0x422) != '\0';
  bVar48 = *(byte *)pppppppplVar33;
  uVar17 = (ulong)bVar48;
  if (7 < uVar17) goto LAB_7101c60874;
  if ((*(char *)((long)param_1 + 0x1b26) == '\0') || (*(char *)((long)param_1 + 0x1b25) == '\0')) {
    param_3 = (long *********)0x1;
    param_4 = (long *********)0x0;
    FUN_7101c61bd0((long)param_1,uVar17,(long ****)0x1,(byte ****)0x0,param_5,param_6,param_7,
                   param_8);
    uVar26 = extraout_x1_09;
LAB_7101c5e44c:
    ppppppplVar18 = param_1[0x363];
  }
  else {
    ppppppplVar18 = param_1[0x8a];
    cVar27 = *(char *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x194);
    unaff_x21 = (long *********)(param_1 + 0x89);
    uVar26 = extraout_x1_08;
    if (*(char *)((long)param_1[0x8c] + 0x159) == '\0') {
      ppppppplVar18 = param_1[0x85];
      if (((ulong)ppppppplVar18 & 1) == 0) {
LAB_7101c5e7ec:
        ppppppppplVar47 = (long *********)0x0;
      }
      else {
        ppppppplVar18 = param_1[0x5f];
        pppplVar19 = *(*ppppppplVar18)[3];
        if (pppplVar19 == (long ****)0x0) {
LAB_7101c5f370:
          ppppppplVar18 = param_1[0x85];
        }
        else {
          auVar61 = (*(code *)(*pppplVar19)[0x5f])();
          uVar26 = auVar61._8_8_;
          if ((auVar61._0_8_ & 1) != 0) {
            ppppppplVar18 = param_1[0x85];
            ppppppppplVar47 = (long *********)0x0;
            goto LAB_7101c5f5a4;
          }
          pppplVar19 = *(*ppppppplVar18)[3];
          if (pppplVar19 == (long ****)0x0) goto LAB_7101c5f370;
          auVar61 = (*(code *)(*pppplVar19)[0x78])();
          uVar26 = auVar61._8_8_;
          ppppppplVar18 = param_1[0x85];
          if ((auVar61._0_8_ & 1) == 0) goto LAB_7101c5e7ec;
        }
        if (((uint)ppppppplVar18 >> 1 & 1) == 0) {
          ppppppppplVar47 = (long *********)((ulong)ppppppplVar18 >> 2 & 1);
        }
        else {
          ppppppppplVar47 = (long *********)0x1;
        }
      }
LAB_7101c5f5a4:
      param_1[0x85] = (long *******)((ulong)ppppppplVar18 & 0xfffffffffffffffb);
      uVar29 = (uint)ppppppppplVar47;
      if (((ulong)ppppppplVar18 & 1) == 0) {
LAB_7101c5f610:
        if (uVar29 != 0) goto LAB_7101c5f614;
      }
      else {
        ppppppplVar18 = param_1[0x5f];
        pppplVar19 = *(*ppppppplVar18)[3];
        if (pppplVar19 != (long ****)0x0) {
          auVar61 = (*(code *)(*pppplVar19)[0x5f])();
          uVar26 = auVar61._8_8_;
          if ((auVar61._0_8_ & 1) != 0) goto LAB_7101c5f610;
          pppplVar19 = *(*ppppppplVar18)[3];
          if (pppplVar19 != (long ****)0x0) {
            auVar61 = (*(code *)(*pppplVar19)[0x78])();
            uVar26 = auVar61._8_8_;
            if ((auVar61._0_8_ & 1) == 0) goto LAB_7101c5f610;
          }
        }
        if (((uint)param_1[0x85] >> 1 & 1) == 0) {
          if ((uVar29 ^ (uint)((ulong)param_1[0x85] >> 2) & 1) == 1) {
LAB_7101c5f614:
            *(undefined1 *)((long)param_1 + 0x431) = 0;
          }
        }
        else if (uVar29 == 0) goto LAB_7101c5f614;
      }
      *(undefined1 *)((long)param_1 + 0x1b27) = 0;
      iVar51 = *(int *)(param_1 + 0x366);
    }
    else if (*(char *)(ppppppplVar18 + uVar17 * 0x3c + 0x32) == '\0') {
LAB_7101c5e910:
      bVar13 = false;
      if (cVar27 == '\0') goto LAB_7101c5f8e8;
LAB_7101c5e914:
      ppppppplVar18 = param_1[0x85];
      if (((ulong)ppppppplVar18 & 1) == 0) {
LAB_7101c5e91c:
        uVar29 = 0;
      }
      else {
        ppppppplVar18 = param_1[0x5f];
        pppplVar19 = *(*ppppppplVar18)[3];
        if (pppplVar19 == (long ****)0x0) {
LAB_7101c5f338:
          ppppppplVar18 = param_1[0x85];
        }
        else {
          uVar20 = (*(code *)(*pppplVar19)[0x5f])();
          if ((uVar20 & 1) != 0) {
            ppppppplVar18 = param_1[0x85];
            uVar29 = 0;
            goto LAB_7101c5f384;
          }
          pppplVar19 = *(*ppppppplVar18)[3];
          if (pppplVar19 == (long ****)0x0) goto LAB_7101c5f338;
          uVar20 = (*(code *)(*pppplVar19)[0x78])();
          ppppppplVar18 = param_1[0x85];
          if ((uVar20 & 1) == 0) goto LAB_7101c5e91c;
        }
        if (((uint)ppppppplVar18 >> 1 & 1) == 0) {
          uVar29 = (uint)((ulong)ppppppplVar18 >> 2) & 1;
        }
        else {
          uVar29 = 1;
        }
      }
LAB_7101c5f384:
      param_1[0x85] = (long *******)((ulong)ppppppplVar18 | 4);
      if (((ulong)ppppppplVar18 & 1) == 0) {
LAB_7101c5f3f0:
        if (uVar29 != 0) {
LAB_7101c5f3f4:
          *(undefined1 *)((long)param_1 + 0x431) = 0;
        }
      }
      else {
        unaff_x27 = param_1[0x5f];
        if ((*(*unaff_x27)[3] != (long ****)0x0) &&
           ((uVar20 = (*(code *)(**(*unaff_x27)[3])[0x5f])(), (uVar20 & 1) != 0 ||
            ((*(*unaff_x27)[3] != (long ****)0x0 &&
             (uVar20 = (*(code *)(**(*unaff_x27)[3])[0x78])(), (uVar20 & 1) == 0))))))
        goto LAB_7101c5f3f0;
        if (((uint)param_1[0x85] >> 1 & 1) != 0) {
          if (uVar29 != 0) goto LAB_7101c5f3f8;
          goto LAB_7101c5f3f4;
        }
        if ((uVar29 ^ (uint)((ulong)param_1[0x85] >> 2) & 1) == 1) goto LAB_7101c5f3f4;
      }
LAB_7101c5f3f8:
      local_f8 = (undefined **)local_7c;
      local_7c[0] = CONCAT31(local_7c[0]._1_3_,bVar48);
      uVar29 = *(uint *)((long)param_1[0x91] + 0x254);
      local_100 = param_1;
      if ((*(char *)((long)ppppppppplVar47[0xc0] + 0x4aa) == '\0') ||
         ((*(byte *)(ppppppppplVar47[0xc0] + 0x35) >> 1 & 1) == 0)) {
        bVar13 = true;
LAB_7101c5f424:
        ppppppplVar18 = param_1[0x8c];
        fVar50 = *(float *)((long)ppppppplVar18 + 0x144) - *(float *)(ppppppplVar18 + 0x28);
        if ((fVar50 <= -1e-05) || (1e-05 <= fVar50)) {
          fVar50 = *(float *)((long)ppppppplVar18 + 0x14c) - *(float *)(ppppppplVar18 + 0x29);
          if ((-1e-05 < fVar50) && (fVar50 < 1e-05)) goto LAB_7101c5f4ac;
          fVar50 = SUB84(ppppppplVar18[0x1f][0xc],0);
          if ((*(float *)((long)ppppppplVar18 + 0x144) < fVar50) ||
             ((((fVar50 < *(float *)(ppppppplVar18 + 0x28) ||
                (fVar50 = (float)((ulong)ppppppplVar18[0x1f][0xc] >> 0x20),
                *(float *)((long)ppppppplVar18 + 0x14c) < fVar50)) ||
               (fVar50 < *(float *)(ppppppplVar18 + 0x29))) ||
              (*(char *)((long)param_1 + 0x422) != '\0')))) goto LAB_7101c5f4ac;
          if (bVar13) {
            if (uVar29 == 0xffffffff) {
              ppppppplVar18 = param_1[0x8a];
              uVar26 = 0xffffffff;
              if (*(int *)(ppppppplVar18 + uVar17 * 0x3c + 0x34) != 0) {
                ppppppppplVar47 = (long *********)(ppppppplVar18 + uVar17 * 0x3c + 0x34);
                FUN_71037780e0(&local_c0,(long)(ppppppplVar18 + uVar17 * 0x3c + 5),
                               (long ****)"balloon_off",param_3,param_4,param_5,param_6,param_7,
                               param_8);
                FUN_710377aee0(0x3f800000,(long)&local_c0);
                pppppppplVar33 = local_b8;
                *(undefined4 *)ppppppppplVar47 = 0;
                local_c0 = (long ********)&PTR_FUN_710523d9e8;
                local_b8 = (long ********)0x0;
                uVar26 = extraout_x1_15;
                if (pppppppplVar33 != (long ********)0x0) {
                  FUN_710392eb40((ulong)pppppppplVar33);
                  iVar51 = *(int *)(param_1 + 0x366);
                  uVar26 = extraout_x1_16;
                  goto joined_r0x007101c60498;
                }
              }
              goto LAB_7101c5fb7c;
            }
LAB_7101c5fdac:
            if (7 < (ulong)*(byte *)pppppppplVar33) goto LAB_7101c60874;
            if ((uVar29 & 0xff) - 1 < 2) {
              param_3 = (long *********)
                        (ulong)(1 < *(byte *)(param_1 +
                                             (ulong)*(byte *)pppppppplVar33 * 0x3d + 0x15f) - 1);
            }
            else if ((uVar29 & 0xff) == 3) {
              uVar29 = 0;
              if (*(byte *)(param_1 + (ulong)*(byte *)pppppppplVar33 * 0x3d + 0x15f) != 3) {
                uVar29 = 2;
              }
              param_3 = (long *********)(ulong)uVar29;
            }
            else {
              param_3 = (long *********)0x0;
            }
            FUN_7101c76f30((long)unaff_x21,bVar48,param_3,(byte ****)param_4,param_5,param_6,param_7
                           ,param_8);
            iVar51 = *(int *)(param_1 + 0x366);
            uVar26 = extraout_x1_24;
            goto joined_r0x007101c60498;
          }
          if (uVar29 != 0xffffffff) goto LAB_7101c5fdac;
        }
        else {
LAB_7101c5f4ac:
          if (!(bool)(uVar29 == 0xffffffff & (bVar13 ^ 1U))) {
            *(undefined1 *)(param_1 + 0x395) = 1;
            ppppppplVar18 = param_1[0x8a];
            *(undefined1 *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x192) = 0;
            ppppplVar36 = ppppppplVar18[uVar17 * 0x3c + 6][1];
            if ((ppppplVar36 != (long *****)0x0) &&
               (pppplVar19 = ppppplVar36[3], pppplVar19 != (long ****)0x0)) {
              *(byte *)(pppplVar19 + 0xb) = *(byte *)(pppplVar19 + 0xb) & 0xfe;
            }
          }
        }
        param_3 = (long *********)(ulong)*(byte *)(param_1 + 0x395);
        cVar25 = '\x04';
      }
      else {
        bVar13 = *(int *)(param_1 + 0x366) != 0;
        if ((*(int *)(param_1 + 0x366) != 0) || (uVar29 == 0xffffffff)) goto LAB_7101c5f424;
        if ((uVar29 & 0xff) == 1) {
          if (7 < (ulong)*(byte *)pppppppplVar33) goto LAB_7101c60874;
          if (*(char *)(param_1 + (ulong)*(byte *)pppppppplVar33 * 0x3d + 0x15f) != '\x01') {
            ppppppplVar18 = param_1[0x9f];
            if (ppppppplVar18 == param_1[0xa0]) {
              cVar25 = '\0';
            }
            else {
              pcVar38 = (char *)((long)param_1[0xa0] + (-2 - (long)ppppppplVar18));
              uVar43 = (ulong)pcVar38 >> 1;
              uVar29 = (int)uVar43 + 1;
              uVar20 = (ulong)uVar29 & 3;
              if (pcVar38 < (char *)0x6) {
                cVar25 = '\0';
              }
              else {
                cVar25 = '\0';
                lVar23 = (uVar20 - 1) - uVar43;
                do {
                  cVar41 = *(char *)ppppppplVar18;
                  pcVar38 = (char *)((long)ppppppplVar18 + 2);
                  pcVar1 = (char *)((long)ppppppplVar18 + 4);
                  pcVar2 = (char *)((long)ppppppplVar18 + 6);
                  ppppppplVar18 = ppppppplVar18 + 1;
                  cVar25 = *pcVar2 + *pcVar1 + *pcVar38 + cVar41 + cVar25;
                  lVar23 = lVar23 + 4;
                } while (lVar23 != 0);
              }
              if ((uVar29 & 3) != 0) {
                lVar23 = -uVar20;
                do {
                  cVar25 = *(char *)ppppppplVar18 + cVar25;
                  lVar23 = lVar23 + 1;
                  ppppppplVar18 = (long *******)((long)ppppppplVar18 + 2);
                } while (lVar23 != 0);
              }
            }
            cVar41 = '\x02';
            if (*(char *)((long)param_1 + 0x18e6) != '\x03') {
              cVar41 = '\x04';
            }
            cVar4 = '\x03';
            if (*(char *)((long)param_1 + 0x18e6) != '\x02') {
              cVar4 = cVar41;
            }
            if ((cVar25 == cVar4) || (*(int *)(param_1 + 0x58) != 1)) {
              uVar29 = 2;
              goto LAB_7101c5fe9c;
            }
          }
          uVar29 = 1;
        }
LAB_7101c5fe9c:
        cVar25 = (char)uVar29;
        param_3 = (long *********)0x0;
      }
      FUN_7101c624f0((long *)&local_100,cVar25,(uint)param_3,(byte ****)param_4,param_5,param_6,
                     param_7,param_8);
      iVar51 = *(int *)(param_1 + 0x366);
      uVar26 = extraout_x1_14;
    }
    else {
      if (*(char *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x192) != '\0') {
        iVar51 = -(uint)(SUB84(ppppppplVar18[uVar17 * 0x3c + 0x2a],0) ==
                        *(float *)(ppppppplVar18 + uVar17 * 0x3c + 0x2c));
        iVar53 = -(uint)((float)((ulong)ppppppplVar18[uVar17 * 0x3c + 0x2a] >> 0x20) ==
                        *(float *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x164));
        iVar54 = -(uint)(SUB84(ppppppplVar18[uVar17 * 0x3c + 0x2b],0) ==
                        *(float *)(ppppppplVar18 + uVar17 * 0x3c + 0x2d));
        iVar55 = -(uint)((float)((ulong)ppppppplVar18[uVar17 * 0x3c + 0x2b] >> 0x20) ==
                        *(float *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x16c));
        auVar61._4_4_ = iVar53;
        auVar61._0_4_ = iVar51;
        auVar61._8_4_ = iVar54;
        auVar61._12_4_ = iVar55;
        auVar7._4_4_ = iVar53;
        auVar7._0_4_ = iVar51;
        auVar7._8_4_ = iVar54;
        auVar7._12_4_ = iVar55;
        auVar61 = NEON_ext(auVar61,auVar7,8,1);
        uVar20 = CONCAT44(iVar53,iVar51) & auVar61._0_8_;
        if ((((uint)uVar20 & (uint)(uVar20 >> 0x20)) == 0) || (cVar27 != '\0')) goto LAB_7101c5e910;
        ppppplVar36 = *ppppppplVar18[uVar17 * 0x3c + 0x14];
        if (ppppplVar36 == (long *****)0x0) {
          fVar52 = 0.0;
          fVar56 = 0.0;
          fVar58 = (float)((ulong)_ConstantZero >> 0x20);
          pppplVar19 = _ConstantZero;
        }
        else {
          fVar58 = *(float *)(ppppplVar36 + 6);
          pppplVar44 = ppppplVar36[6];
          fVar52 = ABS(*(float *)(ppppplVar36 + 10) * *(float *)(ppppplVar36 + 9));
          fVar56 = ABS(*(float *)((long)ppppplVar36 + 0x54) * *(float *)((long)ppppplVar36 + 0x4c));
          bVar6 = *(byte *)((long)ppppplVar36 + 0x5b) & 3;
          if (bVar6 == 2) {
            fVar58 = fVar58 - fVar52 * 0.5;
LAB_7101c5f820:
            pppplVar44 = (long ****)CONCAT44((int)((ulong)pppplVar44 >> 0x20),fVar58);
          }
          else if (bVar6 == 1) {
            fVar58 = fVar58 + fVar52 * 0.5;
            goto LAB_7101c5f820;
          }
          bVar6 = *(byte *)((long)ppppplVar36 + 0x5b) >> 2 & 3;
          fVar58 = (float)((ulong)pppplVar44 >> 0x20);
          if (bVar6 == 2) {
            fVar58 = fVar56 * 0.5 + fVar58;
LAB_7101c5f850:
            pppplVar44 = (long ****)CONCAT44(fVar58,(int)pppplVar44);
          }
          else if (bVar6 == 1) {
            fVar58 = fVar58 - fVar56 * 0.5;
            goto LAB_7101c5f850;
          }
          pppplVar39 = ppppplVar36[3];
          if (pppplVar39 == (long ****)0x0) {
            fVar58 = (float)((ulong)pppplVar44 >> 0x20);
            pppplVar19 = pppplVar44;
          }
          else {
            do {
              fVar59 = SUB84(pppplVar44,0) + *(float *)(pppplVar39 + 6);
              pppplVar19 = (long ****)(ulong)(uint)fVar59;
              fVar58 = (float)((ulong)pppplVar44 >> 0x20) + *(float *)((long)pppplVar39 + 0x34);
              pppplVar44 = (long ****)CONCAT44(fVar58,fVar59);
              pppplVar39 = (long ****)pppplVar39[3];
            } while (pppplVar39 != (long ****)0x0);
          }
        }
        fVar60 = SUB84(pppplVar19,0) + 960.0;
        fVar59 = fVar60 - fVar52 * 0.5;
        fVar60 = fVar60 + fVar52 * 0.5;
        bVar13 = true;
        bVar16 = false;
        if (fVar50 <= (540.0 - fVar58) + fVar56 * 0.5) {
          bVar13 = false;
          bVar16 = true;
          if (!NAN(fVar60) && !NAN(fVar57)) {
            bVar13 = fVar60 < fVar57;
            bVar16 = false;
          }
        }
        bVar14 = false;
        bVar15 = true;
        if (bVar13 == bVar16) {
          bVar14 = false;
          bVar15 = true;
          if (!NAN(fVar59) && !NAN(fVar57)) {
            bVar14 = fVar59 == fVar57;
            bVar15 = fVar57 <= fVar59;
          }
        }
        if (!bVar15 || bVar14) {
          bVar13 = (540.0 - fVar58) - fVar56 * 0.5 <= fVar50;
          goto LAB_7101c5f8e8;
        }
      }
      bVar13 = false;
      if (cVar27 != '\0') goto LAB_7101c5e914;
LAB_7101c5f8e8:
      if (*(int *)(param_1 + 0x366) == 0) {
        bVar6 = *(byte *)(param_1 + 0x395);
        unaff_x27 = (long *******)(ulong)bVar6;
        ppppppplVar18 = param_1[0x85];
        if (((ulong)ppppppplVar18 & 1) == 0) {
          uVar29 = 0;
        }
        else {
          ppppppplVar18 = param_1[0x5f];
          pppplVar19 = *(*ppppppplVar18)[3];
          if (pppplVar19 == (long ****)0x0) {
LAB_7101c5fa24:
            ppppppplVar18 = param_1[0x85];
            if (((uint)ppppppplVar18 >> 1 & 1) == 0) {
LAB_7101c5fa2c:
              uVar29 = (uint)((ulong)ppppppplVar18 >> 2) & 1;
            }
            else {
LAB_7101c5fa1c:
              uVar29 = 1;
            }
          }
          else {
            auVar61 = (*(code *)(*pppplVar19)[0x5f])();
            uVar26 = auVar61._8_8_;
            if ((auVar61._0_8_ & 1) == 0) {
              pppplVar19 = *(*ppppppplVar18)[3];
              if (pppplVar19 == (long ****)0x0) goto LAB_7101c5fa24;
              auVar61 = (*(code *)(*pppplVar19)[0x78])();
              uVar26 = auVar61._8_8_;
              ppppppplVar18 = param_1[0x85];
              if ((auVar61._0_8_ & 1) == 0) goto LAB_7101c5fa34;
              if (((uint)ppppppplVar18 >> 1 & 1) == 0) goto LAB_7101c5fa2c;
              goto LAB_7101c5fa1c;
            }
            ppppppplVar18 = param_1[0x85];
LAB_7101c5fa34:
            uVar29 = 0;
          }
        }
        ppppppplVar37 = (long *******)((ulong)ppppppplVar18 & 0xfffffffffffffffb);
        if (bVar6 != 0) {
          ppppppplVar37 = (long *******)((ulong)ppppppplVar18 | 4);
        }
        param_1[0x85] = ppppppplVar37;
        if (((ulong)ppppppplVar37 & 1) == 0) {
LAB_7101c5fabc:
          if (uVar29 != 0) goto LAB_7101c5fac0;
        }
        else {
          unaff_x27 = param_1[0x5f];
          if (*(*unaff_x27)[3] != (long ****)0x0) {
            auVar61 = (*(code *)(**(*unaff_x27)[3])[0x5f])();
            uVar26 = auVar61._8_8_;
            if ((auVar61._0_8_ & 1) != 0) goto LAB_7101c5fabc;
            if (*(*unaff_x27)[3] != (long ****)0x0) {
              auVar61 = (*(code *)(**(*unaff_x27)[3])[0x78])();
              uVar26 = auVar61._8_8_;
              if ((auVar61._0_8_ & 1) == 0) goto LAB_7101c5fabc;
            }
          }
          if (((uint)param_1[0x85] >> 1 & 1) == 0) {
            if ((uVar29 ^ (uint)((ulong)param_1[0x85] >> 2) & 1) == 1) {
LAB_7101c5fac0:
              *(undefined1 *)((long)param_1 + 0x431) = 0;
            }
          }
          else if (uVar29 == 0) goto LAB_7101c5fac0;
        }
        ppppppplVar18 = param_1[0x8a];
        if ((*(char *)(ppppppplVar18 + uVar17 * 0x3c + 0x32) == '\0') ||
           (*(char *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x192) == '\0')) {
LAB_7101c5fb10:
          if ((((*(char *)((long)ppppppppplVar47[0xc0] + 0x4aa) != '\0') &&
               ((*(byte *)((long)ppppppppplVar47[0xc0] + 0x1ac) >> 1 & 1) != 0)) &&
              (*(char *)((long)param_1 + 0x1b27) == '\0')) && (*(char *)(param_1 + 0x395) == '\0'))
          {
            pppplVar19 = *ppppppplVar18[uVar17 * 0x3c + 6][3];
            if (pppplVar19 == (long ****)0x0) {
              fVar50 = (float)_ConstantZero;
              fVar57 = (float)((ulong)_ConstantZero >> 0x20);
            }
            else {
              fVar50 = *(float *)(pppplVar19 + 6);
              fVar57 = *(float *)((long)pppplVar19 + 0x34);
            }
            pppppplVar34 = param_1[0x8c][0x1f];
            fVar52 = *(float *)(pppppplVar34 + 0x12);
            if (*(float *)(pppppplVar34 + 0x12) <= fVar50) {
              fVar52 = fVar50;
            }
            fVar50 = *(float *)((long)pppppplVar34 + 0x94);
            if (fVar52 <= *(float *)((long)pppppplVar34 + 0x94)) {
              fVar50 = fVar52;
            }
            fVar52 = *(float *)(pppppplVar34 + 0x13);
            if (*(float *)(pppppplVar34 + 0x13) <= fVar57) {
              fVar52 = fVar57;
            }
            fVar57 = *(float *)((long)pppppplVar34 + 0x9c);
            if (fVar52 <= *(float *)((long)pppppplVar34 + 0x9c)) {
              fVar57 = fVar52;
            }
            pppppplVar34[0xf] = (long *****)0x0;
            pppppplVar34[0xe] = (long *****)CONCAT44(fVar57,fVar50);
            *(undefined2 *)(param_1 + 0x86) = 1;
            pppppplVar34 = *param_1[0x62];
            if (pppppplVar34 != (long ******)0x0) {
              (*(code *)(*pppppplVar34)[0x65])(pppppplVar34,0);
              uVar26 = extraout_x1_26;
            }
            if ((*(int *)(param_1 + 0x80) != -1) || (*(int *)((long)param_1 + 0x404) != -1)) {
              FUN_710373b540((long)(param_1 + 0x7b),0);
              ppppppppplVar47 = (long *********)(param_1 + 0x7c);
              *(undefined4 *)(param_1 + 0x7b) = 0;
              FUN_71039602c0((long)ppppppppplVar47);
              param_1[0x7c] = (long *******)&PTR_FUN_7104f73d50;
              if ((param_1[0x7d] != (long *******)0x0) &&
                 ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x7e) == DAT_7106dd53ac)))) {
                ppppppplVar18 = param_1[0x7d] + 7;
                do {
                  cVar25 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
                  if (bVar13) {
                    *(int *)ppppppplVar18 = *(int *)ppppppplVar18 + -1;
                    cVar25 = ExclusiveMonitorsStatus();
                  }
                } while (cVar25 != '\0');
              }
              param_1[0x7e] = (long *******)0x0;
              param_1[0x7f] = (long *******)0x0;
              *ppppppppplVar47 = (long ********)0x0;
              param_1[0x7d] = (long *******)0x0;
              param_1[0x7e] = (long *******)0x87650000000000;
              param_1[0x7d] = (long *******)0x0;
              *(undefined1 *)(param_1 + 0x7f) = 0;
              param_1[0x7c] = (long *******)&PTR_FUN_7104f73d30;
              param_1[0x80] = (long *******)0xffffffffffffffff;
              param_1[0x81] = (long *******)0x0;
              *(undefined4 *)((long)param_1 + 0x414) = 0;
              uVar26 = extraout_x1_27;
            }
            *(undefined1 *)((long)param_1 + 0x1b27) = 1;
            iVar51 = *(int *)(param_1 + 0x366);
            goto joined_r0x007101c60498;
          }
        }
        else {
          iVar51 = -(uint)(SUB84(ppppppplVar18[uVar17 * 0x3c + 0x2a],0) ==
                          *(float *)(ppppppplVar18 + uVar17 * 0x3c + 0x2c));
          iVar53 = -(uint)((float)((ulong)ppppppplVar18[uVar17 * 0x3c + 0x2a] >> 0x20) ==
                          *(float *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x164));
          iVar54 = -(uint)(SUB84(ppppppplVar18[uVar17 * 0x3c + 0x2b],0) ==
                          *(float *)(ppppppplVar18 + uVar17 * 0x3c + 0x2d));
          iVar55 = -(uint)((float)((ulong)ppppppplVar18[uVar17 * 0x3c + 0x2b] >> 0x20) ==
                          *(float *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x16c));
          auVar8._4_4_ = iVar53;
          auVar8._0_4_ = iVar51;
          auVar8._8_4_ = iVar54;
          auVar8._12_4_ = iVar55;
          auVar9._4_4_ = iVar53;
          auVar9._0_4_ = iVar51;
          auVar9._8_4_ = iVar54;
          auVar9._12_4_ = iVar55;
          auVar61 = NEON_ext(auVar8,auVar9,8,1);
          uVar20 = CONCAT44(iVar53,iVar51) & auVar61._0_8_;
          if (((uint)uVar20 & (uint)(uVar20 >> 0x20)) != 0) goto LAB_7101c5fb10;
        }
        if ((!bVar13) || (*(char *)((long)param_1 + 0x422) != '\0')) {
          ppppppplVar18 = ppppppplVar18 + uVar17 * 0x3c;
          fVar50 = 0.8;
          if (*(char *)((long)ppppppplVar18 + 0x194) != '\0') {
            fVar50 = 1.0;
          }
          *(undefined1 *)((long)ppppppplVar18 + 0x193) = 0;
          *(float *)((long)ppppppplVar18 + 0x184) = fVar50;
          fVar50 = *(float *)(ppppppplVar18 + 0x30) * fVar50;
          goto LAB_7101c5fb70;
        }
        pppppplVar34 = param_1[0x8c][0x1f];
        iVar51 = -(uint)(SUB84(pppppplVar34[0xc],0) == *(float *)(pppppplVar34 + 0xe));
        iVar53 = -(uint)((float)((ulong)pppppplVar34[0xc] >> 0x20) ==
                        *(float *)((long)pppppplVar34 + 0x74));
        iVar54 = -(uint)(SUB84(pppppplVar34[0xd],0) == *(float *)(pppppplVar34 + 0xf));
        iVar55 = -(uint)((float)((ulong)pppppplVar34[0xd] >> 0x20) ==
                        *(float *)((long)pppppplVar34 + 0x7c));
        fVar50 = 0.8;
        auVar10._4_4_ = iVar53;
        auVar10._0_4_ = iVar51;
        auVar10._8_4_ = iVar54;
        auVar10._12_4_ = iVar55;
        auVar11._4_4_ = iVar53;
        auVar11._0_4_ = iVar51;
        auVar11._8_4_ = iVar54;
        auVar11._12_4_ = iVar55;
        auVar61 = NEON_ext(auVar10,auVar11,8,1);
        uVar20 = CONCAT44(iVar53,iVar51) & auVar61._0_8_;
        fVar57 = 0.8;
        if (*(char *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x194) != '\0') {
          fVar57 = 1.0;
        }
        fVar52 = *(float *)(ppppppplVar18 + uVar17 * 0x3c + 0x30);
        *(undefined1 *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x193) = 1;
        *(float *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x184) = fVar57;
        *(float *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x18c) = fVar52 * fVar57;
        *(undefined1 *)((long)param_1[0x8c] + 0x15d) = 1;
        if ((((uint)uVar20 & (uint)(uVar20 >> 0x20)) != 0) &&
           (((*(char *)((long)ppppppppplVar47[0xc0] + 0x4aa) != '\0' &&
             ((*(byte *)(ppppppppplVar47[0xc0] + 0x35) >> 1 & 1) != 0)) ||
            (*(char *)((long)param_1 + 0x1b27) != '\0')))) {
          *(undefined1 *)((long)param_1 + 0x1b27) = 0;
          if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1529449063,
                                      (long ****)&DAT_00000004,(byte ****)param_4,param_5,param_6,
                                      param_7,param_8), (uVar20 & 1) != 0)) {
            FUN_71024076d0((undefined4 *)&local_c0,0x1529449063);
            if (((local_b0 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)uStack_a8 == DAT_7106dd53ac)) {
              local_b0 = local_b0 + 7;
              do {
                cVar25 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                if (bVar13) {
                  *(int *)local_b0 = *(int *)local_b0 + -1;
                  cVar25 = ExclusiveMonitorsStatus();
                }
              } while (cVar25 != '\0');
            }
          }
          else {
            uStack_a8 = 0x87650000000000;
            local_a0 = local_a0 & 0xffffffffffffff00;
            local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
            local_88 = (long *******)0x0;
            local_98 = (long *******)0xffffffffffffffff;
            ppppppplStack_90 = (long *******)0x0;
          }
          local_b8 = (long ********)&PTR_FUN_7104f73d50;
          param_3 = (long *********)0x1;
          local_b0 = (long *******)0x0;
          local_a0 = local_a0 & 0xffffffffffffff00;
          FUN_7101c77160((long)unaff_x21,(uint)bVar48,(long ****)0x1,(byte ****)param_4,param_5,
                         param_6,param_7,param_8);
          lVar23 = uVar17 * 0x1e0;
          ppppppplVar18 = param_1[0x8a];
          fVar57 = *(float *)(ppppppplVar18 + uVar17 * 0x3c + 0x30);
          *(undefined1 *)((long)ppppppplVar18 + lVar23 + 0x193) = 0;
          if (*(char *)((long)ppppppplVar18 + lVar23 + 0x194) != '\0') {
            fVar50 = 1.0;
          }
          *(float *)((long)ppppppplVar18 + lVar23 + 0x184) = fVar50;
          *(float *)((long)ppppppplVar18 + lVar23 + 0x18c) = fVar57 * fVar50;
          ppppppplVar18 = param_1[0x8a];
          if (*(int *)(ppppppplVar18 + uVar17 * 0x3c + 0x34) == 0) {
            ppppppplVar37 = ppppppplVar18 + uVar17 * 0x3c + 5;
          }
          else {
            ppppppplVar37 = ppppppplVar18 + uVar17 * 0x3c + 5;
            FUN_71037780e0(&local_100,(long)ppppppplVar37,(long ****)"balloon_off",param_3,param_4,
                           param_5,param_6,param_7,param_8);
            FUN_710377aee0(0x3f800000,(long)&local_100);
            ppuVar12 = local_f8;
            *(undefined4 *)(ppppppplVar18 + uVar17 * 0x3c + 0x34) = 0;
            local_100 = (long ********)&PTR_FUN_710523d9e8;
            local_f8 = (undefined **)0x0;
            if (ppuVar12 != (undefined **)0x0) {
              FUN_710392eb40((ulong)ppuVar12);
            }
          }
          unaff_x27 = ppppppplVar18 + uVar17 * 0x3c + 6;
          FUN_7103778300(0x3f800000,(long)*unaff_x27,0x7104443dfb);
          if (*(char *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x19b) != '\0') {
            FUN_7103778300(0x3f800000,(long)*unaff_x27,0x71042c4e37);
          }
          *(undefined1 *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x19b) = 0;
          if (ppppppplVar18[uVar17 * 0x3c + 0x20][1] != (long *****)0x0) {
            ppppppplVar30 = ppppppplVar18 + uVar17 * 0x3c + 0x20;
            (*(code *)(*ppppppplVar18[uVar17 * 0x3c + 0x20][1])[0x27])();
            pppppplVar34 = *ppppppplVar30;
            ppppplVar36 = pppppplVar34[1];
            unaff_x27 = ppppppplVar30;
            if (ppppplVar36 != (long *****)0x0) {
              if (*(char *)(pppppplVar34 + 2) != '\0') {
                ppppppplVar18 = (long *******)(*pppppplVar34)[0x10];
                unaff_x27 = (long *******)(*pppppplVar34 + 0x11);
                if (ppppppplVar18 != unaff_x27) {
                  do {
                    uVar20 = (*(code *)(*ppppppplVar18[0xd])[0x29])();
                    if (((uVar20 & 1) != 0) &&
                       (uVar20 = (*(code *)(*ppppplVar36)[0x24])(ppppplVar36,ppppppplVar18[0xd]),
                       (uVar20 & 1) != 0)) {
                      (*(code *)(*ppppppplVar18[0xd])[0x2f])();
                      (*(code *)(*ppppppplVar18[0xd])[0x28])(ppppppplVar18[0xd],0);
                    }
                    ppppppplVar32 = (long *******)ppppppplVar18[1];
                    if ((long *******)ppppppplVar18[1] == (long *******)0x0) {
                      ppppppplVar32 = ppppppplVar18 + 2;
                      ppppppplVar24 = (long *******)*ppppppplVar32;
                      if ((long *******)*ppppppplVar24 != ppppppplVar18) {
                        do {
                          pppppplVar34 = *ppppppplVar32;
                          ppppppplVar32 = (long *******)(pppppplVar34 + 2);
                          ppppppplVar24 = (long *******)*ppppppplVar32;
                        } while (*ppppppplVar24 != pppppplVar34);
                      }
                    }
                    else {
                      do {
                        ppppppplVar24 = ppppppplVar32;
                        ppppppplVar32 = (long *******)*ppppppplVar24;
                      } while ((long *******)*ppppppplVar24 != (long *******)0x0);
                    }
                    ppppppplVar18 = ppppppplVar24;
                  } while (ppppppplVar24 != unaff_x27);
                  ppppplVar36 = (*ppppppplVar30)[1];
                }
              }
              (*(code *)(*ppppplVar36)[0x31])(ppppplVar36);
            }
          }
          FUN_71037780e0(&local_100,(long)ppppppplVar37,(long ****)"change_blink_off",param_3,
                         param_4,param_5,param_6,param_7,param_8);
          ppuVar12 = local_f8;
          local_100 = (long ********)&PTR_FUN_710523d9e8;
          local_f8 = (undefined **)0x0;
          if (ppuVar12 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar12);
          }
          ppppppppplVar47 = (long *********)0x0;
          *(undefined1 *)((long)param_1[0x8c] + 0x15e) = 1;
          *(undefined1 *)((long)param_1 + 0x652) = 0;
          FUN_710376b960((long)param_1[0x91]);
          (*(code *)(*param_1[0x91])[0xe])(param_1[0x91],0);
          (*(code *)(*param_1[0x91])[0xc])(param_1[0x91],0);
          *(undefined2 *)(param_1 + 0x86) = 1;
          pppppplVar34 = *param_1[0x62];
          uVar26 = extraout_x1_20;
          if (pppppplVar34 != (long ******)0x0) {
            (*(code *)(*pppppplVar34)[0x65])(pppppplVar34,0);
            uVar26 = extraout_x1_21;
          }
          if ((*(int *)(param_1 + 0x80) != -1) || (*(int *)((long)param_1 + 0x404) != -1)) {
            FUN_710373b540((long)(param_1 + 0x7b),0);
            ppppppppplVar47 = (long *********)(param_1 + 0x7c);
            *(undefined4 *)(param_1 + 0x7b) = 0;
            FUN_71039602c0((long)ppppppppplVar47);
            param_1[0x7c] = (long *******)&PTR_FUN_7104f73d50;
            if ((param_1[0x7d] != (long *******)0x0) &&
               ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x7e) == DAT_7106dd53ac)))) {
              ppppppplVar18 = param_1[0x7d] + 7;
              do {
                cVar25 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppppppplVar18,0x10);
                if (bVar13) {
                  *(int *)ppppppplVar18 = *(int *)ppppppplVar18 + -1;
                  cVar25 = ExclusiveMonitorsStatus();
                }
              } while (cVar25 != '\0');
            }
            param_1[0x7e] = (long *******)0x0;
            param_1[0x7f] = (long *******)0x0;
            *ppppppppplVar47 = (long ********)0x0;
            param_1[0x7d] = (long *******)0x0;
            param_1[0x7d] = (long *******)0x0;
            *(undefined4 *)(param_1 + 0x7e) = 0;
            *(undefined4 *)((long)param_1 + 0x3f4) = 0x876500;
            *(undefined1 *)(param_1 + 0x7f) = 0;
            param_1[0x7c] = (long *******)&PTR_FUN_7104f73d30;
            param_1[0x80] = (long *******)0xffffffffffffffff;
            param_1[0x81] = (long *******)0x0;
            *(undefined4 *)((long)param_1 + 0x414) = 0;
            uVar26 = extraout_x1_22;
          }
          FUN_7101c73b20((long *)(param_1 + 0x90),uVar26,param_3,(byte ****)param_4,param_5,param_6,
                         param_7,param_8);
          *(undefined4 *)(param_1 + 0x366) = 0x1e;
          iVar51 = *(int *)(param_1 + 0x366);
          uVar26 = extraout_x1_23;
          goto joined_r0x007101c60498;
        }
      }
      else {
        ppppppplVar18 = ppppppplVar18 + uVar17 * 0x3c;
        *(undefined4 *)((long)ppppppplVar18 + 0x184) = 0x3f4ccccd;
        *(undefined1 *)((long)ppppppplVar18 + 0x193) = 0;
        fVar50 = *(float *)(ppppppplVar18 + 0x30) * 0.8;
LAB_7101c5fb70:
        *(float *)((long)ppppppplVar18 + 0x18c) = fVar50;
        *(undefined1 *)((long)param_1[0x8c] + 0x15d) = 0;
      }
LAB_7101c5fb7c:
      iVar51 = *(int *)(param_1 + 0x366);
    }
joined_r0x007101c60498:
    if (((iVar51 != 0) && (*(int *)(param_1 + 0x366) = iVar51 + -1, iVar51 + -1 == 0)) &&
       (cVar27 != '\0')) {
      ppppppppplVar47 = (long *********)(ulong)*(byte *)((long)param_1 + 0x651);
      *(undefined1 *)((long)param_1 + 0x652) = 1;
      FUN_710376b960((long)param_1[0x91]);
      (*(code *)(*param_1[0x91])[0xe])(param_1[0x91],ppppppppplVar47);
      (*(code *)(*param_1[0x91])[0xc])(param_1[0x91],ppppppppplVar47);
      uVar26 = extraout_x1_17;
    }
    if (*(char *)(param_1 + 0x395) == '\0') goto LAB_7101c5e44c;
    ppppppplVar18 = param_1[0x8c];
    fVar50 = *(float *)((long)ppppppplVar18 + 0x144) - *(float *)(ppppppplVar18 + 0x28);
    if ((-1e-05 < fVar50) && (fVar50 < 1e-05)) goto LAB_7101c5e44c;
    fVar50 = *(float *)(ppppppplVar18 + 0x29);
    fVar57 = *(float *)((long)ppppppplVar18 + 0x14c) - fVar50;
    if ((-1e-05 < fVar57) && (fVar57 < 1e-05)) goto LAB_7101c5e44c;
    fVar57 = SUB84(ppppppplVar18[0x1f][0xc],0);
    if ((*(float *)((long)ppppppplVar18 + 0x144) < fVar57) ||
       (fVar57 < *(float *)(ppppppplVar18 + 0x28))) goto LAB_7101c5e44c;
    fVar57 = (float)((ulong)ppppppplVar18[0x1f][0xc] >> 0x20);
    bVar13 = false;
    bVar16 = true;
    if (fVar57 <= *(float *)((long)ppppppplVar18 + 0x14c)) {
      bVar13 = false;
      bVar16 = true;
      if (!NAN(fVar50) && !NAN(fVar57)) {
        bVar13 = fVar50 == fVar57;
        bVar16 = fVar57 <= fVar50;
      }
    }
    if ((bVar16 && !bVar13) || (*(char *)((long)param_1 + 0x422) != '\0')) goto LAB_7101c5e44c;
    param_3 = (long *********)0x1;
    ppppppppplVar47 = (long *********)0x0;
    FUN_7101c77160((long)unaff_x21,(uint)bVar48,(long ****)0x1,(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined1 *)((long)param_1[0x8c] + 0x15e) = 1;
    ppppppplVar18 = param_1[0x8a];
    *(undefined1 *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x192) = 1;
    bVar13 = false;
    if (*(char *)(ppppppplVar18 + uVar17 * 0x3c + 0x32) != '\0') {
      bVar13 = *(char *)((long)ppppppplVar18 + uVar17 * 0x1e0 + 0x191) != '\0';
    }
    if ((ppppppplVar18[uVar17 * 0x3c + 6][1] != (long *****)0x0) &&
       (pppplVar19 = ppppppplVar18[uVar17 * 0x3c + 6][1][3], pppplVar19 != (long ****)0x0)) {
      *(byte *)(pppplVar19 + 0xb) = *(byte *)(pppplVar19 + 0xb) & 0xfe | bVar13;
    }
    uVar5 = *(undefined1 *)((long)param_1 + 0x651);
    *(undefined1 *)((long)param_1 + 0x652) = 1;
    FUN_710376b960((long)param_1[0x91]);
    (*(code *)(*param_1[0x91])[0xe])(param_1[0x91],uVar5);
    (*(code *)(*param_1[0x91])[0xc])(param_1[0x91],uVar5);
    *(undefined1 *)(param_1 + 0x395) = 0;
    ppppppplVar18 = param_1[0x363];
    uVar26 = extraout_x1_18;
  }
  if (ppppppplVar18 != (long *******)0x0) {
    pbVar3 = (byte *)((long)param_1[0x35f][(ulong)param_1[0x362] / 0x555] +
                     ((ulong)param_1[0x362] % 0x555) * 3);
    bVar48 = *pbVar3;
    uVar17 = (ulong)bVar48;
    if (7 < uVar17) goto LAB_7101c60874;
    unaff_x21 = (long *********)(ulong)pbVar3[1];
    ppppppppplVar47 = (long *********)(ulong)pbVar3[2];
    if (param_1[0x8a][uVar17 * 0x3c + 0x20][1] != (long *****)0x0) {
      auVar61 = (*(code *)(*param_1[0x8a][uVar17 * 0x3c + 0x20][1])[0x27])();
      uVar26 = auVar61._8_8_;
      if ((auVar61._0_8_ & 1) == 0) goto LAB_7101c5e548;
    }
    pppppppplVar33 = param_1 + uVar17 * 0x3d + 0x123;
    if (7 < bVar48) {
      pppppppplVar33 = (long ********)0x0;
    }
    param_7 = (ulong)*(byte *)((long)pppppppplVar33 + 0x1e4);
    param_6 = (ulong)*(byte *)((long)pppppppplVar33 + 0x1e1);
    param_5 = (long ****)(ulong)*(byte *)(pppppppplVar33 + 0x3c);
    param_3 = unaff_x21;
    param_4 = ppppppppplVar47;
    FUN_7101c60880((long)param_1,(ulong)(uint)bVar48,(long ****)unaff_x21,(byte ****)ppppppppplVar47
                   ,(uint)*(byte *)(pppppppplVar33 + 0x3c),param_6,param_7,param_8);
    ppppppplVar18 = (long *******)((long)param_1[0x362] + 1);
    ppppppplVar37 = param_1[0x35f];
    param_1[0x363] = (long *******)((long)param_1[0x363] + -1);
    param_1[0x362] = ppppppplVar18;
    uVar26 = extraout_x1_10;
    if ((long *******)0xaa9 < ppppppplVar18) {
      if (*ppppppplVar37 != (long ******)0x0) {
        FUN_710392eb40((ulong)*ppppppplVar37);
        ppppppplVar37 = param_1[0x35f];
        ppppppplVar18 = param_1[0x362];
        uVar26 = extraout_x1_11;
      }
      param_1[0x35f] = ppppppplVar37 + 1;
      param_1[0x362] = (long *******)((long)ppppppplVar18 - 0x555);
    }
  }
LAB_7101c5e548:
  if (*(char *)(param_1 + 0x365) != '\0') {
    *(undefined1 *)(param_1 + 0x365) = 0;
    if (*(int *)(param_1 + 0x58) - 7U < 5) {
      if ((*(char *)(param_1 + 0x101) != '\0') &&
         (ppppppplVar18 = param_1[0x9f], param_1[0xa0] != ppppppplVar18)) {
        ppppppppplVar47 = (long *********)0x0;
        do {
          unaff_x21 = (long *********)
                      ((ulong)unaff_x21 & 0xffffffffffff0000 |
                      (ulong)*(ushort *)((long)ppppppplVar18 + (long)ppppppppplVar47 * 2));
          param_3 = ppppppppplVar47;
          param_4 = unaff_x21;
          FUN_7101c59930((long)param_1,'\x01',(ulong)ppppppppplVar47,(byte ****)unaff_x21,param_5,
                         param_6,param_7,param_8);
          ppppppppplVar47 = (long *********)((ulong)((int)ppppppppplVar47 + 1) & 0xff);
          ppppppplVar18 = param_1[0x9f];
        } while (ppppppppplVar47 < (long *********)((long)param_1[0xa0] - (long)ppppppplVar18 >> 1))
        ;
      }
    }
    else {
      if (*(char *)((long)param_1 + 0x80b) != '\0') {
        ppppppplVar18 = param_1[0x9f];
        if (param_1[0xa0] != ppppppplVar18) {
          ppppppppplVar45 = (long *********)0x0;
          do {
            ppppppppplVar47 =
                 (long *********)
                 ((ulong)ppppppppplVar47 & 0xffffffffffff0000 |
                 (ulong)*(ushort *)((long)ppppppplVar18 + (long)ppppppppplVar45 * 2));
            param_3 = ppppppppplVar45;
            param_4 = ppppppppplVar47;
            FUN_7101c59930((long)param_1,'\0',(ulong)ppppppppplVar45,(byte ****)ppppppppplVar47,
                           param_5,param_6,param_7,param_8);
            ppppppppplVar45 = (long *********)((ulong)((int)ppppppppplVar45 + 1) & 0xff);
            ppppppplVar18 = param_1[0x9f];
          } while (ppppppppplVar45 <
                   (long *********)((long)param_1[0xa0] - (long)ppppppplVar18 >> 1));
        }
        FUN_7101c5d460((long)(param_1 + 0x100));
        uVar26 = extraout_x1_12;
      }
      if (*(char *)(param_1 + 0xfa) != '\0') {
        FUN_7101c5a2d0((long)param_1,uVar26,param_3,(byte ****)param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
  }
  ppppppplVar18 = param_1[0x8a];
  FUN_7101c75780((long)(ppppppplVar18 + 2),(long)ppppppplVar18[1]);
  FUN_7101c75780((long)(ppppppplVar18 + 0x3e),(long)ppppppplVar18[1]);
  FUN_7101c75780((long)(ppppppplVar18 + 0x7a),(long)ppppppplVar18[1]);
  FUN_7101c75780((long)(ppppppplVar18 + 0xb6),(long)ppppppplVar18[1]);
  FUN_7101c75780((long)(ppppppplVar18 + 0xf2),(long)ppppppplVar18[1]);
  FUN_7101c75780((long)(ppppppplVar18 + 0x12e),(long)ppppppplVar18[1]);
  FUN_7101c75780((long)(ppppppplVar18 + 0x16a),(long)ppppppplVar18[1]);
  FUN_7101c75780((long)(ppppppplVar18 + 0x1a6),(long)ppppppplVar18[1]);
  ppppppplVar18 = param_1[0x90];
  pppppppplVar33 = param_1 + 0x90;
  if (ppppppplVar18[0x62] != (long ******)0x0) {
    pppplVar19 = ppppppplVar18[0x62][1][1];
    if (pppplVar19 != (long ****)0x0) {
      uVar17 = (*(code *)(*pppplVar19)[0x27])();
      if ((uVar17 & 1) == 0) goto LAB_7101c5ea8c;
      ppppppplVar18 = *pppppppplVar33;
    }
    param_3 = (long *********)(ulong)*(byte *)(ppppppplVar18 + 0x207);
    FUN_7101c73720((long)ppppppplVar18,(long)(ppppppplVar18 + 6),(ulong)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7101c71530((long)(*pppppppplVar33 + 0x34),extraout_x1_13,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_c0,(long)(*pppppppplVar33 + 4),(long ****)"set_txt_nomal",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pppppppplVar35 = local_b8;
    if (local_b8[2] != (long *******)0x0) {
      param_3 = (long *********)0x0;
      param_4 = (long *********)0x0;
      local_100 = (long ********)((ulong)local_100 & 0xffffffff00000000);
      FUN_71037a2270((long *)local_b8[2],(ushort *)&local_100,0,0);
    }
    local_c0 = (long ********)&PTR_FUN_710523d9a8;
    local_b8 = (long ********)0x0;
    if (pppppppplVar35 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar35);
    }
    FUN_7103776910(&local_c0,(long)(*pppppppplVar33 + 4),(long ****)"set_txt_italic",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    pppppppplVar35 = local_b8;
    if (*(long **)((long)local_b8 + 0x10) != (long *)0x0) {
      param_3 = (long *********)0x0;
      param_4 = (long *********)0x0;
      local_100 = (long ********)((ulong)local_100 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)((long)local_b8 + 0x10),(ushort *)&local_100,0,0);
    }
    local_c0 = (long ********)&PTR_FUN_710523d9a8;
    local_b8 = (long ********)0x0;
    if (pppppppplVar35 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar35);
    }
    pppppplVar34 = (*pppppppplVar33)[0x62];
    (*pppppppplVar33)[0x62] = (long ******)0x0;
    if (pppppplVar34 != (long ******)0x0) {
      (*(code *)(*pppppplVar34)[1])();
    }
    goto LAB_7101c5ea8c;
  }
  if (*(char *)((long)ppppppplVar18 + 0x1041) == '\0') {
    if (*(char *)(ppppppplVar18 + 0x208) != '\0') {
      lVar23 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar23 + 0x48) - *(long *)(lVar23 + 0x40) >> 3) < 6) {
        uVar17 = 0;
        if (*(char *)(lVar23 + 0x191) == '\0') goto LAB_7101c5e9a4;
LAB_7101c5ea14:
        local_a0 = local_a0 & 0xffffffffffffff00;
        local_98 = (long *******)0xffffffffffffffff;
        ppppppplStack_90 = (long *******)0x0;
        local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
        local_88 = (long *******)0x0;
        uStack_a8 = 0x87650000000000;
      }
      else {
        uVar17 = *(ulong *)(*(long *)(lVar23 + 0x40) + 0x28);
        if (*(char *)(lVar23 + 0x191) != '\0') goto LAB_7101c5ea14;
LAB_7101c5e9a4:
        param_3 = (long *********)&DAT_00000004;
        uVar20 = FUN_7103313f20(lVar23,uVar17,(long ****)&DAT_00000004,(byte ****)param_4,param_5,
                                param_6,param_7,param_8);
        if ((uVar20 & 1) == 0) goto LAB_7101c5ea14;
        FUN_71024076d0((undefined4 *)&local_c0,uVar17);
        if (((local_b0 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
           ((int)uStack_a8 == DAT_7106dd53ac)) {
          local_b0 = local_b0 + 7;
          do {
            cVar27 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(local_b0,0x10);
            if (bVar13) {
              *(int *)local_b0 = *(int *)local_b0 + -1;
              cVar27 = ExclusiveMonitorsStatus();
            }
          } while (cVar27 != '\0');
        }
      }
      local_b8 = (long ********)&PTR_FUN_7104f73d50;
      local_b0 = (long *******)0x0;
      local_a0 = local_a0 & 0xffffffffffffff00;
      FUN_7103778300(0x3f800000,(long)(*pppppppplVar33)[1],0x71043e0210);
      ppppppplVar18 = *pppppppplVar33;
      ppppplVar36 = *ppppppplVar18[3];
      if (ppppplVar36 != (long *****)0x0) {
        param_3 = (long *********)0x0;
        (*(code *)(*ppppplVar36)[0x5e])(ppppplVar36,1);
        ppppppplVar18 = *pppppppplVar33;
      }
      lVar23 = 0x1040;
      goto LAB_7101c5ea88;
    }
    if (*(int *)((long)ppppppplVar18 + 0x103c) == 0) {
      if ((ppppppplVar18[0x206] != (long ******)0x0) &&
         (*(char *)((long)ppppppplVar18 + 0x1042) != '\0')) {
        unaff_x27 = (long *******)(ulong)*(byte *)((long)ppppppplVar18 + 0x1039);
        if ((long *******)0x16 < unaff_x27) goto LAB_7101c60874;
        ppppplVar36 = ppppppplVar18[0x202][(ulong)ppppppplVar18[0x205] / 0x1c];
        uVar17 = (ulong)ppppppplVar18[0x205] % 0x1c;
        ppppppplVar37 = (long *******)(ppppplVar36 + uVar17 * 0x12);
        *(undefined1 *)(ppppppplVar18 + (long)unaff_x27 * 0x12 + 99) = *(undefined1 *)ppppppplVar37;
        if (ppppppplVar18 + (long)unaff_x27 * 0x12 + 99 != ppppppplVar37) {
          FUN_7101696040((uint *)((long)ppppppplVar18 + (long)unaff_x27 * 0x90 + 0x31c),
                         (ushort *)((long)ppppplVar36 + uVar17 * 0x90 + 0xc));
        }
        ppppppplVar24 = (long *******)ppppppplVar18[(long)unaff_x27 * 0x12 + 0x73];
        pppplVar19 = ppppplVar36[uVar17 * 0x12 + 0x10];
        uVar29 = *(uint *)(ppppplVar36 + uVar17 * 0x12 + 0x11);
        uVar17 = (ulong)uVar29;
        ppppppplVar30 = ppppppplVar18 + (long)unaff_x27 * 0x12 + 0x6b;
        ppppppplVar32 = ppppppplVar18 + (long)unaff_x27 * 0x12 + 0x73;
        if ((ppppppplVar30 != ppppppplVar24) && (ppppppplVar24 != (long *******)0x0)) {
          FUN_710392eb40((ulong)ppppppplVar24);
        }
        *(undefined2 *)ppppppplVar30 = 0;
        *ppppppplVar32 = (long ******)ppppppplVar30;
        *(undefined4 *)(ppppppplVar18 + (long)unaff_x27 * 0x12 + 0x74) = 0;
        if (pppplVar19 != (long ****)0x0) {
          unaff_x27 = ppppppplVar18 + (long)unaff_x27 * 0x12 + 0x74;
          if ((int)uVar29 < 0) {
            uVar42 = *(ushort *)pppplVar19;
            if (uVar42 != 0) {
              uVar29 = 0;
              uVar17 = 0;
              pppplVar44 = pppplVar19;
              do {
                if ((uVar42 | 1) == 0xf) {
                  if (uVar42 == 0xe) {
                    iVar51 = (*(ushort *)((long)pppplVar44 + 6) >> 1) + 4;
                  }
                  else {
                    iVar51 = 3;
                    if (uVar42 != 0xf) {
                      iVar51 = 0;
                    }
                  }
                }
                else {
                  iVar51 = 1;
                }
                uVar29 = iVar51 + uVar29;
                pppplVar44 = (long ****)((long)pppplVar19 + (ulong)uVar29 * 2);
                uVar17 = (ulong)(uint)(iVar51 + (int)uVar17);
                uVar42 = *(ushort *)pppplVar44;
              } while (uVar42 != 0);
              goto LAB_7101c5f77c;
            }
            uVar17 = 0;
            *(int *)unaff_x27 = 0;
          }
          else {
LAB_7101c5f77c:
            iVar51 = (int)uVar17;
            *(int *)unaff_x27 = iVar51;
            if (0x1f < iVar51) {
              uVar20 = (ulong)(iVar51 + 1);
              pppppppplVar35 = (long ********)(uVar20 * 2);
              if (CARRY8(uVar20,uVar20)) {
                pppppppplVar35 = (long ********)0xffffffffffffffff;
              }
              if (pppppppplVar35 == (long ********)0x0) {
                pppppppplVar35 = (long ********)0x1;
              }
              ppppppplVar30 =
                   (long *******)
                   FUN_710392e290(0x10,pppppppplVar35,(long ****)param_3,(byte ****)param_4,param_5,
                                  param_6,param_7,param_8);
              if (ppppppplVar30 == (long *******)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_100 = (long ********)((ulong)local_100 & 0xffffffff00000000);
                  ppppppppplVar47 = &local_c0;
                  local_c0 = pppppppplVar35;
                  uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                  if (((uVar20 & 1) != 0) &&
                     (ppppppplVar30 =
                           (long *******)
                           FUN_710392e290(0x10,pppppppplVar35,(long ****)ppppppppplVar47,
                                          (byte ****)param_4,param_5,param_6,param_7,param_8),
                     ppppppplVar30 != (long *******)0x0)) goto LAB_7101c5f7f8;
                }
                ppppppplVar30 = (long *******)0x0;
              }
LAB_7101c5f7f8:
              *ppppppplVar32 = (long ******)ppppppplVar30;
            }
          }
          param_3 = (long *********)(-(uVar17 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1);
          memcpy(ppppppplVar30,pppplVar19,(size_t)param_3);
          *(undefined2 *)((long)*ppppppplVar32 + (long)*(int *)unaff_x27 * 2) = 0;
        }
        *(undefined1 *)(*pppppppplVar33 + 0x207) = *(undefined1 *)((long)*pppppppplVar33 + 0x1039);
        cVar25 = *(char *)((long)*pppppppplVar33 + 0x1039);
        cVar27 = '\0';
        if (cVar25 != '\x16') {
          cVar27 = cVar25 + '\x01';
        }
        *(char *)((long)*pppppppplVar33 + 0x1039) = cVar27;
        FUN_7101c70620((long)(*pppppppplVar33 + 4),(byte *)ppppppplVar37,param_3,param_4,param_5,
                       param_6,param_7,param_8);
        ppppppplVar18 = *pppppppplVar33;
        uVar29 = 0x16;
        if (*(byte *)(ppppppplVar18 + 0x207) != 0) {
          uVar29 = *(byte *)(ppppppplVar18 + 0x207) - 1;
        }
        param_3 = (long *********)(ulong)uVar29;
        FUN_7101c73720((long)ppppppplVar18,(long)(ppppppplVar18 + 0x34),(ulong)param_3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_7101c71530((long)(*pppppppplVar33 + 6),extraout_x1_25,param_3,param_4,param_5,param_6,
                       param_7,param_8);
        ppppppplVar18 = *pppppppplVar33;
        ppppplVar36 = *ppppppplVar18[3];
        pppplVar19 = (long ****)"newtext_in_close";
        if (ppppplVar36 != (long *****)0x0) {
          uVar17 = (*(code *)(*ppppplVar36)[0x5f])();
          pppplVar19 = (long ****)"newtext_in";
          if ((uVar17 & 1) == 0) {
            pppplVar19 = (long ****)"newtext_in_close";
          }
        }
        FUN_71037780e0(&local_c0,(long)ppppppplVar18,pppplVar19,param_3,param_4,param_5,param_6,
                       param_7,param_8);
        ppppppppplVar47 =
             (long *********)
             FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,param_5,param_6,param_7,
                            param_8);
        if (ppppppppplVar47 == (long *********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_7c[0] = 0;
            local_100 = (long ********)&DAT_00000010;
            param_3 = &local_100;
            uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
            if (((uVar17 & 1) != 0) &&
               (ppppppppplVar47 =
                     (long *********)
                     FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,param_5,param_6,
                                    param_7,param_8), ppppppppplVar47 != (long *********)0x0))
            goto LAB_7101c605c4;
          }
          ppppppppplVar47 = (long *********)0x0;
        }
LAB_7101c605c4:
        pppppppplVar35 = local_b8;
        *ppppppppplVar47 = (long ********)&PTR_FUN_710523d9e8;
        ppppppppplVar47[1] = (long ********)0x0;
        if (&local_c0 != ppppppppplVar47) {
          local_b8 = (long ********)0x0;
          ppppppppplVar47[1] = pppppppplVar35;
        }
        pppppplVar34 = (*pppppppplVar33)[0x62];
        (*pppppppplVar33)[0x62] = (long ******)ppppppppplVar47;
        if (pppppplVar34 != (long ******)0x0) {
          (*(code *)(*pppppplVar34)[1])(pppppplVar34);
        }
        pppppppplVar35 = local_b8;
        local_c0 = (long ********)&PTR_FUN_710523d9e8;
        local_b8 = (long ********)0x0;
        if (pppppppplVar35 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar35);
        }
        FUN_710377aee0(0x3f800000,(long)(*pppppppplVar33)[0x62]);
        uVar28 = 0;
        if (5 < *(byte *)ppppppplVar37 - 0x6a) {
          uVar28 = 0x28;
        }
        *(undefined4 *)((long)*pppppppplVar33 + 0x103c) = uVar28;
        ppppppplVar18 = *pppppppplVar33;
        ppppplVar46 = ppppppplVar18[0x202][(ulong)ppppppplVar18[0x205] / 0x1c];
        uVar17 = (ulong)ppppppplVar18[0x205] % 0x1c;
        ppppplVar36 = (long *****)ppppplVar46[uVar17 * 0x12 + 0x10];
        ppppplVar49 = ppppplVar46 + uVar17 * 0x12 + 8;
        if ((ppppplVar49 != ppppplVar36) && (ppppplVar36 != (long *****)0x0)) {
          FUN_710392eb40((ulong)ppppplVar36);
        }
        *(undefined2 *)ppppplVar49 = 0;
        ppppplVar46[uVar17 * 0x12 + 0x10] = (long ****)ppppplVar49;
        *(undefined4 *)(ppppplVar46 + uVar17 * 0x12 + 0x11) = 0;
        ppppppplVar18[0x206] = (long ******)((long)ppppppplVar18[0x206] + -1);
        pppppplVar34 = (long ******)((long)ppppppplVar18[0x205] + 1);
        ppppppplVar18[0x205] = pppppplVar34;
        if ((long ******)0x37 < pppppplVar34) {
          pppppplVar40 = ppppppplVar18[0x202];
          if (*pppppplVar40 != (long *****)0x0) {
            FUN_710392eb40((ulong)*pppppplVar40);
            pppppplVar40 = ppppppplVar18[0x202];
            pppppplVar34 = ppppppplVar18[0x205];
          }
          ppppppplVar18[0x202] = pppppplVar40 + 1;
          ppppppplVar18[0x205] = (long ******)((long)pppppplVar34 - 0x1c);
        }
      }
    }
    else {
      *(int *)((long)ppppppplVar18 + 0x103c) = *(int *)((long)ppppppplVar18 + 0x103c) + -1;
    }
  }
  else {
    lVar23 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar23 + 0x48) - *(long *)(lVar23 + 0x40) >> 3) < 4) {
      uVar17 = 0;
      if (*(char *)(lVar23 + 0x191) == '\0') goto LAB_7101c5e83c;
LAB_7101c5e8ac:
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_98 = (long *******)0xffffffffffffffff;
      ppppppplStack_90 = (long *******)0x0;
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_88 = (long *******)0x0;
      uStack_a8 = 0x87650000000000;
    }
    else {
      uVar17 = *(ulong *)(*(long *)(lVar23 + 0x40) + 0x18);
      if (*(char *)(lVar23 + 0x191) != '\0') goto LAB_7101c5e8ac;
LAB_7101c5e83c:
      param_3 = (long *********)&DAT_00000004;
      uVar20 = FUN_7103313f20(lVar23,uVar17,(long ****)&DAT_00000004,(byte ****)param_4,param_5,
                              param_6,param_7,param_8);
      if ((uVar20 & 1) == 0) goto LAB_7101c5e8ac;
      FUN_71024076d0((undefined4 *)&local_c0,uVar17);
      if (((local_b0 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)uStack_a8 == DAT_7106dd53ac)) {
        local_b0 = local_b0 + 7;
        do {
          cVar27 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(local_b0,0x10);
          if (bVar13) {
            *(int *)local_b0 = *(int *)local_b0 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
      }
    }
    local_b8 = (long ********)&PTR_FUN_7104f73d50;
    local_b0 = (long *******)0x0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    ppppppplVar18 = *pppppppplVar33;
    ppppplVar36 = *ppppppplVar18[3];
    if (ppppplVar36 != (long *****)0x0) {
      param_3 = (long *********)0x0;
      (*(code *)(*ppppplVar36)[0x5e])(ppppplVar36,0);
      ppppppplVar18 = *pppppppplVar33;
    }
    lVar23 = 0x1041;
LAB_7101c5ea88:
    *(undefined1 *)((long)ppppppplVar18 + lVar23) = 0;
  }
LAB_7101c5ea8c:
  if (0x12 < *(uint *)((long)param_1 + 700)) goto LAB_7101c60874;
  uVar29 = *(uint *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 700) * 4 + 0x270);
  if (*(uint *)(param_1 + 0x58) != uVar29) {
    *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = uVar29;
    if (0xb < uVar29) goto LAB_7101c60874;
    ppppppplVar18 = param_1[(long)(int)uVar29 * 2 + 0x37];
    param_1[0x32] = param_1[(long)(int)uVar29 * 2 + 0x36];
    param_1[0x33] = ppppppplVar18;
    ppppppplVar18 = param_1[0x34];
    uVar17 = (ulong)param_1[0x35] & 1;
    if (uVar17 != 0 || ppppppplVar18 != (long *******)0x0) {
      if (uVar17 != 0) {
        ppppppplVar18 =
             *(long ********)
              (*(long *)((long)param_1[0x31] + ((long)param_1[0x35] >> 1)) + (long)ppppppplVar18);
      }
      (*(code *)ppppppplVar18)();
    }
    *(undefined4 *)((long)param_1 + 0x2c4) = 0;
  }
  if (*(char *)((long)param_1 + 0x2cc) != '\0') {
    ppppppplVar18 = param_1[0x34];
    uVar17 = (ulong)param_1[0x35] & 1;
    if (uVar17 != 0 || ppppppplVar18 != (long *******)0x0) {
      if (uVar17 != 0) {
        ppppppplVar18 =
             *(long ********)
              (*(long *)((long)param_1[0x31] + ((long)param_1[0x35] >> 1)) + (long)ppppppplVar18);
      }
      (*(code *)ppppppplVar18)();
    }
    *(undefined4 *)((long)param_1 + 0x2c4) = 0;
    *(undefined1 *)((long)param_1 + 0x2cc) = 0;
  }
  if (param_1[0x31] != (long *******)0x0) {
    ppppppplVar18 = param_1[0x32];
    uVar17 = (ulong)param_1[0x33] & 1;
    if (uVar17 != 0 || ppppppplVar18 != (long *******)0x0) {
      if (uVar17 != 0) {
        ppppppplVar18 =
             *(long ********)
              (*(long *)((long)param_1[0x31] + ((long)param_1[0x33] >> 1)) + (long)ppppppplVar18);
      }
      (*(code *)ppppppplVar18)();
    }
  }
  ppppppplVar18 = param_1[0xfe];
  *(int *)((long)param_1 + 0x2c4) = *(int *)((long)param_1 + 0x2c4) + 1;
  if (ppppppplVar18 == (long *******)0x0) {
    if ((*(char *)(param_1 + 0xff) == '\0') || (*(char *)((long)param_1 + 0x7f9) == '\0'))
    goto LAB_7101c5ece4;
    plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,(byte ****)param_4,param_5,param_6,
                                     param_7,param_8);
    if (plVar21 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_100 = (long ********)((ulong)local_100 & 0xffffffff00000000);
        local_c0 = (long ********)&DAT_00000008;
        param_3 = &local_c0;
        uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
        if (((uVar17 & 1) != 0) &&
           (plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,(byte ****)param_4,param_5,
                                             param_6,param_7,param_8), plVar21 != (long *)0x0))
        goto LAB_7101c5ec10;
      }
      plVar21 = (long *)0x0;
    }
LAB_7101c5ec10:
    *plVar21 = 0;
    pppppplVar34 = param_1[0xfd][1];
    if ((pppppplVar34 == (long ******)0x0) || (pppppplVar34[0xc] == (long *****)0x0)) {
      *plVar21 = 0;
    }
    else {
      plVar22 = (long *)FUN_7103796f20((long)pppppplVar34[0xc],(long)(pppppplVar34[3] + 0x16));
      *plVar21 = (long)plVar22;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x238))(plVar22,0);
        (**(code **)(*plVar22 + 0x228))(plVar22,0);
        uVar17 = (**(code **)(*plVar22 + 0x200))(plVar22);
        if (((uVar17 & 1) != 0) &&
           (uVar17 = (**(code **)(*plVar22 + 0x210))(plVar22), (uVar17 & 1) != 0)) {
          (**(code **)(*plVar22 + 0x238))(plVar22,1);
          (**(code **)(*plVar22 + 0x3c8))(plVar22);
          (**(code **)(*plVar22 + 0x10))(plVar22);
          (**(code **)(*plVar22 + 0x18))(plVar22);
        }
      }
    }
    FUN_710392eb40((ulong)plVar21);
    *(undefined1 *)(param_1 + 0xff) = 0;
    FUN_71037780e0(&local_c0,(long)(param_1 + 0xfc),(long ****)&DAT_710428ff7d,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppppppppplVar47 =
         (long *********)
         FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,param_5,param_6,param_7,
                        param_8);
    if (ppppppppplVar47 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_7c[0] = 0;
        local_100 = (long ********)&DAT_00000010;
        ppppppppplVar47 = &local_100;
        uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
        if (((uVar17 & 1) != 0) &&
           (ppppppppplVar47 =
                 (long *********)
                 FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar47,(byte ****)param_4,param_5,
                                param_6,param_7,param_8), ppppppppplVar47 != (long *********)0x0))
        goto LAB_7101c5ef24;
      }
      ppppppppplVar47 = (long *********)0x0;
    }
LAB_7101c5ef24:
    pppppppplVar33 = local_b8;
    *ppppppppplVar47 = (long ********)&PTR_FUN_710523d9e8;
    ppppppppplVar47[1] = (long ********)0x0;
    if (&local_c0 != ppppppppplVar47) {
      local_b8 = (long ********)0x0;
      ppppppppplVar47[1] = pppppppplVar33;
    }
    ppppppplVar18 = param_1[0xfe];
    param_1[0xfe] = (long *******)ppppppppplVar47;
    if (ppppppplVar18 != (long *******)0x0) {
      (*(code *)(*ppppppplVar18)[1])(ppppppplVar18);
    }
    pppppppplVar33 = local_b8;
    local_c0 = (long ********)&PTR_FUN_710523d9e8;
    local_b8 = (long ********)0x0;
    if (pppppppplVar33 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar33);
    }
    FUN_710377aee0(0x3f800000,(long)param_1[0xfe]);
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar17 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13d3b19adc,(long ****)&DAT_00000004,
                                (byte ****)param_4,param_5,param_6,param_7,param_8),
       (uVar17 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)&local_c0,0x13d3b19adc);
      if (((local_b0 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)uStack_a8 == DAT_7106dd53ac)) {
        local_b0 = local_b0 + 7;
        do {
          cVar27 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(local_b0,0x10);
          if (bVar13) {
            *(int *)local_b0 = *(int *)local_b0 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
      }
    }
    else {
      uStack_a8 = 0x87650000000000;
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_88 = (long *******)0x0;
      local_98 = (long *******)0xffffffffffffffff;
      ppppppplStack_90 = (long *******)0x0;
    }
    local_b8 = (long ********)&PTR_FUN_7104f73d50;
    local_b0 = (long *******)0x0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar17 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x17a3061361,(long ****)&DAT_00000004,
                                (byte ****)param_4,param_5,param_6,param_7,param_8),
       (uVar17 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)&local_100,0x17a3061361);
      if (((local_f0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_e8 == DAT_7106dd53ac)) {
        piVar31 = (int *)(local_f0 + 0x38);
        do {
          cVar27 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar31,0x10);
          if (bVar13) {
            *piVar31 = *piVar31 + -1;
            cVar27 = ExclusiveMonitorsStatus();
          }
        } while (cVar27 != '\0');
      }
    }
    else {
      local_e8 = 0;
      uStack_e4 = 0x876500;
      local_e0 = 0;
      local_100 = (long ********)((ulong)local_100 & 0xffffffff00000000);
      local_c8 = 0;
      local_d8 = 0xffffffffffffffff;
      uStack_d0 = 0;
    }
    local_f8 = &PTR_FUN_7104f73d50;
    local_f0 = 0;
    *(undefined1 *)((long)param_1 + 0x7f9) = 0;
    cVar27 = *(char *)(param_1 + 0x101);
  }
  else {
    ppppplVar36 = ppppppplVar18[1][1];
    if (ppppplVar36 == (long *****)0x0) {
      param_1[0xfe] = (long *******)0x0;
LAB_7101c5ecd8:
      (*(code *)(*ppppppplVar18)[1])();
    }
    else {
      uVar17 = (*(code *)(*ppppplVar36)[0x27])(ppppplVar36);
      if ((uVar17 & 1) != 0) {
        ppppppplVar18 = param_1[0xfe];
        param_1[0xfe] = (long *******)0x0;
        if (ppppppplVar18 != (long *******)0x0) goto LAB_7101c5ecd8;
      }
    }
LAB_7101c5ece4:
    cVar27 = *(char *)(param_1 + 0x101);
  }
  if (cVar27 != '\0') {
    ppppppplVar18 = param_1[0x121];
    cVar27 = *(char *)(param_1 + 0x122);
    if (ppppppplVar18 == (long *******)0x0) {
      if (cVar27 != '\0') goto LAB_7101c5eea0;
    }
    else {
      if (cVar27 == '\0') {
        ppppppplVar30 = param_1[0x11d];
        ppppppplVar37 = param_1[0x120];
        bVar13 = false;
        bVar48 = 0;
        bVar16 = true;
        do {
          uVar29 = (uint)unaff_x27;
          bVar6 = *(byte *)(*(long *)((long)ppppppplVar30 +
                                     ((ulong)ppppppplVar37 >> 9 & 0x7ffffffffffff8)) +
                           ((ulong)ppppppplVar37 & 0xfff));
          uVar17 = (ulong)bVar6;
          if (!bVar16) {
            if (3 < bVar6) goto LAB_7101c60874;
            if ((uVar29 & 0xff) != (uint)*(byte *)(param_1 + uVar17 * 3 + 0x107)) break;
          }
          if ((uVar17 < (ulong)((long)param_1[0x119] - (long)param_1[0x118] >> 1)) &&
             (*(char *)((long)param_1[0x118] + uVar17 * 2) != '\0')) {
            param_4 = (long *********)0x0;
            bVar13 = true;
            FUN_7101c597c0((long)(param_1 + 0x100),bVar6,1,0,param_5,param_6,param_7,param_8);
          }
          if (3 < bVar6) goto LAB_7101c60874;
          ppppppplVar37 = (long *******)((long)param_1[0x120] + 1);
          unaff_x27 = (long *******)(ulong)*(byte *)(param_1 + uVar17 * 3 + 0x107);
          uVar29 = (uint)*(byte *)(param_1 + uVar17 * 3 + 0x107);
          ppppppplVar30 = param_1[0x11d];
          param_1[0x121] = (long *******)((long)param_1[0x121] + -1);
          param_1[0x120] = ppppppplVar37;
          if ((long *******)0x1fff < ppppppplVar37) {
            if (*ppppppplVar30 != (long ******)0x0) {
              FUN_710392eb40((ulong)*ppppppplVar30);
              ppppppplVar30 = param_1[0x11d];
              ppppppplVar37 = param_1[0x120];
            }
            ppppppplVar30 = ppppppplVar30 + 1;
            ppppppplVar37 = ppppppplVar37 + -0x200;
            param_1[0x11d] = ppppppplVar30;
            param_1[0x120] = ppppppplVar37;
          }
          bVar48 = bVar48 + 1;
          bVar16 = false;
        } while ((long *******)(ulong)bVar48 < ppppppplVar18);
        if (bVar13) {
          lVar23 = *(long *)(DAT_710532f8d0 + 8);
          if ((uVar29 & 0xff) == 1) {
            if ((*(char *)(lVar23 + 0x191) == '\0') &&
               (uVar17 = FUN_7103313f20(lVar23,0x1a2d226e12,(long ****)&DAT_00000004,
                                        (byte ****)param_4,param_5,param_6,param_7,param_8),
               (uVar17 & 1) != 0)) {
              FUN_71024076d0((undefined4 *)&local_c0,0x1a2d226e12);
              if (((local_b0 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                 ((int)uStack_a8 == DAT_7106dd53ac)) {
                local_b0 = local_b0 + 7;
                do {
                  cVar27 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                  if (bVar13) {
                    *(int *)local_b0 = *(int *)local_b0 + -1;
                    cVar27 = ExclusiveMonitorsStatus();
                  }
                } while (cVar27 != '\0');
              }
            }
            else {
LAB_7101c5f188:
              local_98 = (long *******)0xffffffffffffffff;
              ppppppplStack_90 = (long *******)0x0;
              uStack_a8 = 0x87650000000000;
              local_a0 = local_a0 & 0xffffffffffffff00;
              local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
              local_88 = (long *******)0x0;
            }
          }
          else {
            if ((*(char *)(lVar23 + 0x191) != '\0') ||
               (uVar17 = FUN_7103313f20(lVar23,0x1635af76de,(long ****)&DAT_00000004,
                                        (byte ****)param_4,param_5,param_6,param_7,param_8),
               (uVar17 & 1) == 0)) goto LAB_7101c5f188;
            FUN_71024076d0((undefined4 *)&local_c0,0x1635af76de);
            if ((local_b0 != (long *******)0x0) &&
               ((DAT_7106dd53a8 == '\x01' && ((int)uStack_a8 == DAT_7106dd53ac)))) {
              local_b0 = local_b0 + 7;
              do {
                cVar27 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                if (bVar13) {
                  *(int *)local_b0 = *(int *)local_b0 + -1;
                  cVar27 = ExclusiveMonitorsStatus();
                }
              } while (cVar27 != '\0');
            }
          }
          local_b8 = (long ********)&PTR_FUN_7104f73d50;
          local_b0 = (long *******)0x0;
          local_a0 = local_a0 & 0xffffffffffffff00;
        }
        cVar27 = '\n';
      }
      else {
LAB_7101c5eea0:
        cVar27 = cVar27 + -1;
      }
      *(char *)(param_1 + 0x122) = cVar27;
    }
  }
  FUN_7101c4ce90((long *)(param_1 + 0x36f));
  if (param_1[0x36f] != (long *******)0x0) {
    ppppppplVar18 = param_1[0x370];
    uVar17 = (ulong)param_1[0x371] & 1;
    if (uVar17 != 0 || ppppppplVar18 != (long *******)0x0) {
      if (uVar17 != 0) {
        ppppppplVar18 =
             *(long ********)
              (*(long *)((long)param_1[0x36f] + ((long)param_1[0x371] >> 1)) + (long)ppppppplVar18);
      }
      (*(code *)ppppppplVar18)();
    }
  }
  *(int *)((long)param_1 + 0x1c34) = *(int *)((long)param_1 + 0x1c34) + 1;
  if (0x12 < *(uint *)((long)param_1 + 0x174)) {
LAB_7101c60874:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar29 = *(uint *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x174) * 4 + 0x128);
  if (*(uint *)(param_1 + 0x2f) != uVar29) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x2f);
    *(uint *)(param_1 + 0x2f) = uVar29;
    if (0xd < uVar29) goto LAB_7101c60874;
    ppppppplVar18 = param_1[(long)(int)uVar29 * 2 + 10];
    param_1[5] = param_1[(long)(int)uVar29 * 2 + 9];
    param_1[6] = ppppppplVar18;
    ppppppplVar18 = param_1[7];
    uVar17 = (ulong)param_1[8] & 1;
    if (uVar17 != 0 || ppppppplVar18 != (long *******)0x0) {
      if (uVar17 != 0) {
        ppppppplVar18 =
             *(long ********)
              (*(long *)((long)param_1[4] + ((long)param_1[8] >> 1)) + (long)ppppppplVar18);
      }
      (*(code *)ppppppplVar18)();
    }
    *(undefined4 *)((long)param_1 + 0x17c) = 0;
  }
  if (*(char *)((long)param_1 + 0x184) != '\0') {
    ppppppplVar18 = param_1[7];
    uVar17 = (ulong)param_1[8] & 1;
    if (uVar17 != 0 || ppppppplVar18 != (long *******)0x0) {
      if (uVar17 != 0) {
        ppppppplVar18 =
             *(long ********)
              (*(long *)((long)param_1[4] + ((long)param_1[8] >> 1)) + (long)ppppppplVar18);
      }
      (*(code *)ppppppplVar18)();
    }
    *(undefined4 *)((long)param_1 + 0x17c) = 0;
    *(undefined1 *)((long)param_1 + 0x184) = 0;
  }
  if (param_1[4] != (long *******)0x0) {
    ppppppplVar18 = param_1[5];
    uVar17 = (ulong)param_1[6] & 1;
    if (uVar17 != 0 || ppppppplVar18 != (long *******)0x0) {
      if (uVar17 != 0) {
        ppppppplVar18 =
             *(long ********)
              (*(long *)((long)param_1[4] + ((long)param_1[6] >> 1)) + (long)ppppppplVar18);
      }
      (*(code *)ppppppplVar18)();
    }
  }
  *(int *)((long)param_1 + 0x17c) = *(int *)((long)param_1 + 0x17c) + 1;
  return;
}

