// addr:      7101bf77f0
// offset:    0x1bf77f0
// name:      FUN_7101bf77f0
// mangled:   
// signature: undefined __cdecl FUN_7101bf77f0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bf77f0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  long *plVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long *********ppppppppplVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 local_160;
  long ********apppppppplStack_158 [8];
  uint local_118 [16];
  undefined1 local_d7;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70 [4];
  
  pppplVar13 = (long ****)&local_160;
  pppplVar14 = (long ****)&local_160;
  plVar8 = *(long **)(param_1 + 0x30);
  local_160._0_4_ = param_2;
  if (plVar8 == (long *)0x0) {
LAB_7101bf7d40:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pppplVar12 = param_3;
  puVar9 = (uint *)(**(code **)(*plVar8 + 0x30))(plVar8,&local_160);
  local_160._0_4_ = puVar9[1];
  plVar8 = *(long **)(param_1 + 0x60);
  if (plVar8 == (long *)0x0) goto LAB_7101bf7d40;
  piVar10 = (int *)(**(code **)(*plVar8 + 0x30))(plVar8,&local_160);
  local_70[0] = &PTR_FUN_710523da08;
  local_70[1] = (undefined **)
                FUN_710392e290(0x10,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (local_70[1] == (undefined **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_118[0] = 0;
      local_160._0_4_ = 0x10;
      local_160._4_4_ = 0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_118);
      pppplVar12 = pppplVar13;
      if (((uVar11 & 1) != 0) &&
         (local_70[1] = (undefined **)
                        FUN_710392e290(0x10,0x10,pppplVar13,param_4,param_5,param_6,param_7,param_8)
         , pppplVar12 = pppplVar13, local_70[1] != (undefined **)0x0)) goto LAB_7101bf78bc;
    }
    local_70[1] = (undefined **)0x0;
  }
LAB_7101bf78bc:
  *local_70[1] = (undefined *)0x0;
  local_70[1][1] = (undefined *)0x0;
  if (local_70 != (undefined ***)(piVar10 + 2)) {
    uVar3 = **(undefined8 **)(piVar10 + 4);
    lVar16 = (*(undefined8 **)(piVar10 + 4))[1];
    if (lVar16 == 0) {
      *local_70[1] = (undefined *)uVar3;
      local_70[1][1] = (undefined *)0x0;
    }
    else {
      plVar8 = (long *)(lVar16 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = (long *)local_70[1][1];
      *local_70[1] = (undefined *)uVar3;
      local_70[1][1] = (undefined *)lVar16;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  local_70[2] = &PTR_FUN_710523da08;
  local_70[3] = (undefined **)
                FUN_710392e290(0x10,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (local_70[3] == (undefined **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_118[0] = 0;
      local_160._0_4_ = 0x10;
      local_160._4_4_ = 0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_118);
      pppplVar12 = pppplVar14;
      if (((uVar11 & 1) != 0) &&
         (local_70[3] = (undefined **)
                        FUN_710392e290(0x10,0x10,pppplVar14,param_4,param_5,param_6,param_7,param_8)
         , pppplVar12 = pppplVar14, local_70[3] != (undefined **)0x0)) goto LAB_7101bf7994;
    }
    local_70[3] = (undefined **)0x0;
  }
LAB_7101bf7994:
  *local_70[3] = (undefined *)0x0;
  local_70[3][1] = (undefined *)0x0;
  if (local_70 + 2 != (undefined ***)(piVar10 + 6)) {
    uVar3 = **(undefined8 **)(piVar10 + 8);
    lVar16 = (*(undefined8 **)(piVar10 + 8))[1];
    if (lVar16 == 0) {
      *local_70[3] = (undefined *)uVar3;
      local_70[3][1] = (undefined *)0x0;
    }
    else {
      plVar8 = (long *)(lVar16 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar8 = (long *)local_70[3][1];
      *local_70[3] = (undefined *)uVar3;
      local_70[3][1] = (undefined *)lVar16;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103776910(&local_a0,(long)param_3,(long ****)"set_icon_02",pppplVar12,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_90,(long)param_3,(long ****)"set_icon_01",pppplVar12,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_80,(long)param_3,(long ****)"set_icon_00",pppplVar12,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_b0,(long)param_3,(long ****)"set_txt_num",pppplVar12,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_c0,(long)param_3,(long ****)"set_txt_topic_title",pppplVar12,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_d0,(long)param_3,(long ****)"set_txt_00",pppplVar12,param_4,param_5,param_6,
                 param_7,param_8);
  lVar16 = (long)*piVar10;
  lVar18 = *(long *)(DAT_710532f730 + 8);
  pcVar2 = "col_unique";
  if (*piVar10 < 1) {
    pcVar2 = "col_com";
  }
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)pcVar2);
  FUN_710377a4a0((long)&local_b0,"%d",(ulong)*puVar9,param_4,param_5,param_6,param_7,param_8);
  uVar4 = puVar9[1];
  uVar11 = 0xf8ffff0000000000;
  if ((-1 < (int)uVar4) &&
     (uVar17 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3,
     (int)uVar4 <= (int)uVar17 + -1)) {
    if (uVar17 <= (ulong)(long)(int)uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar11 = *(ulong *)(*(long *)(param_1 + 0x70) + (long)(int)uVar4 * 8);
  }
  local_d7 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  FUN_71032b5d50((uint *)&local_160,*(long *)(lVar18 + 0x3b8),uVar11);
  ppppppppplVar15 = apppppppplStack_158;
  FUN_71014c8900((long)local_118,"nam_technique_title_%s",ppppppppplVar15,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_118,ppppppppplVar15,param_4,param_5,param_6,param_7,
                 param_8);
  if ((uint)(lVar16 + -1) < 2) {
    FUN_7103778b80(local_98,(long)(local_70 + (lVar16 + -1) * 2),ppppppppplVar15,param_4,param_5,
                   param_6,param_7,param_8);
  }
  if ((uint)(lVar16 + -2) < 2) {
    FUN_7103778b80(local_88,(long)(local_70 + (lVar16 + -2) * 2),ppppppppplVar15,param_4,param_5,
                   param_6,param_7,param_8);
  }
  if ((uint)(lVar16 + -3) < 2) {
    FUN_7103778b80(local_78,(long)(local_70 + (lVar16 + -3) * 2),ppppppppplVar15,param_4,param_5,
                   param_6,param_7,param_8);
  }
  FUN_7103778300(0x3f800000,(long)param_3[1],*(long *)(&DAT_71050acaf0 + lVar16 * 8));
  uVar11 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_a8;
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_98;
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  ppuVar7 = local_70[3];
  local_70[2] = &PTR_FUN_710523da08;
  local_70[3] = (undefined **)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar7[1];
    *ppuVar7 = (undefined *)0x0;
    ppuVar7[1] = (undefined *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar16 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
      plVar8 = (long *)ppuVar7[1];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)ppuVar7);
  }
  ppuVar7 = local_70[1];
  local_70[0] = &PTR_FUN_710523da08;
  local_70[1] = (undefined **)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar7[1];
    *ppuVar7 = (undefined *)0x0;
    ppuVar7[1] = (undefined *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar16 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
      plVar8 = (long *)ppuVar7[1];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)ppuVar7);
  }
  return;
}

