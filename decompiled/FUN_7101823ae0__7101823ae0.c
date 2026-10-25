// addr:      7101823ae0
// offset:    0x1823ae0
// name:      FUN_7101823ae0
// mangled:   
// signature: undefined __cdecl FUN_7101823ae0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101823ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  long lVar16;
  code *pcVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined4 uStack_d6;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined6 local_ce;
  undefined2 uStack_c8;
  undefined1 local_c6;
  undefined5 uStack_c5;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  long *local_80;
  ulong local_78;
  long ********local_70;
  undefined4 local_64;
  
  ppuVar11 = (undefined **)&local_f0;
  if (*(int *)(param_1 + 0xfc) == 0) {
    uVar27 = 0x811c9dc5;
    local_e8 = &DAT_696c6e6f5f756e6d;
    uStack_d6 = 0x6c746974;
    uStack_d2 = 0x65;
    local_e0 = 0x726f7065725f656e;
    local_d8 = 0x5f74;
    uVar21 = 0x6d;
    lVar28 = 9;
    uVar22 = uVar27;
    do {
      uVar22 = uVar22 * 0x89 ^ uVar21;
      uVar21 = (uint)*(byte *)((long)&local_f0 + lVar28);
      lVar28 = lVar28 + 1;
    } while (uVar21 != 0);
    local_f0 = (undefined **)CONCAT44(0x17,uVar22);
    FUN_7101af90b0(*(long *)(*(long *)(param_1 + 0x110) + 0x80),(uint *)&local_f0,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    lVar28 = *(long *)(param_1 + 0x110);
    lVar16 = *(long *)(lVar28 + 0x80);
    if (*(int *)(lVar16 + 0x1204) == 1) {
      if (*(char *)(lVar16 + 0x2259) != '\x01') goto LAB_7101823e34;
    }
    else {
      *(undefined4 *)(lVar16 + 0x1204) = 1;
LAB_7101823e34:
      if ((*(char *)(lVar16 + 0x2257) != '\0') && (*(char *)(lVar16 + 0x2259) != '\x01')) {
        *(char *)(lVar16 + 0x2259) = '\x01';
        FUN_71037780e0(&local_f0,**(long **)(lVar16 + 0xb8) + 8,(long ****)"footer_help_in",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_f0);
        puVar3 = local_e8;
        local_f0 = &PTR_FUN_710523d9e8;
        local_e8 = (undefined1 *)0x0;
        if (puVar3 != (undefined1 *)0x0) {
          FUN_710392eb40((ulong)puVar3);
        }
      }
      FUN_7101af4610(lVar16);
      lVar28 = *(long *)(param_1 + 0x110);
    }
    local_e8 = (undefined1 *)0x746f6f665f756e6d;
    local_e0 = 0x726f7065725f7265;
    uVar21 = 0x6d;
    local_d8 = 0x74;
    lVar16 = 9;
    uVar22 = uVar27;
    do {
      uVar22 = uVar22 * 0x89 ^ uVar21;
      uVar21 = (uint)*(byte *)((long)&local_f0 + lVar16);
      lVar16 = lVar16 + 1;
    } while (uVar21 != 0);
    local_f0 = (undefined **)CONCAT44(0x11,uVar22);
    FUN_7101af6200(*(long *)(lVar28 + 0x80),10,(uint *)&local_f0);
    uVar22 = 0x6d;
    local_e8 = &DAT_696c6e6f5f756e6d;
    uStack_d6 = 0x706c6568;
    uStack_d2 = 0x705f;
    uStack_d0 = 0x616c;
    local_ce = 0x617465645f79;
    uStack_c8 = 0x6c69;
    lVar28 = 9;
    local_e0 = 0x726f7065725f656e;
    local_d8 = 0x5f74;
    local_c6 = 0;
    do {
      uVar27 = uVar27 * 0x89 ^ uVar22;
      uVar22 = (uint)*(byte *)((long)&local_f0 + lVar28);
      lVar28 = lVar28 + 1;
    } while (uVar22 != 0);
    local_f0 = (undefined **)CONCAT44(0x22,uVar27);
    FUN_7101af53d0(*(long *)(*(long *)(param_1 + 0x110) + 0x80),(uint *)&local_f0,ppuVar11,param_4,
                   param_5,param_6,param_7,param_8);
    lVar28 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    (**(code **)(**(long **)(lVar28 + 0x2268) + 0x70))(*(long **)(lVar28 + 0x2268),0);
    if (*(char *)(lVar28 + 0x11b4) == '\0') {
      FUN_7103771a80((long *)(lVar28 + 0x2268),3,0);
    }
    else {
      lVar28 = *(long *)(lVar28 + 0x2268);
      if (*(int *)(lVar28 + 0x254) == 3) {
        FUN_710376b960(lVar28);
      }
    }
    lVar28 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    *(undefined1 *)(lVar28 + 0x11ac) = 0;
    if (*(int *)(lVar28 + 0x11b0) < 6) {
      if (*(int *)(lVar28 + 0x11b0) - 1U < 5) {
        lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
        if (lVar16 != 0) {
          lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
          lVar31 = lVar19;
          lVar24 = lVar16;
          do {
            if (0 < *(int *)(lVar24 + 0x20)) {
              lVar31 = lVar24;
            }
            lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 1) * 8);
          } while (lVar24 != 0);
          if (((lVar31 != lVar19) && (*(int *)(lVar31 + 0x20) < 2)) &&
             (plVar26 = *(long **)(lVar31 + 0x28), plVar26 != (long *)0x0)) {
            (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
            (**(code **)(*plVar26 + 0x388))(plVar26,1,0);
            lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
            lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
          }
          lVar28 = lVar19;
          if (lVar16 != 0) {
            do {
              if (0 < *(int *)(lVar16 + 0x20)) {
                lVar28 = lVar16;
              }
              lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 1) * 8);
            } while (lVar16 != 0);
            if ((lVar28 != lVar19) && (*(int *)(lVar28 + 0x20) < 2)) goto LAB_710182427c;
          }
        }
      }
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
      if (lVar16 != 0) {
        lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
        lVar31 = lVar19;
        lVar24 = lVar16;
        do {
          if (1 < *(int *)(lVar24 + 0x20)) {
            lVar31 = lVar24;
          }
          lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 2) * 8);
        } while (lVar24 != 0);
        if (((lVar31 != lVar19) && (*(int *)(lVar31 + 0x20) < 3)) &&
           (plVar26 = *(long **)(lVar31 + 0x28), plVar26 != (long *)0x0)) {
          (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
          (**(code **)(*plVar26 + 0x388))(plVar26,1,0);
          lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
          lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
        }
        lVar28 = lVar19;
        if (lVar16 != 0) {
          do {
            if (1 < *(int *)(lVar16 + 0x20)) {
              lVar28 = lVar16;
            }
            lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 2) * 8);
          } while (lVar16 != 0);
          if ((lVar28 != lVar19) && (*(int *)(lVar28 + 0x20) < 3)) {
LAB_710182427c:
            plVar26 = *(long **)(lVar28 + 0x28);
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 0x208))(plVar26,0);
              (**(code **)(*plVar26 + 0x388))(plVar26,1,0);
            }
          }
        }
      }
    }
    lVar19 = *(long *)(param_1 + 0x128);
    lVar28 = *(long *)(*(long *)(param_1 + 0x120) + 0x80);
    iVar18 = *(int *)(lVar28 + 0x294);
    lVar24 = *(long *)(lVar19 + 0x80);
    uVar5 = *(ulong *)(*(long *)(lVar28 + 8) +
                       (long)*(int *)(*(long *)(lVar28 + 0x1f8) + 0x2a4) * 0x50 + 0x18);
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar24 + 0x198),1);
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar24 + 0x1a0),1);
    *(undefined1 *)(lVar24 + 0x535) = 0;
    *(int *)(lVar24 + 0x530) = iVar18;
    uVar12 = 0x48;
    memmove((void *)(lVar24 + 0x1c0),
            (void *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + (long)iVar18 * 0x48 +
                    0x3510),0x48);
    local_f0 = *(undefined ***)(lVar24 + 0x1c0);
    local_e8 = *(undefined1 **)(lVar24 + 0x1c8);
    local_e0 = *(undefined8 *)(lVar24 + 0x1d0);
    uVar9 = *(undefined8 *)(lVar24 + 0x1d8);
    local_d8 = (undefined2)uVar9;
    uStack_d6 = (undefined4)((ulong)uVar9 >> 0x10);
    uStack_d2 = (undefined2)((ulong)uVar9 >> 0x30);
    uStack_d0 = (undefined2)*(undefined8 *)(lVar24 + 0x1e0);
    local_ce = (undefined6)((ulong)*(undefined8 *)(lVar24 + 0x1e0) >> 0x10);
    uVar9 = *(undefined8 *)(lVar24 + 0x1e8);
    uStack_c0 = *(undefined8 *)(lVar24 + 0x1f0);
    local_b8 = *(ulong *)(lVar24 + 0x1f8);
    local_b0 = *(ulong *)(lVar24 + 0x200);
    local_78 = 0;
    uStack_c8 = (undefined2)uVar9;
    local_c6 = (undefined1)((ulong)uVar9 >> 0x10);
    uStack_c5 = (undefined5)((ulong)uVar9 >> 0x18);
    FUN_7103741810(uStack_c0,&local_78);
    lVar31 = **(long **)(lVar24 + 0x198);
    cVar1 = local_b8._6_1_;
    lVar16 = (local_78 & 0xfff) * 1000000 + (local_78 >> 0xc & 0xf) * 1000 +
             (local_78 >> 0x10 & 0x1f);
    ppppbVar15 = (byte ****)
                 ((local_78 >> 0x15 & 0x1f) * 1000000 + (local_78 >> 0x1a & 0x3f) * 1000 +
                 (local_78 >> 0x20 & 0x3f));
    lVar28 = lVar31 + 8;
    if (local_b8._6_1_ == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x10),0x710424ef96);
LAB_7101824440:
      FUN_7103776910(&local_88,lVar28,(long ****)"set_txt_name",uVar12,param_4,param_5,param_6,
                     param_7,param_8);
      puVar13 = &local_d8;
      FUN_710377a310((long)&local_88,1);
      plVar26 = local_80;
      local_88 = &PTR_FUN_710523d9a8;
      local_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar26);
      }
      lVar31 = *(long *)(lVar31 + 0x10);
      pcVar10 = "fp_name_off";
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x10),0x710424efa2);
      if (cVar1 != '\x02') goto LAB_7101824440;
      FUN_7103776910(&local_88,lVar28,(long ****)"set_txt_name_fp",uVar12,param_4,param_5,param_6,
                     param_7,param_8);
      puVar13 = &local_d8;
      FUN_710377a310((long)&local_88,1);
      plVar26 = local_80;
      local_88 = &PTR_FUN_710523d9a8;
      local_80 = (long *)0x0;
      if (plVar26 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar26);
      }
      lVar31 = *(long *)(lVar31 + 0x10);
      pcVar10 = "fp_name_on";
    }
    FUN_7103778300(0x3f800000,lVar31,(long)pcVar10);
    FUN_7103776910(&local_88,lVar28,(long ****)"set_txt_date",puVar13,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a310((long)&local_88,1);
    plVar26 = local_80;
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103776910(&local_88,lVar28,(long ****)"set_txt_time",lVar16,param_4,param_5,param_6,param_7
                   ,param_8);
    ppppppppplVar14 = (long *********)0x0;
    FUN_710377a310((long)&local_88,2);
    plVar26 = local_80;
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    lVar16 = *(long *)(DAT_710532f730 + 8);
    plVar30 = *(long **)(lVar24 + 0x188);
    plVar23 = (long *)(*(long *)(lVar16 + 0x2e8) + 0x18);
    plVar25 = (long *)*plVar23;
    uVar29 = 0x1effff0000000000;
    uVar6 = uVar29;
    plVar26 = plVar23;
    if (plVar25 != (long *)0x0) {
      do {
        if (*(ushort *)(plVar25 + 4) >= (ushort)local_b8) {
          plVar26 = plVar25;
        }
        plVar25 = (long *)plVar25[*(ushort *)(plVar25 + 4) < (ushort)local_b8];
      } while (plVar25 != (long *)0x0);
      uVar6 = 0x1effff0000000000;
      if ((plVar26 != plVar23) &&
         (uVar6 = 0x1effff0000000000, *(ushort *)(plVar26 + 4) <= (ushort)local_b8)) {
        uVar6 = plVar26[5];
      }
    }
    local_88 = (undefined **)FUN_7103239360(uVar6);
    if (((ulong)local_88 & 0xffffffffff) != 0) {
      lVar31 = *plVar30;
      ppppppppplVar14 = (long *********)(long)*(int *)(lVar31 + 0x70);
      ppppbVar15 = (byte ****)(ulong)*(uint *)(lVar31 + 0x68);
      FUN_710323c4e0(lVar31,(ulong *)&local_88,ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,
                     param_8);
    }
    FUN_7103776640(&local_98,lVar28,(byte ****)"set_pic_icon",ppppppppplVar14,ppppbVar15,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_88,(long)&local_98,(long ****)"set_icn_profile",ppppppppplVar14,ppppbVar15
                   ,param_5,param_6,param_7,param_8);
    puVar7 = local_90;
    local_98 = &PTR_FUN_710523d988;
    local_90 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *(ulong *)((long)puVar7 + 0x18);
      *(undefined ***)((long)puVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40((ulong)puVar7);
    }
    plVar23 = (long *)(*(long *)(lVar16 + 0x2e8) + 0x18);
    plVar25 = (long *)*plVar23;
    uVar6 = uVar29;
    plVar26 = plVar23;
    if (plVar25 != (long *)0x0) {
      do {
        if (*(ushort *)(plVar25 + 4) >= (ushort)local_b8) {
          plVar26 = plVar25;
        }
        plVar25 = (long *)plVar25[*(ushort *)(plVar25 + 4) < (ushort)local_b8];
      } while (plVar25 != (long *)0x0);
      uVar6 = 0x1effff0000000000;
      if ((plVar26 != plVar23) &&
         (uVar6 = 0x1effff0000000000, *(ushort *)(plVar26 + 4) <= (ushort)local_b8)) {
        uVar6 = plVar26[5];
      }
    }
    plVar26 = FUN_7103240430(*(long **)(lVar24 + 0x188),uVar6,(long ****)ppppppppplVar14,ppppbVar15,
                             param_5,param_6,param_7,param_8);
    FUN_7103778b80((long)local_80,(long)plVar26,ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,
                   param_8);
    FUN_7103776640(&local_a8,lVar28,(byte ****)"set_pic_icon",ppppppppplVar14,ppppbVar15,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_98,(long)&local_a8,(long ****)"set_icn_profile_bg",ppppppppplVar14,
                   ppppbVar15,param_5,param_6,param_7,param_8);
    puVar7 = local_a0;
    local_a8 = &PTR_FUN_710523d988;
    local_a0 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *(ulong *)((long)puVar7 + 0x18);
      *(undefined ***)((long)puVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40((ulong)puVar7);
    }
    local_a8 = &PTR_FUN_710523d9a8;
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,
                            param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_70;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar6 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,
                                    param_7,param_8), puVar7 != (undefined8 *)0x0))
        goto LAB_71018246f0;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71018246f0:
    puVar4 = local_90;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *puVar7 = *local_90;
    puVar7[1] = local_90[1];
    puVar7[2] = local_90[2];
    puVar7[3] = local_90[3];
    plVar23 = (long *)(*(long *)(lVar16 + 0x2e8) + 0x18);
    plVar25 = (long *)*plVar23;
    plVar26 = plVar23;
    if (plVar25 != (long *)0x0) {
      do {
        if (*(ushort *)(plVar25 + 4) >= (ushort)local_b8) {
          plVar26 = plVar25;
        }
        plVar25 = (long *)plVar25[*(ushort *)(plVar25 + 4) < (ushort)local_b8];
      } while (plVar25 != (long *)0x0);
      if ((plVar26 != plVar23) && (*(ushort *)(plVar26 + 4) <= (ushort)local_b8)) {
        uVar29 = plVar26[5];
      }
    }
    local_a0 = puVar7;
    FUN_710337d450((long)&local_a8,uVar29);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
    plVar26 = local_80;
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103776910(&local_88,lVar28,(long ****)"set_rep_chara",ppppppppplVar14,ppppbVar15,param_5,
                   param_6,param_7,param_8);
    plVar26 = *(long **)(lVar24 + 0x188);
    local_98 = (undefined **)FUN_7103238a70(local_b0,local_b8 >> 0x28 & 0xff,0);
    if (((ulong)local_98 & 0xffffffffff) != 0) {
      lVar28 = *plVar26;
      FUN_710323c4e0(lVar28,(ulong *)&local_98,(long *********)(long)*(int *)(lVar28 + 0x70),
                     (byte ****)(ulong)*(uint *)(lVar28 + 0x68),param_5,param_6,param_7,param_8);
    }
    ppppbVar15 = (byte ****)0x0;
    ppppppppplVar14 = (long *********)(local_b8 >> 0x28 & 0xff);
    plVar23 = FUN_710323f330(*(long **)(lVar24 + 0x188),local_b0,(ulong)ppppppppplVar14,0,param_5,
                             param_6,param_7,param_8);
    plVar26 = local_80;
    FUN_7103778b80((long)local_80,(long)plVar23,ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,
                   param_8);
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    *(byte *)(lVar24 + 0x536) = *(byte *)(lVar24 + 0x1fc) ^ 1;
    *(undefined4 *)(lVar24 + 0x52c) = 0xffffffff;
    FUN_7103771d60(&local_88,*(long *)(lVar24 + 0x1b0),(long ****)0x0,ppppbVar15,param_5,param_6,
                   param_7,param_8);
    plVar26 = local_80;
    plVar23 = (long *)*local_80;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x2f0))(plVar23,0,0);
    }
    local_88 = &PTR_FUN_710523d9c8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103771d60(&local_88,*(long *)(lVar24 + 0x1b0),(long ****)0x1,ppppbVar15,param_5,param_6,
                   param_7,param_8);
    plVar26 = local_80;
    plVar23 = (long *)*local_80;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x2f0))(plVar23,0,0);
    }
    local_88 = &PTR_FUN_710523d9c8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103771d60(&local_88,*(long *)(lVar24 + 0x1b0),(long ****)0x2,ppppbVar15,param_5,param_6,
                   param_7,param_8);
    plVar26 = local_80;
    plVar23 = (long *)*local_80;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x2f0))(plVar23,0,0);
    }
    local_88 = &PTR_FUN_710523d9c8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103771d60(&local_88,*(long *)(lVar24 + 0x1b0),(long ****)0x3,ppppbVar15,param_5,param_6,
                   param_7,param_8);
    plVar26 = local_80;
    plVar23 = (long *)*local_80;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x2f0))(plVar23,0,0);
    }
    local_88 = &PTR_FUN_710523d9c8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103771d60(&local_88,*(long *)(lVar24 + 0x1b0),(long ****)&DAT_00000004,ppppbVar15,param_5,
                   param_6,param_7,param_8);
    plVar26 = local_80;
    plVar23 = (long *)*local_80;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x2f0))(plVar23,0,0);
    }
    local_88 = &PTR_FUN_710523d9c8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103771d60(&local_88,*(long *)(lVar24 + 0x1b0),(long ****)0x5,ppppbVar15,param_5,param_6,
                   param_7,param_8);
    plVar26 = local_80;
    plVar23 = (long *)*local_80;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x2f0))(plVar23,0,0);
    }
    local_88 = &PTR_FUN_710523d9c8;
    local_80 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar26);
    }
    FUN_7103771a80((long *)(lVar24 + 0x1a8),0,1);
    *(undefined1 *)(lVar24 + 0x208) = 0;
    *(undefined4 *)(lVar24 + 0x1b8) = 0;
    *(ulong *)(lVar24 + 0x538) = uVar5;
    uVar6 = *(ulong *)(*DAT_710593b5f0 + 0x25998);
    if (uVar6 == 0) {
LAB_7101824d28:
      plVar26 = (long *)0x0;
    }
    else {
      uVar29 = uVar6 - 1;
      if ((uVar29 & uVar6) == 0) {
        uVar20 = uVar29 & uVar5;
      }
      else {
        uVar20 = uVar5;
        if (uVar6 <= uVar5) {
          uVar20 = 0;
          if (uVar6 != 0) {
            uVar20 = uVar5 / uVar6;
          }
          uVar20 = uVar5 - uVar20 * uVar6;
        }
      }
      plVar23 = *(long **)(*(long *)(*DAT_710593b5f0 + 0x25990) + uVar20 * 8);
      plVar26 = (long *)0x0;
      if ((plVar23 != (long *)0x0) && (plVar26 = (long *)*plVar23, plVar26 != (long *)0x0)) {
        if ((uVar29 & uVar6) == 0) {
          do {
            uVar6 = plVar26[1];
            if (uVar6 != uVar5 && (uVar6 & uVar29) != uVar20) goto LAB_7101824d28;
          } while (((uVar6 != uVar5) || (plVar26[2] != uVar5)) &&
                  (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0));
        }
        else {
          do {
            uVar29 = plVar26[1];
            if (uVar29 == uVar5) {
              if (plVar26[2] == uVar5) break;
            }
            else {
              if (uVar6 <= uVar29) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar29 / uVar6;
                }
                uVar29 = uVar29 - uVar2 * uVar6;
              }
              if (uVar29 != uVar20) goto LAB_7101824d28;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    pcVar10 = "friend_off";
    if (plVar26 != (long *)0x0) {
      pcVar10 = "friend_on";
    }
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar24 + 0x198) + 0x10),(long)pcVar10);
    if (*(uint *)(lVar24 + 0x174) < 0x13) {
      *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar24 + 0x174) * 4 + 0x128) = 1;
      *(undefined1 *)(lVar19 + 0x70) = 0;
      *(undefined1 *)(param_1 + 0x135) = 1;
      return;
    }
    goto LAB_7101824e94;
  }
  uVar5 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x110) + 0x80) + 0x2268) + 0x78))()
  ;
  cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x128) + 0x80) + 0x208);
  if ((uVar5 & 1) == 0) {
    if (cVar1 != '\0') {
      lVar28 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
      plVar26 = (long *)(lVar28 + 0x2268);
      (**(code **)(**(long **)(lVar28 + 0x2268) + 0x70))(*(long **)(lVar28 + 0x2268),1);
      iVar18 = -1;
      if (*(int *)(lVar28 + 0x11b0) - 1U < 5) {
        iVar18 = 1;
      }
      iVar8 = 2;
      if (*(int *)(lVar28 + 0x11b0) < 6) {
        iVar8 = iVar18;
      }
LAB_7101823c7c:
      FUN_7103771a80(plVar26,iVar8,0);
    }
  }
  else if (cVar1 == '\0') {
    lVar28 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    plVar26 = (long *)(lVar28 + 0x2268);
    (**(code **)(**(long **)(lVar28 + 0x2268) + 0x70))(*(long **)(lVar28 + 0x2268),0);
    if (*(char *)(lVar28 + 0x11b4) == '\0') {
      iVar8 = 3;
      goto LAB_7101823c7c;
    }
    if (*(int *)(*plVar26 + 0x254) == 3) {
      FUN_710376b960(*plVar26);
    }
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x110) + 0x80) + 0x2270) - 1U < 2) {
    lVar28 = *(long *)(*(long *)(param_1 + 0x128) + 0x80);
    (**(code **)(**(long **)(lVar28 + 0x1a8) + 0x70))(*(long **)(lVar28 + 0x1a8),0);
    (**(code **)(**(long **)(lVar28 + 0x1b0) + 0x70))(*(long **)(lVar28 + 0x1b0),0);
    *(undefined1 *)(lVar28 + 0x208) = 1;
    if (0x12 < *(uint *)(lVar28 + 0x174)) goto LAB_7101824e94;
    *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar28 + 0x174) * 4 + 0x128) = 4;
  }
  lVar28 = *(long *)(*(long *)(param_1 + 0x128) + 0x80);
  iVar18 = *(int *)(lVar28 + 0x178);
  if (iVar18 - 0xcU < 2) {
LAB_7101823d28:
    if (iVar18 - 0xcU < 2) {
LAB_7101823d48:
      lVar28 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
      if (*(char *)(lVar28 + 0x11ac) != '\0') {
        *(char *)(lVar28 + 0x11ac) = '\0';
        if (*(int *)(lVar28 + 0x11b0) < 6) {
          if (*(int *)(lVar28 + 0x11b0) - 1U < 5) {
            lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
            if (lVar16 != 0) {
              lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
              lVar31 = lVar19;
              lVar24 = lVar16;
              do {
                if (0 < *(int *)(lVar24 + 0x20)) {
                  lVar31 = lVar24;
                }
                lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 1) * 8);
              } while (lVar24 != 0);
              if (((lVar31 != lVar19) && (*(int *)(lVar31 + 0x20) < 2)) &&
                 (plVar26 = *(long **)(lVar31 + 0x28), plVar26 != (long *)0x0)) {
                (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
                (**(code **)(*plVar26 + 0x388))(plVar26,1,0);
                lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
                lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
              }
              lVar28 = lVar19;
              if (lVar16 != 0) {
                do {
                  if (0 < *(int *)(lVar16 + 0x20)) {
                    lVar28 = lVar16;
                  }
                  lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 1) * 8);
                } while (lVar16 != 0);
                if ((lVar28 != lVar19) && (*(int *)(lVar28 + 0x20) < 2)) goto LAB_7101824098;
              }
            }
          }
        }
        else {
          lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
          if (lVar16 != 0) {
            lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
            lVar31 = lVar19;
            lVar24 = lVar16;
            do {
              if (1 < *(int *)(lVar24 + 0x20)) {
                lVar31 = lVar24;
              }
              lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 2) * 8);
            } while (lVar24 != 0);
            if (((lVar31 != lVar19) && (*(int *)(lVar31 + 0x20) < 3)) &&
               (plVar26 = *(long **)(lVar31 + 0x28), plVar26 != (long *)0x0)) {
              (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
              (**(code **)(*plVar26 + 0x388))(plVar26,1,0);
              lVar19 = *(long *)(lVar28 + 0x2268) + 0x1b8;
              lVar16 = *(long *)(*(long *)(lVar28 + 0x2268) + 0x1b8);
            }
            lVar28 = lVar19;
            if (lVar16 != 0) {
              do {
                if (1 < *(int *)(lVar16 + 0x20)) {
                  lVar28 = lVar16;
                }
                lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 2) * 8);
              } while (lVar16 != 0);
              if ((lVar28 != lVar19) && (*(int *)(lVar28 + 0x20) < 3)) {
LAB_7101824098:
                plVar26 = *(long **)(lVar28 + 0x28);
                if (plVar26 != (long *)0x0) {
                  (**(code **)(*plVar26 + 0x208))(plVar26,0);
                  pcVar17 = *(code **)(*plVar26 + 0x388);
                  uVar9 = 1;
                  goto LAB_71018240c4;
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((iVar18 == 5) || (iVar18 == 1)) {
        *(undefined1 *)(lVar28 + 0x208) = 0;
        goto LAB_7101823d48;
      }
      if (*(int *)(lVar28 + 0x52c) < 0) goto LAB_7101823d48;
    }
  }
  else {
    if ((iVar18 == 5) || (iVar18 == 1)) {
      *(undefined1 *)(lVar28 + 0x208) = 0;
      lVar28 = *(long *)(*(long *)(param_1 + 0x128) + 0x80);
      iVar18 = *(int *)(lVar28 + 0x178);
      goto LAB_7101823d28;
    }
    if (*(int *)(lVar28 + 0x52c) < 0) goto LAB_7101823d28;
    lVar16 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    if (*(char *)(lVar16 + 0x11ac) != '\0') goto LAB_7101823d28;
    *(char *)(lVar16 + 0x11ac) = '\x01';
    if (*(int *)(lVar16 + 0x11b0) < 6) {
      if (*(int *)(lVar16 + 0x11b0) - 1U < 5) {
        lVar28 = *(long *)(*(long *)(lVar16 + 0x2268) + 0x1b8);
        if (lVar28 != 0) {
          lVar19 = *(long *)(lVar16 + 0x2268) + 0x1b8;
          lVar31 = lVar19;
          lVar24 = lVar28;
          do {
            if (0 < *(int *)(lVar24 + 0x20)) {
              lVar31 = lVar24;
            }
            lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 1) * 8);
          } while (lVar24 != 0);
          if (((lVar31 != lVar19) && (*(int *)(lVar31 + 0x20) < 2)) &&
             (plVar26 = *(long **)(lVar31 + 0x28), plVar26 != (long *)0x0)) {
            (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
            (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
            lVar19 = *(long *)(lVar16 + 0x2268) + 0x1b8;
            lVar28 = *(long *)(*(long *)(lVar16 + 0x2268) + 0x1b8);
          }
          lVar16 = lVar19;
          if (lVar28 != 0) {
            do {
              if (0 < *(int *)(lVar28 + 0x20)) {
                lVar16 = lVar28;
              }
              lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 1) * 8);
            } while (lVar28 != 0);
            if ((lVar16 != lVar19) && (*(int *)(lVar16 + 0x20) < 2)) goto LAB_7101824e64;
          }
        }
      }
      goto LAB_7101824b14;
    }
    lVar28 = *(long *)(*(long *)(lVar16 + 0x2268) + 0x1b8);
    if (lVar28 == 0) goto LAB_7101824b14;
    lVar19 = *(long *)(lVar16 + 0x2268) + 0x1b8;
    lVar31 = lVar19;
    lVar24 = lVar28;
    do {
      if (1 < *(int *)(lVar24 + 0x20)) {
        lVar31 = lVar24;
      }
      lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 2) * 8);
    } while (lVar24 != 0);
    if (((lVar31 != lVar19) && (*(int *)(lVar31 + 0x20) < 3)) &&
       (plVar26 = *(long **)(lVar31 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      lVar19 = *(long *)(lVar16 + 0x2268) + 0x1b8;
      lVar28 = *(long *)(*(long *)(lVar16 + 0x2268) + 0x1b8);
    }
    lVar16 = lVar19;
    if (lVar28 == 0) goto LAB_7101824b14;
    do {
      if (1 < *(int *)(lVar28 + 0x20)) {
        lVar16 = lVar28;
      }
      lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 2) * 8);
    } while (lVar28 != 0);
    if ((lVar16 == lVar19) || (2 < *(int *)(lVar16 + 0x20))) goto LAB_7101824b14;
LAB_7101824e64:
    plVar26 = *(long **)(lVar16 + 0x28);
    if (plVar26 == (long *)0x0) goto LAB_7101824b14;
    (**(code **)(*plVar26 + 0x208))(plVar26,1);
    pcVar17 = *(code **)(*plVar26 + 0x388);
    uVar9 = 0;
LAB_71018240c4:
    (*pcVar17)(plVar26,uVar9,0);
  }
LAB_7101824b14:
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x128) + 0x80) + 0x535) != '\0') {
    lVar28 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    if (*(char *)(lVar28 + 0xc9) == '\0') {
      iVar18 = 4;
    }
    else {
      iVar18 = 0;
    }
    FUN_7103771be0((long *)(lVar28 + 0x2260),iVar18,0);
    *(undefined4 *)(lVar28 + 0x2270) = *(undefined4 *)(*(long *)(lVar28 + 0x2260) + 0x25c);
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x110) + 0x80) + 0x2270) == 0) {
    lVar16 = *(long *)(param_1 + 0x128);
    lVar28 = *(long *)(lVar16 + 0x80);
    *(undefined4 *)(lVar28 + 0x1b8) = 2;
    FUN_7101aa3060(lVar28);
    *(undefined1 *)(lVar16 + 0x70) = 1;
  }
  lVar28 = *(long *)(param_1 + 0x128);
  iVar18 = *(int *)(*(long *)(lVar28 + 0x80) + 0x1b8);
  if (iVar18 == 1) {
    *(undefined1 *)(lVar28 + 0x70) = 1;
    lVar28 = *(long *)(*(long *)(param_1 + 0x120) + 0x80);
    uVar22 = *(uint *)(lVar28 + 0x1d4);
    if (0x12 < uVar22) {
LAB_7101824e94:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar28 + (long)(int)uVar22 * 4 + 0x188) = 6;
    FUN_7103778300(0x3f800000,
                   *(long *)(**(long **)(*(long *)(*(long *)(param_1 + 0x120) + 0x80) + 0x1f0) +
                            0x10),0x710425f767);
    if (0 < *(int *)(param_1 + 0xf4)) {
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
    }
  }
  else if (iVar18 == 2) {
    *(undefined1 *)(lVar28 + 0x70) = 1;
    FUN_7103778300(0x3f800000,
                   *(long *)(**(long **)(*(long *)(*(long *)(param_1 + 0x120) + 0x80) + 0x1f0) +
                            0x10),0x710425f767);
    if (0 < *(int *)(param_1 + 0xf4)) {
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
    }
    plVar26 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x10);
    if ((plVar26 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar26 + 0x48))(plVar26), (uVar5 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x007101824c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar26 + 0x30))(plVar26);
      return;
    }
  }
  return;
}

