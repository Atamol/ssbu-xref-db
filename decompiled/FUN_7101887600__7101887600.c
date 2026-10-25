// addr:      7101887600
// offset:    0x1887600
// name:      FUN_7101887600
// mangled:   
// signature: undefined __cdecl FUN_7101887600(long * * * * * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, ulong param_8)


void FUN_7101887600(long ********param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,ulong param_8)

{
  long *****ppppplVar1;
  long ****pppplVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  long ********pppppppplVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long ********pppppppplVar10;
  ulong uVar11;
  long *********ppppppppplVar12;
  undefined8 *puVar13;
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
  long *********ppppppppplVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  undefined4 uVar17;
  long *******ppppppplVar18;
  code *pcVar19;
  long lVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long **pplVar23;
  long ***ppplVar24;
  long ***ppplVar25;
  long ****pppplVar26;
  long lVar27;
  long lVar28;
  long ******pppppplVar29;
  long ********local_d0;
  long ********pppppppplStack_c8;
  long *local_b0;
  long ********local_a0;
  long ********local_98;
  long *********local_80;
  undefined4 local_64;
  
  ppppppppplVar16 = &local_d0;
  ppppppppplVar12 = &local_d0;
  if (*(int *)((long)param_1 + 0x1cc) == 0) {
    lVar27 = *(long *)(DAT_71052c4c58 + 8);
    pppppppplVar10 =
         (long ********)
         FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (pppppppplVar10 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_d0 = (long ********)((ulong)local_d0 & 0xffffffff00000000);
        local_a0 = (long ********)&DAT_00000028;
        ppppppppplVar14 = &local_a0;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
        if (((uVar11 & 1) != 0) &&
           (pppppppplVar10 =
                 (long ********)
                 FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7
                                ,param_8), pppppppplVar10 != (long ********)0x0))
        goto LAB_7101887698;
      }
      pppppppplVar10 = (long ********)0x0;
    }
LAB_7101887698:
    *(undefined4 *)(pppppppplVar10 + 1) = 1;
    *pppppppplVar10 = (long *******)&PTR_FUN_71050a43b8;
    pppppppplVar10[2] = (long *******)param_1;
    pppppppplVar10[3] = (long *******)FUN_7101893050;
    pppppppplVar10[4] = (long *******)0x0;
    param_3 = &local_a0;
    local_a0 = pppppppplVar10;
    FUN_710169b270(*(long *)(lVar27 + 0x88) + 0x26980,7,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if ((pppppppplVar10 != (long ********)0x0) &&
       (sVar5 = *(short *)(pppppppplVar10 + 1), *(short *)(pppppppplVar10 + 1) = sVar5 + -1,
       (short)(sVar5 + -1) < 1)) {
      (*(code *)(*pppppppplVar10)[1])(pppppppplVar10);
    }
    local_a0 = (long ********)&PTR_FUN_71050a43e8;
    local_98 = param_1;
    local_80 = &local_a0;
    FUN_71016b4d20(*(long *)(lVar27 + 0x88),(long *)&local_a0);
    if (&local_a0 == local_80) {
      ppppppplVar18 = (*local_80)[4];
LAB_7101887750:
      (*(code *)ppppppplVar18)();
    }
    else if (local_80 != (long *********)0x0) {
      ppppppplVar18 = (*local_80)[5];
      goto LAB_7101887750;
    }
    local_d0 = (long ********)&PTR_FUN_71050a4430;
    pppppppplStack_c8 = param_1;
    local_b0 = (long *)&local_d0;
    FUN_71016b50a0(*(long *)(lVar27 + 0x88),(long *)&local_d0);
    if (&local_d0 == (long *********)local_b0) {
      pcVar19 = *(code **)(*local_b0 + 0x20);
LAB_7101887798:
      (*pcVar19)();
      param_2 = extraout_x1_00;
    }
    else {
      param_2 = extraout_x1;
      if (local_b0 != (long *)0x0) {
        pcVar19 = *(code **)(*local_b0 + 0x28);
        goto LAB_7101887798;
      }
    }
    *(undefined1 *)((long)param_1 + 0x252) = 0;
    lVar28 = *(long *)(DAT_71052c4c58 + 8);
    uVar11 = 0;
    lVar27 = 0xa080;
    do {
      uVar9 = (uint)uVar11;
      if ((~uVar9 & 0xff) != 0) {
        lVar20 = *(long *)(lVar28 + 0x88);
        if ((*(uint *)(lVar20 + 0xa000) & 1 << (ulong)(uVar9 & 0x1f)) != 0) {
          if (*(long *)(lVar20 + 0x9ff8) == 0) {
            uVar8 = 0xff;
            param_2 = 0;
          }
          else {
            uVar8 = FUN_71016f6340(lVar20 + 0xa010,*(long *)(lVar20 + 0x9ff8));
            param_2 = extraout_x1_01;
          }
          if (((uVar8 & 0xff) == (uVar9 & 0xff)) || ((~uVar9 & 0xff) == 0)) goto LAB_7101887860;
        }
        lVar20 = *(long *)(lVar28 + 0x88);
        if (((*(uint *)(lVar20 + 0xa000) & 1 << (ulong)(uVar9 & 0x1f)) != 0) &&
           ((*(int *)(lVar20 + lVar27) == 0xc || (*(int *)(lVar20 + lVar27) == 6)))) {
          param_3 = (long *********)&DAT_00000194;
          param_4 = (byte ****)0x0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          uVar9 = FUN_7101685ac0(lVar20,uVar11,0x194,(void *)0x0,0,0);
          param_2 = extraout_x1_02;
          if ((uVar9 & 0xffff) != 0) {
            *(undefined1 *)((long)param_1 + 0x252) = 1;
          }
        }
      }
LAB_7101887860:
      uVar11 = uVar11 + 1;
      lVar27 = lVar27 + 0x78;
    } while (uVar11 != 0x10);
  }
  if (*(char *)((long)param_1 + 0x24c) != '\0') {
    lVar27 = *(long *)(**(long **)(*DAT_7105314510 + 0x88) + 0x60);
    if (lVar27 != 0) {
      if (*(int *)(lVar27 + 0x448) != 0) {
        return;
      }
      if (*(long *)(*DAT_710593b218 + 0x50) != 0) {
        return;
      }
    }
    pppppplVar29 = param_1[0x3d][0x10];
    bVar7 = FUN_7103265e70(*(long *)(DAT_710532f730 + 8) + 0x160,(ulong)pppppplVar29[0x322]);
    param_2 = extraout_x1_03;
    if (((bVar7) && (*(int *)((long)pppppplVar29 + 0x191c) != 0)) &&
       (*(char *)((long)pppppplVar29 + 0x1921) == '\0')) {
      ppppppppplVar14 = (long *********)(pppppplVar29 + 0x5c);
      FUN_7101a103f0((long)ppppppppplVar14,(uint *)((long)pppppplVar29 + 0x191c),param_3,param_4,
                     param_5,param_6,param_7,param_8);
      param_2 = extraout_x1_05;
      if (*pppppplVar29[0x5d] != (long ****)0x0) {
        FUN_7103778300(0x3f800000,(long)pppppplVar29[0x70],0x71043ad7de);
        FUN_7103778300(0x3f800000,(long)pppppplVar29[0x70],0x710424f508);
        FUN_7103778300(0x3f800000,(long)pppppplVar29[0x70],0x7104443787);
        FUN_7103776910(&local_a0,(long)(pppppplVar29 + 0x6f),(long ****)"set_rep_fig",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        pppppppplVar10 = local_98;
        FUN_71037790a0((long)local_98,1,param_3,param_4,param_5,param_6,param_7,param_8);
        if (pppppppplVar10[1] != (long *******)0x0) {
          pppplVar26 = *pppppplVar29[0x5d];
          if (pppplVar26 != (long ****)0x0) {
            pppplVar15 = pppppplVar29[0x5d][1];
            if (pppplVar15 == (long ****)0x0) {
              ppplVar25 = pppplVar26[1] + 0x31;
            }
            else {
              pppplVar2 = pppplVar15 + 1;
              do {
                cVar3 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
                if (bVar7) {
                  *pppplVar2 = (long ***)((long)*pppplVar2 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              ppplVar25 = pppplVar26[1] + 0x31;
              do {
                ppplVar24 = *pppplVar2;
                cVar3 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
                if (bVar7) {
                  *pppplVar2 = (long ***)((long)ppplVar24 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppplVar24 == (long ***)0x0) {
                (*(code *)(*pppplVar15)[2])(pppplVar15);
                std::__shared_weak_count::__release_weak();
              }
            }
            uVar11 = (*(code *)(*ppplVar25)[6])(ppplVar25);
            pppppppplVar10 = local_98;
            if ((uVar11 & 1) != 0) {
              param_3 = (long *********)0x0;
              FUN_710379e9c0((long *)local_98[1],ppplVar25,0);
              goto LAB_7101887e84;
            }
          }
          FUN_71037790a0((long)pppppppplVar10,1,param_3,param_4,param_5,param_6,param_7,param_8);
        }
LAB_7101887e84:
        puVar13 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
        if (puVar13 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            local_d0 = (long ********)&SUB_00000020;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            param_3 = ppppppppplVar12;
            if (((uVar11 & 1) != 0) &&
               (puVar13 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar12,param_4,param_5,
                                         param_6,param_7,param_8), param_3 = ppppppppplVar12,
               puVar13 != (undefined8 *)0x0)) goto LAB_7101887ee0;
          }
          puVar13 = (undefined8 *)0x0;
        }
LAB_7101887ee0:
        pppppppplVar6 = local_98;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        *puVar13 = *pppppppplVar10;
        puVar13[1] = pppppppplVar10[1];
        puVar13[2] = local_98[2];
        puVar13[3] = local_98[3];
        FUN_71037799d0((long)puVar13);
        param_2 = extraout_x1_06;
        if (puVar13 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar13);
          param_2 = extraout_x1_07;
        }
        local_a0 = (long ********)&PTR_FUN_710523d9a8;
        local_98 = (long ********)0x0;
        if (pppppppplVar6 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar6);
          param_2 = extraout_x1_08;
        }
        uVar11 = (ulong)*(byte *)(pppppplVar29 + 0x324);
        if (7 < uVar11) goto LAB_7101887f78;
        if (*(char *)(pppppplVar29 + uVar11 * 0x3d + 0x15f) == '\x01') {
          FUN_7101c5a090((long)(pppppplVar29 + 0x100),
                         *(byte *)((long)pppppplVar29 + uVar11 * 0x1e8 + 0xaf9),ppppppppplVar14,
                         param_4,param_5,param_6,param_7,param_8);
          param_2 = extraout_x1_09;
          param_3 = ppppppppplVar14;
        }
      }
    }
  }
  lVar28 = *(long *)(DAT_71052c4c58 + 8);
  lVar27 = *(long *)(lVar28 + 0x88);
  if (((*(long *)(lVar27 + 0x30) != 0) || (*(int *)(lVar27 + 0x70) != 0)) ||
     (*(long *)(lVar27 + 0x60) != 0)) {
    return;
  }
  if (*(char *)((long)param_1 + 0x231) != '\0') {
    FUN_71016b9680(lVar27);
    param_2 = extraout_x1_04;
  }
  FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),param_2,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  ppppppplVar18 = param_1[0x3d];
  pppppplVar29 = ppppppplVar18[0x10];
  cVar3 = *(char *)((long)param_1 + 0x234);
  *(undefined1 *)((long)pppppplVar29 + 0x1b22) = 0;
  pppplVar15 = (long ****)&DAT_00001000;
  FUN_7103775dc0((long *)*pppppplVar29[2],0,(long ****)&DAT_00001000,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_71037760f0((long)**pppppplVar29[2],0);
  FUN_7103778300(0x3f800000,(long)pppppplVar29[0x5b],0x710434a3dd);
  pppplVar26 = (long ****)"slide_stay";
  if (cVar3 == '\0') {
    pppplVar26 = (long ****)"slide_in";
  }
  FUN_71037780e0(&local_a0,(long)(pppppplVar29 + 0x5a),pppplVar26,pppplVar15,param_4,param_5,param_6
                 ,param_7,param_8);
  ppppppppplVar12 =
       (long *********)FUN_710392e290(0x10,0x10,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  if (ppppppppplVar12 == (long *********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_d0 = (long ********)&DAT_00000010;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pppplVar15 = (long ****)ppppppppplVar16;
      if (((uVar11 & 1) != 0) &&
         (ppppppppplVar12 =
               (long *********)
               FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar16,param_4,param_5,param_6,param_7,
                              param_8), pppplVar15 = (long ****)ppppppppplVar16,
         ppppppppplVar12 != (long *********)0x0)) goto LAB_7101887a24;
    }
    ppppppppplVar12 = (long *********)0x0;
  }
LAB_7101887a24:
  pppppppplVar10 = local_98;
  *ppppppppplVar12 = (long ********)&PTR_FUN_710523d9e8;
  ppppppppplVar12[1] = (long ********)0x0;
  if (&local_a0 != ppppppppplVar12) {
    local_98 = (long ********)0x0;
    ppppppppplVar12[1] = pppppppplVar10;
  }
  ppppplVar21 = pppppplVar29[0x35d];
  pppppplVar29[0x35d] = (long *****)ppppppppplVar12;
  if (ppppplVar21 != (long *****)0x0) {
    (*(code *)(*ppppplVar21)[1])(ppppplVar21);
  }
  pppppppplVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9e8;
  local_98 = (long ********)0x0;
  if (pppppppplVar10 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar10);
  }
  FUN_710377aee0(0x3f800000,(long)pppppplVar29[0x35d]);
  ppppplVar21 = (long *****)pppppplVar29[0x60][0x37];
  if (ppppplVar21 != (long *****)0x0) {
    ppppplVar1 = pppppplVar29[0x60] + 0x37;
    ppppplVar22 = ppppplVar1;
    do {
      if (6 < *(int *)(ppppplVar21 + 4)) {
        ppppplVar22 = ppppplVar21;
      }
      ppppplVar21 = (long *****)ppppplVar21[*(int *)(ppppplVar21 + 4) < 7];
    } while (ppppplVar21 != (long *****)0x0);
    if (((ppppplVar22 != ppppplVar1) && (*(int *)(ppppplVar22 + 4) < 8)) &&
       (pppplVar26 = ppppplVar22[5], pppplVar26 != (long ****)0x0)) {
      (*(code *)(*pppplVar26)[0x3f])(pppplVar26,0);
      pppplVar15 = (long ****)0x0;
      (*(code *)(*pppplVar26)[0x71])(pppplVar26,1);
    }
  }
  FUN_7103776910(&local_a0,(long)(pppppplVar29 + 0x5a),(long ****)"set_txt_roomid",pppplVar15,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710377a280((long)&local_a0,(byte *)"mnu_online_room_inside_room_id",1);
  pppppppplVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9a8;
  local_98 = (long ********)0x0;
  if (pppppppplVar10 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar10);
  }
  if (cVar3 == '\0') {
    uVar11 = (ulong)*(byte *)(pppppplVar29 + 0x324);
    if (7 < uVar11) goto LAB_7101887f78;
    ppppplVar21 = pppppplVar29[0x8a];
    *(undefined1 *)((long)ppppplVar21 + uVar11 * 0x1e0 + 0x192) = 0;
    ppplVar25 = ppppplVar21[uVar11 * 0x3c + 6][1];
    if ((ppplVar25 != (long ***)0x0) && (pplVar23 = ppplVar25[3], pplVar23 != (long **)0x0)) {
      *(byte *)(pplVar23 + 0xb) = *(byte *)(pplVar23 + 0xb) & 0xfe;
    }
    pppppplVar29[0x2f] = (long *****)&DAT_ffffffff;
    *(undefined4 *)(pppppplVar29 + 0x30) = 0xffffffff;
    uVar17 = 1;
    pppppplVar29[5] = (long *****)0x0;
    pppppplVar29[6] = (long *****)0x0;
    *(undefined4 *)(pppppplVar29 + 0x2e) = 0;
  }
  else {
    FUN_7103778300(0x3f800000,(long)pppppplVar29[0x5b],0x710427001e);
    uVar11 = (ulong)*(byte *)(pppppplVar29 + 0x324);
    if (7 < uVar11) goto LAB_7101887f78;
    ppppplVar21 = pppppplVar29[0x8a];
    *(undefined1 *)((long)ppppplVar21 + uVar11 * 0x1e0 + 0x192) = 1;
    bVar4 = 0;
    if (*(char *)(ppppplVar21 + uVar11 * 0x3c + 0x32) != '\0') {
      bVar4 = *(byte *)((long)ppppplVar21 + uVar11 * 0x1e0 + 0x191);
    }
    if ((ppppplVar21[uVar11 * 0x3c + 6][1] != (long ***)0x0) &&
       (pplVar23 = ppppplVar21[uVar11 * 0x3c + 6][1][3], pplVar23 != (long **)0x0)) {
      *(byte *)(pplVar23 + 0xb) = *(byte *)(pplVar23 + 0xb) & 0xfe | bVar4;
    }
    pppppplVar29[5] = (long *****)0x0;
    pppppplVar29[6] = (long *****)0x0;
    *(undefined4 *)(pppppplVar29 + 0x2e) = 0;
    pppppplVar29[0x2f] = (long *****)&DAT_ffffffff;
    *(undefined4 *)(pppppplVar29 + 0x30) = 0xffffffff;
    uVar17 = 3;
  }
  *(undefined1 *)((long)pppppplVar29 + 0x184) = 0;
  pppppplVar29[0x2c] = (long *****)0x0;
  pppppplVar29[0x2d] = (long *****)0x0;
  pppppplVar29[0x2a] = (long *****)0x0;
  pppppplVar29[0x2b] = (long *****)0x0;
  pppppplVar29[0x28] = (long *****)0x0;
  pppppplVar29[0x29] = (long *****)0x0;
  pppppplVar29[0x26] = (long *****)0x0;
  pppppplVar29[0x27] = (long *****)0x0;
  *(undefined4 *)(pppppplVar29 + 0x25) = uVar17;
  *(undefined4 *)((long)pppppplVar29 + 0x174) = 1;
  *(undefined4 *)((long)pppppplVar29 + 300) = 0xb;
  *(undefined1 *)(ppppppplVar18 + 0xe) = 0;
  if (0x12 < *(uint *)((long)param_1 + 0x1c4)) goto LAB_7101887f78;
  *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1c4) * 4 + 0x178) = 0x11;
  if (*(char *)((long)param_1 + 0x232) != '\0') {
    lVar28 = *(long *)(lVar28 + 0x88);
    lVar27 = *(long *)(lVar28 + 0x9ff8);
    if ((((lVar27 != 0) && (uVar9 = FUN_71016f6340(lVar28 + 0xa010,lVar27), (~uVar9 & 0xff) != 0))
        && (*(long *)(DAT_710533a0a0 + 0x30) != 0)) &&
       (lVar27 = *(long *)(*(long *)(DAT_710533a0a0 + 0x30) + 0x2108), lVar27 != 0)) {
      FUN_7103701910(lVar27,0x193,(void *)((long)param_1 + 0x204),0x28,9);
    }
    if (*(char *)((long)param_1 + 0x251) == '\0') {
      if (*(int *)((long)param_1 + 0x1c4) < 0x12) {
        uVar9 = *(int *)((long)param_1 + 0x1c4) + 1;
        *(uint *)((long)param_1 + 0x1c4) = uVar9;
        if (0x12 < uVar9) {
LAB_7101887f78:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)((long)param_1 + (long)(int)uVar9 * 4 + 0x178) = 0x10;
        if (*(int *)((long)param_1 + 0x1c4) < 0x12) {
          uVar9 = *(int *)((long)param_1 + 0x1c4) + 1;
          *(uint *)((long)param_1 + 0x1c4) = uVar9;
          if (0x12 < uVar9) goto LAB_7101887f78;
          *(undefined4 *)((long)param_1 + (long)(int)uVar9 * 4 + 0x178) = 0x14;
        }
      }
      *(undefined1 *)((long)param_1 + 0x251) = 1;
    }
  }
  FUN_710188ce20(param_1,1);
  return;
}

