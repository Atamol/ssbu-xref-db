// addr:      71014b3850
// offset:    0x14b3850
// name:      FUN_71014b3850
// mangled:   
// signature: undefined __cdecl FUN_71014b3850(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71014b3850(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long lVar13;
  long ***local_50;
  long *local_48;
  undefined4 local_34;
  
  pppplVar10 = &local_50;
  pppplVar11 = &local_50;
  pppplVar12 = &local_50;
  FUN_710134f5c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar13 = DAT_71052c36c0;
  plVar1 = DAT_71052c33d8;
  plVar6 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_50 = (long ***)&DAT_00000070;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar10;
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,0x70,pppplVar10,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar10, plVar6 != (long *)0x0))
      goto LAB_71014b38d8;
    }
    plVar6 = (long *)0x0;
  }
LAB_71014b38d8:
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_71050616e0;
  plVar8 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_50 = (long ***)&DAT_00000028;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar11;
      if (((uVar7 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x28,pppplVar11,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar11, plVar8 != (long *)0x0))
      goto LAB_71014b3944;
    }
    plVar8 = (long *)0x0;
  }
LAB_71014b3944:
  plVar8[2] = (long)FUN_71014bb120;
  plVar8[3] = 0;
  plVar8[4] = lVar13;
  *plVar8 = (long)&DAT_710506abc0;
  plVar6[4] = (long)"HomeRunContestManager::process";
  plVar6[5] = 0x900000008;
  *(undefined1 *)(plVar6 + 6) = 0;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_50 = (long ***)&DAT_00000028;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar12;
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x28,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar12, puVar9 != (undefined8 *)0x0)) goto LAB_71014b39d4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014b39d4:
  lVar13 = plVar8[1];
  lVar2 = plVar8[3];
  lVar3 = plVar8[4];
  puVar9[2] = plVar8[2];
  puVar9[3] = lVar2;
  puVar9[4] = lVar3;
  *puVar9 = &DAT_710506abc0;
  puVar9[1] = lVar13;
  plVar6[0xc] = (long)puVar9;
  (**(code **)(*plVar8 + 0x28))(plVar8);
  local_50 = (long ***)(plVar6 + 4);
  local_48 = plVar6;
  FUN_710137a600(*plVar1,(long *)&local_50,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 1;
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
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

