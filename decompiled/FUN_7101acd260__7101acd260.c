// addr:      7101acd260
// offset:    0x1acd260
// name:      FUN_7101acd260
// mangled:   
// signature: undefined __cdecl FUN_7101acd260(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101acd260(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined **local_88;
  undefined8 *local_80;
  undefined **local_78;
  long *local_70;
  undefined **local_68;
  long *local_60;
  undefined **local_58;
  long *local_50;
  long ********local_48;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x128) + 8);
    if (((lVar8 != 0) &&
        (plVar9 = (long *)FUN_71037964b0(lVar8,0x710426fafb), plVar9 != (long *)0x0)) &&
       (uVar10 = (**(code **)(*plVar9 + 0x138))(), (uVar10 & 1) == 0)) {
      return;
    }
    uVar10 = (**(code **)(**(long **)(param_1 + 0x140) + 0x68))();
    if ((uVar10 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x140) + 0x60))(*(long **)(param_1 + 0x140),1);
    }
    plVar9 = *(long **)(param_1 + 0x140);
    if (*(uint *)((long)plVar9 + 0x25c) < 3) {
      *(uint *)(*(long *)(param_1 + 0x110) + 0x18) = *(uint *)((long)plVar9 + 0x25c);
      plVar9 = *(long **)(param_1 + 0x140);
    }
    else if ((*(char *)(*(long *)(param_2 + 8) + 0x4aa) == '\0') ||
            ((*(byte *)(*(long *)(param_2 + 8) + 0x1ac) >> 1 & 1) == 0)) goto LAB_7101acd55c;
    (**(code **)(*plVar9 + 0x70))(plVar9,0);
    (**(code **)(**(long **)(param_1 + 0x140) + 0x60))(*(long **)(param_1 + 0x140),0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710439cf4a);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x71042d5dac);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x7104318a09);
    if (0x12 < *(uint *)(param_1 + 0xf4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 2;
    plVar9 = *(long **)(param_1 + 0x140);
LAB_7101acd55c:
    if (*(int *)(param_1 + 0x290) == *(int *)((long)plVar9 + 0x254)) {
      return;
    }
    *(int *)(param_1 + 0x290) = *(int *)((long)plVar9 + 0x254);
    pcVar2 = "mnu_replay_refinement_spirits_help_off";
    if (*(int *)((long)plVar9 + 0x254) != 1) {
      pcVar2 = "mnu_replay_refinement_spirits_help_all";
    }
    pcVar3 = "mnu_replay_refinement_spirits_help_on";
    if (*(int *)((long)plVar9 + 0x254) != 2) {
      pcVar3 = pcVar2;
    }
    FUN_710377a120(param_1 + 0x248,pcVar3,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  lVar8 = param_1 + 0x120;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710426fafb);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710425ee3e);
  FUN_710377a120(param_1 + 600,"mnu_replay_refinement_spirits",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x140) + 0x70))(*(long **)(param_1 + 0x140),1);
  FUN_7103776640(&local_68,lVar8,(byte ****)"set_parts_btn_09",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_58,(long)&local_68,(long ****)"set_selected_icon",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar9 = local_60;
  local_68 = &PTR_FUN_710523d988;
  local_60 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    uVar10 = *(ulong *)((long)plVar9 + 0x18);
    *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar9 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)plVar9);
  }
  FUN_7103776640(&local_78,lVar8,(byte ****)"set_parts_btn_10",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_68,(long)&local_78,(long ****)"set_selected_icon",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar9 = local_70;
  local_78 = &PTR_FUN_710523d988;
  local_70 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    uVar10 = *(ulong *)((long)plVar9 + 0x18);
    *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar9 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)plVar9);
  }
  FUN_7103776640(&local_88,lVar8,(byte ****)"set_parts_btn_11",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_selected_icon",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  puVar12 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    uVar10 = *(ulong *)((long)puVar12 + 0x18);
    *(undefined ***)((long)puVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar12 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)puVar12);
  }
  iVar13 = *(int *)(*(long *)(param_1 + 0x110) + 0x18);
  if (iVar13 == 2) {
    lVar8 = *local_50;
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    lVar8 = *local_60;
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    lVar8 = *local_70;
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
    }
    iVar13 = 2;
LAB_7101acd65c:
    param_3 = (long *********)0x1;
    FUN_7103771a80((long *)(param_1 + 0x140),iVar13,1);
  }
  else {
    if (iVar13 == 1) {
      lVar8 = *local_50;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      lVar8 = *local_60;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      }
      lVar8 = *local_70;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      iVar13 = 1;
      goto LAB_7101acd65c;
    }
    if (iVar13 == 0) {
      lVar8 = *local_50;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      }
      lVar8 = *local_60;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      lVar8 = *local_70;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      iVar13 = 0;
      goto LAB_7101acd65c;
    }
  }
  uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x13973984fb);
  pppuVar11 = (undefined ***)
              FUN_710323f760(*(long **)(param_1 + 0x108),uVar10,(long ****)param_3,param_4,param_5,
                             param_6,param_7,param_8);
  local_88 = &PTR_FUN_710523da08;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ********)&DAT_00000010;
      param_3 = &local_48;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar10 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar12 != (undefined8 *)0x0)) goto LAB_7101acd6f0;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101acd6f0:
  *puVar12 = 0;
  puVar12[1] = 0;
  local_80 = puVar12;
  if (&local_88 != pppuVar11) {
    puVar4 = *pppuVar11[1];
    puVar5 = pppuVar11[1][1];
    if (puVar5 == (undefined *)0x0) {
      *puVar12 = puVar4;
      puVar12[1] = 0;
    }
    else {
      plVar9 = (long *)(puVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar9 = (long *)puVar12[1];
      *puVar12 = puVar4;
      puVar12[1] = puVar5;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar8 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103778b80(*(long *)(param_1 + 0x270),(long)&local_88,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(*(long *)(param_1 + 0x140) + 0x254);
  iVar13 = *(int *)(*(long *)(param_1 + 0x140) + 0x254);
  pcVar2 = "mnu_replay_refinement_spirits_help_off";
  if (iVar13 != 1) {
    pcVar2 = "mnu_replay_refinement_spirits_help_all";
  }
  pcVar3 = "mnu_replay_refinement_spirits_help_on";
  if (iVar13 != 2) {
    pcVar3 = pcVar2;
  }
  FUN_710377a120(param_1 + 0x248,pcVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar12 = local_80;
  local_88 = &PTR_FUN_710523da08;
  local_80 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar12[1];
    *puVar12 = 0;
    puVar12[1] = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar8 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
      plVar9 = (long *)puVar12[1];
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar8 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar12);
  }
  plVar9 = local_70;
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  plVar9 = local_60;
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  plVar9 = local_50;
  local_58 = &PTR_FUN_710523d9a8;
  local_50 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  return;
}

