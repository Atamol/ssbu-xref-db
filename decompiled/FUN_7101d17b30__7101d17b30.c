// addr:      7101d17b30
// offset:    0x1d17b30
// name:      FUN_7101d17b30
// mangled:   
// signature: undefined __cdecl FUN_7101d17b30(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d17b30(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte ***pppbVar5;
  long *********ppppppppplVar6;
  long lVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  uint uVar17;
  long *plVar18;
  byte *pbVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  char *pcVar27;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_156;
  long ********local_128;
  ulong local_120;
  ulong local_118;
  long ***local_110 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_88;
  undefined8 *local_80;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x10c) != 0) goto LAB_7101d188fc;
  uVar22 = 0x10;
  if (*(char *)(param_1 + 0x15d) != '\x01') {
    uVar22 = 0xe;
  }
  uVar17 = 0xf;
  if (*(char *)(param_1 + 0x15d) != '\x02') {
    uVar17 = uVar22;
  }
  if (*(byte *)(param_1 + 0x15c) == 0xff) {
    ppppppppplVar6 = (long *********)0x69ffff0000000000;
  }
  else {
    ppppppppplVar6 =
         (long *********)
         FUN_71032b30d0(*(long *)(DAT_710532f730 + 8) + 0x170,(uint)*(byte *)(param_1 + 0x15c));
  }
  plVar26 = *(long **)(param_1 + 0x118);
  local_d0 = (undefined **)FUN_7103238c50((ulong)ppppppppplVar6,uVar17);
  if (((ulong)local_d0 & 0xffffffffff) != 0) {
    lVar7 = *plVar26;
    param_4 = (byte ****)(ulong)*(uint *)(lVar7 + 0x68);
    FUN_710323c4e0(lVar7,&local_d0,(long *********)(long)*(int *)(lVar7 + 0x70),param_4,param_5,
                   param_6,param_7,param_8);
  }
  pppplVar13 = (long ****)(ulong)uVar17;
  pppuVar8 = (undefined ***)
             FUN_710323f4a0(*(long **)(param_1 + 0x118),(ulong)ppppppppplVar6,pppplVar13,param_4,
                            param_5,param_6,param_7,param_8);
  local_88 = &PTR_FUN_710523da08;
  local_80 = (undefined8 *)
             FUN_710392e290(0x10,0x10,pppplVar13,param_4,param_5,param_6,param_7,param_8);
  if (local_80 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_118 = local_118 & 0xffffffff00000000;
      local_d0 = (undefined **)&DAT_00000010;
      pppplVar13 = (long ****)&local_d0;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
      if (((uVar9 & 1) != 0) &&
         (local_80 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,pppplVar13,param_4,param_5,param_6,param_7,param_8),
         local_80 != (undefined8 *)0x0)) goto LAB_7101d17c54;
    }
    local_80 = (undefined8 *)0x0;
  }
LAB_7101d17c54:
  *local_80 = 0;
  local_80[1] = 0;
  if (&local_88 != pppuVar8) {
    puVar2 = *pppuVar8[1];
    puVar3 = pppuVar8[1][1];
    if (puVar3 == (undefined *)0x0) {
      *local_80 = puVar2;
      local_80[1] = 0;
    }
    else {
      plVar26 = (long *)(puVar3 + 8);
      do {
        cVar23 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar4) {
          *plVar26 = *plVar26 + 1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
      plVar26 = (long *)local_80[1];
      *local_80 = puVar2;
      local_80[1] = puVar3;
      if (plVar26 != (long *)0x0) {
        plVar25 = plVar26 + 1;
        do {
          lVar7 = *plVar25;
          cVar23 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = lVar7 + -1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_71032b1a60((uint *)&local_d0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178),
                 (ulong)ppppppppplVar6);
  FUN_71003a4ca0((uint *)&local_118,"nam_stg1_%s",&local_c8,ppppppppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_d0,*(long *)(param_1 + 0x128),(long ****)"set_stage",ppppppppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  pppbVar5 = local_c8;
  FUN_7103778b80((long)local_c8,(long)&local_88,ppppppppplVar6,param_4,param_5,param_6,param_7,
                 param_8);
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  lVar7 = *(long *)(DAT_710532f730 + 8);
  local_c8 = (byte ***)((ulong)local_c8 & 0xffffffffffffff00);
  local_d0 = (undefined **)0x0;
  if (*(int *)(param_1 + 0x158) == 3) {
    uVar17 = 0x811c9dc5;
    local_160 = 0x6c75725f65746174;
    local_158 = 0x5f65;
    local_156 = 0x616e696d617473;
    uVar21 = 0x6d;
    pbVar19 = (byte *)((long)&local_168 + 1);
    uVar22 = uVar17;
    do {
      uVar22 = uVar22 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar21 != 0);
    local_170 = (undefined **)CONCAT44(0x19,uVar22);
    uVar9 = 0;
    cVar23 = 'm';
    do {
      *(char *)((long)&local_c8 + uVar9) = cVar23;
      if (0x3e < (int)uVar9 + 1U) {
        uVar9 = (ulong)((int)uVar9 + 1);
        break;
      }
      cVar23 = *(char *)((long)&local_168 + uVar9 + 1);
      uVar9 = uVar9 + 1;
    } while (cVar23 != '\0');
    *(undefined1 *)((long)&local_c8 + (uVar9 & 0xffffffff)) = 0;
    uVar22 = (uint)(byte)local_c8;
    local_d0 = (undefined **)(uVar9 << 0x20);
    if ((byte)local_c8 != 0) {
      pbVar19 = (byte *)((long)&local_c8 + 1);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar22;
        uVar22 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar22 != 0);
    }
    uVar24 = 0xf83b14356;
    local_d0 = (undefined **)CONCAT44((int)uVar9,uVar17);
  }
  else if (*(int *)(param_1 + 0x158) == 2) {
    uVar17 = 0x811c9dc5;
    local_160 = 0x6c75725f65746174;
    local_158 = 0x5f65;
    local_156 = CONCAT26(local_156._6_2_,0x6b636f7473);
    uVar21 = 0x6d;
    pbVar19 = (byte *)((long)&local_168 + 1);
    uVar22 = uVar17;
    do {
      uVar22 = uVar22 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar21 != 0);
    local_170 = (undefined **)CONCAT44(0x17,uVar22);
    uVar9 = 0;
    cVar23 = 'm';
    do {
      *(char *)((long)&local_c8 + uVar9) = cVar23;
      if (0x3e < (int)uVar9 + 1U) {
        uVar9 = (ulong)((int)uVar9 + 1);
        break;
      }
      cVar23 = *(char *)((long)&local_168 + uVar9 + 1);
      uVar9 = uVar9 + 1;
    } while (cVar23 != '\0');
    *(undefined1 *)((long)&local_c8 + (uVar9 & 0xffffffff)) = 0;
    uVar22 = (uint)(byte)local_c8;
    local_d0 = (undefined **)(uVar9 << 0x20);
    if ((byte)local_c8 != 0) {
      pbVar19 = (byte *)((long)&local_c8 + 1);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar22;
        uVar22 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar22 != 0);
    }
    local_d0 = (undefined **)CONCAT44((int)uVar9,uVar17);
    uVar24 = 0x12bf2b2922;
  }
  else {
    local_156 = (ulong)local_156._5_3_ << 0x28;
    local_160 = 0x6c75725f65746174;
    uVar17 = 0x811c9dc5;
    local_158 = 0x5f65;
    local_156 = CONCAT44(local_156._4_4_,0x656d6974);
    uVar21 = 0x6d;
    pbVar19 = (byte *)((long)&local_168 + 1);
    uVar22 = uVar17;
    do {
      uVar22 = uVar22 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar21 != 0);
    local_170 = (undefined **)CONCAT44(0x16,uVar22);
    uVar9 = 0;
    cVar23 = 'm';
    do {
      *(char *)((long)&local_c8 + uVar9) = cVar23;
      if (0x3e < (int)uVar9 + 1U) {
        uVar9 = (ulong)((int)uVar9 + 1);
        break;
      }
      cVar23 = *(char *)((long)&local_168 + uVar9 + 1);
      uVar9 = uVar9 + 1;
    } while (cVar23 != '\0');
    *(undefined1 *)((long)&local_c8 + (uVar9 & 0xffffffff)) = 0;
    uVar22 = (uint)(byte)local_c8;
    local_d0 = (undefined **)(uVar9 << 0x20);
    if ((byte)local_c8 != 0) {
      pbVar19 = (byte *)((long)&local_c8 + 1);
      do {
        uVar17 = uVar17 * 0x89 ^ uVar22;
        uVar22 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar22 != 0);
    }
    local_d0 = (undefined **)CONCAT44((int)uVar9,uVar17);
    uVar24 = 0x11a65e8b53;
  }
  local_158 = 0x5f65;
  local_160 = 0x6c75725f65746174;
  local_168 = (undefined8 *)&DAT_636570735f756e6d;
  ppppbVar16 = (byte ****)&local_c8;
  plVar26 = *(long **)(param_1 + 0x118);
  uVar9 = FUN_71032821b0(*(long *)(lVar7 + 0x198),uVar24);
  local_170 = (undefined **)FUN_7103238e70(uVar9,0x13);
  if (((ulong)local_170 & 0xffffffffff) != 0) {
    lVar10 = *plVar26;
    ppppppppplVar6 = (long *********)(long)*(int *)(lVar10 + 0x70);
    param_4 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
    FUN_710323c4e0(lVar10,&local_170,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
  }
  plVar26 = *(long **)(param_1 + 0x118);
  uVar9 = FUN_71032821b0(*(long *)(lVar7 + 0x198),uVar24);
  plVar26 = FUN_710323f760(plVar26,uVar9,(long ****)ppppppppplVar6,param_4,param_5,param_6,param_7,
                           param_8);
  local_170 = &PTR_FUN_710523da08;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar6,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_128 = (long ********)&DAT_00000010;
      ppppppppplVar6 = &local_128;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar6,param_4,param_5,param_6,
                                   param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_7101d18108;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101d18108:
  *puVar11 = 0;
  puVar11[1] = 0;
  local_168 = puVar11;
  if (&local_170 != plVar26) {
    uVar14 = *(undefined8 *)plVar26[1];
    lVar7 = ((undefined8 *)plVar26[1])[1];
    if (lVar7 == 0) {
      *puVar11 = uVar14;
      puVar11[1] = 0;
    }
    else {
      plVar26 = (long *)(lVar7 + 8);
      do {
        cVar23 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar4) {
          *plVar26 = *plVar26 + 1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
      plVar26 = (long *)puVar11[1];
      *puVar11 = uVar14;
      puVar11[1] = lVar7;
      if (plVar26 != (long *)0x0) {
        plVar25 = plVar26 + 1;
        do {
          lVar7 = *plVar25;
          cVar23 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = lVar7 + -1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103776910(&local_128,*(long *)(param_1 + 0x128),(long ****)"set_icon",ppppppppplVar6,param_4,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_120;
  FUN_7103778b80(local_120,(long)&local_170,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
  local_128 = (long ********)&PTR_FUN_710523d9a8;
  local_120 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_7103776910(&local_128,*(long *)(param_1 + 0x128),(long ****)"set_txt_rule",ppppppppplVar6,
                 param_4,param_5,param_6,param_7,param_8);
  pppplVar13 = local_110;
  uVar14 = 2;
  FUN_710377a280((long)&local_128,(byte *)"mnu_spectate_rule",2);
  uVar9 = local_120;
  local_128 = (long ********)&PTR_FUN_710523d9a8;
  local_120 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  puVar11 = local_168;
  local_170 = &PTR_FUN_710523da08;
  local_168 = (undefined8 *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    plVar26 = (long *)puVar11[1];
    *puVar11 = 0;
    puVar11[1] = 0;
    if (plVar26 != (long *)0x0) {
      plVar25 = plVar26 + 1;
      do {
        lVar7 = *plVar25;
        cVar23 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar4) {
          *plVar25 = lVar7 + -1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        std::__shared_weak_count::__release_weak();
      }
      plVar26 = (long *)puVar11[1];
      if (plVar26 != (long *)0x0) {
        plVar25 = plVar26 + 1;
        do {
          lVar7 = *plVar25;
          cVar23 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = lVar7 + -1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar11);
  }
  puVar11 = local_80;
  local_88 = &PTR_FUN_710523da08;
  local_80 = (undefined8 *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    plVar26 = (long *)puVar11[1];
    *puVar11 = 0;
    puVar11[1] = 0;
    if (plVar26 != (long *)0x0) {
      plVar25 = plVar26 + 1;
      do {
        lVar7 = *plVar25;
        cVar23 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar4) {
          *plVar25 = lVar7 + -1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        std::__shared_weak_count::__release_weak();
      }
      plVar26 = (long *)puVar11[1];
      if (plVar26 != (long *)0x0) {
        plVar25 = plVar26 + 1;
        do {
          lVar7 = *plVar25;
          cVar23 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = lVar7 + -1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar11);
  }
  FUN_7101d20930(*(long *)(param_1 + 0x140),1,uVar14,ppppbVar16,pppplVar13,param_6,param_7,param_8);
  lVar7 = *(long *)(param_1 + 0x140);
  plVar26 = (long *)(lVar7 + 0x460);
  uVar9 = 1;
  pcVar27 = (char *)(lVar7 + 0xe8);
  cVar23 = *pcVar27;
  pcVar1 = pcVar27;
  do {
    if (cVar23 != '\0') {
      plVar25 = *(long **)(lVar7 + 0xb8);
      pbVar19 = (byte *)(pcVar1 + 0x28);
      local_d0 = (undefined **)FUN_710323ac20(pbVar19,0x2b);
      if (((ulong)local_d0 & 0xffffffffff) != 0) {
        lVar10 = *plVar25;
        ppppbVar16 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
        FUN_710323c4e0(lVar10,&local_d0,(long *********)(long)*(int *)(lVar10 + 0x70),ppppbVar16,
                       pppplVar13,param_6,param_7,param_8);
      }
      pppplVar15 = (long ****)0x2b;
      plVar25 = FUN_7103240bd0(*(long **)(lVar7 + 0xb8),pbVar19,(long ****)0x2b,ppppbVar16,
                               pppplVar13,param_6,param_7,param_8);
      local_170 = &PTR_FUN_710523da08;
      puVar11 = (undefined8 *)
                FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar16,pppplVar13,param_6,param_7,param_8);
      if (puVar11 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_118 = local_118 & 0xffffffff00000000;
          local_d0 = (undefined **)&DAT_00000010;
          pppplVar15 = (long ****)&local_d0;
          uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
          if (((uVar24 & 1) != 0) &&
             (puVar11 = (undefined8 *)
                        FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar16,pppplVar13,param_6,param_7,
                                       param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101d1849c;
        }
        puVar11 = (undefined8 *)0x0;
      }
LAB_7101d1849c:
      *puVar11 = 0;
      puVar11[1] = 0;
      local_168 = puVar11;
      if (&local_170 == plVar25) {
LAB_7101d1850c:
        plVar25 = (long *)*plVar26;
      }
      else {
        uVar14 = *(undefined8 *)plVar25[1];
        lVar10 = ((undefined8 *)plVar25[1])[1];
        if (lVar10 != 0) {
          plVar25 = (long *)(lVar10 + 8);
          do {
            cVar23 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar4) {
              *plVar25 = *plVar25 + 1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          plVar25 = (long *)puVar11[1];
          *puVar11 = uVar14;
          puVar11[1] = lVar10;
          if (plVar25 != (long *)0x0) {
            plVar20 = plVar25 + 1;
            do {
              lVar10 = *plVar20;
              cVar23 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *plVar20 = lVar10 + -1;
                cVar23 = ExclusiveMonitorsStatus();
              }
            } while (cVar23 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              std::__shared_weak_count::__release_weak();
            }
          }
          goto LAB_7101d1850c;
        }
        *puVar11 = uVar14;
        puVar11[1] = 0;
        plVar25 = (long *)*plVar26;
      }
      plVar20 = plVar26;
      if (plVar25 != (long *)0x0) {
        do {
          while( true ) {
            plVar18 = plVar25;
            if (*(int *)((long)plVar18 + 0x1c) <= (int)(uint)(byte)pcVar1[4]) break;
            plVar25 = (long *)*plVar18;
            plVar20 = plVar18;
            if ((long *)*plVar18 == (long *)0x0) goto LAB_7101d18568;
          }
          if ((int)(uint)(byte)pcVar1[4] <= *(int *)((long)plVar18 + 0x1c)) break;
          plVar20 = plVar18 + 1;
          plVar25 = (long *)*plVar20;
        } while ((long *)*plVar20 != (long *)0x0);
      }
LAB_7101d18568:
      uVar22 = *(uint *)(*plVar20 + 0x20);
      ppppppppplVar6 = (long *********)(ulong)uVar22;
      FUN_7103776910(&local_d0,*(long *)(lVar7 + 0xc0),(long ****)"set_flag_%02d",ppppppppplVar6,
                     ppppbVar16,pppplVar13,param_6,param_7,param_8);
      pppbVar5 = local_c8;
      FUN_7103778b80((long)local_c8,(long)&local_170,ppppppppplVar6,ppppbVar16,pppplVar13,param_6,
                     param_7,param_8);
      local_d0 = &PTR_FUN_710523d9a8;
      local_c8 = (byte ***)0x0;
      if (pppbVar5 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar5);
      }
      FUN_7103776640(&local_88,*(long *)(lVar7 + 0xc0),(byte ****)"set_medal_%02d",
                     (ulong)(uVar22 + 1),ppppbVar16,pppplVar13,param_6,param_7,param_8);
      local_c8 = (byte ***)((ulong)local_c8 & 0xffffffffffffff00);
      local_d0 = (undefined **)0x0;
      local_110[0]._0_1_ = '\0';
      local_118 = 0;
      FUN_710062dc20((uint *)&local_118,"cmn_%dp");
      if (*(char *)(lVar7 + 0x4a1) == '\0') {
        pcVar12 = "player_color_%dp";
        uVar24 = uVar9;
      }
      else {
        pcVar12 = "team_color_%d";
        uVar24 = (ulong)((byte)pcVar1[3] + 1);
      }
      FUN_710062dc20((uint *)&local_d0,pcVar12);
      FUN_7103776910(&local_128,(long)&local_88,(long ****)"set_txt_number",uVar24,ppppbVar16,
                     pppplVar13,param_6,param_7,param_8);
      FUN_710377a120((long)&local_128,(char *)local_110,uVar24,ppppbVar16,pppplVar13,param_6,param_7
                     ,param_8);
      uVar24 = local_120;
      local_128 = (long ********)&PTR_FUN_710523d9a8;
      local_120 = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      puVar11 = local_80;
      FUN_7103778300(0x3f800000,(long)local_80,(long)&local_c8);
      if (*pcVar27 == '\0') {
LAB_7101d186a4:
        if (*(char *)(lVar7 + 0x140) != '\0') {
          if (pcVar1[4] == *(char *)(lVar7 + 0x144)) goto LAB_7101d187d8;
          strcmp((char *)(lVar7 + 0x168),(char *)pbVar19);
        }
        if (*(char *)(lVar7 + 0x198) != '\0') {
          if (pcVar1[4] == *(char *)(lVar7 + 0x19c)) goto LAB_7101d187d8;
          strcmp((char *)(lVar7 + 0x1c0),(char *)pbVar19);
        }
        if (*(char *)(lVar7 + 0x1f0) != '\0') {
          if (pcVar1[4] == *(char *)(lVar7 + 500)) goto LAB_7101d187d8;
          strcmp((char *)(lVar7 + 0x218),(char *)pbVar19);
        }
        if (*(char *)(lVar7 + 0x248) != '\0') {
          if (pcVar1[4] == *(char *)(lVar7 + 0x24c)) goto LAB_7101d187d8;
          strcmp((char *)(lVar7 + 0x270),(char *)pbVar19);
        }
        if (*(char *)(lVar7 + 0x2a0) != '\0') {
          if (pcVar1[4] == *(char *)(lVar7 + 0x2a4)) goto LAB_7101d187d8;
          strcmp((char *)(lVar7 + 0x2c8),(char *)pbVar19);
        }
        if (*(char *)(lVar7 + 0x2f8) != '\0') {
          if (pcVar1[4] == *(char *)(lVar7 + 0x2fc)) goto LAB_7101d187d8;
          strcmp((char *)(lVar7 + 800),(char *)pbVar19);
        }
        if ((*(char *)(lVar7 + 0x350) != '\0') && (pcVar1[4] != *(char *)(lVar7 + 0x354))) {
          strcmp((char *)(lVar7 + 0x378),(char *)pbVar19);
        }
      }
      else if (pcVar1[4] != *(char *)(lVar7 + 0xec)) {
        strcmp((char *)(lVar7 + 0x110),(char *)pbVar19);
        goto LAB_7101d186a4;
      }
LAB_7101d187d8:
      local_88 = &PTR_FUN_710523d988;
      local_80 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        uVar24 = *(ulong *)((long)puVar11 + 0x18);
        *(undefined ***)((long)puVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar11 + 0x18) = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        FUN_710392eb40((ulong)puVar11);
      }
      puVar11 = local_168;
      uVar9 = (ulong)((int)uVar9 + 1);
      local_170 = &PTR_FUN_710523da08;
      local_168 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        plVar25 = (long *)puVar11[1];
        *puVar11 = 0;
        puVar11[1] = 0;
        if (plVar25 != (long *)0x0) {
          plVar20 = plVar25 + 1;
          do {
            lVar10 = *plVar20;
            cVar23 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar4) {
              *plVar20 = lVar10 + -1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            std::__shared_weak_count::__release_weak();
            plVar25 = (long *)puVar11[1];
          }
          else {
            plVar25 = (long *)puVar11[1];
          }
          if (plVar25 != (long *)0x0) {
            plVar20 = plVar25 + 1;
            do {
              lVar10 = *plVar20;
              cVar23 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar4) {
                *plVar20 = lVar10 + -1;
                cVar23 = ExclusiveMonitorsStatus();
              }
            } while (cVar23 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)puVar11);
      }
    }
    pcVar1 = pcVar1 + 0x58;
    if (pcVar1 == (char *)(lVar7 + 0x3a8)) break;
    cVar23 = *pcVar1;
  } while( true );
  local_c8 = (byte ***)((ulong)local_c8 & 0xffffffffffffff00);
  local_d0 = (undefined **)0x0;
  FUN_710062dc20((uint *)&local_d0,"flag_%d");
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar7 + 0xc0) + 8),(long)&local_c8);
LAB_7101d188fc:
  if (0x12 < *(uint *)(param_1 + 0x104)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4;
  *(int *)(lVar7 + 0xb8) = *(int *)(lVar7 + 0xb8) + 1;
  return;
}

