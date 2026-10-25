// addr:      7101a9a070
// offset:    0x1a9a070
// name:      FUN_7101a9a070
// mangled:   
// signature: undefined __cdecl FUN_7101a9a070(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a9a070(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 local_150 [4];
  long local_140;
  int local_138;
  undefined4 local_110 [4];
  long local_100;
  int local_f8;
  undefined **local_d0;
  ulong local_c8;
  undefined4 local_c0 [4];
  long local_b0;
  int local_a8;
  undefined4 local_80 [4];
  long local_70;
  int local_68;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    *(undefined1 *)(param_1 + 0x170) = 0;
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x110),1);
  }
  lVar11 = *(long *)**(undefined8 **)(param_1 + 0x110);
  lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 8);
  if (*(char *)(lVar8 + 0x113) != '\0') {
    if (((*(char *)(param_1 + 0x169) == '\0') ||
        (plVar4 = *(long **)(lVar8 + 0xe8), plVar4 == (long *)0x0)) ||
       (uVar5 = (**(code **)(*plVar4 + 0xd8))(), (uVar5 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x16c) = 1;
      uVar7 = *(uint *)(param_1 + 0xf4);
      if (0x12 < uVar7) goto LAB_7101a9a7ec;
      uVar10 = 5;
    }
    else {
      if (*(char *)(param_1 + 0x128) != '\0') {
        iVar1 = 0;
        if (**(int **)(param_1 + 0x120) + 1 < *(int *)(param_1 + 0x3c8)) {
          iVar1 = **(int **)(param_1 + 0x120) + 1;
        }
        if (iVar1 == *(int *)(param_1 + 0x174)) {
          *(undefined4 *)(param_1 + 0x16c) = 1;
          if (*(uint *)(param_1 + 0xf4) < 0x13) {
            *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 5;
            return;
          }
          goto LAB_7101a9a7ec;
        }
      }
      *(undefined1 *)(param_1 + 0x16a) = 1;
      uVar7 = *(uint *)(param_1 + 0xf4);
      if (0x12 < uVar7) goto LAB_7101a9a7ec;
      uVar10 = 3;
    }
    *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0xa8) = uVar10;
  }
  if (*(char *)(param_1 + 0x178) == '\0') {
    return;
  }
  lVar8 = *(long *)(lVar11 + 0x600);
  cVar2 = *(char *)(lVar8 + 0x4aa);
  if (cVar2 == '\0') {
    return;
  }
  if ((*(byte *)(lVar8 + 0x1ac) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x16c) = 1;
    if (*(uint *)(param_1 + 0xf4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 5;
      lVar8 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 4) {
        uVar5 = 0;
        cVar2 = *(char *)(lVar8 + 0x191);
      }
      else {
        uVar5 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x18);
        cVar2 = *(char *)(lVar8 + 0x191);
      }
      if (cVar2 != '\0') {
        return;
      }
      uVar6 = FUN_7103313f20(lVar8,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar6 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_80,uVar5);
      if (local_70 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_68 != DAT_7106dd53ac) {
        return;
      }
      piVar9 = (int *)(local_70 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    goto LAB_7101a9a7ec;
  }
  if ((*(byte *)(lVar8 + 0x1a8) >> 1 & 1) != 0) {
    if (*(char *)(param_1 + 0x168) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x160),0x71043ad264);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x110) + 0x10),0x710435b0ba);
      *(undefined1 *)(param_1 + 0x168) = 1;
      lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 8);
      if (((*(long **)(lVar8 + 0xe8) != (long *)0x0) && (*(int *)(lVar8 + 0xd8) == 3)) &&
         ((*(char *)(lVar8 + 0x110) == '\0' && (*(char *)(lVar8 + 0x112) != '\0')))) {
        (**(code **)(**(long **)(lVar8 + 0xe8) + 0x10))();
        *(undefined1 *)(lVar8 + 0x112) = 0;
      }
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x160),0x710436bda9);
      *(undefined1 *)(param_1 + 0x168) = 0;
      lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 8);
      if (((*(long **)(lVar8 + 0xe8) != (long *)0x0) && (*(int *)(lVar8 + 0xd8) == 3)) &&
         (*(char *)(lVar8 + 0x110) == '\0')) {
        if (*(char *)(lVar8 + 0x112) == '\0') {
          (**(code **)(**(long **)(lVar8 + 0xe8) + 0x18))();
          *(undefined1 *)(lVar8 + 0x112) = 1;
        }
        *(undefined1 *)(lVar8 + 0x113) = 0;
      }
    }
    lVar8 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 3) {
      uVar5 = 0;
      cVar2 = *(char *)(lVar8 + 0x191);
    }
    else {
      uVar5 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x10);
      cVar2 = *(char *)(lVar8 + 0x191);
    }
    if (cVar2 != '\0') {
      return;
    }
    uVar6 = FUN_7103313f20(lVar8,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar6 & 1) == 0) {
      return;
    }
    FUN_71024076d0(local_c0,uVar5);
    if (local_b0 == 0) {
      return;
    }
    if (DAT_7106dd53a8 != '\x01') {
      return;
    }
    if (local_a8 != DAT_7106dd53ac) {
      return;
    }
    piVar9 = (int *)(local_b0 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
  if ((*(byte *)(lVar8 + 0x1b0) >> 1 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0x1b8) >> 1 & 1) != 0) {
      plVar4 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
      if ((plVar4 == (long *)0x0) || (uVar5 = (**(code **)(*plVar4 + 0x48))(), (uVar5 & 1) == 0))
      goto LAB_7101a9a5b0;
      lVar8 = *(long *)(lVar11 + 0x600);
      cVar2 = *(char *)(lVar8 + 0x4aa);
      if (cVar2 == '\0') {
        return;
      }
    }
    if (((*(byte *)(lVar8 + 0x1b4) >> 1 & 1) != 0) ||
       (((cVar2 != '\0' && ((*(byte *)(lVar8 + 0x1bc) >> 1 & 1) != 0)) &&
        ((plVar4 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18), plVar4 == (long *)0x0 ||
         (uVar5 = (**(code **)(*plVar4 + 0x48))(), (uVar5 & 1) == 0)))))) {
      *(undefined1 *)(param_1 + 0x16a) = 0;
      FUN_71037780e0(&local_d0,param_1 + 0x158,(long ****)"type_pause_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377b140((long)&local_d0);
      uVar5 = local_c8;
      local_d0 = &PTR_FUN_710523d9e8;
      local_c8 = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_71037780e0(&local_d0,param_1 + 0x158,(long ****)"type_play_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377b140((long)&local_d0);
      uVar5 = local_c8;
      local_d0 = &PTR_FUN_710523d9e8;
      local_c8 = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      if (*(char *)(param_1 + 0x128) != '\0') {
        *(undefined1 *)(param_1 + 0x169) = 0;
      }
      if (0x12 < *(uint *)(param_1 + 0xf4)) goto LAB_7101a9a7ec;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 3;
      lVar8 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 9) {
        uVar5 = 0;
        cVar2 = *(char *)(lVar8 + 0x191);
      }
      else {
        uVar5 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x40);
        cVar2 = *(char *)(lVar8 + 0x191);
      }
      if ((((cVar2 == '\0') &&
           (uVar6 = FUN_7103313f20(lVar8,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                   param_7,param_8), (uVar6 & 1) != 0)) &&
          (FUN_71024076d0(local_150,uVar5), local_140 != 0)) &&
         ((DAT_7106dd53a8 == '\x01' && (local_138 == DAT_7106dd53ac)))) {
        piVar9 = (int *)(local_140 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  else {
LAB_7101a9a5b0:
    *(undefined1 *)(param_1 + 0x16a) = 1;
    FUN_71037780e0(&local_d0,param_1 + 0x158,(long ****)"type_pause_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377b140((long)&local_d0);
    uVar5 = local_c8;
    local_d0 = &PTR_FUN_710523d9e8;
    local_c8 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_71037780e0(&local_d0,param_1 + 0x158,(long ****)"type_play_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377b140((long)&local_d0);
    uVar5 = local_c8;
    local_d0 = &PTR_FUN_710523d9e8;
    local_c8 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    if (*(char *)(param_1 + 0x128) != '\0') {
      *(undefined1 *)(param_1 + 0x169) = 0;
    }
    if (0x12 < *(uint *)(param_1 + 0xf4)) {
LAB_7101a9a7ec:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 3;
    lVar8 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 9) {
      uVar5 = 0;
      cVar2 = *(char *)(lVar8 + 0x191);
    }
    else {
      uVar5 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x40);
      cVar2 = *(char *)(lVar8 + 0x191);
    }
    if (((cVar2 == '\0') &&
        (uVar6 = FUN_7103313f20(lVar8,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                                ,param_8), (uVar6 & 1) != 0)) &&
       ((FUN_71024076d0(local_110,uVar5), local_100 != 0 &&
        ((DAT_7106dd53a8 == '\x01' && (local_f8 == DAT_7106dd53ac)))))) {
      piVar9 = (int *)(local_100 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}

