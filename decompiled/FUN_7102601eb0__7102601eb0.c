// addr:      7102601eb0
// offset:    0x2601eb0
// name:      FUN_7102601eb0
// mangled:   
// signature: undefined __cdecl FUN_7102601eb0(uint * param_1, long param_2, undefined8 param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_7102601eb0(uint *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong local_50;
  long *plStack_48;
  uint local_38 [2];
  
  pcVar7 = "model.numdlb";
  FUN_710353e1d0((uint *)&local_50,(uint *)(param_2 + 8),(byte *)"model.numdlb");
  if ((uint)local_50 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,(uint)local_50,(long *********)pcVar7,param_5,param_6,param_7,
                   param_8,param_9);
  }
  if (((uint)local_50 == 0xffffff) ||
     (lVar13 = **(long **)(DAT_7105332f20 + 0x78),
     *(uint *)(*(long *)(lVar13 + 0x40) + 4) <= (uint)local_50)) {
    local_50 = 0;
  }
  else {
    local_50 = *(ulong *)(*(long *)(lVar13 + 0x60) + (local_50 & 0xffffffff) * 0x20) & 0xffffffffff;
  }
  lVar13 = (*(long **)(DAT_7105332f20 + 0x78))[1];
  pcVar10 = FUN_7103542240;
  ppppbVar9 = (byte ****)&DAT_00000008;
  puVar6 = bsearch(&local_50,*(void **)(lVar13 + 0x20),(ulong)*(uint *)(*(long *)(lVar13 + 8) + 8),8
                   ,FUN_7103542240);
  if (puVar6 == (undefined8 *)0x0) {
    local_38[0] = 0xffffff;
  }
  else {
    uVar3 = (uint)((ulong)*puVar6 >> 0x20);
    uVar11 = uVar3 >> 8;
    local_38[0] = 0xffffff;
    if ((uVar11 != 0xffffff) &&
       (uVar2 = *(uint *)(*(long *)(lVar13 + 8) + 4), local_38[0] = uVar3 >> 8,
       uVar2 < uVar11 || uVar2 == local_38[0])) {
      local_38[0] = 0xffffff;
    }
  }
  ppppppppplVar8 = (long *********)&DAT_00000009;
  FUN_71035c2890(&local_50,local_38,(long *********)&DAT_00000009,ppppbVar9,(long ****)pcVar10,
                 param_7,param_8,param_9);
  uVar3 = *(uint *)(param_2 + 8);
  *param_1 = uVar3;
  lVar13 = DAT_7105332f20;
  if ((uVar3 != 0xffffff) && (uVar3 < *(uint *)(DAT_7105332f20 + 0x48))) {
    std::recursive_mutex::lock();
    lVar12 = *(long *)(lVar13 + 0x40);
    if ((*(byte *)(lVar12 + (ulong)uVar3 * 0x48 + 8) & 1) == 0) {
      std::recursive_mutex::unlock();
      FUN_7103540d50(lVar13,uVar3,ppppppppplVar8,ppppbVar9,(long ****)pcVar10,param_7,param_8,
                     param_9);
    }
    else {
      FUN_71035432d0((int *)(lVar12 + (ulong)uVar3 * 0x48));
      std::recursive_mutex::unlock();
    }
  }
  *(ulong *)(param_1 + 2) = local_50;
  *(long **)(param_1 + 4) = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

