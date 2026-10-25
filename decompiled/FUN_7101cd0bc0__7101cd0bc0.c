// addr:      7101cd0bc0
// offset:    0x1cd0bc0
// name:      FUN_7101cd0bc0
// mangled:   
// signature: undefined __cdecl FUN_7101cd0bc0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd0bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined **local_50;
  ulong local_48;
  
  lVar8 = **(long **)(param_1 + 0x100);
  lVar6 = lVar8 + 8;
  FUN_7103776910(&local_50,lVar6,(long ****)"set_rep_replay",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar4 = local_48;
  FUN_7103779650(local_48);
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_50,lVar6,(long ****)"set_rep_movie",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar4 = local_48;
  FUN_7103779650(local_48);
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_50,lVar6,(long ****)"set_rep_mfshot",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar4 = local_48;
  FUN_7103779650(local_48);
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_50,lVar6,(long ****)"set_rep_mfshot_sd",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_48;
  FUN_7103779650(local_48);
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_50,lVar6,(long ****)"set_rep_mfshot_dl",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar4 = local_48;
  FUN_7103779650(local_48);
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_50,lVar6,(long ****)"set_rep_edit",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar4 = local_48;
  FUN_7103779650(local_48);
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x118);
  plVar7 = (long *)puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_7103778760(*(long *)(lVar8 + 0x10),0x7104433949);
  return;
}

