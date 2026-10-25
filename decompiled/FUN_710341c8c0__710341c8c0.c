// addr:      710341c8c0
// offset:    0x341c8c0
// name:      FUN_710341c8c0
// mangled:   
// signature: undefined __cdecl FUN_710341c8c0(undefined8 param_1, long param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710341c8c0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long ***ppplVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long ***local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  byte local_90;
  byte abStack_8f [63];
  
  lVar18 = *(long *)(param_2 + 0x20);
  *(undefined4 *)(param_3 + 0x28) = 0;
  lVar3 = lib::Singleton<app::FighterParamAccessor2>::instance_;
  if ((*(long *)(lVar18 + 0x38e0) != 0) && (*(long *)(*(long *)(lVar18 + 0x38e0) + 8) != -1))
  goto LAB_710341cb50;
  lVar17 = *(long *)(lib::Singleton<app::FighterParamAccessor2>::instance_ + 0xb98);
  lVar16 = *(long *)(lib::Singleton<app::FighterParamAccessor2>::instance_ + 0xba0);
  if (lVar16 != 0) {
    plVar7 = (long *)(lVar16 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppplVar2 = *(long ****)(lVar3 + 0x50);
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (((DAT_710532f938 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_710532f938), iVar6 != 0)) {
    __cxa_guard_release(&DAT_710532f938);
  }
  if (lVar16 != 0) {
    plVar7 = (long *)(lVar16 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_90 = 0;
  local_98 = 0;
  local_b8 = ppplVar2;
  lStack_b0 = lVar3;
  local_a8 = lVar17;
  lStack_a0 = lVar16;
  FUN_710062dc20((uint *)&local_98,"param_%s");
  uVar15 = (uint)local_90;
  if (local_90 == 0) {
    uVar12 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar11 = 0xffffffff;
    pbVar14 = abStack_8f;
    do {
      uVar1 = uVar15 + 0x20;
      if (0x19 < uVar15 - 0x41) {
        uVar1 = uVar15;
      }
      uVar11 = (&DAT_7104754084)[(uVar1 ^ uVar11) & 0xff] ^ uVar11 >> 8;
      uVar15 = (uint)*pbVar14;
      uVar8 = uVar8 + 0x100000000;
      pbVar14 = pbVar14 + 1;
    } while (uVar15 != 0);
    uVar12 = (ulong)~uVar11;
    uVar8 = uVar8 & 0xff00000000;
  }
  local_90 = 0;
  local_98 = 0;
  FUN_710062dc20((uint *)&local_98,"power_up_%s");
  uVar15 = (uint)local_90;
  if (local_90 == 0) {
    uVar13 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar11 = 0xffffffff;
    pbVar14 = abStack_8f;
    do {
      uVar1 = uVar15 + 0x20;
      if (0x19 < uVar15 - 0x41) {
        uVar1 = uVar15;
      }
      uVar11 = (&DAT_7104754084)[(uVar1 ^ uVar11) & 0xff] ^ uVar11 >> 8;
      uVar15 = (uint)*pbVar14;
      uVar9 = uVar9 + 0x100000000;
      pbVar14 = pbVar14 + 1;
    } while (uVar15 != 0);
    uVar13 = (ulong)~uVar11;
    uVar9 = uVar9 & 0xff00000000;
  }
  param_5 = (long ****)(uVar9 | uVar13);
  FUN_71033bb180((long *)(lVar18 + 0x38d0),&local_a8,&local_b8,(byte ****)(uVar8 | uVar12),param_5,
                 param_6,param_7,param_8);
  if (lVar3 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (lVar16 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_71033bb3d0((long *)(lVar18 + 0x38d0));
  plVar7 = *(long **)(lVar18 + 0x3900);
  if (plVar7 == (long *)0x0) {
LAB_710341cb34:
    *(undefined4 *)(lVar18 + 0x3930) = 0;
  }
  else {
    if (plVar7[1] == 0) {
LAB_710341cb28:
      plVar10 = *(long **)(lVar18 + 0x3908);
      lVar17 = plVar7[1];
      *plVar10 = *plVar7;
      plVar10[1] = lVar17;
      goto LAB_710341cb34;
    }
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    if ((uVar8 & 1) == 0) {
      plVar7 = *(long **)(lVar18 + 0x3900);
      goto LAB_710341cb28;
    }
    auVar19 = (**(code **)(**(long **)(lVar18 + 0x3900) + 0x60))(*(long **)(lVar18 + 0x3900),0);
    **(undefined1 (**) [16])(lVar18 + 0x3908) = auVar19;
    *(undefined4 *)(lVar18 + 0x3930) = 0;
  }
  if (lVar3 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (lVar16 != 0) {
    std::__shared_weak_count::__release_weak();
  }
LAB_710341cb50:
  FUN_71033aa350(param_2,0,0,0,param_5,param_6,param_7,param_8);
  return;
}

