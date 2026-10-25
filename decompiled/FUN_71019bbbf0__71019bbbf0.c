// addr:      71019bbbf0
// offset:    0x19bbbf0
// name:      FUN_71019bbbf0
// mangled:   
// signature: undefined __cdecl FUN_71019bbbf0(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019bbbf0(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined ***pppuVar11;
  ulong uVar12;
  byte *pbVar13;
  long *********ppppppppplVar14;
  ulong *puVar15;
  byte ****ppppbVar16;
  undefined1 *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  uint local_118 [2];
  char acStack_110 [64];
  undefined **local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
  undefined8 *local_b8;
  long ********local_b0;
  ulong local_a8 [9];
  
  piVar9 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),param_2);
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x7104280323);
  puVar17 = *(undefined1 **)(piVar9 + 2);
  lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar7 = FUN_71032632a0(lVar19,(ulong)puVar17);
  puVar10 = puVar17;
  if ((uVar7 & 1) != 0) {
    puVar10 = FUN_71032631a0(lVar19,0x11b1ccb807);
  }
  uVar8 = FUN_71032633f0(lVar19,(ulong)puVar17);
  uVar7 = (uint)*(byte *)((long)piVar9 + 0x12);
  if (uVar8 <= *(byte *)((long)piVar9 + 0x12)) {
    uVar7 = 0;
  }
  ppppppppplVar14 = (long *********)(ulong)uVar7;
  ppppbVar16 = (byte ****)0x1;
  pppuVar11 = (undefined ***)
              FUN_710323f330((long *)(param_1 + 0x230),(ulong)puVar10,(ulong)ppppppppplVar14,1,
                             param_5,param_6,param_7,param_8);
  local_c0 = &PTR_FUN_710523da08;
  local_b8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar14,ppppbVar16,param_5,param_6,param_7,
                            param_8);
  if (local_b8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_118[0] = 0;
      local_b0 = (long ********)&DAT_00000010;
      ppppppppplVar14 = &local_b0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_118);
      if (((uVar12 & 1) != 0) &&
         (local_b8 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar14,ppppbVar16,param_5,param_6,
                                    param_7,param_8), local_b8 != (undefined8 *)0x0))
      goto LAB_71019bbd18;
    }
    local_b8 = (undefined8 *)0x0;
  }
LAB_71019bbd18:
  *local_b8 = 0;
  local_b8[1] = 0;
  if (&local_c0 != pppuVar11) {
    puVar2 = *pppuVar11[1];
    puVar3 = pppuVar11[1][1];
    if (puVar3 == (undefined *)0x0) {
      *local_b8 = puVar2;
      local_b8[1] = 0;
    }
    else {
      plVar18 = (long *)(puVar3 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar18 = (long *)local_b8[1];
      *local_b8 = puVar2;
      local_b8[1] = puVar3;
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar19 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103776910(&local_b0,param_3,(long ****)"set_rep_chara",ppppppppplVar14,ppppbVar16,param_5,
                 param_6,param_7,param_8);
  uVar12 = local_a8[0];
  FUN_7103778b80(local_a8[0],(long)&local_c0,ppppppppplVar14,ppppbVar16,param_5,param_6,param_7,
                 param_8);
  local_b0 = (long ********)&PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_7103776910(&local_b0,param_3,(long ****)"set_rep_chara_shadow",ppppppppplVar14,ppppbVar16,
                 param_5,param_6,param_7,param_8);
  uVar12 = local_a8[0];
  FUN_7103778b80(local_a8[0],(long)&local_c0,ppppppppplVar14,ppppbVar16,param_5,param_6,param_7,
                 param_8);
  local_b0 = (long ********)&PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  lVar20 = *(long *)(DAT_710532f730 + 8);
  puVar10 = *(undefined1 **)(piVar9 + 2);
  lVar19 = *(long *)(lVar20 + 0x168);
  uVar7 = FUN_71032632a0(lVar19,(ulong)puVar10);
  if ((uVar7 & 1) != 0) {
    puVar10 = FUN_71032631a0(lVar19,0x11b1ccb807);
  }
  uVar12 = FUN_7103263f80(lVar19,(ulong)puVar10);
  ppppppppplVar14 = (long *********)&DAT_00000011;
  pppuVar11 = (undefined ***)
              FUN_710323f600((long *)(param_1 + 0x230),uVar12,(long ****)&DAT_00000011,ppppbVar16,
                             param_5,param_6,param_7,param_8);
  local_d0 = &PTR_FUN_710523da08;
  local_c8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar14,ppppbVar16,param_5,param_6,param_7,
                            param_8);
  if (local_c8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_118[0] = 0;
      local_b0 = (long ********)&DAT_00000010;
      ppppppppplVar14 = &local_b0;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_118);
      if (((uVar12 & 1) != 0) &&
         (local_c8 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar14,ppppbVar16,param_5,param_6,
                                    param_7,param_8), local_c8 != (undefined8 *)0x0))
      goto LAB_71019bbeb0;
    }
    local_c8 = (undefined8 *)0x0;
  }
LAB_71019bbeb0:
  *local_c8 = 0;
  local_c8[1] = 0;
  if (&local_d0 != pppuVar11) {
    puVar2 = *pppuVar11[1];
    puVar3 = pppuVar11[1][1];
    if (puVar3 == (undefined *)0x0) {
      *local_c8 = puVar2;
      local_c8[1] = 0;
    }
    else {
      plVar18 = (long *)(puVar3 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar18 = (long *)local_c8[1];
      *local_c8 = puVar2;
      local_c8[1] = puVar3;
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar19 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103776910(&local_b0,param_3,(long ****)"set_rep_series",ppppppppplVar14,ppppbVar16,param_5,
                 param_6,param_7,param_8);
  uVar12 = local_a8[0];
  FUN_7103778b80(local_a8[0],(long)&local_d0,ppppppppplVar14,ppppbVar16,param_5,param_6,param_7,
                 param_8);
  local_b0 = (long ********)&PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  puVar17 = *(undefined1 **)(piVar9 + 2);
  lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar7 = FUN_71032632a0(lVar19,(ulong)puVar17);
  puVar10 = puVar17;
  if ((uVar7 & 1) != 0) {
    puVar10 = FUN_71032631a0(lVar19,0x11b1ccb807);
  }
  uVar8 = FUN_71032633f0(lVar19,(ulong)puVar17);
  uVar7 = (uint)*(byte *)((long)piVar9 + 0x12);
  if (uVar8 <= *(byte *)((long)piVar9 + 0x12)) {
    uVar7 = 0;
  }
  uVar7 = FUN_7103263540(*(long *)(lVar20 + 0x168),(ulong)puVar10,(ulong)uVar7,ppppbVar16,param_5,
                         param_6,param_7,param_8);
  FUN_7103262310((uint *)&local_b0,*(long *)(lVar20 + 0x168),(ulong)puVar10);
  puVar15 = local_a8;
  FUN_71003a4ca0(local_118,"nam_chr1_%02d_%s",(ulong)uVar7,puVar15,ppppbVar16,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_b0,param_3,(long ****)"set_txt_amiiboname",puVar15,ppppbVar16,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_b0,acStack_110,puVar15,ppppbVar16,param_5,param_6,param_7,param_8);
  uVar12 = local_a8[0];
  local_b0 = (long ********)&PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_7103776910(&local_b0,param_3,(long ****)"set_txt_name",puVar15,ppppbVar16,param_5,param_6,
                 param_7,param_8);
  uVar12 = local_a8[0];
  plVar18 = *(long **)(local_a8[0] + 0x10);
  if (plVar18 != (long *)0x0) {
    pbVar13 = (byte *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),param_2);
    FUN_71037a28a0(plVar18,pbVar13);
  }
  local_b0 = (long ********)&PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),*(ushort *)((long)piVar9 + 0xa2));
  FUN_7103776910(&local_b0,param_3,(long ****)"set_txt_level_num",puVar15,ppppbVar16,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a280((long)&local_b0,(byte *)"mnu_amiibo_writing_lv_n",1);
  uVar12 = local_a8[0];
  local_b0 = (long ********)&PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  puVar6 = local_c8;
  local_d0 = &PTR_FUN_710523da08;
  local_c8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar18 = (long *)puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 1;
      do {
        lVar19 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        std::__shared_weak_count::__release_weak();
      }
      plVar18 = (long *)puVar6[1];
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar19 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar6);
  }
  puVar6 = local_b8;
  local_c0 = &PTR_FUN_710523da08;
  local_b8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar18 = (long *)puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 1;
      do {
        lVar19 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        std::__shared_weak_count::__release_weak();
      }
      plVar18 = (long *)puVar6[1];
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar19 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar6);
  }
  return;
}

