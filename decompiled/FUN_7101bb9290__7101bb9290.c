// addr:      7101bb9290
// offset:    0x1bb9290
// name:      FUN_7101bb9290
// mangled:   
// signature: undefined __cdecl FUN_7101bb9290(long * * * * param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bb9290(long ****param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long ****pppplVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long ****pppplVar10;
  code *pcVar11;
  long ***ppplVar12;
  long **pplVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long ***ppplVar17;
  long ***ppplVar18;
  long ****pppplVar19;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined1 local_196;
  undefined4 local_195;
  undefined2 local_191;
  undefined1 local_18f;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined **local_90;
  long ****local_88;
  undefined ***local_70;
  long ********local_60;
  undefined4 local_54;
  
  local_1b0 = (byte ***)0x0;
  uStack_1a8 = 0x4248000041800000;
  local_1a0 = 0x101013f800000;
  local_198 = 0;
  local_196 = 1;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_18f = 0;
  local_191 = 0;
  local_195 = 0;
  FUN_710337e790((long)&local_1b0);
  local_195._0_3_ = CONCAT21(0x101,(undefined1)local_195);
  local_1a0._0_7_ = CONCAT16(1,(undefined6)local_1a0);
  local_198 = CONCAT11(local_198._1_1_,1);
  local_90 = (undefined **)&DAT_71050abcc8;
  local_70 = &local_90;
  FUN_71003cb050((long *)&local_90,alStack_150);
  if (&local_90 == local_70) {
    pcVar11 = (code *)(*local_70)[4];
LAB_7101bb9360:
    (*pcVar11)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar11 = (code *)(*local_70)[5];
    goto LAB_7101bb9360;
  }
  lVar15 = *(long *)(DAT_710532f730 + 8);
  if (param_2 == 1) {
    pppplVar19 = param_1 + 0x14e;
    local_1b0 = (byte ***)
                CONCAT44((int)((ulong)((long)param_1[0x14f] - (long)param_1[0x14e]) >> 3),
                         (undefined4)local_1b0);
    FUN_710377aee0(0x3f800000,(long)(param_1 + 0x1f));
    if (*param_1[0x74] == (long **)0x0) goto LAB_7101bb98c8;
    pppplVar7 = (long ****)FUN_710327fb30(*(long *)(*(long *)(lVar15 + 0x268) + 8),0x10bd3564e2);
    param_3 = (long *********)&DAT_00000015;
    pppuVar8 = (undefined ***)
               FUN_710323f8d0((long *)param_1[1],pppplVar7,(long ****)&DAT_00000015,param_4,param_5,
                              param_6,param_7,param_8);
    local_90 = &PTR_FUN_710523da08;
    local_88 = (long ****)
               FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_88 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_60 = (long ********)&DAT_00000010;
        param_3 = &local_60;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar9 & 1) != 0) &&
           (local_88 = (long ****)
                       FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), local_88 != (long ****)0x0)) goto LAB_7101bb96a4;
      }
      local_88 = (long ****)0x0;
    }
LAB_7101bb96a4:
    *local_88 = (long ***)0x0;
    local_88[1] = (long ***)0x0;
    if (&local_90 != pppuVar8) {
      puVar2 = *pppuVar8[1];
      puVar3 = pppuVar8[1][1];
      if (puVar3 == (undefined *)0x0) {
        *local_88 = (long ***)puVar2;
        local_88[1] = (long ***)0x0;
      }
      else {
        plVar16 = (long *)(puVar3 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = *plVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar16 = (long *)local_88[1];
        *local_88 = (long ***)puVar2;
        local_88[1] = (long ***)puVar3;
        if (plVar16 != (long *)0x0) {
          plVar1 = plVar16 + 1;
          do {
            lVar15 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    FUN_7103778b80((long)param_1[0x74],(long)&local_90,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pppplVar7 = local_88;
    local_90 = &PTR_FUN_710523da08;
    local_88 = (long ****)0x0;
    if (pppplVar7 != (long ****)0x0) {
      plVar16 = (long *)pppplVar7[1];
      *pppplVar7 = (long ***)0x0;
      pppplVar7[1] = (long ***)0x0;
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          lVar15 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          std::__shared_weak_count::__release_weak();
        }
        plVar16 = (long *)pppplVar7[1];
        if (plVar16 != (long *)0x0) {
          plVar1 = plVar16 + 1;
          do {
            lVar15 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_7101bb98a4:
          if (lVar15 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
LAB_7101bb98c0:
      FUN_710392eb40((ulong)pppplVar7);
    }
  }
  else if (param_2 == 2) {
    pppplVar19 = param_1 + 0x151;
    local_1b0 = (byte ***)
                CONCAT44((int)((ulong)((long)param_1[0x152] - (long)param_1[0x151]) >> 3),
                         (undefined4)local_1b0);
    FUN_710377aee0(0x3f800000,(long)(param_1 + 0x21));
    if (*param_1[0x74] != (long **)0x0) {
      pppplVar7 = (long ****)FUN_710327fb30(*(long *)(*(long *)(lVar15 + 0x268) + 8),0xe346ef289);
      param_3 = (long *********)&DAT_00000015;
      pppuVar8 = (undefined ***)
                 FUN_710323f8d0((long *)param_1[1],pppplVar7,(long ****)&DAT_00000015,param_4,
                                param_5,param_6,param_7,param_8);
      local_90 = &PTR_FUN_710523da08;
      local_88 = (long ****)
                 FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                               );
      if (local_88 == (long ****)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_60 = (long ********)&DAT_00000010;
          param_3 = &local_60;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar9 & 1) != 0) &&
             (local_88 = (long ****)
                         FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7
                                        ,param_8), local_88 != (long ****)0x0)) goto LAB_7101bb9574;
        }
        local_88 = (long ****)0x0;
      }
LAB_7101bb9574:
      *local_88 = (long ***)0x0;
      local_88[1] = (long ***)0x0;
      if (&local_90 != pppuVar8) {
        puVar2 = *pppuVar8[1];
        puVar3 = pppuVar8[1][1];
        if (puVar3 == (undefined *)0x0) {
          *local_88 = (long ***)puVar2;
          local_88[1] = (long ***)0x0;
        }
        else {
          plVar16 = (long *)(puVar3 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = *plVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar16 = (long *)local_88[1];
          *local_88 = (long ***)puVar2;
          local_88[1] = (long ***)puVar3;
          if (plVar16 != (long *)0x0) {
            plVar1 = plVar16 + 1;
            do {
              lVar15 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      FUN_7103778b80((long)param_1[0x74],(long)&local_90,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      pppplVar7 = local_88;
      local_90 = &PTR_FUN_710523da08;
      local_88 = (long ****)0x0;
      if (pppplVar7 != (long ****)0x0) {
        plVar16 = (long *)pppplVar7[1];
        *pppplVar7 = (long ***)0x0;
        pppplVar7[1] = (long ***)0x0;
        if (plVar16 != (long *)0x0) {
          plVar1 = plVar16 + 1;
          do {
            lVar15 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
          plVar16 = (long *)pppplVar7[1];
          if (plVar16 != (long *)0x0) {
            plVar1 = plVar16 + 1;
            do {
              lVar15 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_7101bb98a4;
          }
        }
        goto LAB_7101bb98c0;
      }
    }
  }
  else if (param_2 == 3) {
    pppplVar19 = param_1 + 0x154;
    local_1b0 = (byte ***)
                CONCAT44((int)((ulong)((long)param_1[0x155] - (long)param_1[0x154]) >> 3),
                         (undefined4)local_1b0);
    FUN_710377aee0(0x3f800000,(long)(param_1 + 0x23));
    if (*param_1[0x74] != (long **)0x0) {
      pppplVar7 = (long ****)FUN_710327fb30(*(long *)(*(long *)(lVar15 + 0x268) + 8),0x124c25c799);
      param_3 = (long *********)&DAT_00000015;
      pppuVar8 = (undefined ***)
                 FUN_710323f8d0((long *)param_1[1],pppplVar7,(long ****)&DAT_00000015,param_4,
                                param_5,param_6,param_7,param_8);
      local_90 = &PTR_FUN_710523da08;
      local_88 = (long ****)
                 FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                               );
      if (local_88 == (long ****)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_60 = (long ********)&DAT_00000010;
          param_3 = &local_60;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar9 & 1) != 0) &&
             (local_88 = (long ****)
                         FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7
                                        ,param_8), local_88 != (long ****)0x0)) goto LAB_7101bb9444;
        }
        local_88 = (long ****)0x0;
      }
LAB_7101bb9444:
      *local_88 = (long ***)0x0;
      local_88[1] = (long ***)0x0;
      if (&local_90 != pppuVar8) {
        puVar2 = *pppuVar8[1];
        puVar3 = pppuVar8[1][1];
        if (puVar3 == (undefined *)0x0) {
          *local_88 = (long ***)puVar2;
          local_88[1] = (long ***)0x0;
        }
        else {
          plVar16 = (long *)(puVar3 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = *plVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar16 = (long *)local_88[1];
          *local_88 = (long ***)puVar2;
          local_88[1] = (long ***)puVar3;
          if (plVar16 != (long *)0x0) {
            plVar1 = plVar16 + 1;
            do {
              lVar15 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      FUN_7103778b80((long)param_1[0x74],(long)&local_90,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      pppplVar7 = local_88;
      local_90 = &PTR_FUN_710523da08;
      local_88 = (long ****)0x0;
      if (pppplVar7 != (long ****)0x0) {
        plVar16 = (long *)pppplVar7[1];
        *pppplVar7 = (long ***)0x0;
        pppplVar7[1] = (long ***)0x0;
        if (plVar16 != (long *)0x0) {
          plVar1 = plVar16 + 1;
          do {
            lVar15 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
          plVar16 = (long *)pppplVar7[1];
          if (plVar16 != (long *)0x0) {
            plVar1 = plVar16 + 1;
            do {
              lVar15 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_7101bb98a4;
          }
        }
        goto LAB_7101bb98c0;
      }
    }
  }
  else {
    pppplVar19 = param_1 + 0x14b;
    local_1b0 = (byte ***)
                CONCAT44((int)((ulong)((long)param_1[0x14c] - (long)param_1[0x14b]) >> 3),
                         (undefined4)local_1b0);
    FUN_710377aee0(0x3f800000,(long)(param_1 + 0x1d));
  }
LAB_7101bb98c8:
  local_90 = (undefined **)&DAT_71050abd10;
  local_88 = param_1;
  local_70 = &local_90;
  FUN_71003cb050((long *)&local_90,alStack_180);
  if (&local_90 == local_70) {
    pcVar11 = (code *)(*local_70)[4];
LAB_7101bb9910:
    (*pcVar11)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar11 = (code *)(*local_70)[5];
    goto LAB_7101bb9910;
  }
  ppplVar17 = param_1[0x157];
  ppplVar18 = param_1[0x158];
  uVar9 = (ulong)local_1b0._4_4_;
  ppplVar12 = ppplVar17;
  if (ppplVar18 != ppplVar17) {
    do {
      ppplVar18 = ppplVar18 + -2;
      (*(code *)**ppplVar18)(ppplVar18);
    } while (ppplVar17 != ppplVar18);
    ppplVar12 = param_1[0x157];
  }
  uVar14 = (long)ppplVar17 - (long)ppplVar12 >> 4;
  param_1[0x158] = ppplVar17;
  if (uVar14 < uVar9) {
    FUN_7101bb9cd0((long *)(param_1 + 0x157),uVar9 - uVar14,(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  else if (uVar14 != uVar9) {
    while (ppplVar12 + uVar9 * 2 != ppplVar17) {
      ppplVar17 = ppplVar17 + -2;
      (*(code *)**ppplVar17)(ppplVar17);
    }
    param_1[0x158] = ppplVar12 + uVar9 * 2;
  }
  *(undefined1 *)((long)param_1 + 0xad4) = 1;
  *(uint *)(param_1 + 0x15a) = param_2;
  *(uint *)((long)param_1 + 0xb74) = param_2;
  pppplVar7 = param_1 + 0xf8;
  pppplVar10 = param_1;
  FUN_7103781a20((long *)pppplVar7,*param_1[3] + 1,(byte ****)"scroll_items",(byte ****)&local_1b0,
                 param_1,param_6,param_7,param_8);
  *(undefined1 *)((long)param_1 + 0xad4) = 0;
  if (*(uint *)(param_1 + 0x175) == param_2) {
    if (3 < param_2) goto LAB_7101bb9bfc;
  }
  else {
    if (3 < param_2) {
LAB_7101bb9bfc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined1 *)((long)param_1 + (ulong)param_2 * 0xc + 0xb80) = 1;
    if (3 < *(uint *)(param_1 + 0x175)) goto LAB_7101bb9bfc;
    *(undefined1 *)((long)param_1 + (ulong)*(uint *)(param_1 + 0x175) * 0xc + 0xb80) = 1;
    *(uint *)(param_1 + 0x175) = param_2;
  }
  iVar4 = *(int *)((long)param_1 + (ulong)param_2 * 0xc + 0xb78);
  if (iVar4 == -1) {
    *(undefined4 *)((long)param_1 + (ulong)param_2 * 0xc + 0xb78) = 0;
    *(undefined1 *)((long)param_1 + 0xbac) = 0;
    FUN_7103783c10((long *)pppplVar7,0,0,1,pppplVar10,param_6,param_7,param_8);
    if (pppplVar19[1] != *pppplVar19) {
      pplVar13 = **pppplVar19;
joined_r0x007101bb9a98:
      if ((((ulong)pplVar13 & 0xffffffffff) == 0) ||
         (((ulong)pplVar13 & 0xff00000000000000) != 0x1e00000000000000)) goto LAB_7101bb9af0;
    }
LAB_7101bb9ae4:
    FUN_710377aee0(0x3f800000,(long)(param_1 + 0x33));
  }
  else {
    if (*(char *)((long)param_1 + 0xbac) == '\0') {
      FUN_7103783c10((long *)pppplVar7,iVar4,0,1,pppplVar10,param_6,param_7,param_8);
      if ((ulong)(long)iVar4 < (ulong)((long)pppplVar19[1] - (long)*pppplVar19 >> 3)) {
        pplVar13 = (*pppplVar19)[iVar4];
        goto joined_r0x007101bb9a98;
      }
      goto LAB_7101bb9ae4;
    }
    (*(code *)(**pppplVar7)[0xe])(*pppplVar7,0);
  }
LAB_7101bb9af0:
  if (alStack_c0 == local_a0) {
    pcVar11 = *(code **)(*local_a0 + 0x20);
LAB_7101bb9b1c:
    (*pcVar11)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101bb9b1c;
  }
  if (alStack_f0 == local_d0) {
    pcVar11 = *(code **)(*local_d0 + 0x20);
LAB_7101bb9b4c:
    (*pcVar11)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101bb9b4c;
  }
  if (alStack_120 == local_100) {
    pcVar11 = *(code **)(*local_100 + 0x20);
LAB_7101bb9b7c:
    (*pcVar11)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar11 = *(code **)(*local_100 + 0x28);
    goto LAB_7101bb9b7c;
  }
  if (alStack_150 == local_130) {
    pcVar11 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) goto LAB_7101bb9bb0;
    pcVar11 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar11)();
LAB_7101bb9bb0:
  if (alStack_180 == local_160) {
    pcVar11 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) {
      return;
    }
    pcVar11 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar11)();
  return;
}

