// addr:      7101acce30
// offset:    0x1acce30
// name:      FUN_7101acce30
// mangled:   
// signature: undefined __cdecl FUN_7101acce30(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101acce30(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  long *********ppppppppplVar12;
  undefined **local_50;
  undefined8 *local_48;
  long ********local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x70))(*(long **)(param_1 + 0x138),1);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710437c100);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710425ee3e);
    iVar3 = **(int **)(param_1 + 0x110);
    if (2 < iVar3 - 1U) {
      iVar3 = 0;
    }
    ppppppppplVar12 = (long *********)0x1;
    FUN_7103771a80((long *)(param_1 + 0x138),iVar3,1);
    FUN_710377a120(param_1 + 600,"mnu_replay_refinement_mode",ppppppppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x13834df56d);
    plVar9 = FUN_710323f760(*(long **)(param_1 + 0x108),uVar10,(long ****)ppppppppplVar12,param_4,
                            param_5,param_6,param_7,param_8);
    local_50 = &PTR_FUN_710523da08;
    local_48 = (undefined8 *)
               FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar12,param_4,param_5,param_6,param_7,
                              param_8);
    if (local_48 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_34 = 0;
        local_40 = (long ********)&DAT_00000010;
        ppppppppplVar12 = &local_40;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
        if (((uVar10 & 1) != 0) &&
           (local_48 = (undefined8 *)
                       FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar12,param_4,param_5,param_6,
                                      param_7,param_8), local_48 != (undefined8 *)0x0))
        goto LAB_7101accfd0;
      }
      local_48 = (undefined8 *)0x0;
    }
LAB_7101accfd0:
    *local_48 = 0;
    local_48[1] = 0;
    if (&local_50 != (undefined ***)plVar9) {
      uVar2 = *(undefined8 *)plVar9[1];
      lVar8 = ((undefined8 *)plVar9[1])[1];
      if (lVar8 == 0) {
        *local_48 = uVar2;
        local_48[1] = 0;
      }
      else {
        plVar9 = (long *)(lVar8 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar9 = (long *)local_48[1];
        *local_48 = uVar2;
        local_48[1] = lVar8;
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            lVar8 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    FUN_7103778b80(*(long *)(param_1 + 0x270),(long)&local_50,ppppppppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(*(long *)(param_1 + 0x138) + 0x254);
    uVar6 = *(int *)(*(long *)(param_1 + 0x138) + 0x254) - 1;
    if (uVar6 < 3) {
      pcVar11 = *(char **)(&DAT_71050a99c0 + (long)(int)uVar6 * 8);
    }
    else {
      pcVar11 = "mnu_replay_refinement_mode_help_all";
    }
    FUN_710377a120(param_1 + 0x238,pcVar11,ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
    puVar7 = local_48;
    local_50 = &PTR_FUN_710523da08;
    local_48 = (undefined8 *)0x0;
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    plVar9 = (long *)puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
      plVar9 = (long *)puVar7[1];
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar7);
    return;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x128) + 8);
  if (((lVar8 != 0) && (plVar9 = (long *)FUN_71037964b0(lVar8,0x710437c100), plVar9 != (long *)0x0))
     && (uVar10 = (**(code **)(*plVar9 + 0x138))(), (uVar10 & 1) == 0)) {
    return;
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x138) + 0x68))();
  if ((uVar10 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x60))(*(long **)(param_1 + 0x138),1);
  }
  plVar9 = *(long **)(param_1 + 0x138);
  if (*(uint *)((long)plVar9 + 0x25c) < 4) {
    **(uint **)(param_1 + 0x110) = *(uint *)((long)plVar9 + 0x25c);
    plVar9 = *(long **)(param_1 + 0x138);
  }
  else if ((*(char *)(*(long *)(param_2 + 8) + 0x4aa) == '\0') ||
          ((*(byte *)(*(long *)(param_2 + 8) + 0x1ac) >> 1 & 1) == 0)) goto LAB_7101acd0d8;
  (**(code **)(*plVar9 + 0x70))(plVar9,0);
  (**(code **)(**(long **)(param_1 + 0x138) + 0x60))(*(long **)(param_1 + 0x138),0);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710438c435);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x71042d5dac);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x7104318a09);
  if (0x12 < *(uint *)(param_1 + 0xf4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 2;
  plVar9 = *(long **)(param_1 + 0x138);
LAB_7101acd0d8:
  if (*(int *)(param_1 + 0x290) == *(int *)((long)plVar9 + 0x254)) {
    return;
  }
  *(int *)(param_1 + 0x290) = *(int *)((long)plVar9 + 0x254);
  uVar6 = *(int *)((long)plVar9 + 0x254) - 1;
  if (uVar6 < 3) {
    pcVar11 = *(char **)(&DAT_71050a99c0 + (long)(int)uVar6 * 8);
  }
  else {
    pcVar11 = "mnu_replay_refinement_mode_help_all";
  }
  FUN_710377a120(param_1 + 0x238,pcVar11,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

