// addr:      7101aa29e0
// offset:    0x1aa29e0
// name:      FUN_7101aa29e0
// mangled:   
// signature: undefined __cdecl FUN_7101aa29e0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101aa29e0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long ****pppplVar8;
  undefined1 uVar9;
  int *piVar10;
  char *pcVar11;
  long lVar12;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  long *local_78;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar12 = **(long **)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x17c) == 0) {
    lVar5 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40) >> 3) < 6) {
      uVar4 = 0;
      cVar1 = *(char *)(lVar5 + 0x191);
    }
    else {
      uVar4 = *(ulong *)(*(long *)(lVar5 + 0x40) + 0x28);
      cVar1 = *(char *)(lVar5 + 0x191);
    }
    if ((cVar1 == '\0') &&
       (uVar7 = FUN_7103313f20(lVar5,uVar4,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                               param_8), (uVar7 & 1) != 0)) {
      FUN_71024076d0(local_70,uVar4);
      if ((local_60 != 0) && ((DAT_7106dd53a8 == '\x01' && ((int)local_58 == DAT_7106dd53ac)))) {
        piVar10 = (int *)(local_60 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
      local_58 = 0x87650000000000;
      local_48 = 0xffffffffffffffff;
      uStack_40 = 0;
      local_70[0] = 0;
      local_38 = 0;
    }
    local_68 = &PTR_FUN_7104f73d50;
    local_60 = 0;
    local_50 = 0;
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x1a0),1,(long ****)0x15000,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x10),0x7104421055);
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),0);
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x60))(*(long **)(param_1 + 0x1a8),0);
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x70))(*(long **)(param_1 + 0x1b0),1);
    return;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 8);
  if (((lVar12 != 0) &&
      (plVar3 = (long *)FUN_71037964b0(lVar12,0x7104421055), plVar3 != (long *)0x0)) &&
     (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) == 0)) {
    return;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x68))();
  if ((uVar4 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x60))(*(long **)(param_1 + 0x1b0),1);
  }
  lVar12 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x198) + 0x600);
  if ((*(char *)(lVar12 + 0x4aa) != '\0') && ((*(byte *)(lVar12 + 0x1ac) >> 1 & 1) != 0)) {
    if (0x12 < *(uint *)(param_1 + 0x174)) goto LAB_7101aa2dcc;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x174) * 4 + 0x128) = 0xd;
  }
  if (*(int *)(*(long *)(param_1 + 0x1b0) + 0x25c) < 0) {
    return;
  }
  FUN_7103776640(&local_80,**(long **)(param_1 + 0x198) + 8,(byte ****)"set_part_btn_00",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  plVar3 = local_78;
  FUN_7103778300(0x3f800000,(long)local_78,0x71043cf594);
  local_80 = &PTR_FUN_710523d988;
  local_78 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    uVar4 = *(ulong *)((long)plVar3 + 0x18);
    *(undefined ***)((long)plVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40((ulong)plVar3);
  }
  switch(*(undefined4 *)(*(long *)(param_1 + 0x1b0) + 0x25c)) {
  case 1:
    uVar9 = 1;
    pcVar11 = "mnu_online_report_inappropriate_nickname";
    break;
  case 2:
    uVar9 = 2;
    pcVar11 = "mnu_online_report_attack_onlyone_impede";
    break;
  case 3:
    uVar9 = 3;
    pcVar11 = "mnu_online_report_low_com";
    break;
  case 4:
    uVar9 = 4;
    pcVar11 = "mnu_online_report_cut_com";
    break;
  case 5:
    uVar9 = 5;
    pcVar11 = "mnu_online_report_bug_cheat";
    break;
  default:
    uVar9 = 0;
    pcVar11 = "mnu_online_report_leaving";
  }
  pppplVar8 = (long ****)(ulong)*(uint *)(param_1 + 0x52c);
  *(undefined1 *)(param_1 + 0x209) = uVar9;
  FUN_7103771d60(&local_80,*(long *)(param_1 + 0x1b0),pppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  plVar3 = local_78;
  plVar6 = (long *)*local_78;
  if (plVar6 != (long *)0x0) {
    pppplVar8 = (long ****)0x0;
    (**(code **)(*plVar6 + 0x2f0))(plVar6,0);
  }
  local_80 = &PTR_FUN_710523d9c8;
  local_78 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(*(long *)(param_1 + 0x1b0) + 0x25c);
  FUN_7103776640(&local_90,**(long **)(param_1 + 0x198) + 8,(byte ****)"set_part_btn_00",pppplVar8,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_txt_00",pppplVar8,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_80,pcVar11,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  plVar3 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  uVar4 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar4 != 0) {
    uVar7 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar4);
  }
  if (*(uint *)(param_1 + 0x174) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x174) * 4 + 0x128) = 0xd;
    return;
  }
LAB_7101aa2dcc:
                    /* WARNING: Subroutine does not return */
  abort();
}

