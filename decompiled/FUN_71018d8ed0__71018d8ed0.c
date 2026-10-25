// addr:      71018d8ed0
// offset:    0x18d8ed0
// name:      FUN_71018d8ed0
// mangled:   
// signature: undefined __cdecl FUN_71018d8ed0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018d8ed0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar12;
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
  undefined8 uVar13;
  long *********ppppppppplVar14;
  undefined **ppuVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  undefined4 uVar18;
  uint uVar19;
  long lVar20;
  ushort uVar21;
  int iVar22;
  ushort *puVar23;
  long *plVar24;
  undefined1 auVar25 [16];
  long ********local_58;
  ulong local_50;
  undefined4 local_44;
  
  plVar4 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ********)&DAT_00000030;
      param_3 = &local_58;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar4 != (long *)0x0))
      goto LAB_71018d8f4c;
    }
    plVar4 = (long *)0x0;
  }
LAB_71018d8f4c:
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = extraout_x1;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ********)&DAT_00000080;
      param_3 = &local_58;
      auVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      uVar13 = auVar25._8_8_;
      if (((auVar25._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar13 = extraout_x1_00, puVar6 != (undefined8 *)0x0))
      goto LAB_71018d8fa0;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71018d8fa0:
  *puVar6 = &PTR_FUN_7105181b40;
  puVar6[2] = 0;
  puVar6[1] = puVar6 + 2;
  puVar6[5] = 0;
  puVar6[3] = 0;
  puVar6[4] = puVar6 + 5;
  puVar6[8] = 0;
  puVar6[6] = 0;
  puVar6[7] = puVar6 + 8;
  puVar6[0xb] = 0;
  puVar6[9] = 0;
  puVar6[10] = puVar6 + 0xb;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 2;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  puVar6[0xe] = 0;
  *plVar4 = (long)puVar6;
  lVar8 = DAT_710532f840;
  plVar4[1] = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  plVar4[2] = *(long *)(*(long *)(lVar8 + 8) + 0xc0);
  plVar4[3] = 0;
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined8 *)((long)plVar4 + 0x24) = 0;
  *(undefined1 *)((long)plVar4 + 0x2c) = 0;
  *(bool *)(plVar4 + 4) = iVar3 == 2;
  puVar6 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar6 != (undefined8 *)0x0) {
    if (((DAT_7105324768 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7105324768), iVar3 != 0)) {
      if (((DAT_7105324748 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7105324748), iVar3 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_7105324750), iVar3 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_7105324770 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324768);
    }
    auVar25 = (**(code **)*puVar6)(puVar6);
    uVar13 = auVar25._8_8_;
    for (puVar7 = auVar25._0_8_; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
      if ((undefined8 **)puVar7 == &DAT_7105324770) {
        switch(*(undefined4 *)(puVar6 + 1)) {
        case 3:
          uVar18 = 1;
          break;
        case 4:
          uVar18 = 2;
          break;
        case 5:
          uVar18 = 3;
          break;
        case 6:
          uVar18 = 4;
          break;
        case 7:
          uVar18 = 5;
          break;
        case 8:
          uVar18 = 6;
          break;
        case 9:
          uVar18 = 7;
          break;
        default:
          goto switchD_71018d9098_default;
        }
        *(undefined4 *)((long)plVar4 + 0x24) = uVar18;
        break;
      }
    }
  }
switchD_71018d9098_default:
  plVar24 = *(long **)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar4;
  if (plVar24 != (long *)0x0) {
    lVar8 = plVar24[3];
    plVar24[3] = 0;
    if (lVar8 != 0) {
      FUN_71032cad20(lVar8);
      uVar13 = extraout_x1_01;
    }
    FUN_710323b9e0(*plVar24,uVar13,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar4 = (long *)*plVar24;
    *plVar24 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    FUN_710392eb40((ulong)plVar24);
    plVar4 = *(long **)(param_1 + 0x58);
  }
  lVar8 = *plVar4;
  FUN_710323beb0(lVar8,(ulong *)&DAT_7104545698,(long)*(int *)(lVar8 + 0x70),
                 (ulong)*(uint *)(lVar8 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar8 = *plVar4;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar8,(ulong *)&local_58,(long)*(int *)(lVar8 + 0x70),
                 (ulong)*(uint *)(lVar8 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar8 = *plVar4;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar8,(ulong *)&local_58,(long)*(int *)(lVar8 + 0x70),
                 (ulong)*(uint *)(lVar8 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar8 = *plVar4;
  FUN_710323beb0(lVar8,(ulong *)&DAT_71045456a0,(long)*(int *)(lVar8 + 0x70),
                 (ulong)*(uint *)(lVar8 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar8 = *plVar4;
  local_58 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar8,(ulong *)&local_58,(long)*(int *)(lVar8 + 0x70),
                 (ulong)*(uint *)(lVar8 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar8 = *plVar4;
  local_58 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar8,(ulong *)&local_58,(long)*(int *)(lVar8 + 0x70),
                 (ulong)*(uint *)(lVar8 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar8 = *plVar4;
  ppppppppplVar14 = (long *********)(long)*(int *)(lVar8 + 0x70);
  ppppbVar16 = (byte ****)(ulong)*(uint *)(lVar8 + 0x68);
  pppplVar17 = (long ****)0x1;
  FUN_710323beb0(lVar8,(ulong *)&DAT_71045456a8,(long)ppppppppplVar14,(ulong)ppppbVar16,
                 (long ****)0x1,param_6,param_7,param_8);
  lVar8 = *plVar4;
  uVar5 = FUN_710323cb80(lVar8,extraout_x1_02,ppppppppplVar14,ppppbVar16,pppplVar17,param_6,param_7,
                         param_8);
  while ((uVar5 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar5 = FUN_710323cb80(lVar8,extraout_x1_03,ppppppppplVar14,ppppbVar16,pppplVar17,param_6,
                           param_7,param_8);
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar14,ppppbVar16,pppplVar17,param_6,param_7
                          ,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ********)&DAT_00000088;
      ppppppppplVar14 = &local_58;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar14,ppppbVar16,pppplVar17,param_6
                                  ,param_7,param_8), puVar6 != (undefined8 *)0x0))
      goto LAB_71018d9280;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71018d9280:
  *puVar6 = &PTR_FUN_71050af840;
  puVar6[1] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x1ffffffff;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[0xf] = plVar4;
  *(undefined1 *)(puVar6 + 0xe) = 1;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar14,ppppbVar16,pppplVar17,param_6,param_7
                          ,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ********)&DAT_00000048;
      ppppppppplVar14 = &local_58;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar14,ppppbVar16,pppplVar17,param_6
                                  ,param_7,param_8), puVar7 != (undefined8 *)0x0))
      goto LAB_71018d9300;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71018d9300:
  *(undefined4 *)(puVar7 + 1) = 0x1000;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[2] = 0;
  ppuVar15 = &PTR_DAT_71050af820;
  puVar7[7] = 0;
  puVar7[8] = 0;
  ppppbVar16 = (byte ****)0x23156d3683;
  pppplVar17 = (long ****)0x1;
  puVar7[6] = 0;
  puVar7[5] = puVar7 + 6;
  *puVar7 = &PTR_FUN_71050af878;
  puVar6[0x10] = puVar7;
  FUN_71032cb040((long)puVar7,plVar4,(long ****)&PTR_DAT_71050af820,(byte ****)0x23156d3683,
                 (long ****)0x1,param_6,param_7,param_8);
  (**(code **)(*(long *)puVar6[0x10] + 8))((long *)puVar6[0x10],0);
  lVar8 = puVar6[0x10];
  if (*(undefined8 **)(lVar8 + 0x18) == *(undefined8 **)(lVar8 + 0x10)) goto LAB_71018d97b4;
  lVar20 = **(long **)**(undefined8 **)(lVar8 + 0x10);
  lVar11 = lVar20 + 8;
  FUN_7103778630(0,*(long *)(lVar20 + 0x10),0x7104421055);
  bVar2 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)"mnu_opt_top_language");
  if (((bVar2) &&
      (puVar9 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_opt_top_language"),
      puVar9 != (ushort *)0x0)) && (uVar21 = *puVar9, uVar21 != 0)) {
    uVar19 = 0;
    iVar3 = 1;
    puVar23 = puVar9;
    do {
      if ((uVar21 | 1) == 0xf) {
        if (uVar21 == 0xe) {
          iVar22 = (puVar23[3] >> 1) + 4;
        }
        else {
          iVar22 = 3;
          if (uVar21 != 0xf) {
            iVar22 = 0;
          }
        }
      }
      else {
        iVar22 = 1;
        if (uVar21 == 10) {
          iVar3 = iVar3 + 1;
        }
      }
      uVar19 = iVar22 + uVar19;
      puVar23 = puVar9 + uVar19;
      uVar21 = *puVar23;
    } while (uVar21 != 0);
    if (iVar3 < 2) goto LAB_71018d946c;
    FUN_7103776640(&local_58,lVar11,(byte ****)"set_btn_05",ppuVar15,ppppbVar16,pppplVar17,param_6,
                   param_7,param_8);
    pcVar12 = "text_2";
    uVar5 = local_50;
  }
  else {
LAB_71018d946c:
    FUN_7103776640(&local_58,lVar11,(byte ****)"set_btn_05",ppuVar15,ppppbVar16,pppplVar17,param_6,
                   param_7,param_8);
    pcVar12 = "text_1";
    uVar5 = local_50;
  }
  FUN_7103778300(0x3f800000,uVar5,(long)pcVar12);
  local_58 = (long ********)&PTR_FUN_710523d988;
  local_50 = 0;
  uVar13 = extraout_x1_04;
  if (uVar5 != 0) {
    uVar10 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar5);
    uVar13 = extraout_x1_05;
  }
  if (*(undefined8 **)(lVar8 + 0x40) == (undefined8 *)0x0) {
LAB_71018d9670:
    puVar6[2] = &DAT_7105333600;
    uVar18 = DAT_7105333664;
    *(undefined4 *)(puVar6 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar6 + 0x6c) = uVar18;
    do {
      uVar19 = DAT_7105333650;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar2) {
        DAT_7105333650 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0' || (uVar19 & 1) != 0);
    puVar6[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar6;
    FUN_71032caea0((long)puVar6,uVar13,(long ****)ppuVar15,ppppbVar16,pppplVar17,param_6,param_7,
                   param_8);
    lVar8 = plVar4[3];
    plVar4[3] = (long)puVar6;
    if (lVar8 != 0) {
      FUN_71032cad20(lVar8);
      puVar6 = (undefined8 *)plVar4[3];
    }
    *(undefined1 *)(puVar6 + 0xe) = 0;
    lVar8 = puVar6[0x10];
    puVar6 = *(undefined8 **)(lVar8 + 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      if ((long *)*puVar6 != (long *)0x0) {
        FUN_7103375650((long *)*puVar6,"IS_BACK",&DAT_71043cdb7b);
        puVar6 = *(undefined8 **)(lVar8 + 0x40);
      }
      if ((long *)*puVar6 != (long *)0x0) {
        FUN_7103375650((long *)*puVar6,"BUTTON_ID_INIT",&DAT_71042b2a84);
      }
    }
    *(undefined1 *)((long)plVar4 + 0x2c) = 1;
    return;
  }
  plVar24 = (long *)**(undefined8 **)(lVar8 + 0x40);
  if (plVar24 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *plVar24;
  }
  if (*(undefined8 **)(lVar8 + 0x18) != *(undefined8 **)(lVar8 + 0x10)) {
    ppuVar15 = *(undefined ***)**(undefined8 **)(lVar8 + 0x10);
    FUN_71033743c0(lVar11,"layout_root",ppuVar15);
    if (*(undefined8 **)(lVar8 + 0x18) != *(undefined8 **)(lVar8 + 0x10)) {
      *(undefined4 *)
       (*(long *)(*(long *)**(undefined8 **)**(undefined8 **)(lVar8 + 0x10) + 0x600) + 0x18) = 0x80;
      uVar13 = extraout_x1_06;
      if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
        ppuVar15 = (undefined **)&DAT_71042b2a84;
        ppppbVar16 = (byte ****)&DAT_ffffffff;
        FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_NONE",&DAT_71042b2a84);
        uVar13 = extraout_x1_07;
        if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
          ppuVar15 = (undefined **)&DAT_71042b2a84;
          ppppbVar16 = (byte ****)0x1;
          FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_MELEE",&DAT_71042b2a84);
          uVar13 = extraout_x1_08;
          if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
            ppuVar15 = (undefined **)&DAT_71042b2a84;
            ppppbVar16 = (byte ****)0x2;
            FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_SOUND",&DAT_71042b2a84
                          );
            uVar13 = extraout_x1_09;
            if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
              ppuVar15 = (undefined **)&DAT_71042b2a84;
              ppppbVar16 = (byte ****)0x3;
              FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_ONLINE",
                             &DAT_71042b2a84);
              uVar13 = extraout_x1_10;
              if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
                ppuVar15 = (undefined **)&DAT_71042b2a84;
                ppppbVar16 = (byte ****)&DAT_00000004;
                FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_BUTTON",
                               &DAT_71042b2a84);
                uVar13 = extraout_x1_11;
                if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
                  ppuVar15 = (undefined **)&DAT_71042b2a84;
                  ppppbVar16 = (byte ****)0x5;
                  FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_VIDEO",
                                 &DAT_71042b2a84);
                  uVar13 = extraout_x1_12;
                  if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
                    ppuVar15 = (undefined **)&DAT_71042b2a84;
                    ppppbVar16 = (byte ****)0x6;
                    FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_LANGUAGE",
                                   &DAT_71042b2a84);
                    uVar13 = extraout_x1_13;
                    if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
                      ppuVar15 = (undefined **)&DAT_71042b2a84;
                      ppppbVar16 = (byte ****)&DAT_00000007;
                      FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"BUTTON_ID_INTERLOCK",
                                     &DAT_71042b2a84);
                      uVar13 = extraout_x1_14;
                      if ((long *)**(undefined8 **)(lVar8 + 0x40) != (long *)0x0) {
                        ppuVar15 = (undefined **)&DAT_71042b2a84;
                        ppppbVar16 = (byte ****)0x6;
                        FUN_7103375650((long *)**(undefined8 **)(lVar8 + 0x40),"INPUT_HOW_TO_PLAY",
                                       &DAT_71042b2a84);
                        uVar13 = extraout_x1_15;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_71018d9670;
    }
  }
LAB_71018d97b4:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

