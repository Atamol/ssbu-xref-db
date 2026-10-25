// addr:      7101ec4ee0
// offset:    0x1ec4ee0
// name:      FUN_7101ec4ee0
// mangled:   
// signature: undefined __cdecl FUN_7101ec4ee0(long param_1, long param_2, undefined8 * param_3, undefined8 * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ec4ee0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_60;
  long *plStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_50 = *param_3;
  plVar2 = (long *)param_3[1];
  local_48 = plVar2;
  if (plVar2 == (long *)0x0) {
    FUN_7101ec4db0((undefined8 *)(param_1 + 8),param_2,&local_50,(long ****)"save_in",
                   (long ****)"save_out",param_6,param_7,param_8);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_7101ec4db0((undefined8 *)(param_1 + 8),param_2,&local_50,(long ****)"save_in",
                   (long ****)"save_out",param_6,param_7,param_8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_60 = *param_4;
  plVar2 = (long *)param_4[1];
  plStack_58 = plVar2;
  if (plVar2 == (long *)0x0) {
    FUN_7101ec4db0((undefined8 *)(param_1 + 0x38),param_2,&local_60,(long ****)"btn_dicide_in",
                   (long ****)"btn_dicide_out",param_6,param_7,param_8);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_7101ec4db0((undefined8 *)(param_1 + 0x38),param_2,&local_60,(long ****)"btn_dicide_in",
                   (long ****)"btn_dicide_out",param_6,param_7,param_8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

