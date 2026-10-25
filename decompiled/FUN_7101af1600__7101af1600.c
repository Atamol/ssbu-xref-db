// addr:      7101af1600
// offset:    0x1af1600
// name:      FUN_7101af1600
// mangled:   
// signature: undefined __cdecl FUN_7101af1600(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af1600(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long ***ppplVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  long ****pppplVar7;
  int *piVar8;
  long lVar9;
  long **pplVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long ***local_d0;
  long ***local_c8;
  long ***local_c0;
  undefined4 auStack_b8 [4];
  long local_a8;
  int local_a0;
  undefined4 local_78 [2];
  undefined **local_70;
  long local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  
  pppplVar7 = &local_d0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(uint *)(param_1 + 0xb4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 2;
      return;
    }
LAB_7101af1978:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0xd8) == 0) {
    if (*(uint *)(param_1 + 0xb4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 0;
      return;
    }
    goto LAB_7101af1978;
  }
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 1;
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x60))(*(long **)(param_1 + 0xd8),1);
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x70))(*(long **)(param_1 + 0xd8),1);
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_7103778760(*(long *)(param_1 + 0xd0),0x710429232d);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x710429232d);
  }
  pppplVar6 = (long ****)0x1;
  uVar11 = 1;
  FUN_7103771d60(&local_d0,*(long *)(param_1 + 0xd8),(long ****)0x1,param_4,param_5,param_6,param_7,
                 param_8);
  ppplVar5 = local_c8;
  if (*local_c8 != (long **)0x0) {
    uVar11 = (**(code **)((long)**local_c8 + 0x210))();
    uVar11 = uVar11 & 0xffffffff;
  }
  local_d0 = (long ***)&PTR_FUN_710523d9c8;
  local_c8 = (long ***)0x0;
  if (ppplVar5 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar5);
  }
  if ((uVar11 & 1) == 0) {
    FUN_7103778760(*(long *)(param_1 + 0xd0),0x71043f05b1);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x71043f05b1);
  }
  lVar4 = DAT_710532f8d0;
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    pppplVar6 = (long ****)&DAT_00000004;
    uVar11 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13f0a0538e,(long ****)&DAT_00000004,
                            param_4,param_5,param_6,param_7,param_8);
    if ((uVar11 & 1) == 0) goto LAB_7101af17bc;
    FUN_71024076d0(local_78,0x13f0a0538e);
    if (((local_68 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_60 == DAT_7106dd53ac)) {
      piVar8 = (int *)(local_68 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
LAB_7101af17bc:
    local_60 = 0x87650000000000;
    local_50 = 0xffffffffffffffff;
    uStack_48 = 0;
    local_78[0] = 0;
    local_40 = 0;
  }
  lVar9 = DAT_7105329f38;
  local_70 = &PTR_FUN_7104f73d50;
  local_68 = 0;
  local_58 = 0;
  lVar12 = *(long *)(lVar4 + 8);
  if ((*(int *)(lVar12 + 0x150) == 1) && (DAT_710532a860 != (long *)0x0)) {
    FUN_71024d1440(auStack_b8,*DAT_710532a860,0x170cec9401);
    if (local_a8 == 0) {
      return;
    }
    if (DAT_7106dd53a8 != '\x01') {
      return;
    }
    if (local_a0 != DAT_7106dd53ac) {
      return;
    }
    piVar8 = (int *)(local_a8 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
  std::recursive_mutex::lock();
  plVar1 = &DAT_7104465568;
  if (*(char *)(*(long *)(lVar9 + 0x28) + 0x58) != '\0') {
    plVar1 = (long *)(*(long *)(lVar9 + 0x28) + 0x68);
  }
  lVar13 = *plVar1;
  std::recursive_mutex::unlock();
  lVar9 = *(long *)(lVar12 + 0x18);
  if (lVar9 != lVar13 || lVar9 == 0) {
    FUN_7103314bc0(0xd9ffff149510a536,extraout_x1,pppplVar6,param_4,param_5,param_6,param_7,param_8)
    ;
    return;
  }
  pplVar10 = (long **)**(undefined8 **)(lVar4 + 8);
  local_d0 = (long ***)FUN_710392e290(0x10,0x10,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (local_d0 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_d0 = (long ***)&DAT_00000010;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      pppplVar6 = pppplVar7;
      if (((uVar11 & 1) != 0) &&
         (local_d0 = (long ***)
                     FUN_710392e290(0x10,0x10,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         pppplVar6 = pppplVar7, local_d0 != (long ***)0x0)) goto LAB_7101af1938;
    }
    local_d0 = (long ***)0x0;
  }
LAB_7101af1938:
  local_c8 = local_d0 + 2;
  *local_d0 = (long **)0xd9ffff149510a536;
  local_d0[1] = pplVar10;
  local_c0 = local_c8;
  FUN_7103314aa0(*(undefined8 **)(lVar4 + 8),(long *)&local_d0,pppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  if (local_d0 != (long ***)0x0) {
    local_c8 = local_d0;
    FUN_710392eb40((ulong)local_d0);
  }
  return;
}

