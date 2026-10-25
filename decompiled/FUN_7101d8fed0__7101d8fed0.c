// addr:      7101d8fed0
// offset:    0x1d8fed0
// name:      FUN_7101d8fed0
// mangled:   
// signature: undefined __cdecl FUN_7101d8fed0(long param_1, undefined8 param_2, long * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d8fed0(long param_1,undefined8 param_2,long ****param_3,long *********param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  char cVar6;
  undefined **ppuVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
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
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  long *********ppppppppplVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined **ppuVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined **local_120;
  undefined **local_118;
  long local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long ***local_e0;
  undefined **local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long ***local_a0;
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  undefined **local_58;
  
  puVar27 = *(undefined8 **)(param_1 + 0x80);
  iVar10 = *(int *)((long)puVar27 + 0x33c);
  if (iVar10 != 0) {
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x18,param_3,(byte ****)param_4,param_5,param_6,param_7,param_8);
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_a0 = (long ***)&SUB_00000018;
        param_3 = &local_a0;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar13 & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,param_3,(byte ****)param_4,param_5,param_6,param_7,
                                     param_8), puVar12 != (undefined8 *)0x0)) goto LAB_7101d8ff54;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_7101d8ff54:
    *(undefined1 *)(puVar12 + 2) = 1;
    *puVar12 = 0;
    puVar12[1] = 0;
    if (iVar10 == 2) {
      pcVar16 = "anim_out_right";
LAB_7101d8ff8c:
      FUN_71037780e0(&local_a0,(long)(puVar27 + 0x24),(long ****)pcVar16,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      param_2 = extraout_x1;
    }
    else {
      if (iVar10 == 1) {
        pcVar16 = "anim_out_left";
        goto LAB_7101d8ff8c;
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined **)
                 FUN_710392e290(0x10,0x18,param_3,(byte ****)param_4,param_5,param_6,param_7,param_8
                               );
      param_2 = extraout_x1_16;
      if (local_98 == (undefined **)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_120 = (undefined **)((ulong)local_120 & 0xffffffff00000000);
          local_e0 = (long ***)&SUB_00000018;
          param_3 = &local_e0;
          auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
          param_2 = auVar34._8_8_;
          if (((auVar34._0_8_ & 1) != 0) &&
             (local_98 = (undefined **)
                         FUN_710392e290(0x10,0x18,param_3,(byte ****)param_4,param_5,param_6,param_7
                                        ,param_8), param_2 = extraout_x1_17,
             local_98 != (undefined **)0x0)) goto LAB_7101d90434;
        }
        local_98 = (undefined **)0x0;
      }
LAB_7101d90434:
      *local_98 = (undefined *)0x0;
      local_98[1] = (undefined *)0x0;
      *(undefined1 *)(local_98 + 2) = 1;
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
      param_2 = extraout_x1_00;
    }
    ppuVar28 = local_98;
    if (*local_98 == (undefined *)0x0) {
LAB_7101d901c4:
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined **)0x0;
      if (ppuVar28 == (undefined **)0x0) goto LAB_7101d901ec;
    }
    else if ((long *)local_98[1] != (long *)0x0) {
      auVar34 = (**(code **)(*(long *)local_98[1] + 0x138))();
      uVar18 = auVar34._8_8_;
      if ((auVar34._0_8_ & 1) != 0) {
        if ((long *)ppuVar28[1] != (long *)0x0) {
          uVar13 = (**(code **)(*(long *)ppuVar28[1] + 0x148))();
          if ((uVar13 & 1) == 0) {
            if (*(char *)(ppuVar28 + 2) != '\0') {
              plVar32 = *(long **)(*ppuVar28 + 0x80);
              plVar30 = (long *)(*ppuVar28 + 0x88);
              if (plVar32 != plVar30) {
                plVar29 = (long *)ppuVar28[1];
                do {
                  while( true ) {
                    uVar13 = (**(code **)(*(long *)plVar32[0xd] + 0x148))();
                    if (((uVar13 & 1) != 0) &&
                       (uVar13 = (**(code **)(*plVar29 + 0x120))(plVar29,plVar32[0xd]),
                       (uVar13 & 1) != 0)) {
                      (**(code **)(*(long *)plVar32[0xd] + 0x178))();
                      (**(code **)(*(long *)plVar32[0xd] + 0x140))((long *)plVar32[0xd],0);
                    }
                    plVar19 = (long *)plVar32[1];
                    if ((long *)plVar32[1] == (long *)0x0) break;
                    do {
                      plVar32 = plVar19;
                      plVar19 = (long *)*plVar32;
                    } while ((long *)*plVar32 != (long *)0x0);
LAB_7101d90090:
                    if (plVar32 == plVar30) goto LAB_7101d900a8;
                  }
                  plVar19 = plVar32 + 2;
                  plVar23 = (long *)*plVar19;
                  if ((long *)*plVar23 != plVar32) {
                    do {
                      lVar20 = *plVar19;
                      plVar19 = (long *)(lVar20 + 0x10);
                      plVar32 = (long *)*plVar19;
                    } while (*plVar32 != lVar20);
                    goto LAB_7101d90090;
                  }
                  plVar32 = plVar23;
                } while (plVar23 != plVar30);
              }
            }
LAB_7101d900a8:
            (**(code **)(*(long *)ppuVar28[1] + 0x178))();
          }
          (**(code **)(*(long *)ppuVar28[1] + 0x1a0))(0);
          uVar18 = extraout_x1_01;
        }
        lVar20 = *(long *)(puVar27[0x28] + 0x1b8);
        if (lVar20 != 0) {
          lVar31 = puVar27[0x28] + 0x1b8;
          lVar24 = lVar31;
          lVar26 = lVar20;
          do {
            bVar8 = *(int *)(lVar26 + 0x20) < 0;
            if (!bVar8) {
              lVar24 = lVar26;
            }
            lVar26 = *(long *)(lVar26 + (ulong)bVar8 * 8);
          } while (lVar26 != 0);
          if (((lVar24 != lVar31) && (*(int *)(lVar24 + 0x20) < 1)) &&
             (plVar30 = *(long **)(lVar24 + 0x28), plVar30 != (long *)0x0)) {
            (**(code **)(*plVar30 + 0x1f8))(plVar30,1);
            param_3 = (long ****)0x0;
            (**(code **)(*plVar30 + 0x388))(plVar30,0);
            lVar31 = puVar27[0x28] + 0x1b8;
            lVar20 = *(long *)(puVar27[0x28] + 0x1b8);
            uVar18 = extraout_x1_02;
          }
          lVar24 = lVar31;
          if (lVar20 != 0) {
            do {
              if (0 < *(int *)(lVar20 + 0x20)) {
                lVar24 = lVar20;
              }
              lVar20 = *(long *)(lVar20 + (ulong)(*(int *)(lVar20 + 0x20) < 1) * 8);
            } while (lVar20 != 0);
            if (((lVar24 != lVar31) && (*(int *)(lVar24 + 0x20) < 2)) &&
               (plVar30 = *(long **)(lVar24 + 0x28), plVar30 != (long *)0x0)) {
              (**(code **)(*plVar30 + 0x1f8))(plVar30,1);
              param_3 = (long ****)0x0;
              (**(code **)(*plVar30 + 0x388))(plVar30,0);
              uVar18 = extraout_x1_03;
            }
          }
        }
        *(undefined4 *)((long)puVar27 + 0x33c) = 0;
        FUN_7101d89d00(puVar27,uVar18,(char *)param_3,param_4,param_5,param_6,param_7,param_8);
        param_2 = extraout_x1_04;
        goto LAB_7101d901c4;
      }
    }
    local_98 = (undefined **)0x0;
    local_a0 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)ppuVar28);
    param_2 = extraout_x1_05;
  }
LAB_7101d901ec:
  FUN_7101d8ed00(puVar27 + 0x33,param_2,param_3,(byte ****)param_4,param_5,param_6,param_7,param_8);
  uVar18 = extraout_x1_06;
  if ((*(ushort *)(puVar27 + 0x39) != 0xffff) &&
     (uVar9 = FUN_710259d0a0(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)((long)puVar27 + 0x1ca),
                             *(ushort *)(puVar27 + 0x39),(byte ****)param_4,param_5,param_6,param_7,
                             param_8), uVar18 = extraout_x1_07, (uVar9 & 1) != 0)) {
    param_4 = (long *********)(ulong)*(byte *)((long)puVar27 + 0x1ca);
    FUN_71025ae1b0(*(ushort *)(puVar27 + 0x39),puVar27 + 0x37,*(uint *)((long)puVar27 + 0x1cc),
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    *(undefined2 *)(puVar27 + 0x39) = 0xffff;
    uVar18 = extraout_x1_08;
  }
  if ((*(ushort *)(puVar27 + 0x3c) != 0xffff) &&
     (uVar9 = FUN_710259d0a0(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)((long)puVar27 + 0x1e2),
                             *(ushort *)(puVar27 + 0x3c),(byte ****)param_4,param_5,param_6,param_7,
                             param_8), uVar18 = extraout_x1_09, (uVar9 & 1) != 0)) {
    param_4 = (long *********)(ulong)*(byte *)((long)puVar27 + 0x1e2);
    FUN_71025ae1b0(*(ushort *)(puVar27 + 0x3c),puVar27 + 0x3a,*(uint *)((long)puVar27 + 0x1e4),
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    *(undefined2 *)(puVar27 + 0x3c) = 0xffff;
    uVar18 = extraout_x1_10;
  }
  ppppppppplVar17 = (long *********)(ulong)*(ushort *)(puVar27 + 0x3f);
  if ((ppppppppplVar17 != (long *********)0xffff) &&
     (uVar9 = FUN_710259d0a0(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)((long)puVar27 + 0x1fa),
                             *(ushort *)(puVar27 + 0x3f),(byte ****)param_4,param_5,param_6,param_7,
                             param_8), uVar18 = extraout_x1_11, (uVar9 & 1) != 0)) {
    ppppppppplVar17 = (long *********)(ulong)*(uint *)((long)puVar27 + 0x1fc);
    param_4 = (long *********)(ulong)*(byte *)((long)puVar27 + 0x1fa);
    FUN_71025ae1b0(*(ushort *)(puVar27 + 0x3f),puVar27 + 0x3d,*(uint *)((long)puVar27 + 0x1fc),
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    *(undefined2 *)(puVar27 + 0x3f) = 0xffff;
    uVar18 = extraout_x1_12;
  }
  FUN_7101d8ed00(puVar27 + 0x41,uVar18,ppppppppplVar17,(byte ****)param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7101d8ed00(puVar27 + 0x45,extraout_x1_13,ppppppppplVar17,(byte ****)param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7101d8ed00(puVar27 + 0x49,extraout_x1_14,ppppppppplVar17,(byte ****)param_4,param_5,param_6,
                 param_7,param_8);
  uVar18 = extraout_x1_15;
  if ((*(int *)(puVar27 + 0x68) != 0) &&
     ((((*(uint *)(puVar27 + 0x2b) & 0xfffffffe) != 6 || (*(char *)((long)puVar27 + 0x2fd) != '\0'))
      && (iVar10 = *(int *)(puVar27 + 0x68) + -1, *(int *)(puVar27 + 0x68) = iVar10, iVar10 == 0))))
  {
    FUN_7103776290(&local_a0,extraout_x1_15,(long ****)ppppppppplVar17,(byte ****)param_4,param_5,
                   param_6,param_7,param_8);
    if (*(int *)(puVar27 + 0x2b) == 5) {
      FUN_7103776640(&local_e0,(long)(puVar27 + 0x26),(byte ****)"set_parts_paramset_00",
                     ppppppppplVar17,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_120,(long)&local_e0,(byte ****)"set_parts_param_01",ppppppppplVar17,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_60,(long)&local_120,(byte ****)"set_parts_text_scroll",ppppppppplVar17,
                     param_4,param_5,param_6,param_7,param_8);
      ppuVar28 = local_58;
      ppuVar7 = local_98;
      local_58 = (undefined **)0x0;
      local_98 = ppuVar28;
      if (ppuVar7 != (undefined **)0x0) {
        puVar14 = ppuVar7[3];
        ppuVar7[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar7[3] = (undefined *)0x0;
        if (puVar14 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
        FUN_710392eb40((ulong)ppuVar7);
      }
      ppuVar7 = local_118;
      local_60 = &PTR_FUN_710523d988;
      local_58 = (undefined **)0x0;
      local_120 = &PTR_FUN_710523d988;
      local_118 = (undefined **)0x0;
      if (ppuVar7 != (undefined **)0x0) {
        puVar14 = ppuVar7[3];
        ppuVar7[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar7[3] = (undefined *)0x0;
        if (puVar14 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
        FUN_710392eb40((ulong)ppuVar7);
      }
    }
    else {
      FUN_7103776640(&local_e0,(long)(puVar27 + 0x26),(byte ****)"set_parts_param_01",
                     ppppppppplVar17,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_120,(long)&local_e0,(byte ****)"set_parts_text_scroll",ppppppppplVar17,
                     param_4,param_5,param_6,param_7,param_8);
      ppuVar7 = local_98;
      ppuVar28 = local_118;
      local_118 = (undefined **)0x0;
      local_98 = ppuVar28;
      if (ppuVar7 != (undefined **)0x0) {
        puVar14 = ppuVar7[3];
        ppuVar7[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar7[3] = (undefined *)0x0;
        if (puVar14 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
        FUN_710392eb40((ulong)ppuVar7);
      }
      local_120 = &PTR_FUN_710523d988;
      local_118 = (undefined **)0x0;
    }
    ppuVar7 = local_d8;
    local_e0 = (long ***)&PTR_FUN_710523d988;
    local_d8 = (undefined **)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      puVar14 = ppuVar7[3];
      ppuVar7[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar7[3] = (undefined *)0x0;
      if (puVar14 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      FUN_710392eb40((ulong)ppuVar7);
    }
    FUN_7103778950((long)ppuVar28[1]);
    uVar18 = extraout_x1_18;
    if (ppuVar28[1] != (undefined *)0x0) {
      puVar12 = *(undefined8 **)(ppuVar28[1] + 0x78);
      if (((DAT_710593ba40 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), uVar18 = extraout_x1_43, iVar10 != 0)) {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
        uVar18 = extraout_x1_44;
      }
      if (puVar12 != (undefined8 *)0x0) {
        auVar34 = (**(code **)*puVar12)(puVar12);
        uVar18 = auVar34._8_8_;
        for (puVar15 = auVar34._0_8_; puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15
            ) {
          if ((undefined8 **)puVar15 == &DAT_710593ba58) {
            lVar20 = puVar12[3];
            *(undefined4 *)(puVar12 + 0xb) = *(undefined4 *)((long)puVar12 + 0x54);
            if (lVar20 != 0) {
              *(undefined4 *)(lVar20 + 0x30) = *(undefined4 *)((long)puVar12 + 0x54);
              *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
            }
            lVar20 = puVar12[4];
            if (lVar20 != 0) {
              *(undefined4 *)(lVar20 + 0x30) = *(undefined4 *)(puVar12 + 0xb);
              *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
            }
            if ((long *)puVar12[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar12[5] + 0x180))(0);
              uVar18 = extraout_x1_19;
            }
            plVar30 = (long *)puVar12[6];
            if (plVar30 != (long *)0x0) {
              if (*(char *)((long)puVar12 + 99) == '\0') {
                (**(code **)(*plVar30 + 0x180))(0);
                uVar18 = extraout_x1_21;
              }
              else {
                (**(code **)(*plVar30 + 400))();
                uVar18 = extraout_x1_20;
              }
            }
            *(undefined2 *)((long)puVar12 + 100) = 1;
            break;
          }
        }
      }
    }
    ppuVar28 = local_98;
    if (local_98[1] != (undefined *)0x0) {
      puVar12 = *(undefined8 **)(local_98[1] + 0x78);
      if (((DAT_710593ba40 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), uVar18 = extraout_x1_45, iVar10 != 0)) {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
        uVar18 = extraout_x1_46;
      }
      ppuVar28 = local_98;
      if (puVar12 != (undefined8 *)0x0) {
        auVar34 = (**(code **)*puVar12)(puVar12);
        uVar18 = auVar34._8_8_;
        for (puVar15 = auVar34._0_8_; ppuVar28 = local_98, puVar15 != (undefined8 *)0x0;
            puVar15 = (undefined8 *)*puVar15) {
          if ((undefined8 **)puVar15 == &DAT_710593ba58) {
            *(undefined1 *)(puVar12 + 0xc) = 1;
            break;
          }
        }
      }
    }
    local_a0 = (long ***)&PTR_FUN_710523d988;
    local_98 = (undefined **)0x0;
    if (ppuVar28 != (undefined **)0x0) {
      puVar14 = ppuVar28[3];
      ppuVar28[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar28[3] = (undefined *)0x0;
      if (puVar14 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      FUN_710392eb40((ulong)ppuVar28);
      uVar18 = extraout_x1_22;
    }
  }
  if (*(int *)(puVar27 + 0x2b) == 4) {
    uVar9 = *(uint *)(puVar27 + 0x4e);
    uVar22 = *(uint *)(puVar27 + 0x4d);
    if (uVar9 != uVar22) {
      *(int *)(puVar27 + 0x4d) = (int)(*(float *)(puVar27 + 0x4f) + (float)uVar22);
      if (uVar9 <= (uint)(int)(*(float *)(puVar27 + 0x4f) + (float)uVar22)) {
        *(uint *)(puVar27 + 0x4d) = uVar9;
        FUN_7103776640(&local_a0,(long)(puVar27 + 0x26),(byte ****)"set_parts_param_03",
                       ppppppppplVar17,param_4,param_5,param_6,param_7,param_8);
        ppuVar28 = local_98;
        uVar18 = extraout_x1_23;
        if ((local_98[1] != (undefined *)0x0) &&
           (plVar30 = (long *)FUN_71037964b0((long)local_98[1],0x7104401909),
           uVar18 = extraout_x1_24, plVar30 != (long *)0x0)) {
          (**(code **)(*plVar30 + 0x1a0))(0);
          uVar18 = extraout_x1_25;
        }
        local_a0 = (long ***)&PTR_FUN_710523d988;
        local_98 = (undefined **)0x0;
        if (ppuVar28 != (undefined **)0x0) {
          puVar14 = ppuVar28[3];
          ppuVar28[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar28[3] = (undefined *)0x0;
          if (puVar14 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar14);
          }
          FUN_710392eb40((ulong)ppuVar28);
          uVar18 = extraout_x1_26;
        }
        if (*(int *)((long)puVar27 + 0x2c4) != -1) {
          FUN_710373b540((long)(puVar27 + 0x53),0);
          *(undefined4 *)(puVar27 + 0x53) = 0;
          FUN_71039602c0((long)(puVar27 + 0x54));
          puVar27[0x54] = &PTR_FUN_7104f73d50;
          if (((puVar27[0x55] != 0) && (DAT_7106dd53a8 == '\x01')) &&
             (*(int *)(puVar27 + 0x56) == DAT_7106dd53ac)) {
            piVar21 = (int *)(puVar27[0x55] + 0x38);
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar8) {
                *piVar21 = *piVar21 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          puVar27[0x56] = 0;
          puVar27[0x57] = 0;
          puVar27[0x54] = 0;
          puVar27[0x55] = 0;
          puVar27[0x56] = 0x87650000000000;
          puVar27[0x54] = &PTR_FUN_7104f73d30;
          puVar27[0x55] = 0;
          *(undefined1 *)(puVar27 + 0x57) = 0;
          puVar27[0x58] = 0xffffffffffffffff;
          puVar27[0x59] = 0;
          *(undefined4 *)((long)puVar27 + 0x2d4) = 0;
          uVar18 = extraout_x1_27;
        }
      }
      sVar5 = *(short *)((long)puVar27 + 0x15c);
      if ((sVar5 == -1) || (1999 < sVar5)) {
LAB_7101d908a0:
        uVar9 = *(uint *)(puVar27 + 0x4d);
      }
      else {
        lVar31 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        lVar20 = lVar31 + (long)(int)sVar5 * 2;
        uVar4 = *(ushort *)(lVar20 + 0x60);
        uVar13 = (ulong)uVar4;
        uVar25 = (*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar4 < (uint)uVar25) {
          puVar2 = (undefined2 *)(*(long *)(lVar31 + 0x20) + uVar13 * 0x140);
          if (uVar25 < uVar13 || uVar25 - uVar13 == 0) {
            puVar2 = &DAT_7105182b08;
          }
          iVar10 = FUN_71025c9ac0(*(float *)(puVar2 + 0x3a),uVar22,*(uint *)(puVar2 + 0x38));
          uVar18 = extraout_x1_28;
        }
        else {
          iVar10 = 1;
        }
        uVar25 = (*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20) >> 6) * -0x3333333333333333;
        uVar4 = *(ushort *)(lVar20 + 0x60);
        uVar13 = (ulong)uVar4;
        uVar9 = *(uint *)(puVar27 + 0x4d);
        if ((uint)uVar4 < (uint)uVar25) {
          puVar2 = (undefined2 *)(*(long *)(lVar31 + 0x20) + uVar13 * 0x140);
          if (uVar25 < uVar13 || uVar25 - uVar13 == 0) {
            puVar2 = &DAT_7105182b08;
          }
          iVar11 = FUN_71025c9ac0(*(float *)(puVar2 + 0x3a),uVar9,*(uint *)(puVar2 + 0x38));
          uVar18 = extraout_x1_29;
          if (iVar10 != iVar11) {
LAB_7101d90890:
            ppppppppplVar17 = (long *********)0x1;
            FUN_7101d8cfb0((long)puVar27,1,1,(ulong)param_4,param_5,param_6,param_7,param_8);
            uVar18 = extraout_x1_30;
            goto LAB_7101d908a0;
          }
        }
        else if (iVar10 != 1) goto LAB_7101d90890;
      }
      fVar33 = (float)(*(int *)(puVar27 + 0x4e) - uVar9) / 20.0;
      if (fVar33 <= 1.0) {
        fVar33 = 1.0;
      }
      *(float *)(puVar27 + 0x4f) = fVar33;
      FUN_7101d8d450((long)puVar27,uVar18,ppppppppplVar17,(ulong)param_4,param_5,param_6,param_7,
                     param_8);
      uVar18 = extraout_x1_31;
    }
    uVar9 = *(uint *)(puVar27 + 0x52);
    if (uVar9 != *(uint *)(puVar27 + 0x51)) {
      fVar33 = (float)*(uint *)(puVar27 + 0x51);
      if (*(float *)((long)puVar27 + 0x294) <= fVar33) {
        uVar22 = (uint)(fVar33 - *(float *)(puVar27 + 0x4f));
        *(uint *)(puVar27 + 0x51) = uVar22;
        if (uVar22 <= uVar9) goto LAB_7101d9090c;
      }
      else {
        *(undefined4 *)(puVar27 + 0x51) = 0;
LAB_7101d9090c:
        *(uint *)(puVar27 + 0x51) = uVar9;
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          ppppppppplVar17 = (long *********)&DAT_00000004;
          uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x26ef44d702,
                                  (long ****)&DAT_00000004,(byte ****)param_4,param_5,param_6,
                                  param_7,param_8);
          if ((uVar13 & 1) == 0) goto LAB_7101d909a0;
          FUN_71024076d0((undefined4 *)&local_a0,0x26ef44d702);
          if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac))
          {
            piVar21 = (int *)(local_90 + 0x38);
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar8) {
                *piVar21 = *piVar21 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        else {
LAB_7101d909a0:
          local_88 = 0x87650000000000;
          local_78 = 0xffffffffffffffff;
          uStack_70 = 0;
          local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
          local_68 = 0;
        }
        local_98 = &PTR_FUN_7104f73d50;
        local_90 = 0;
        local_80 = 0;
      }
      FUN_7103776640(&local_e0,(long)(puVar27 + 0x26),(byte ****)"set_parts_sp",ppppppppplVar17,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_120,(long)&local_e0,(byte ****)"set_parts_sp_icon_txt",ppppppppplVar17,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_60,(long)&local_120,(long ****)"set_txt_help",ppppppppplVar17,param_4,
                     param_5,param_6,param_7,param_8);
      param_4 = (long *********)(ulong)*(uint *)(puVar27 + 0x51);
      ppppppppplVar17 = (long *********)0x1;
      FUN_710377a280((long)&local_60,(byte *)"mnu_spirits_raise_sp_n",1);
      ppuVar28 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = (undefined **)0x0;
      uVar18 = extraout_x1_32;
      if (ppuVar28 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar28);
        uVar18 = extraout_x1_33;
      }
      ppuVar28 = local_118;
      local_120 = &PTR_FUN_710523d988;
      local_118 = (undefined **)0x0;
      if (ppuVar28 != (undefined **)0x0) {
        puVar14 = ppuVar28[3];
        ppuVar28[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar28[3] = (undefined *)0x0;
        if (puVar14 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
        FUN_710392eb40((ulong)ppuVar28);
        uVar18 = extraout_x1_34;
      }
      ppuVar28 = local_d8;
      local_e0 = (long ***)&PTR_FUN_710523d988;
      local_d8 = (undefined **)0x0;
      if (ppuVar28 != (undefined **)0x0) {
        puVar14 = ppuVar28[3];
        ppuVar28[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar28[3] = (undefined *)0x0;
        if (puVar14 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
        FUN_710392eb40((ulong)ppuVar28);
        uVar18 = extraout_x1_35;
      }
    }
    uVar9 = *(uint *)((long)puVar27 + 0x27c);
    uVar22 = *(uint *)(puVar27 + 0x50);
    if (uVar9 <= uVar22 && uVar22 - uVar9 != 0) {
      fVar33 = ((*(float *)(puVar27 + 0x4f) * (float)(uVar22 - uVar9)) /
               (float)(uint)(*(int *)(puVar27 + 0x4e) - *(int *)(puVar27 + 0x4d))) * 0.8;
      if (fVar33 <= 1.0) {
        fVar33 = 1.0;
      }
      *(float *)((long)puVar27 + 0x284) = fVar33;
      uVar1 = (int)(fVar33 + (float)uVar9);
      if (uVar22 <= (uint)(int)(fVar33 + (float)uVar9)) {
        uVar1 = uVar22;
      }
      *(uint *)((long)puVar27 + 0x27c) = uVar1;
      FUN_7103776640(&local_e0,(long)(puVar27 + 0x26),(byte ****)"set_parts_power",ppppppppplVar17,
                     param_4,param_5,param_6,param_7,param_8);
      ppuVar28 = local_d8;
      if ((local_d8[1] != (undefined *)0x0) && (lVar20 = *(long *)(local_d8[1] + 0x18), lVar20 != 0)
         ) {
        *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
      }
      FUN_7103776910(&local_120,(long)&local_e0,(long ****)"set_txt_power_00",ppppppppplVar17,
                     param_4,param_5,param_6,param_7,param_8);
      uVar13 = (ulong)*(uint *)((long)puVar27 + 0x27c);
      uVar18 = 1;
      FUN_710377a280((long)&local_120,(byte *)"mnu_spirits_select_power_n",1);
      ppuVar7 = local_118;
      local_120 = &PTR_FUN_710523d9a8;
      local_118 = (undefined **)0x0;
      if (ppuVar7 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar7);
      }
      FUN_7103776910(&local_120,(long)&local_e0,(long ****)"set_txt_power_sdw",uVar18,uVar13,param_5
                     ,param_6,param_7,param_8);
      param_4 = (long *********)(ulong)*(uint *)((long)puVar27 + 0x27c);
      ppppppppplVar17 = (long *********)0x1;
      FUN_710377a280((long)&local_120,(byte *)"mnu_spirits_select_power_n",1);
      ppuVar7 = local_118;
      local_120 = &PTR_FUN_710523d9a8;
      local_118 = (undefined **)0x0;
      uVar18 = extraout_x1_36;
      if (ppuVar7 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar7);
        uVar18 = extraout_x1_37;
      }
      local_e0 = (long ***)&PTR_FUN_710523d988;
      local_d8 = (undefined **)0x0;
      if (ppuVar28 != (undefined **)0x0) {
        puVar14 = ppuVar28[3];
        ppuVar28[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar28[3] = (undefined *)0x0;
        if (puVar14 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
        FUN_710392eb40((ulong)ppuVar28);
        uVar18 = extraout_x1_38;
      }
    }
  }
  if (*(int *)(puVar27[0x28] + 0x25c) != -1) {
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      ppppppppplVar17 = (long *********)&DAT_00000004;
      uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                              (byte ****)param_4,param_5,param_6,param_7,param_8);
      uVar18 = extraout_x1_39;
      if ((uVar13 & 1) == 0) goto LAB_7101d90c6c;
      FUN_71024076d0((undefined4 *)&local_e0,0x151ca6c028);
      uVar18 = extraout_x1_40;
      if (((local_d0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c8 == DAT_7106dd53ac)) {
        piVar21 = (int *)(local_d0 + 0x38);
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar8) {
            *piVar21 = *piVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_7101d90c6c:
      local_c8 = 0x87650000000000;
      local_b8 = 0xffffffffffffffff;
      uStack_b0 = 0;
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_a8 = 0;
    }
    local_d8 = &PTR_FUN_7104f73d50;
    local_d0 = 0;
    local_c0 = 0;
  }
  if (*(int *)(puVar27 + 0x2b) != 1) goto LAB_7101d90df8;
  if (*(int *)(puVar27[0x29] + 0x25c) == 0) {
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      ppppppppplVar17 = (long *********)&DAT_00000004;
      uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x106a2070e6,(long ****)&DAT_00000004,
                              (byte ****)param_4,param_5,param_6,param_7,param_8);
      uVar18 = extraout_x1_41;
      if ((uVar13 & 1) == 0) goto LAB_7101d90d48;
      FUN_71024076d0((undefined4 *)&local_120,0x106a2070e6);
      uVar18 = extraout_x1_42;
      if (((local_110 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_108 == DAT_7106dd53ac)) {
        piVar21 = (int *)(local_110 + 0x38);
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar8) {
            *piVar21 = *piVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_7101d90d48:
      local_108 = 0x87650000000000;
      local_f8 = 0xffffffffffffffff;
      uStack_f0 = 0;
      local_120 = (undefined **)((ulong)local_120 & 0xffffffff00000000);
      local_e8 = 0;
    }
    local_118 = &PTR_FUN_7104f73d50;
    local_110 = 0;
    local_100 = 0;
    *(byte *)(puVar27 + 0x67) = *(byte *)(puVar27 + 0x67) ^ 1;
    FUN_7101d8dc90((long)puVar27,uVar18,ppppppppplVar17,(byte ****)param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103778300(0x3f800000,puVar27[0x25],0x710436c7dc);
  }
  if ((*(char *)(*(long *)(**(long **)puVar27[0x21] + 0x600) + 0x4aa) != '\0') &&
     ((*(byte *)(*(long *)(**(long **)puVar27[0x21] + 0x600) + 0x1a8) >> 1 & 1) != 0)) {
    bVar3 = *(byte *)((long)puVar27 + 0x339);
    *(byte *)((long)puVar27 + 0x339) = bVar3 ^ 1;
    if ((*(long *)(puVar27[0x27] + 8) != 0) &&
       (lVar20 = *(long *)(*(long *)(puVar27[0x27] + 8) + 0x18), lVar20 != 0)) {
      *(byte *)(lVar20 + 0x58) = (bVar3 | *(byte *)(lVar20 + 0x58) & 0xfe) ^ 1;
    }
  }
LAB_7101d90df8:
  if ((*(uint *)(puVar27 + 0x2b) & 0xfffffffe) == 6) {
    if (*(char *)((long)puVar27 + 0x2f5) == '\0') {
      FUN_7101d8e7c0((long)puVar27,"",0,0,param_5,param_6,param_7,param_8);
    }
    FUN_7103399c10(puVar27[0x60]);
  }
  return;
}

