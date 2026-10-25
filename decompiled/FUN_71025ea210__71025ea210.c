// addr:      71025ea210
// offset:    0x25ea210
// name:      FUN_71025ea210
// mangled:   
// signature: undefined __cdecl FUN_71025ea210(uint * param_1, uint * param_2, long * * * * * * * * * * param_3, byte * * * * param_4, undefined * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71025ea210(uint *param_1,uint *param_2,long **********param_3,byte ****param_4,
                   undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte ***pppbVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  char *pcVar12;
  long **********pppppppppplVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  code *pcVar16;
  long ****pppplVar17;
  byte ***pppbVar18;
  uint uVar19;
  byte ***pppbVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  int *piVar24;
  long *********ppppppppplVar25;
  uint *puVar26;
  uint *puVar27;
  long *********ppppppppplVar28;
  long *plVar29;
  uint *puVar30;
  uint *puVar31;
  long *********local_d0;
  long *********local_c8;
  long *********local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8;
  long *********local_a0;
  long *********ppppppppplStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_54;
  
  param_1[4] = (uint)param_3;
  *param_1 = *param_2;
  pppbVar18 = *param_4;
  if (pppbVar18 == (byte ***)0x0) {
    if (((char)param_1[0x22] == '\0') || (DAT_710532f488 == (undefined8 *)0x0)) {
      pcVar12 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_a0,param_2,(byte *)"model.numdlb");
      if ((uint)local_a0 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_a0,(long *********)pcVar12,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      if (((uint)local_a0 == 0xffffff) ||
         (lVar21 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar21 + 0x40) + 4) <= (uint)local_a0)) {
        local_a0 = (long *********)0x0;
      }
      else {
        local_a0 = (long *********)
                   (*(ulong *)(*(long *)(lVar21 + 0x60) + ((ulong)local_a0 & 0xffffffff) * 0x20) &
                   0xffffffffff);
      }
      lVar21 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      pcVar16 = FUN_7103542240;
      param_4 = (byte ****)&DAT_00000008;
      puVar11 = bsearch(&local_a0,*(void **)(lVar21 + 0x20),
                        (ulong)*(uint *)(*(long *)(lVar21 + 8) + 8),8,FUN_7103542240);
      uVar9 = 0xffffff;
      if (puVar11 != (undefined8 *)0x0) {
        uVar6 = (uint)((ulong)*puVar11 >> 0x20);
        uVar19 = uVar6 >> 8;
        if ((uVar19 != 0xffffff) &&
           (uVar4 = *(uint *)(*(long *)(lVar21 + 8) + 4), uVar9 = uVar6 >> 8,
           uVar4 < uVar19 || uVar4 == uVar9)) {
          uVar9 = 0xffffff;
        }
      }
      param_3 = (long **********)&DAT_00000009;
      local_d0 = (long *********)CONCAT44(local_d0._4_4_,uVar9);
      FUN_71035c2890(&local_a0,(uint *)&local_d0,(long *********)&DAT_00000009,param_4,
                     (long ****)pcVar16,param_6,param_7,param_8);
      ppppppppplVar28 = ppppppppplStack_98;
      ppppppppplVar25 = local_a0;
      local_a0 = (long *********)0x0;
      ppppppppplStack_98 = (long *********)0x0;
      *(long **********)(param_1 + 0xc) = ppppppppplVar25;
      plVar29 = *(long **)(param_1 + 0xe);
      *(long **********)(param_1 + 0xe) = ppppppppplVar28;
      param_5 = pcVar16;
      if (plVar29 != (long *)0x0) {
        plVar3 = plVar29 + 1;
        do {
          lVar21 = *plVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          std::__shared_weak_count::__release_weak();
          param_5 = pcVar16;
        }
      }
      if (ppppppppplStack_98 != (long *********)0x0) {
        plVar29 = (long *)(ppppppppplStack_98 + 1);
        do {
          lVar21 = *plVar29;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar8) {
            *plVar29 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          ppppppppplVar25 = ppppppppplStack_98;
        } while (cVar5 != '\0');
        goto LAB_71025ea498;
      }
    }
    else {
      piVar24 = (int *)*DAT_710532f488;
      if (((*piVar24 == 2) && (DAT_710532f484 != -1)) &&
         (lVar21 = nn::os::GetTlsValue(), lVar21 != 0)) {
        *piVar24 = 3;
        phx::Fiber::switch_to_fiber(*(long **)(piVar24 + 4));
      }
      pcVar12 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_a0,param_2,(byte *)"model.numdlb");
      if ((uint)local_a0 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_a0,(long *********)pcVar12,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      if (((uint)local_a0 == 0xffffff) ||
         (lVar21 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar21 + 0x40) + 4) <= (uint)local_a0)) {
        local_a0 = (long *********)0x0;
      }
      else {
        local_a0 = (long *********)
                   (*(ulong *)(*(long *)(lVar21 + 0x60) + ((ulong)local_a0 & 0xffffffff) * 0x20) &
                   0xffffffffff);
      }
      lVar21 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      pcVar16 = FUN_7103542240;
      param_4 = (byte ****)&DAT_00000008;
      puVar11 = bsearch(&local_a0,*(void **)(lVar21 + 0x20),
                        (ulong)*(uint *)(*(long *)(lVar21 + 8) + 8),8,FUN_7103542240);
      uVar9 = 0xffffff;
      if (puVar11 != (undefined8 *)0x0) {
        uVar6 = (uint)((ulong)*puVar11 >> 0x20);
        uVar19 = uVar6 >> 8;
        if ((uVar19 != 0xffffff) &&
           (uVar4 = *(uint *)(*(long *)(lVar21 + 8) + 4), uVar9 = uVar6 >> 8,
           uVar4 < uVar19 || uVar4 == uVar9)) {
          uVar9 = 0xffffff;
        }
      }
      param_3 = (long **********)&DAT_00000009;
      local_d0 = (long *********)CONCAT44(local_d0._4_4_,uVar9);
      FUN_71035c2890(&local_a0,(uint *)&local_d0,(long *********)&DAT_00000009,param_4,
                     (long ****)pcVar16,param_6,param_7,param_8);
      ppppppppplVar28 = ppppppppplStack_98;
      ppppppppplVar25 = local_a0;
      local_a0 = (long *********)0x0;
      ppppppppplStack_98 = (long *********)0x0;
      *(long **********)(param_1 + 0xc) = ppppppppplVar25;
      plVar29 = *(long **)(param_1 + 0xe);
      *(long **********)(param_1 + 0xe) = ppppppppplVar28;
      if (plVar29 != (long *)0x0) {
        plVar3 = plVar29 + 1;
        do {
          lVar21 = *plVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (ppppppppplStack_98 != (long *********)0x0) {
        plVar29 = (long *)(ppppppppplStack_98 + 1);
        do {
          lVar21 = *plVar29;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar8) {
            *plVar29 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)((long)*ppppppppplStack_98 + 0x10))(ppppppppplStack_98);
          std::__shared_weak_count::__release_weak();
        }
      }
      param_5 = pcVar16;
      if ((DAT_710532f484 != -1) && (lVar21 = nn::os::GetTlsValue(), param_5 = pcVar16, lVar21 != 0)
         ) {
        phx::Fiber::switch_to_fiber((long *)0x0);
        param_5 = pcVar16;
      }
    }
  }
  else {
    pppbVar20 = param_4[1];
    if (pppbVar20 != (byte ***)0x0) {
      pppbVar2 = pppbVar20 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppbVar2,0x10);
        if (bVar8) {
          *pppbVar2 = (byte **)((long)*pppbVar2 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppppppppplVar25 = *(long **********)(param_1 + 0xe);
    *(byte ****)(param_1 + 0xc) = pppbVar18;
    *(byte ****)(param_1 + 0xe) = pppbVar20;
    if (ppppppppplVar25 != (long *********)0x0) {
      plVar29 = (long *)(ppppppppplVar25 + 1);
      do {
        lVar21 = *plVar29;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar8) {
          *plVar29 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_71025ea498:
      if (lVar21 == 0) {
        (**(code **)((long)*ppppppppplVar25 + 0x10))(ppppppppplVar25);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  puVar1 = param_1 + 0xc;
  ppppppppplStack_98 = (long *********)0x0;
  local_a0 = (long *********)&DAT_3f800000;
  uStack_88 = 0;
  local_90 = 0x3f80000000000000;
  uStack_78 = 0x3f800000;
  local_80 = 0;
  uStack_68 = 0x3f80000000000000;
  local_70 = 0;
  (**(code **)(**(long **)puVar1 + 0x148))(*(long **)puVar1,&local_a0);
  bVar7 = (**(code **)(**(long **)(param_1 + 0xc) + 0xb0))();
  local_b8 = *(undefined8 *)(param_1 + 0xc);
  lVar21 = *(long *)(param_1 + 0xe);
  *(byte *)((long)param_1 + 0x82) = bVar7 & 1;
  if (lVar21 == 0) {
    local_b0 = 0;
  }
  else {
    plVar29 = (long *)(lVar21 + 0x10);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = *plVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = *plVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    std::__shared_weak_count::__release_weak();
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = *plVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      local_b0 = lVar21;
    } while (cVar5 != '\0');
  }
  local_a8 = 0;
  ppppppppplVar25 =
       (long *********)
       FUN_710392e290(0x10,0xb0,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7,
                      param_8);
  if (ppppppppplVar25 == (long *********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_a0 = (long *********)&DAT_000000b0;
      param_3 = &local_a0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar10 & 1) != 0) &&
         (ppppppppplVar25 =
               (long *********)
               FUN_710392e290(0x10,0xb0,(long ****)param_3,param_4,(long ****)param_5,param_6,
                              param_7,param_8), ppppppppplVar25 != (long *********)0x0))
      goto LAB_71025ea6dc;
    }
    ppppppppplVar25 = (long *********)0x0;
  }
LAB_71025ea6dc:
  *ppppppppplVar25 = (long ********)&PTR_FUN_7105232428;
  ppppppppplVar25[1] = (long ********)0x0;
  ppppppppplVar25[2] = (long ********)0x0;
  ppppppppplVar28 = ppppppppplVar25 + 3;
  *ppppppppplVar28 = (long ********)&PTR_FUN_7105232460;
  *(uint *)(ppppppppplVar25 + 0xb) = 0x3f800000;
  ppppppppplVar25[0xc] = (long ********)0xffffffffffffffff;
  ppppppppplVar25[0xd] = (long ********)&PTR_FUN_7105231d18;
  *(undefined1 *)(ppppppppplVar25 + 4) = 0;
  ppppppppplVar25[0x10] = (long ********)0x0;
  ppppppppplVar25[9] = (long ********)0x0;
  ppppppppplVar25[10] = (long ********)0x0;
  *(undefined1 *)(ppppppppplVar25 + 0x15) = 0;
  ppppppppplVar25[7] = (long ********)0x0;
  ppppppppplVar25[8] = (long ********)0x0;
  ppppppppplVar25[5] = (long ********)0x0;
  ppppppppplVar25[6] = (long ********)0x0;
  ppppppppplVar25[0xe] = (long ********)0x0;
  ppppppppplVar25[0xf] = (long ********)0x0;
  ppppppppplVar25[0x13] = (long ********)0x0;
  ppppppppplVar25[0x14] = (long ********)0x0;
  ppppppppplVar25[0x11] = (long ********)&PTR_FUN_710522ff60;
  ppppppppplVar25[0x12] = (long ********)0x0;
  local_d0 = ppppppppplVar28;
  local_c8 = ppppppppplVar25;
  uVar9 = FUN_71035b9d00((long)ppppppppplVar28,&local_b8,param_3,param_4,(long ****)param_5,param_6,
                         param_7,param_8);
  lVar22 = DAT_7105336e10;
  if ((uVar9 & 1) != 0) {
    ppppppppplVar14 = ppppppppplVar25 + 2;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppppppppplVar14,0x10);
      if (bVar8) {
        *ppppppppplVar14 = (long ********)((long)*ppppppppplVar14 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_a0 = ppppppppplVar28;
    ppppppppplStack_98 = ppppppppplVar25;
    FUN_71035c1da0(lVar22,&local_a0,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    if (ppppppppplVar25 != (long *********)0x0) {
      std::__shared_weak_count::__release_weak();
    }
  }
  local_d0 = (long *********)0x0;
  local_c8 = (long *********)0x0;
  *(long **********)(param_1 + 0x10) = ppppppppplVar28;
  plVar29 = *(long **)(param_1 + 0x12);
  *(long **********)(param_1 + 0x12) = ppppppppplVar25;
  if (plVar29 != (long *)0x0) {
    plVar3 = plVar29 + 1;
    do {
      lVar22 = *plVar3;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8 != (long *********)0x0) {
    plVar29 = (long *)(local_c8 + 1);
    do {
      lVar22 = *plVar29;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = lVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar22 == 0) {
      (**(code **)((long)*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (lVar21 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*param_2 == 0xffffff) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x78) +
                        (ulong)*param_2 * 0x34 + 8) & 0xffffffffff;
  }
  *(ulong *)(param_1 + 2) = uVar10;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7,
                           param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (long *********)((ulong)local_d0 & 0xffffffff00000000);
      local_a0 = (long *********)&SUB_00000020;
      param_3 = &local_a0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,(long ****)param_5,param_6,
                                   param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_71025ea8b8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71025ea8b8:
  plVar29 = *(long **)puVar1;
  lVar21 = *(long *)(param_1 + 0xe);
  *puVar11 = plVar29;
  puVar11[1] = lVar21;
  if (lVar21 != 0) {
    plVar29 = (long *)(lVar21 + 8);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = *plVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar29 = (long *)*puVar11;
  }
  *(undefined1 *)(puVar11 + 2) = 1;
  *(undefined8 *)((long)puVar11 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0x48761800;
  (**(code **)(*plVar29 + 0x438))(0);
  uVar10 = *(ulong *)(param_1 + 0x14);
  *(undefined8 **)(param_1 + 0x14) = puVar11;
  if (uVar10 != 0) {
    plVar29 = *(long **)(uVar10 + 8);
    if (plVar29 != (long *)0x0) {
      plVar3 = plVar29 + 1;
      do {
        lVar21 = *plVar3;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *plVar3 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_710392eb40(uVar10);
  }
  local_c8 = (long *********)0x0;
  local_c0 = (long *********)0x0;
  local_d0 = (long *********)0x0;
  FUN_710353db90(&local_a0,*param_2,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  ppppppppplVar14 = ppppppppplStack_98;
  ppppppppplVar28 = local_a0;
  for (ppppppppplVar25 = local_a0; local_a0 = ppppppppplVar28, ppppppppplVar25 != ppppppppplVar14;
      ppppppppplVar25 = (long *********)((long)ppppppppplVar25 + 4)) {
    bVar8 = FUN_710353d910(*(uint *)ppppppppplVar25,".shpcanim");
    if (bVar8) {
      if (local_c8 == local_c0) {
        FUN_7101609af0((long *)&local_d0,(uint *)ppppppppplVar25,(long *********)param_3,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      else {
        *(undefined4 *)local_c8 = 0xffffff;
        uVar9 = *(uint *)ppppppppplVar25;
        *(uint *)local_c8 = uVar9;
        if (uVar9 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,uVar9);
        }
        local_c8 = (long *********)((long)local_c8 + 4);
      }
    }
    ppppppppplVar28 = local_a0;
  }
  ppppppppplVar25 = ppppppppplStack_98;
  if (ppppppppplVar28 != (long *********)0x0) {
    while (ppppppppplVar14 = ppppppppplVar25, ppppppppplVar14 != ppppppppplVar28) {
      ppppppppplVar25 = (long *********)((long)ppppppppplVar14 + -4);
      if (*(uint *)ppppppppplVar25 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,*(uint *)ppppppppplVar25,(long *********)param_3,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        *(uint *)((long)ppppppppplVar14 + -4) = 0xffffff;
      }
    }
    ppppppppplStack_98 = ppppppppplVar28;
    if (local_a0 != (long *********)0x0) {
      FUN_710392eb40((ulong)local_a0);
    }
  }
  puVar26 = param_1 + 6;
  puVar27 = *(uint **)puVar26;
  if (puVar27 != (uint *)0x0) {
    puVar23 = param_1 + 8;
    puVar30 = *(uint **)puVar23;
    if (puVar30 == puVar27) {
      *(uint **)puVar23 = puVar27;
      puVar30 = puVar27;
    }
    else {
      do {
        puVar31 = puVar30 + -1;
        if (*puVar31 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,*puVar31,(long *********)param_3,param_4,(long ****)param_5,
                         param_6,param_7,param_8);
          puVar30[-1] = 0xffffff;
        }
        puVar30 = puVar31;
      } while (puVar27 != puVar31);
      puVar30 = *(uint **)puVar26;
      *(uint **)puVar23 = puVar27;
    }
    if (puVar30 != (uint *)0x0) {
      FUN_710392eb40((ulong)puVar30);
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    puVar26[0] = 0;
    puVar26[1] = 0;
  }
  ppppppppplVar28 = local_c8;
  ppppppppplVar25 = local_d0;
  *(long **********)(param_1 + 6) = local_d0;
  *(long **********)(param_1 + 8) = local_c8;
  *(long **********)(param_1 + 10) = local_c0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x60,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7,
                           param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (long *********)((ulong)local_d0 & 0xffffffff00000000);
      local_a0 = (long *********)&DAT_00000060;
      pppppppppplVar13 = &local_a0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x60,(long ****)pppppppppplVar13,param_4,(long ****)param_5,
                                   param_6,param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_71025eab18;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71025eab18:
  pppplVar17 = (long ****)(ulong)*(byte *)((long)param_1 + 0x82);
  ppppppppplVar14 = (long *********)0x0;
  if (ppppppppplVar25 != ppppppppplVar28) {
    ppppppppplVar14 = ppppppppplVar25;
  }
  ppppbVar15 = (byte ****)((long)ppppppppplVar28 - (long)ppppppppplVar25 >> 2);
  FUN_7102651db0(puVar11,(undefined8 *)puVar1,(long ****)ppppppppplVar14,ppppbVar15,pppplVar17,
                 param_6,param_7,param_8);
  uVar10 = *(ulong *)(param_1 + 0x16);
  *(undefined8 **)(param_1 + 0x16) = puVar11;
  if (uVar10 != 0) {
    FUN_7102652630(uVar10,extraout_x1,ppppppppplVar14,ppppbVar15,pppplVar17,param_6,param_7,param_8)
    ;
    FUN_710392eb40(uVar10);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

