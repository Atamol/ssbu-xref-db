// addr:      7101e88540
// offset:    0x1e88540
// name:      FUN_7101e88540
// mangled:   
// signature: undefined __cdecl FUN_7101e88540(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e88540(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  int local_68;
  undefined1 local_60;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x110);
  uVar4 = SUB84(param_3,0);
  FUN_7101e85dc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x98) = 2;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  switch(uVar4) {
  case 2:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"fadeout_white",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    lVar9 = **(long **)(param_1 + 8);
    pcVar8 = "fade_white";
    goto LAB_7101e88698;
  case 3:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"battle_spirits_in",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"vs_spirits",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x2138a7eb30);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 4:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"battle_fighter_in",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"vs_fighter",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1fe87028e4);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 5:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"battle_boss_in",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"vs_boss",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1ef4a79585);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 6:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"battle_kiila_in ",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"vs_kiila ",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1db5da1f6c);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 7:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"battle_darz_in",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"vs_darz",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1c0e2812df);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 8:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"battle_final_in",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"vs_final",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x2261fdda8c);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 9:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"battle_boss_in",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"vs_boss",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1ef4a79585);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 10:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"facility_common_in",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"facility_cmn",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1ed2e2fc9f);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 0xb:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"map_main_in",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)&DAT_710437cbe2,param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1c619aac06);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 0xc:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"map_sub_in",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_7103776910(&local_80,**(long **)(param_1 + 8) + 8,(long ****)&DAT_710437cbe2,param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    if (DAT_710532a860 == (long *)0x0) goto LAB_7101e892a0;
    FUN_71024d1440((undefined4 *)&local_80,*DAT_710532a860,0x1c619aac06);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  default:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"fadeout_black",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    lVar9 = **(long **)(param_1 + 8);
    pcVar8 = "fade_black";
LAB_7101e88698:
    FUN_7103776910(&local_80,lVar9 + 8,(long ****)pcVar8,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x48) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x50);
      *(undefined ***)(param_1 + 0x50) = ppuVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    goto LAB_7101e892a0;
  }
  local_78 = &PTR_FUN_7104f73d50;
  local_70 = 0;
  local_60 = 0;
LAB_7101e892a0:
  fVar12 = 1.0;
  if (((0 < (int)param_2) &&
      (plVar7 = *(long **)(*(long *)(param_1 + 0x28) + 8), fVar12 = 1.0, plVar7 != (long *)0x0)) &&
     (fVar11 = (float)(**(code **)(*plVar7 + 0x1a8))(), 0.0 < fVar11)) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x28) + 8);
    if (plVar7 == (long *)0x0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = (float)(**(code **)(*plVar7 + 0x1a8))();
    }
    fVar12 = fVar12 / (float)(int)param_2;
  }
  *(float *)(param_1 + 0x40) = fVar12;
  *(undefined4 *)(param_1 + 0xa0) = 0x9002;
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x110) == '\0')) {
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 8),0,(long ****)0x9002,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  return;
}

