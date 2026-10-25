// addr:      7101afe7c0
// offset:    0x1afe7c0
// name:      FUN_7101afe7c0
// mangled:   
// signature: undefined __cdecl FUN_7101afe7c0(long param_1, undefined4 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101afe7c0(long param_1,undefined4 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 local_110 [2];
  undefined **local_108;
  long local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
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
  
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  switch(param_2) {
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x168),0x71043f05c9);
    **(undefined8 **)(param_1 + 0x188) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x188) + 8) = 0;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x7104349e99);
    break;
  case 2:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = 4;
      uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xec296e495,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar4 & 1) == 0) goto LAB_7101afe9f8;
      FUN_71024076d0(local_80,0xec296e495);
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
        piVar7 = (int *)(local_70 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
LAB_7101afe9f8:
      local_68 = 0x87650000000000;
      local_58 = 0xffffffffffffffff;
      uStack_50 = 0;
      local_80[0] = 0;
      local_48 = 0;
    }
    local_78 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_60 = 0;
    FUN_71037780e0(&local_90,param_1 + 0x160,(long ****)"battlewait_cancel",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_88;
    if ((undefined ***)(param_1 + 0x180) != &local_90) {
      local_88 = 0;
      uVar5 = *(ulong *)(param_1 + 0x188);
      *(ulong *)(param_1 + 0x188) = uVar4;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
    }
    uVar4 = local_88;
    local_90 = &PTR_FUN_710523d9e8;
    local_88 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710377aee0(0x3f800000,param_1 + 0x180);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x7104339cd6);
    lVar6 = *(long *)**(undefined8 **)(param_1 + 0x130);
LAB_7101afec24:
    FUN_71037760f0(lVar6,0);
    puVar8 = *(uint **)(DAT_710593b988 + 8);
    uVar1 = *(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x130) + 0x600) + 0x494);
    goto LAB_7101afec54;
  case 3:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = 4;
      uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf3cd57fb2,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar4 & 1) == 0) goto LAB_7101afeab4;
      FUN_71024076d0(local_d0,0xf3cd57fb2);
      if (((local_c0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_b8 == DAT_7106dd53ac)) {
        piVar7 = (int *)(local_c0 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
LAB_7101afeab4:
      local_b8 = 0x87650000000000;
      local_a8 = 0xffffffffffffffff;
      uStack_a0 = 0;
      local_d0[0] = 0;
      local_98 = 0;
    }
    local_c8 = &PTR_FUN_7104f73d50;
    local_c0 = 0;
    local_b0 = 0;
    FUN_71037780e0(&local_90,param_1 + 0x160,(long ****)"battlewait_ready",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_88;
    if ((undefined ***)(param_1 + 0x180) != &local_90) {
      local_88 = 0;
      uVar5 = *(ulong *)(param_1 + 0x188);
      *(ulong *)(param_1 + 0x188) = uVar4;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
    }
    uVar4 = local_88;
    local_90 = &PTR_FUN_710523d9e8;
    local_88 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710377aee0(0x3f800000,param_1 + 0x180);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x7104339cd6);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x130),*(char *)(param_1 + 0x1f0) == '\0');
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) &
         (1 << (ulong)(*(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x130) + 0x600) +
                                0x494) & 0x1f) ^ 0xffffffffU);
    *(undefined4 *)(param_1 + 0x1ec) = 600;
    break;
  case 4:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = 4;
      uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf7586236d,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar4 & 1) == 0) goto LAB_7101afeb7c;
      FUN_71024076d0(local_110,0xf7586236d);
      if (((local_100 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_f8 == DAT_7106dd53ac)) {
        piVar7 = (int *)(local_100 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
LAB_7101afeb7c:
      local_f8 = 0x87650000000000;
      local_e8 = 0xffffffffffffffff;
      uStack_e0 = 0;
      local_110[0] = 0;
      local_d8 = 0;
    }
    local_108 = &PTR_FUN_7104f73d50;
    local_100 = 0;
    local_f0 = 0;
    FUN_71037780e0(&local_90,param_1 + 0x160,(long ****)"battlewait_pause",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_88;
    if ((undefined ***)(param_1 + 0x180) != &local_90) {
      local_88 = 0;
      uVar5 = *(ulong *)(param_1 + 0x188);
      *(ulong *)(param_1 + 0x188) = uVar4;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
    }
    uVar4 = local_88;
    local_90 = &PTR_FUN_710523d9e8;
    local_88 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710377aee0(0x3f800000,param_1 + 0x180);
    lVar6 = *(long *)**(undefined8 **)(param_1 + 0x130);
    if (*(char *)(param_1 + 0x1f0) != '\0') goto LAB_7101afec24;
    FUN_71037760f0(lVar6,1);
    puVar8 = *(uint **)(DAT_710593b988 + 8);
    uVar1 = *(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x130) + 0x600) + 0x494);
LAB_7101afec54:
    *puVar8 = *puVar8 & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
  }
  *(undefined4 *)(param_1 + 0x1e4) = param_2;
  return;
}

