// addr:      7101acdf00
// offset:    0x1acdf00
// name:      FUN_7101acdf00
// mangled:   
// signature: undefined __cdecl FUN_7101acdf00(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101acdf00(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  long ****pppplVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar8 = 1;
  if (param_2 != 1) {
    if (param_2 != 0) {
      return;
    }
    iVar8 = -1;
  }
  if (*(int *)(param_3 + 6) == 3) {
    uVar11 = *(uint *)(*(long *)(param_1 + 0x110) + 0x18);
    uVar10 = uVar11 + iVar8;
    if ((int)uVar10 < 0) {
      iVar8 = 3;
    }
    else {
      iVar8 = (uVar10 / 3) * -3;
    }
    uVar10 = uVar10 + iVar8;
    *(uint *)(*(long *)(param_1 + 0x110) + 0x18) = uVar10;
    if (uVar11 == uVar10) {
      return;
    }
  }
  else {
    if (*(int *)(param_3 + 6) != 0) {
      return;
    }
    uVar11 = **(uint **)(param_1 + 0x110);
    uVar1 = uVar11 + iVar8;
    uVar10 = uVar1 + 4;
    if (-1 < (int)uVar1) {
      uVar10 = uVar1 & 3;
    }
    **(uint **)(param_1 + 0x110) = uVar10;
    if (uVar11 == uVar10) {
      return;
    }
  }
  pppplVar7 = param_3;
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    pppplVar7 = (long ****)&DAT_00000004;
    uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                           param_4,param_5,param_6,param_7,param_8);
    if ((uVar5 & 1) == 0) goto LAB_7101ace03c;
    FUN_71024076d0(local_80,0x151ca6c028);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
      piVar9 = (int *)(local_70 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
LAB_7101ace03c:
    local_68 = 0x87650000000000;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0;
    local_80[0] = 0;
    local_48 = 0;
  }
  local_78 = &PTR_FUN_7104f73d50;
  local_70 = 0;
  local_60 = 0;
  if (param_2 == 1) {
    pcVar6 = "txt_move_l";
  }
  else {
    pcVar6 = "txt_move_r";
  }
  FUN_7103778300(0x3f800000,(long)param_3[5],(long)pcVar6);
  FUN_7103778ab0(&local_90,param_3,pppplVar7,param_4,param_5,param_6,param_7,param_8);
  iVar8 = *(int *)(param_3 + 6);
  pcVar6 = "mnu_replay_refinement_all";
  if (iVar8 - 1U < 2) {
LAB_7101ace110:
    FUN_710377a120((long)&local_90,pcVar6,pppplVar7,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    if (iVar8 == 3) {
      pcVar2 = "mnu_replay_refinement_spirits_no";
      if (uVar11 != 1) {
        pcVar2 = "mnu_replay_refinement_all";
      }
      pcVar6 = "mnu_replay_refinement_spirits_yes";
      if (uVar11 != 2) {
        pcVar6 = pcVar2;
      }
      goto LAB_7101ace110;
    }
    if (iVar8 == 0) {
      if (uVar11 - 1 < 3) {
        pcVar6 = (&PTR_s_mnu_replay_refinement_mode_melee_71050a99e0)[(int)(uVar11 - 1)];
      }
      else {
        pcVar6 = "mnu_replay_refinement_all";
      }
      goto LAB_7101ace110;
    }
  }
  uVar5 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103778ab0(&local_a0,param_3 + 2,pppplVar7,param_4,param_5,param_6,param_7,param_8);
  iVar8 = *(int *)(param_3 + 6);
  pcVar6 = "mnu_replay_refinement_all";
  if (1 < iVar8 - 1U) {
    if (iVar8 == 3) {
      pcVar2 = "mnu_replay_refinement_spirits_no";
      if (uVar10 != 1) {
        pcVar2 = "mnu_replay_refinement_all";
      }
      pcVar6 = "mnu_replay_refinement_spirits_yes";
      if (uVar10 != 2) {
        pcVar6 = pcVar2;
      }
    }
    else {
      if (iVar8 != 0) goto LAB_7101ace1b0;
      if (uVar10 - 1 < 3) {
        pcVar6 = (&PTR_s_mnu_replay_refinement_mode_melee_71050a99e0)[(int)(uVar10 - 1)];
      }
      else {
        pcVar6 = "mnu_replay_refinement_all";
      }
    }
  }
  FUN_710377a120((long)&local_a0,pcVar6,pppplVar7,param_4,param_5,param_6,param_7,param_8);
LAB_7101ace1b0:
  uVar5 = local_98;
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  return;
}

