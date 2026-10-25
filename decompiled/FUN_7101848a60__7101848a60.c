// addr:      7101848a60
// offset:    0x1848a60
// name:      FUN_7101848a60
// mangled:   
// signature: undefined __cdecl FUN_7101848a60(long param_1, long param_2, long * * * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101848a60(long param_1,long param_2,long ************param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined2 *puVar16;
  undefined2 *extraout_x1;
  undefined2 *extraout_x1_00;
  undefined2 *extraout_x1_01;
  undefined2 *extraout_x1_02;
  undefined2 *extraout_x1_03;
  undefined2 *extraout_x1_04;
  undefined2 *extraout_x1_05;
  undefined2 *extraout_x1_06;
  undefined2 *puVar17;
  undefined2 *extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 uVar18;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined2 *extraout_x1_15;
  undefined2 *extraout_x1_16;
  undefined2 *extraout_x1_17;
  undefined2 *puVar19;
  undefined2 *extraout_x1_18;
  undefined2 *extraout_x1_19;
  undefined2 uVar20;
  undefined4 uVar21;
  char *pcVar22;
  long lVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined1 auVar31 [16];
  long ***********local_98;
  undefined8 *local_90;
  long local_88;
  long ***********local_80;
  long ************local_78;
  long ***********local_68;
  undefined4 local_54;
  
  plVar11 = (long *)FUN_710392e290(0x10,600,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long ***********)((ulong)local_98 & 0xffffffff00000000);
      local_80 = (long ***********)0x258;
      param_3 = &local_80;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar12 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,600,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8), plVar11 != (long *)0x0))
      goto LAB_7101848ae4;
    }
    plVar11 = (long *)0x0;
  }
LAB_7101848ae4:
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long ***********)((ulong)local_98 & 0xffffffff00000000);
      local_80 = (long ***********)&DAT_00000080;
      param_3 = &local_80;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar12 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar13 != (undefined8 *)0x0)) goto LAB_7101848b38;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101848b38:
  *puVar13 = &PTR_FUN_7105181b40;
  puVar13[2] = 0;
  puVar13[1] = puVar13 + 2;
  puVar13[5] = 0;
  puVar13[3] = 0;
  puVar13[4] = puVar13 + 5;
  puVar13[8] = 0;
  puVar13[6] = 0;
  puVar13[7] = puVar13 + 8;
  puVar13[0xb] = 0;
  puVar13[9] = 0;
  puVar13[10] = puVar13 + 0xb;
  puVar13[0xc] = 0;
  *(undefined4 *)(puVar13 + 0xd) = 2;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(plVar11 + 0x1b) = 0xffffffff;
  *(undefined1 *)((long)plVar11 + 0xdc) = 0;
  plVar11[6] = 0;
  *(undefined4 *)(plVar11 + 0x1c) = 0;
  *(undefined4 *)(plVar11 + 0x1d) = 0;
  plVar11[0x1e] = (long)&DAT_c1ffff0000000000;
  *(undefined4 *)(plVar11 + 0x1f) = 0;
  plVar11[0x20] = (long)&PTR_FUN_710523da48;
  *plVar11 = (long)puVar13;
  plVar11[1] = (long)plVar11;
  plVar11[4] = 0;
  plVar11[5] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0xffffffff;
  plVar11[0x17] = 0;
  plVar11[0x18] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0xf] = 0;
  plVar11[0x10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  puVar17 = extraout_x1;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long ***********)((ulong)local_98 & 0xffffffff00000000);
      local_80 = (long ***********)&DAT_00000010;
      param_3 = &local_80;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      puVar17 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar17 = extraout_x1_00, puVar13 != (undefined8 *)0x0)
         ) goto LAB_7101848c44;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101848c44:
  *puVar13 = 0;
  puVar13[1] = 0;
  plVar11[0x21] = (long)puVar13;
  piVar1 = (int *)((long)plVar11 + 0x114);
  *(undefined4 *)(plVar11 + 0x22) = 0xffffffff;
  *(undefined8 *)((long)plVar11 + 0x124) = 0;
  *(undefined8 *)((long)plVar11 + 300) = 0;
  *(undefined8 *)((long)plVar11 + 0x134) = 0;
  *(undefined8 *)((long)plVar11 + 0x11c) = 0;
  *(undefined8 *)((long)plVar11 + 0x15c) = 0;
  *(undefined8 *)((long)plVar11 + 0x154) = 0;
  *(undefined8 *)((long)plVar11 + 0x14c) = 0;
  *(undefined8 *)((long)plVar11 + 0x13c) = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)((long)plVar11 + 0x144) = 0;
  *(undefined4 *)((long)plVar11 + 0x114) = 0xffffffff;
  *(undefined2 *)(plVar11 + 0x23) = 0xffff;
  *(undefined1 *)((long)plVar11 + 0x124) = 0;
  *(undefined4 *)(plVar11 + 0x25) = 0xffffffff;
  *(undefined2 *)((long)plVar11 + 300) = 0xffff;
  *(undefined1 *)(plVar11 + 0x27) = 0;
  plVar11[0x26] = 0;
  *(undefined4 *)((long)plVar11 + 0x13c) = 0xffffffff;
  *(undefined2 *)(plVar11 + 0x28) = 0xffff;
  *(undefined8 *)((long)plVar11 + 0x144) = 0;
  *(undefined4 *)(plVar11 + 0x2a) = 0xffffffff;
  piVar2 = (int *)((long)plVar11 + 0x164);
  *(undefined1 *)((long)plVar11 + 0x14c) = 0;
  *(undefined2 *)((long)plVar11 + 0x154) = 0xffff;
  *(undefined1 *)(plVar11 + 0x2c) = 0;
  plVar11[0x2b] = 0;
  *(undefined1 *)(plVar11 + 0x37) = 0;
  plVar11[0x36] = 0;
  *(undefined2 *)(plVar11 + 0x3f) = 0;
  *(undefined2 *)((long)plVar11 + 0x1fc) = 0;
  *(undefined4 *)(plVar11 + 0x42) = 0;
  plVar11[0x41] = 0;
  plVar11[0x40] = 0;
  *(undefined8 *)((long)plVar11 + 0x169) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined2 *)((long)plVar11 + 0x216) = 0xffff;
  *(undefined1 *)((long)plVar11 + 0x214) = 2;
  *(undefined1 *)((long)plVar11 + 0x215) = 0;
  *(undefined4 *)(plVar11 + 0x43) = 0;
  *(undefined1 *)(plVar11 + 0x47) = 0;
  plVar11[0x46] = 0;
  plVar11[0x45] = 0;
  plVar11[0x44] = 0;
  *(undefined8 *)((long)plVar11 + 0x249) = 0;
  *(undefined8 *)((long)plVar11 + 0x244) = 0;
  *(undefined8 *)((long)plVar11 + 0x23c) = 0;
  puVar13 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar13 != (undefined8 *)0x0) {
    if (((DAT_7105324888 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324888), iVar10 != 0))
    {
      if (((DAT_7105324748 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_7105324748), iVar10 != 0)) {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_7105324750), iVar10 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_7105324890 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324888);
    }
    auVar31 = (**(code **)*puVar13)(puVar13);
    puVar17 = auVar31._8_8_;
    puVar14 = auVar31._0_8_;
    if (puVar14 != (undefined8 *)0x0) {
      while ((undefined8 **)puVar14 != &DAT_7105324890) {
        puVar14 = (undefined8 *)*puVar14;
        if (puVar14 == (undefined8 *)0x0) goto LAB_710184928c;
      }
      switch(*(undefined4 *)(puVar13 + 1)) {
      case 1:
        uVar21 = 1;
        break;
      case 2:
        uVar21 = 2;
        break;
      case 3:
        *(undefined4 *)(plVar11 + 0x1d) = 3;
        lVar15 = DAT_7105329de8;
        if (DAT_7105329de8 != 0) {
          *(undefined1 *)((long)plVar11 + 0x1fc) =
               *(undefined1 *)(*(long *)(*(long *)(DAT_7105329de8 + 8) + 0xb8) + 0x25c);
          *(undefined1 *)((long)plVar11 + 0x1fd) =
               *(undefined1 *)(*(long *)(*(long *)(lVar15 + 8) + 0xb8) + 0x25d);
          lVar27 = *(long *)(lVar15 + 8);
          cVar5 = *(char *)(*(long *)(lVar27 + 0xb8) + 4);
          lVar23 = lVar27 + 0x1c8;
          lVar27 = *(long *)(lVar27 + 0x1c8);
          do {
            if ((int)cVar5 <= *(int *)(lVar27 + 0x1c)) {
              lVar23 = lVar27;
            }
            lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x1c) < (int)cVar5) * 8);
          } while (lVar27 != 0);
          lVar27 = 0;
          if (*(int *)(lVar23 + 0x1c) <= (int)cVar5) {
            lVar27 = lVar23 + 0x20;
          }
          *(undefined4 *)(plVar11 + 0x40) = *(undefined4 *)(lVar27 + 0x40);
          lVar23 = *(long *)(*(long *)(lVar15 + 8) + 0xb8);
          *(int *)((long)plVar11 + 0x204) = *(int *)(lVar23 + 0x244) + *(int *)(lVar23 + 0x240);
          *(undefined4 *)(plVar11 + 0x41) =
               *(undefined4 *)(*(long *)(*(long *)(lVar15 + 8) + 0xb8) + 0x254);
          *(undefined4 *)((long)plVar11 + 0x20c) =
               *(undefined4 *)(*(long *)(*(long *)(lVar15 + 8) + 0xb8) + 0x230);
          *(undefined4 *)(plVar11 + 0x42) =
               *(undefined4 *)(*(long *)(*(long *)(lVar15 + 8) + 0xb8) + 0x234);
        }
        goto LAB_7101848e9c;
      case 4:
        uVar21 = 4;
        break;
      case 5:
        uVar21 = 5;
        break;
      default:
        *(undefined4 *)(plVar11 + 0x1d) = 0;
        goto LAB_7101848e9c;
      }
      *(undefined4 *)(plVar11 + 0x1d) = uVar21;
LAB_7101848e9c:
      FUN_7101783dc0((long *)&local_80,puVar13 + 7,(long **********)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      param_3 = local_78;
      FUN_7101783330(&local_98,(long *****)local_80,(long *****)local_78,param_4,param_5,param_6,
                     param_7,param_8);
      uVar12 = plVar11[0x44];
      if (uVar12 != 0) {
        plVar11[0x45] = uVar12;
        FUN_710392eb40(uVar12);
        plVar11[0x45] = 0;
        plVar11[0x46] = 0;
        plVar11[0x44] = 0;
      }
      plVar11[0x44] = (long)local_98;
      plVar11[0x45] = (long)local_90;
      plVar11[0x46] = local_88;
      *(undefined1 *)(plVar11 + 0x3f) = 1;
      plVar11[0x1e] = puVar13[2];
      *(undefined4 *)(plVar11 + 0x1f) = *(undefined4 *)(puVar13 + 3);
      local_98 = (long ***********)&PTR_FUN_710523da48;
      local_90 = (undefined8 *)
                 FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                               );
      puVar17 = extraout_x1_01;
      if (local_90 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_68 = (long ***********)&DAT_00000010;
          param_3 = &local_68;
          auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          puVar17 = auVar31._8_8_;
          if (((auVar31._0_8_ & 1) != 0) &&
             (local_90 = (undefined8 *)
                         FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7
                                        ,param_8), puVar17 = extraout_x1_02,
             local_90 != (undefined8 *)0x0)) goto LAB_7101848f58;
        }
        local_90 = (undefined8 *)0x0;
      }
LAB_7101848f58:
      *local_90 = 0;
      local_90[1] = 0;
      puVar14 = local_90;
      if (&local_98 != (long ************)(puVar13 + 4)) {
        uVar18 = *(undefined8 *)puVar13[5];
        lVar15 = ((undefined8 *)puVar13[5])[1];
        if (lVar15 == 0) {
          *local_90 = uVar18;
          local_90[1] = 0;
        }
        else {
          plVar29 = (long *)(lVar15 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar6) {
              *plVar29 = *plVar29 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar29 = (long *)local_90[1];
          *local_90 = uVar18;
          local_90[1] = lVar15;
          if (plVar29 != (long *)0x0) {
            plVar28 = plVar29 + 1;
            do {
              lVar15 = *plVar28;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *plVar28 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              std::__shared_weak_count::__release_weak();
              puVar14 = local_90;
              puVar17 = extraout_x1_03;
            }
          }
        }
      }
      local_90 = puVar14;
      if (&local_98 != (long ************)(plVar11 + 0x20)) {
        local_90 = (undefined8 *)0x0;
        puVar30 = (undefined8 *)plVar11[0x21];
        plVar11[0x21] = (long)puVar14;
        if (puVar30 != (undefined8 *)0x0) {
          plVar29 = (long *)puVar30[1];
          *puVar30 = 0;
          puVar30[1] = 0;
          if (plVar29 != (long *)0x0) {
            plVar28 = plVar29 + 1;
            do {
              lVar15 = *plVar28;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *plVar28 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              std::__shared_weak_count::__release_weak();
            }
            plVar29 = (long *)puVar30[1];
            if (plVar29 != (long *)0x0) {
              plVar28 = plVar29 + 1;
              do {
                lVar15 = *plVar28;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar6) {
                  *plVar28 = lVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          FUN_710392eb40((ulong)puVar30);
          puVar17 = extraout_x1_04;
        }
      }
      puVar14 = local_90;
      local_98 = (long ***********)&PTR_FUN_710523da48;
      local_90 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        plVar29 = (long *)puVar14[1];
        *puVar14 = 0;
        puVar14[1] = 0;
        if (plVar29 != (long *)0x0) {
          plVar28 = plVar29 + 1;
          do {
            lVar15 = *plVar28;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar6) {
              *plVar28 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
            std::__shared_weak_count::__release_weak();
          }
          plVar29 = (long *)puVar14[1];
          if (plVar29 != (long *)0x0) {
            plVar28 = plVar29 + 1;
            do {
              lVar15 = *plVar28;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *plVar28 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)puVar14);
        puVar17 = extraout_x1_05;
      }
      *(undefined1 *)((long)plVar11 + 0x1f9) = *(undefined1 *)(puVar13 + 10);
      if ((int)plVar11[0x1d] == 5) {
        param_3 = (long ************)0x1;
        param_4 = (byte ****)0x1;
LAB_71018491bc:
        FUN_7101b0ebf0(piVar1,piVar2,(undefined **)param_3,(ulong)param_4,param_5,param_6,param_7,
                       param_8);
        puVar17 = extraout_x1_06;
LAB_71018491c0:
        bVar6 = false;
      }
      else {
        if ((int)plVar11[0x1d] != 2) {
          param_3 = (long ************)0x0;
          param_4 = (byte ****)0x0;
          goto LAB_71018491bc;
        }
        lVar15 = *(long *)(*DAT_7105329f98 + 0x40);
        if (*(char *)(lVar15 + 0x388) == '\0') {
LAB_7101849440:
          bVar6 = false;
          uVar12 = 0;
        }
        else {
          plVar29 = (long *)(lVar15 + 0x78);
          if ((*plVar29 == 0) || (plVar28 = plVar29, 1 < *(byte *)(*plVar29 + 0x80) - 3)) {
            plVar28 = (long *)(lVar15 + 0x80);
            if ((*plVar28 == 0) || (1 < *(byte *)(*plVar28 + 0x80) - 3)) {
              plVar28 = (long *)(lVar15 + 0x88);
              if ((*plVar28 == 0) || (1 < *(byte *)(*plVar28 + 0x80) - 3)) goto LAB_7101849440;
            }
          }
          uVar12 = (ulong)(uint)(((int)plVar28 - (int)plVar29) * 0x20) & 0xffe0;
          bVar6 = true;
        }
        if ((uVar12 & 0xff) == 0 && !bVar6) goto LAB_71018491c0;
        lVar15 = *DAT_7105329f98 + 0x38;
        plVar29 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,
                                         param_7,param_8);
        puVar17 = extraout_x1_15;
        if (plVar29 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_68 = (long ***********)((ulong)local_68 & 0xffffffff00000000);
            local_98 = (long ***********)&SUB_00000018;
            param_3 = &local_98;
            auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
            puVar17 = auVar31._8_8_;
            if (((auVar31._0_8_ & 1) != 0) &&
               (plVar29 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8), puVar17 = extraout_x1_16,
               plVar29 != (long *)0x0)) goto LAB_71018494ac;
          }
          plVar29 = (long *)0x0;
        }
LAB_71018494ac:
        uVar8 = uVar12 >> 8;
        uVar7 = (undefined1)(uVar12 >> 8);
        *(undefined1 *)(plVar29 + 2) = uVar7;
        *plVar29 = lVar15;
        plVar29[1] = lVar15;
        uVar12 = plVar11[0x49];
        plVar11[0x49] = (long)plVar29;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
          plVar29 = (long *)plVar11[0x49];
          puVar17 = extraout_x1_17;
        }
        *piVar2 = 0;
        if (((*(char *)(*(long *)(plVar29[1] + 8) + 0x388) != '\0') &&
            ((ulong)*(byte *)(plVar29 + 2) < 3)) &&
           (lVar15 = *(long *)(*(long *)(plVar29[1] + 8) + (ulong)*(byte *)(plVar29 + 2) * 8 + 0x78)
           , lVar15 != 0)) {
          lVar23 = 0;
          puVar25 = (undefined4 *)(lVar15 + 0x34);
          do {
            uVar4 = *(ushort *)(puVar25 + -5);
            if ((ulong)uVar4 != 0xffff) {
              uVar21 = puVar25[-1];
              *(undefined4 *)((long)plVar11 + lVar23 + 0x120) = *puVar25;
              *(undefined4 *)((long)plVar11 + lVar23 + 0x11c) = uVar21;
              puVar19 = *(undefined2 **)(*DAT_7105329f98 + 0x30);
              param_3 = (long ************)(ulong)(uVar4 >> 4);
              puVar17 = puVar19;
              if (uVar4 >> 4 < 0x177) {
                puVar16 = puVar19 + (ulong)uVar4 * 0x28 + 36000;
              }
              else {
                param_3 = (long ************)(ulong)(uVar4 - 6000);
                puVar16 = &DAT_710532a878;
                if (((uVar4 - 6000 & 0xffff) < 100) &&
                   (puVar17 = puVar19 + ((ulong)param_3 & 0xffff) * 0x28 + 0x44660,
                   puVar19[((ulong)param_3 & 0xffff) * 0x28 + 0x44664] != -1)) {
                  puVar16 = puVar17;
                }
              }
              *(undefined2 *)((long)plVar11 + lVar23 + 0x118) = puVar16[4];
              *(undefined1 *)((long)plVar11 + lVar23 + 0x124) = 1;
              *(int *)((long)plVar11 + 0x164) = *(int *)((long)plVar11 + 0x164) + 1;
            }
            puVar25 = puVar25 + 6;
            lVar23 = lVar23 + 0x14;
          } while (lVar23 != 0x50);
        }
        *(undefined1 *)((long)plVar11 + 0x214) = 2;
        *(undefined1 *)((long)plVar11 + 0x215) = uVar7;
        lVar15 = *(long *)(*DAT_7105329fa0 + 0x858);
        uVar12 = (*(long *)(*DAT_7105329fa0 + 0x860) - lVar15 >> 4) * -0x5555555555555555;
        if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
LAB_710184966c:
          uVar20 = 0xffff;
        }
        else {
          lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          uVar9 = FUN_71032a7800(lVar23,*(ulong *)(lVar15 + uVar8 * 0x30));
          puVar17 = extraout_x1_18;
          if ((uint)((int)((ulong)(*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20)) >> 6) *
                    -0x33333333) <= uVar9) goto LAB_710184966c;
          uVar20 = *(undefined2 *)(*(long *)(lVar23 + 0x20) + (ulong)uVar9 * 0x140);
        }
        plVar29 = (long *)plVar11[0x49];
        *(undefined2 *)((long)plVar11 + 0x216) = uVar20;
        uVar12 = (ulong)*(byte *)(plVar29 + 2);
        bVar6 = false;
        if ((uVar12 < 3) && (*(char *)(*(long *)(plVar29[1] + 8) + 0x388) != '\0')) {
          lVar15 = *(long *)(*(long *)(plVar29[1] + 8) + uVar12 * 8 + 0x78);
          if (lVar15 == 0) {
            bVar6 = false;
          }
          else {
            cVar5 = *(char *)(lVar15 + 0x80);
            bVar6 = cVar5 == '\x02' || cVar5 == '\x04';
          }
        }
        if (*(char *)(*(long *)(*plVar29 + 8) + 0x388) != '\0') {
          if (2 < *(byte *)(plVar29 + 2)) goto LAB_7101849764;
          lVar15 = *(long *)(*plVar29 + 8) + uVar12 * 8;
          plVar29 = *(long **)(lVar15 + 0x2a0);
          if (plVar29 != (long *)0x0) {
            *(undefined1 *)(*plVar29 + 0x80) = 5;
            *(undefined8 *)(*plVar29 + 0x238) = *(undefined8 *)(*plVar29 + 0x230);
            puVar3 = (ulong *)(lVar15 + 0x2a0);
            *(undefined8 *)(*plVar29 + 0x250) = *(undefined8 *)(*plVar29 + 0x248);
            uVar12 = *puVar3;
            *puVar3 = 0;
            if (uVar12 != 0) {
              FUN_710392eb40(uVar12);
              puVar17 = extraout_x1_19;
            }
          }
        }
      }
      pcVar22 = "mnu_reward_title_finalresult";
      if ((int)plVar11[0x1d] != 3) {
        if ((int)plVar11[0x1d] == 4) {
          pcVar22 = "mnu_reward_title_gift";
        }
        else if (!bVar6) {
          pcVar22 = "mnu_reward_title_result";
        }
      }
      uVar12 = 0;
      while( true ) {
        cVar5 = pcVar22[uVar12];
        if (cVar5 == '\0') break;
        *(char *)((long)plVar11 + uVar12 + 0x170) = cVar5;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar5 = (pcVar22 + uVar12)[1];
        if (cVar5 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)plVar11 + uVar12 + 0x171) = cVar5;
        uVar12 = uVar12 + 2;
      }
      *(undefined1 *)((long)plVar11 + (uVar12 & 0xffffffff) + 0x170) = 0;
      uVar26 = (uint)*(byte *)(plVar11 + 0x2e);
      uVar9 = 0x811c9dc5;
      *(int *)((long)plVar11 + 0x16c) = (int)uVar12;
      if (*(byte *)(plVar11 + 0x2e) != 0) {
        pbVar24 = (byte *)((long)plVar11 + 0x171);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar26;
          uVar26 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar26 != 0);
      }
      *(uint *)(plVar11 + 0x2d) = uVar9;
      if (local_80 != (long ***********)0x0) {
        local_78 = (long ************)local_80;
        FUN_710392eb40((ulong)local_80);
        puVar17 = extraout_x1_07;
      }
    }
  }
LAB_710184928c:
  plVar11[6] = (long)FUN_71018483d0;
  plVar11[7] = 0;
  plVar11[8] = (long)FUN_7101848450;
  plVar11[9] = 0;
  plVar11[10] = (long)FUN_7101848520;
  plVar11[0xb] = 0;
  plVar11[0xc] = (long)FUN_71018485e0;
  plVar11[0xd] = 0;
  plVar11[0xe] = (long)FUN_7101848720;
  plVar11[0xf] = 0;
  if (*(uint *)((long)plVar11 + 0xcc) < 0x13) {
    *(undefined4 *)((long)plVar11 + (long)(int)*(uint *)((long)plVar11 + 0xcc) * 4 + 0x80) = 0;
    plVar29 = *(long **)(param_1 + 0x58);
    *(long **)(param_1 + 0x58) = plVar11;
    if (plVar29 != (long *)0x0) {
      plVar11 = plVar29 + 0x48;
      FUN_7103386c90(plVar11,puVar17,(long *********)param_3,param_4,param_5,param_6,param_7,param_8
                    );
      uVar12 = plVar29[0x49];
      plVar29[0x49] = 0;
      uVar18 = extraout_x1_08;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
        uVar18 = extraout_x1_09;
      }
      lVar15 = *plVar11;
      *plVar11 = 0;
      if (lVar15 != 0) {
        FUN_71032cad20(lVar15);
        uVar18 = extraout_x1_10;
      }
      uVar12 = plVar29[0x44];
      if (uVar12 != 0) {
        plVar29[0x45] = uVar12;
        FUN_710392eb40(uVar12);
        uVar18 = extraout_x1_11;
      }
      puVar13 = (undefined8 *)plVar29[0x21];
      plVar29[0x20] = (long)&PTR_FUN_710523da48;
      plVar29[0x21] = 0;
      if (puVar13 != (undefined8 *)0x0) {
        plVar11 = (long *)puVar13[1];
        *puVar13 = 0;
        puVar13[1] = 0;
        if (plVar11 != (long *)0x0) {
          plVar28 = plVar11 + 1;
          do {
            lVar15 = *plVar28;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar6) {
              *plVar28 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            std::__shared_weak_count::__release_weak();
          }
          plVar11 = (long *)puVar13[1];
          if (plVar11 != (long *)0x0) {
            plVar28 = plVar11 + 1;
            do {
              lVar15 = *plVar28;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *plVar28 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)puVar13);
        uVar18 = extraout_x1_12;
      }
      FUN_710323b9e0(*plVar29,uVar18,(long *********)param_3,param_4,param_5,param_6,param_7,param_8
                    );
      plVar11 = (long *)*plVar29;
      *plVar29 = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      FUN_710392eb40((ulong)plVar29);
      plVar11 = *(long **)(param_1 + 0x58);
    }
    FUN_71033861b0(plVar11,(int *)(plVar11 + 0x1d));
    lVar15 = *plVar11;
    uVar12 = FUN_710323cb80(lVar15,extraout_x1_13,(long *********)param_3,param_4,param_5,param_6,
                            param_7,param_8);
    while ((uVar12 & 1) == 0) {
      nn::os::SleepThread(1000000);
      uVar12 = FUN_710323cb80(lVar15,extraout_x1_14,(long *********)param_3,param_4,param_5,param_6,
                              param_7,param_8);
    }
    FUN_7103386910(plVar11 + 0x48,plVar11,(long ****)(plVar11 + 0x1d),param_4,param_5,param_6,
                   param_7,param_8);
    return;
  }
LAB_7101849764:
                    /* WARNING: Subroutine does not return */
  abort();
}

