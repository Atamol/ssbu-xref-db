// addr:      7101ae9600
// offset:    0x1ae9600
// name:      FUN_7101ae9600
// mangled:   
// signature: undefined __cdecl FUN_7101ae9600(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ae9600(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte **ppbVar1;
  long *plVar2;
  byte **ppbVar3;
  byte **ppbVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined **local_68;
  ulong local_60;
  undefined4 local_54;
  
  ppppppppplVar11 = param_3;
  ppppbVar12 = param_4;
  if ((((((**(long **)(param_2 + 8) == **(long **)(param_1 + 0x208)) &&
         (**(long **)(param_2 + 0x18) == **(long **)(param_1 + 0x218))) &&
        (**(long **)(param_2 + 0x28) == **(long **)(param_1 + 0x228))) &&
       ((**(long **)(param_2 + 0x38) == **(long **)(param_1 + 0x238) &&
        (**(long **)(param_2 + 0x48) == **(long **)(param_1 + 0x248))))) &&
      ((**(long **)(param_2 + 0x58) == **(long **)(param_1 + 600) &&
       ((**(long **)(param_2 + 0x68) == **(long **)(param_1 + 0x268) &&
        (**(long **)(param_2 + 0x78) == **(long **)(param_1 + 0x278))))))) &&
     ((byte ****)(param_1 + 0x1f0) != param_4)) {
    puVar13 = *(undefined8 **)(param_1 + 0x1f8);
    ppbVar3 = *param_4[1];
    ppbVar4 = param_4[1][1];
    if (ppbVar4 != (byte **)0x0) {
      ppbVar1 = ppbVar4 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppbVar1,0x10);
        if (bVar6) {
          *ppbVar1 = *ppbVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = (long *)puVar13[1];
    *puVar13 = ppbVar3;
    puVar13[1] = ppbVar4;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
      do {
        lVar14 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x128);
  if (*param_4[1] == (byte **)0x0) {
    FUN_7103778300(0x3f800000,lVar14,0x71043beebf);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710432a87b);
    *(undefined4 *)(param_1 + 0x350) = 0x5a;
    FUN_7103776910(&local_68,param_1 + 0x280,(long ****)"set_txt_mask",ppppppppplVar11,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    uVar9 = local_60;
    if (*(long **)(local_60 + 0x10) != (long *)0x0) {
      ppppppppplVar11 = (long *********)0x0;
      ppppbVar12 = (byte ****)0x0;
      local_54 = 0;
      FUN_71037a2270(*(long **)(local_60 + 0x10),(ushort *)&local_54,0,0);
    }
    local_68 = &PTR_FUN_710523d9a8;
    local_60 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_7103776910(&local_68,param_1 + 0x280,(long ****)"set_txt_main",ppppppppplVar11,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    uVar9 = local_60;
    if (*(long **)(local_60 + 0x10) != (long *)0x0) {
      ppppppppplVar11 = (long *********)0x0;
      ppppbVar12 = (byte ****)0x0;
      local_54 = 0;
      FUN_71037a2270(*(long **)(local_60 + 0x10),(ushort *)&local_54,0,0);
    }
    local_68 = &PTR_FUN_710523d9a8;
    local_60 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x218) + 0x10);
    if (plVar8 != (long *)0x0) {
      ppppppppplVar11 = (long *********)0x0;
      ppppbVar12 = (byte ****)0x0;
      local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
      FUN_71037a2270(plVar8,(ushort *)&local_68,0,0);
    }
  }
  else {
    if ((*(long *)(lVar14 + 8) != 0) &&
       (plVar8 = (long *)FUN_71037964b0(*(long *)(lVar14 + 8),0x710432a87b), plVar8 != (long *)0x0))
    {
      uVar9 = (**(code **)(*plVar8 + 0x130))();
      lVar14 = *(long *)(param_1 + 0x128);
      if ((uVar9 & 1) != 0) {
        FUN_7103778300(0x3f800000,lVar14,0x7104433949);
        goto LAB_7101ae9828;
      }
    }
    FUN_7103778760(lVar14,0x7104433949);
  }
LAB_7101ae9828:
  if (*param_4[1] == (byte **)0x0) {
    if (*(char *)(param_1 + 0x354) == '\0') {
      FUN_7103779650(*(long *)(param_2 + 0x78));
      *(undefined4 *)(param_1 + 0x350) = 0x5a;
      FUN_7103776910(&local_68,param_2 + 0x80,(long ****)"set_txt_mask",ppppppppplVar11,ppppbVar12,
                     param_5,param_6,param_7,param_8);
      uVar9 = local_60;
      if (*(long **)(local_60 + 0x10) != (long *)0x0) {
        ppppppppplVar11 = (long *********)0x0;
        ppppbVar12 = (byte ****)0x0;
        local_54 = 0;
        FUN_71037a2270(*(long **)(local_60 + 0x10),(ushort *)&local_54,0,0);
      }
      local_68 = &PTR_FUN_710523d9a8;
      local_60 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_68,param_2 + 0x80,(long ****)"set_txt_main",ppppppppplVar11,ppppbVar12,
                     param_5,param_6,param_7,param_8);
      uVar9 = local_60;
      if (*(long **)(local_60 + 0x10) != (long *)0x0) {
        local_54 = 0;
        FUN_71037a2270(*(long **)(local_60 + 0x10),(ushort *)&local_54,0,0);
      }
      local_68 = &PTR_FUN_710523d9a8;
      local_60 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      *(undefined1 *)(param_1 + 0x354) = 1;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0x5a;
  FUN_7103776910(&local_68,param_2 + 0x80,(long ****)"set_txt_mask",ppppppppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_60;
  if (*(long **)(local_60 + 0x10) != (long *)0x0) {
    ppppppppplVar11 = (long *********)&DAT_ffffffff;
    ppppbVar12 = (byte ****)0x1;
    FUN_71037a2270(*(long **)(local_60 + 0x10),(ushort *)((long)param_3 + 0xc),0xffffffff,1);
  }
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_7103776910(&local_68,param_2 + 0x80,(long ****)"set_txt_main",ppppppppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_60;
  if (*(long **)(local_60 + 0x10) != (long *)0x0) {
    ppppppppplVar11 = (long *********)&DAT_ffffffff;
    ppppbVar12 = (byte ****)0x1;
    FUN_71037a2270(*(long **)(local_60 + 0x10),(ushort *)((long)param_3 + 0xc),0xffffffff,1);
  }
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  lVar14 = *(long *)(*(long *)(param_2 + 0x88) + 8);
  if (lVar14 != 0) {
    puVar13 = *(undefined8 **)(lVar14 + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593ba40), iVar7 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593ba48), iVar7 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar13 != (undefined8 *)0x0) {
      for (puVar10 = (undefined8 *)(**(code **)*puVar13)(puVar13); puVar10 != (undefined8 *)0x0;
          puVar10 = (undefined8 *)*puVar10) {
        if ((undefined8 **)puVar10 == &DAT_710593ba58) {
          lVar14 = puVar13[3];
          *(undefined4 *)(puVar13 + 0xb) = *(undefined4 *)((long)puVar13 + 0x54);
          if (lVar14 != 0) {
            *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)((long)puVar13 + 0x54);
            *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
          }
          lVar14 = puVar13[4];
          if (lVar14 != 0) {
            *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)(puVar13 + 0xb);
            *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
          }
          if ((long *)puVar13[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar13[5] + 0x180))(0);
          }
          plVar8 = (long *)puVar13[6];
          if (plVar8 != (long *)0x0) {
            if (*(char *)((long)puVar13 + 99) == '\0') {
              (**(code **)(*plVar8 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar8 + 400))();
            }
          }
          *(undefined2 *)((long)puVar13 + 100) = 0;
          break;
        }
      }
    }
  }
  FUN_7103779480(param_2 + 0x70,(long)param_4,ppppppppplVar11,ppppbVar12,param_5,param_6,param_7,
                 param_8);
  FUN_710377a280(param_2,(byte *)"mnu_replay_detail_time_movie",1);
  FUN_710377a280(param_2 + 0x10,(byte *)"mnu_replay_detail_creation_date",2);
  return;
}

