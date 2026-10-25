// addr:      710134f5c0
// offset:    0x134f5c0
// name:      FUN_710134f5c0
// mangled:   
// signature: undefined __cdecl FUN_710134f5c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710134f5c0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long ***local_78;
  long *local_70;
  undefined4 local_64;
  
  plVar1 = DAT_71052c33d8;
  lVar7 = DAT_71052b8800;
  lVar4 = DAT_71052b8620;
  lVar13 = DAT_71052b85f8;
  lVar14 = lib::Singleton<app::BattleObjectManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134f66c;
    }
    plVar8 = (long *)0x0;
  }
LAB_710134f66c:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710134f6d8;
    }
    plVar10 = (long *)0x0;
  }
LAB_710134f6d8:
  plVar10[2] = (long)FUN_710137ba40;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061718;
  plVar10[4] = (long)plVar1;
  plVar8[4] = (long)"ExecutableObjectManager::update_pause_by_category";
  plVar8[5] = 9;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710134f764;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710134f764:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061718;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = DAT_71052c3760;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134f838;
    }
    plVar8 = (long *)0x0;
  }
LAB_710134f838:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710134f89c;
    }
    plVar10 = (long *)0x0;
  }
LAB_710134f89c:
  plVar10[2] = (long)FUN_71014f10b0;
  plVar10[3] = 0;
  plVar10[4] = lVar12;
  *plVar10 = (long)&PTR_FUN_7105061760;
  plVar8[4] = (long)"MeleeManager::process";
  plVar8[5] = 8;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710134f928;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710134f928:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061760;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = lib::Singleton<app::FighterManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134f9fc;
    }
    plVar8 = (long *)0x0;
  }
LAB_710134f9fc:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710134fa60;
    }
    plVar10 = (long *)0x0;
  }
LAB_710134fa60:
  plVar10[2] = (long)FUN_7100678b80;
  plVar10[3] = 0;
  plVar10[4] = lVar12;
  *plVar10 = (long)&PTR_FUN_71050617a8;
  plVar8[4] = (long)"FighterManager::process_begin";
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[5] = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710134fae8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710134fae8:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_71050617a8;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134fbb4;
    }
    plVar8 = (long *)0x0;
  }
LAB_710134fbb4:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710134fc18;
    }
    plVar10 = (long *)0x0;
  }
LAB_710134fc18:
  *plVar10 = (long)&PTR_FUN_71050617f0;
  plVar10[2] = (long)FUN_71003e7ff0;
  plVar10[3] = 0;
  plVar10[4] = lVar13;
  plVar8[4] = (long)"CollisionLogManager::process_begin";
  plVar8[5] = 8;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710134fca4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710134fca4:
  *puVar11 = &PTR_FUN_71050617f0;
  lVar12 = plVar10[1];
  lVar2 = plVar10[2];
  lVar3 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar3;
  puVar11[1] = lVar12;
  puVar11[2] = lVar2;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134fd70;
    }
    plVar8 = (long *)0x0;
  }
LAB_710134fd70:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"CameraManager::update_frame";
  *(undefined1 *)(plVar8 + 6) = 1;
  plVar8[5] = (long)&DAT_100000008;
  plVar8[8] = (long)&PTR_FUN_7105061838;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = lib::Singleton<app::StageManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134fe5c;
    }
    plVar8 = (long *)0x0;
  }
LAB_710134fe5c:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710134fec0;
    }
    plVar10 = (long *)0x0;
  }
LAB_710134fec0:
  plVar10[2] = (long)FUN_7102607360;
  plVar10[3] = 0;
  plVar10[4] = lVar12;
  *plVar10 = (long)&PTR_FUN_7105061880;
  plVar8[4] = (long)"StageManager::pre_process";
  plVar8[5] = 0x100000003;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710134ff50;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710134ff50:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061880;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = DAT_71052c3618;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101350024;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101350024:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101350088;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101350088:
  plVar10[2] = (long)FUN_71014a3b30;
  plVar10[3] = 0;
  plVar10[4] = lVar12;
  *plVar10 = (long)&PTR_FUN_71050618c8;
  plVar8[4] = (long)"StageSwapManager::update";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101350110;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101350110:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_71050618c8;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013501d4;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013501d4:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"ItemManager::process_begin";
  plVar8[5] = 0x100000004;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061910;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013502ac;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013502ac:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"EnemyManager::process";
  plVar8[5] = (long)&DAT_100000002;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061958;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101350384;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101350384:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"BossManager::process";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_71050619a0;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = DAT_71052b9298;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101350468;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101350468:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013504cc;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013504cc:
  plVar10[2] = (long)FUN_7100522f30;
  plVar10[3] = 0;
  plVar10[4] = lVar12;
  *plVar10 = (long)&PTR_FUN_71050619e8;
  plVar8[4] = (long)"GroundCollision::pre_process";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101350554;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101350554:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_71050619e8;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = DAT_71052b6fd8;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101350628;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101350628:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710135068c;
    }
    plVar10 = (long *)0x0;
  }
LAB_710135068c:
  plVar10[2] = (long)FUN_710030c710;
  plVar10[3] = 0;
  plVar10[4] = lVar12;
  *plVar10 = (long)&PTR_FUN_7105061a30;
  plVar8[4] = (long)"FighterAIManager::process_begin";
  plVar8[5] = 0x100000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101350718;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101350718:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061a30;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013507e4;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013507e4:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101350848;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101350848:
  plVar10[2] = (long)FUN_71003ac660;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_begin";
  plVar8[5] = 0x100000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_71013508d4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71013508d4:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013509a0;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013509a0:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101350a04;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101350a04:
  plVar10[2] = (long)FUN_71003accf0;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_ground";
  plVar8[5] = 0x100000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101350a88;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101350a88:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101350b54;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101350b54:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101350bb8;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101350bb8:
  *plVar10 = (long)&PTR_FUN_7105061ac0;
  plVar10[2] = (long)thunk_FUN_7100476920;
  plVar10[3] = 0;
  plVar10[4] = lVar7;
  plVar8[4] = (long)"JostleManager::process_begin";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101350c44;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101350c44:
  *puVar11 = &PTR_FUN_7105061ac0;
  lVar12 = plVar10[1];
  lVar2 = plVar10[2];
  lVar3 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar3;
  puVar11[1] = lVar12;
  puVar11[2] = lVar2;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101350d18;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101350d18:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101350d7c;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101350d7c:
  *plVar10 = (long)&PTR_FUN_7105061b08;
  plVar10[2] = (long)FUN_71003f0010;
  plVar10[3] = 0;
  plVar10[4] = lVar4;
  plVar8[4] = (long)"CatchManager::process_begin";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101350e08;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101350e08:
  *puVar11 = &PTR_FUN_7105061b08;
  lVar12 = plVar10[1];
  lVar2 = plVar10[2];
  lVar3 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar3;
  puVar11[1] = lVar12;
  puVar11[2] = lVar2;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = lib::Singleton<app::FighterCutInManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101350ee4;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101350ee4:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101350f48;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101350f48:
  *plVar10 = (long)&PTR_FUN_7105061b50;
  plVar10[4] = lVar12;
  plVar10[2] = (long)FUN_71006ac180;
  plVar10[3] = 0;
  plVar8[4] = (long)"FighterCutInManager::process_begin";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101350fd0;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101350fd0:
  *puVar11 = &PTR_FUN_7105061b50;
  lVar12 = plVar10[1];
  lVar2 = plVar10[2];
  lVar3 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar3;
  puVar11[1] = lVar12;
  puVar11[2] = lVar2;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = DAT_71052b9298;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013510b0;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013510b0:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101351114;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101351114:
  plVar10[4] = lVar12;
  plVar10[2] = (long)FUN_7100523a80;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_71050619e8;
  plVar8[4] = (long)"GroundCollision::process";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101351194;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101351194:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_71050619e8;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = lib::Singleton<app::FighterManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101351268;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101351268:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013512cc;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013512cc:
  plVar10[4] = lVar12;
  plVar10[2] = (long)FUN_7100678b90;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_71050617a8;
  plVar8[4] = (long)"FighterManager::process_begin_post";
  plVar8[5] = 0x100000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101351350;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101351350:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_71050617a8;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710135141c;
    }
    plVar8 = (long *)0x0;
  }
LAB_710135141c:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"OperatorObjectManager::apply_visitor";
  *(undefined1 *)(plVar8 + 6) = 1;
  plVar8[5] = (long)&DAT_100000008;
  plVar8[8] = (long)&PTR_FUN_7105061b98;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = DAT_71052c3790;
  if (DAT_71052c3790 != 0) {
    plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000070;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_7101351504;
      }
      plVar8 = (long *)0x0;
    }
LAB_7101351504:
    *plVar8 = (long)&PTR_FUN_71050616e0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar10 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,
                                             param_8), plVar10 != (long *)0x0)) goto LAB_7101351568;
      }
      plVar10 = (long *)0x0;
    }
LAB_7101351568:
    plVar10[2] = (long)FUN_710151d740;
    plVar10[3] = 0;
    plVar10[4] = lVar12;
    *plVar10 = (long)&PTR_FUN_7105061be0;
    plVar8[4] = (long)"ShamBattleManager::process";
    plVar8[5] = (long)&DAT_100000008;
    *(undefined1 *)(plVar8 + 6) = 0;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar11 != (undefined8 *)0x0)) goto LAB_71013515f0;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_71013515f0:
    lVar12 = plVar10[1];
    lVar2 = plVar10[3];
    lVar3 = plVar10[4];
    puVar11[2] = plVar10[2];
    puVar11[3] = lVar2;
    puVar11[4] = lVar3;
    *puVar11 = &PTR_FUN_7105061be0;
    puVar11[1] = lVar12;
    plVar8[0xc] = (long)puVar11;
    (**(code **)(*plVar10 + 0x28))(plVar10);
    local_78 = (long ***)(plVar8 + 4);
    local_70 = plVar8;
    FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_70 != (long *)0x0) {
      plVar8 = local_70 + 1;
      do {
        lVar12 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013516b4;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013516b4:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"SpiritsBattleManager::process_melee";
  plVar8[5] = (long)&DAT_100000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061c28;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101351790;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101351790:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013517f4;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013517f4:
  plVar10[2] = (long)FUN_71003acf40;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_map_collection";
  plVar8[5] = 0x200000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710135187c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710135187c:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = lib::Singleton<app::StageManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101351950;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101351950:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013519b4;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013519b4:
  plVar10[4] = lVar12;
  plVar10[2] = (long)FUN_71026086c0;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061880;
  plVar8[4] = (long)"StageManager::process_fix_position";
  plVar8[5] = 0x300000003;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101351a38;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101351a38:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061880;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = DAT_71052b9290;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101351b0c;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101351b0c:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101351b70;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101351b70:
  plVar10[2] = (long)FUN_71005209c0;
  plVar10[3] = 0;
  plVar10[4] = lVar12;
  *plVar10 = (long)&PTR_FUN_7105061c70;
  plVar8[4] = (long)"AreaManager::process_fix_position";
  plVar8[5] = 0x300000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101351c00;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101351c00:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061c70;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101351cd4;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101351cd4:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101351d38;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101351d38:
  plVar10[2] = (long)FUN_71003ad190;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_fix_position";
  plVar8[5] = 0x300000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101351db8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101351db8:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101351e7c;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101351e7c:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"ItemManager::process_fix_position_after";
  plVar8[5] = 0x300000004;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061cb8;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = lib::Singleton<app::FighterManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101351f60;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101351f60:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101351fc4;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101351fc4:
  plVar10[4] = lVar12;
  plVar10[2] = (long)FUN_7100678d80;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_71050617a8;
  plVar8[4] = (long)"FighterManager::process_pre_collision";
  plVar8[5] = 0x400000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101352048;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101352048:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_71050617a8;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352114;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352114:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101352178;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101352178:
  plVar10[2] = (long)FUN_71003ad3e0;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_pre_collision";
  plVar8[5] = 0x400000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101352200;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101352200:
  lVar12 = plVar10[1];
  lVar2 = plVar10[3];
  lVar3 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar2;
  puVar11[4] = lVar3;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar12 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013522cc;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013522cc:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101352330;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101352330:
  *plVar10 = (long)&PTR_FUN_71050617f0;
  plVar10[2] = (long)FUN_71003e8170;
  plVar10[3] = 0;
  plVar10[4] = lVar13;
  plVar8[4] = (long)"CollisionLogManager::collide";
  plVar8[5] = 0x400000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_71013523bc;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71013523bc:
  *puVar11 = &PTR_FUN_71050617f0;
  lVar13 = plVar10[1];
  lVar12 = plVar10[2];
  lVar2 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar2;
  puVar11[1] = lVar13;
  puVar11[2] = lVar12;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352490;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352490:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013524f4;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013524f4:
  plVar10[2] = (long)FUN_71003ad630;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_collision";
  plVar8[5] = 0x500000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710135257c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710135257c:
  lVar13 = plVar10[1];
  lVar12 = plVar10[3];
  lVar2 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar12;
  puVar11[4] = lVar2;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352648;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352648:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013526ac;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013526ac:
  *plVar10 = (long)&PTR_FUN_7105061b08;
  plVar10[2] = (long)FUN_71003f0020;
  plVar10[3] = 0;
  plVar10[4] = lVar4;
  plVar8[4] = (long)"CatchManager::process_catch";
  plVar8[5] = 0x600000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101352740;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101352740:
  *puVar11 = &PTR_FUN_7105061b08;
  lVar13 = plVar10[1];
  lVar4 = plVar10[2];
  lVar12 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar12;
  puVar11[1] = lVar13;
  puVar11[2] = lVar4;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar13 = lib::Singleton<app::FighterManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352818;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352818:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710135287c;
    }
    plVar10 = (long *)0x0;
  }
LAB_710135287c:
  plVar10[4] = lVar13;
  plVar10[2] = (long)FUN_7100678e10;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_71050617a8;
  plVar8[4] = (long)"FighterManager::process_hit";
  plVar8[5] = 0x600000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101352900;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101352900:
  lVar13 = plVar10[1];
  lVar4 = plVar10[3];
  lVar12 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar4;
  puVar11[4] = lVar12;
  *puVar11 = &PTR_FUN_71050617a8;
  puVar11[1] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013529cc;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013529cc:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101352a30;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101352a30:
  plVar10[2] = (long)FUN_71003ad880;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_hit";
  plVar8[5] = 0x600000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101352ab0;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101352ab0:
  lVar13 = plVar10[1];
  lVar4 = plVar10[3];
  lVar12 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar4;
  puVar11[4] = lVar12;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar13 = lib::Singleton<app::FighterCutInManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352b84;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352b84:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101352be8;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101352be8:
  *plVar10 = (long)&PTR_FUN_7105061b50;
  plVar10[4] = lVar13;
  plVar10[2] = (long)FUN_71006ac200;
  plVar10[3] = 0;
  plVar8[4] = (long)"FighterCutInManager::process_pre_update";
  plVar8[5] = 0x700000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101352c78;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101352c78:
  *puVar11 = &PTR_FUN_7105061b50;
  lVar13 = plVar10[1];
  lVar4 = plVar10[2];
  lVar12 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar12;
  puVar11[1] = lVar13;
  puVar11[2] = lVar4;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar13 = DAT_71052c3620;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352d54;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352d54:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101352db8;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101352db8:
  plVar10[2] = (long)FUN_71014a86a0;
  plVar10[3] = 0;
  plVar10[4] = lVar13;
  *plVar10 = (long)&PTR_FUN_7105061d00;
  plVar8[4] = (long)"SuddenDeathProductionManager::process";
  plVar8[5] = 0x700000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101352e40;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101352e40:
  lVar13 = plVar10[1];
  lVar4 = plVar10[3];
  lVar12 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar4;
  puVar11[4] = lVar12;
  *puVar11 = &PTR_FUN_7105061d00;
  puVar11[1] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352f04;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352f04:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"CameraManager::update";
  *(undefined1 *)(plVar8 + 6) = 1;
  plVar8[5] = 0x700000008;
  plVar8[8] = (long)&PTR_FUN_7105061d48;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101352fe0;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101352fe0:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101353044;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101353044:
  plVar10[2] = (long)FUN_71003adad0;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_fix_camera";
  plVar8[5] = 0x700000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_71013530c4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71013530c4:
  lVar13 = plVar10[1];
  lVar4 = plVar10[3];
  lVar12 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar4;
  puVar11[4] = lVar12;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar13 = DAT_71052b8710;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353198;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353198:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013531fc;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013531fc:
  plVar10[2] = (long)FUN_710045a200;
  plVar10[3] = 0;
  plVar10[4] = lVar13;
  *plVar10 = (long)&PTR_FUN_7105061d90;
  plVar8[4] = (long)"EffectScreenManager::update";
  plVar8[5] = 0x700000005;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_710135328c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_710135328c:
  lVar13 = plVar10[1];
  lVar4 = plVar10[3];
  lVar12 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar4;
  puVar11[4] = lVar12;
  *puVar11 = &PTR_FUN_7105061d90;
  puVar11[1] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar13 = lib::Singleton<app::FighterCutInManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353368;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353368:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013533cc;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013533cc:
  *plVar10 = (long)&PTR_FUN_7105061b50;
  plVar10[4] = lVar13;
  plVar10[2] = (long)FUN_71006ac5f0;
  plVar10[3] = 0;
  plVar8[4] = (long)"FighterCutInManager::process_update";
  plVar8[5] = 0x700000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101353454;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101353454:
  *puVar11 = &PTR_FUN_7105061b50;
  lVar13 = plVar10[1];
  lVar4 = plVar10[2];
  lVar12 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar12;
  puVar11[1] = lVar13;
  puVar11[2] = lVar4;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar13 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353528;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353528:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_710135358c;
    }
    plVar10 = (long *)0x0;
  }
LAB_710135358c:
  plVar10[2] = (long)FUN_71003ade50;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061a78;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"BattleObjectManager::process_end";
  plVar8[5] = (long)&DAT_800000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101353610;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101353610:
  lVar14 = plVar10[1];
  lVar13 = plVar10[3];
  lVar4 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar13;
  puVar11[4] = lVar4;
  *puVar11 = &PTR_FUN_7105061a78;
  puVar11[1] = lVar14;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar14 = lib::Singleton<app::FighterManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013536e0;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013536e0:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101353744;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101353744:
  plVar10[4] = lVar14;
  plVar10[2] = (long)FUN_7100678f20;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_71050617a8;
  plVar8[4] = (long)"FighterManager::process_end";
  plVar8[5] = 0x800000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_71013537c8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71013537c8:
  lVar14 = plVar10[1];
  lVar13 = plVar10[3];
  lVar4 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar13;
  puVar11[4] = lVar4;
  *puVar11 = &PTR_FUN_71050617a8;
  puVar11[1] = lVar14;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar14 = lib::Singleton<app::StageManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013538a4;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013538a4:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101353908;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101353908:
  plVar10[4] = lVar14;
  plVar10[2] = (long)FUN_71026085a0;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_7105061880;
  plVar8[4] = (long)"StageManager::post_process";
  plVar8[5] = 0x800000003;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101353990;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101353990:
  lVar14 = plVar10[1];
  lVar13 = plVar10[3];
  lVar4 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar13;
  puVar11[4] = lVar4;
  *puVar11 = &PTR_FUN_7105061880;
  puVar11[1] = lVar14;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353a54;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353a54:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"OperatorObjectManager::apply_visitor";
  plVar8[5] = (long)&DAT_800000008;
  *(undefined1 *)(plVar8 + 6) = 1;
  plVar8[8] = (long)&PTR_FUN_7105061dd8;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar14 = lib::Singleton<app::FighterCutInManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353b3c;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353b3c:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101353ba0;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101353ba0:
  *plVar10 = (long)&PTR_FUN_7105061b50;
  plVar10[4] = lVar14;
  plVar10[2] = (long)FUN_71006ad7c0;
  plVar10[3] = 0;
  plVar8[4] = (long)"FighterCutInManager::process_end";
  plVar8[5] = (long)&DAT_800000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101353c2c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101353c2c:
  *puVar11 = &PTR_FUN_7105061b50;
  lVar14 = plVar10[1];
  lVar13 = plVar10[2];
  lVar4 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar4;
  puVar11[1] = lVar14;
  puVar11[2] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353d00;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353d00:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101353d64;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101353d64:
  *plVar10 = (long)&PTR_FUN_7105061ac0;
  plVar10[2] = (long)FUN_7100477280;
  plVar10[3] = 0;
  plVar10[4] = lVar7;
  plVar8[4] = (long)"JostleManager::process_effect";
  plVar8[5] = 0x900000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101353df8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101353df8:
  *puVar11 = &PTR_FUN_7105061ac0;
  lVar14 = plVar10[1];
  lVar13 = plVar10[2];
  lVar4 = plVar10[4];
  puVar11[3] = plVar10[3];
  puVar11[4] = lVar4;
  puVar11[1] = lVar14;
  puVar11[2] = lVar13;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353ec4;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353ec4:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"FighterAudienceManager::process_fix_camera";
  plVar8[5] = 0x900000000;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061e20;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101353f98;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101353f98:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"ItemManager::process_end";
  plVar8[5] = 0x900000004;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061e68;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar14 = DAT_71052c3420;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101354080;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101354080:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_71013540e4;
    }
    plVar10 = (long *)0x0;
  }
LAB_71013540e4:
  plVar10[2] = (long)FUN_710138a710;
  plVar10[3] = 0;
  plVar10[4] = lVar14;
  *plVar10 = (long)&PTR_FUN_7105061eb0;
  plVar8[4] = (long)"HudManager::update";
  plVar8[5] = 0x900000006;
  *(undefined1 *)(plVar8 + 6) = 1;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101354178;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101354178:
  lVar14 = plVar10[1];
  lVar13 = plVar10[3];
  lVar4 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar13;
  puVar11[4] = lVar4;
  *puVar11 = &PTR_FUN_7105061eb0;
  puVar11[1] = lVar14;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710135423c;
    }
    plVar8 = (long *)0x0;
  }
LAB_710135423c:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"EffectManager::process";
  plVar8[5] = 0x900000005;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061ef8;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101354314;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101354314:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"BattleRecordManager::update";
  plVar8[5] = 0x900000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061f40;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013543e4;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013543e4:
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_71050616e0;
  local_78 = (long ***)(plVar8 + 4);
  *local_78 = (long **)"ClearGetterCheckManager::update";
  plVar8[5] = 0x900000008;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[8] = (long)&PTR_FUN_7105061f88;
  plVar8[0xc] = (long)(plVar8 + 8);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar14 = DAT_71052c3938;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_71013544c4;
    }
    plVar8 = (long *)0x0;
  }
LAB_71013544c4:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101354528;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101354528:
  plVar10[2] = (long)FUN_710158db60;
  plVar10[3] = 0;
  plVar10[4] = lVar14;
  *plVar10 = (long)&PTR_FUN_7105061fd0;
  plVar8[4] = (long)"InGameCommonParameterManager::update";
  plVar8[5] = 0x900000008;
  *(undefined1 *)(plVar8 + 6) = 1;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_71013545b4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71013545b4:
  lVar14 = plVar10[1];
  lVar13 = plVar10[3];
  lVar4 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar13;
  puVar11[4] = lVar4;
  *puVar11 = &PTR_FUN_7105061fd0;
  puVar11[1] = lVar14;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 1;
    do {
      lVar14 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar14 = DAT_71052c3950;
  if (DAT_71052c3950 != 0) {
    plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000070;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_710135468c;
      }
      plVar8 = (long *)0x0;
    }
LAB_710135468c:
    *plVar8 = (long)&PTR_FUN_71050616e0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar10 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,
                                             param_8), plVar10 != (long *)0x0)) goto LAB_71013546f0;
      }
      plVar10 = (long *)0x0;
    }
LAB_71013546f0:
    plVar10[2] = (long)FUN_7101590a60;
    plVar10[3] = 0;
    plVar10[4] = lVar14;
    *plVar10 = (long)&PTR_FUN_7105062018;
    plVar8[4] = (long)"GameWatchModeEvaluatorManager::process";
    plVar8[5] = 0x900000008;
    *(undefined1 *)(plVar8 + 6) = 0;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar11 != (undefined8 *)0x0)) goto LAB_7101354778;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101354778:
    lVar14 = plVar10[1];
    lVar13 = plVar10[3];
    lVar4 = plVar10[4];
    puVar11[2] = plVar10[2];
    puVar11[3] = lVar13;
    puVar11[4] = lVar4;
    *puVar11 = &PTR_FUN_7105062018;
    puVar11[1] = lVar14;
    plVar8[0xc] = (long)puVar11;
    (**(code **)(*plVar10 + 0x28))(plVar10);
    local_78 = (long ***)(plVar8 + 4);
    local_70 = plVar8;
    FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_70 != (long *)0x0) {
      plVar8 = local_70 + 1;
      do {
        lVar14 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar14 = DAT_71052c3948;
  if (DAT_71052c3948 != 0) {
    plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000070;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_7101354850;
      }
      plVar8 = (long *)0x0;
    }
LAB_7101354850:
    *plVar8 = (long)&PTR_FUN_71050616e0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar10 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,
                                             param_8), plVar10 != (long *)0x0)) goto LAB_71013548b4;
      }
      plVar10 = (long *)0x0;
    }
LAB_71013548b4:
    plVar10[2] = (long)FUN_710158f250;
    plVar10[3] = 0;
    plVar10[4] = lVar14;
    *plVar10 = (long)&PTR_FUN_7105062060;
    plVar8[4] = (long)"GameRatingEvaluatorManager::process";
    plVar8[5] = 0x900000008;
    *(undefined1 *)(plVar8 + 6) = 0;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar11 != (undefined8 *)0x0)) goto LAB_710135493c;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_710135493c:
    lVar14 = plVar10[1];
    lVar13 = plVar10[3];
    lVar4 = plVar10[4];
    puVar11[2] = plVar10[2];
    puVar11[3] = lVar13;
    puVar11[4] = lVar4;
    *puVar11 = &PTR_FUN_7105062060;
    puVar11[1] = lVar14;
    plVar8[0xc] = (long)puVar11;
    (**(code **)(*plVar10 + 0x28))(plVar10);
    local_78 = (long ***)(plVar8 + 4);
    local_70 = plVar8;
    FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_70 != (long *)0x0) {
      plVar8 = local_70 + 1;
      do {
        lVar14 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar14 = DAT_71052c3940;
  if (DAT_71052c3940 != 0) {
    plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000070;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_7101354a14;
      }
      plVar8 = (long *)0x0;
    }
LAB_7101354a14:
    *plVar8 = (long)&PTR_FUN_71050616e0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar10 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,
                                             param_8), plVar10 != (long *)0x0)) goto LAB_7101354a78;
      }
      plVar10 = (long *)0x0;
    }
LAB_7101354a78:
    plVar10[2] = (long)FUN_710158db70;
    plVar10[3] = 0;
    plVar10[4] = lVar14;
    *plVar10 = (long)&PTR_FUN_71050620a8;
    plVar8[4] = (long)"GamePenaltyEvaluatorManager::process";
    plVar8[5] = 0x900000008;
    *(undefined1 *)(plVar8 + 6) = 0;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ***)&DAT_00000028;
        param_3 = &local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar9 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar11 != (undefined8 *)0x0)) goto LAB_7101354b00;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101354b00:
    lVar14 = plVar10[1];
    lVar13 = plVar10[3];
    lVar4 = plVar10[4];
    puVar11[2] = plVar10[2];
    puVar11[3] = lVar13;
    puVar11[4] = lVar4;
    *puVar11 = &PTR_FUN_71050620a8;
    puVar11[1] = lVar14;
    plVar8[0xc] = (long)puVar11;
    (**(code **)(*plVar10 + 0x28))(plVar10);
    local_78 = (long ***)(plVar8 + 4);
    local_70 = plVar8;
    FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_70 != (long *)0x0) {
      plVar8 = local_70 + 1;
      do {
        lVar14 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar14 = DAT_71052c35a8;
  if (DAT_71052c35a8 == 0) {
    return;
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101354bd8;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101354bd8:
  *plVar8 = (long)&PTR_FUN_71050616e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101354c3c;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101354c3c:
  plVar10[2] = (long)FUN_710143a320;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_71050620f0;
  plVar10[4] = lVar14;
  plVar8[4] = (long)"MovieRecordManager::update";
  plVar8[5] = 0x900000008;
  *(undefined1 *)(plVar8 + 6) = 1;
  puVar11 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000028;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101354cc8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101354cc8:
  lVar14 = plVar10[1];
  lVar13 = plVar10[3];
  lVar4 = plVar10[4];
  puVar11[2] = plVar10[2];
  puVar11[3] = lVar13;
  puVar11[4] = lVar4;
  *puVar11 = &PTR_FUN_71050620f0;
  puVar11[1] = lVar14;
  plVar8[0xc] = (long)puVar11;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  local_78 = (long ***)(plVar8 + 4);
  local_70 = plVar8;
  FUN_710137a600(*plVar1,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 1;
    do {
      lVar14 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

